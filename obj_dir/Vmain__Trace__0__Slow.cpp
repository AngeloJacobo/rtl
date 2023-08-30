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
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declArray(c+4240,"i_ddr3_controller_iserdes_data", false,-1, 255,0);
    tracep->declBus(c+4248,"i_ddr3_controller_iserdes_dqs", false,-1, 31,0);
    tracep->declBus(c+4249,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 31,0);
    tracep->declBit(c+4250,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4251,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4254,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4255,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4256,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4257,"o_ddr3_controller_data", false,-1, 255,0);
    tracep->declBus(c+4265,"o_ddr3_controller_dm", false,-1, 31,0);
    tracep->declBus(c+4266,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4267,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4268,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4269,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4270,"o_ddr3_controller_odelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4271,"o_ddr3_controller_odelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4272,"o_ddr3_controller_idelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4273,"o_ddr3_controller_idelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4274,"o_ddr3_controller_bitslip", false,-1, 3,0);
    tracep->declBus(c+4275,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4276,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4277,"i_fan_sda", false,-1);
    tracep->declBit(c+4278,"i_fan_scl", false,-1);
    tracep->declBit(c+4279,"o_fan_sda", false,-1);
    tracep->declBit(c+4280,"o_fan_scl", false,-1);
    tracep->declBit(c+4281,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4282,"o_sys_pwm", false,-1);
    tracep->declBit(c+4283,"i_fan_tach", false,-1);
    tracep->declBit(c+4284,"i_i2c_sda", false,-1);
    tracep->declBit(c+4285,"i_i2c_scl", false,-1);
    tracep->declBit(c+4286,"o_i2c_sda", false,-1);
    tracep->declBit(c+4287,"o_i2c_scl", false,-1);
    tracep->declBit(c+4288,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4289,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4290,"cpu_sim_we", false,-1);
    tracep->declBus(c+4291,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4292,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4293,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4294,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4295,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4296,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4297,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4298,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4299,"i_cpu_reset", false,-1);
    tracep->declBit(c+4300,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4301,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4302,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4303,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4304,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4305,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4306,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4307,"o_led", false,-1, 7,0);
    tracep->declBit(c+4308,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4346,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4348,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4350,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4351,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4352,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4353,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4354,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4355,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4354,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4356,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4357,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4358,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4359,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4360,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4361,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4362,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4359,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4363,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4352,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declArray(c+4240,"i_ddr3_controller_iserdes_data", false,-1, 255,0);
    tracep->declBus(c+4248,"i_ddr3_controller_iserdes_dqs", false,-1, 31,0);
    tracep->declBus(c+4249,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 31,0);
    tracep->declBit(c+4250,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4251,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4254,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4255,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4256,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4257,"o_ddr3_controller_data", false,-1, 255,0);
    tracep->declBus(c+4265,"o_ddr3_controller_dm", false,-1, 31,0);
    tracep->declBus(c+4266,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4267,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4268,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4269,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4270,"o_ddr3_controller_odelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4271,"o_ddr3_controller_odelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4272,"o_ddr3_controller_idelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4273,"o_ddr3_controller_idelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4274,"o_ddr3_controller_bitslip", false,-1, 3,0);
    tracep->declBus(c+4275,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4276,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4277,"i_fan_sda", false,-1);
    tracep->declBit(c+4278,"i_fan_scl", false,-1);
    tracep->declBit(c+4279,"o_fan_sda", false,-1);
    tracep->declBit(c+4280,"o_fan_scl", false,-1);
    tracep->declBit(c+4281,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4282,"o_sys_pwm", false,-1);
    tracep->declBit(c+4283,"i_fan_tach", false,-1);
    tracep->declBit(c+4284,"i_i2c_sda", false,-1);
    tracep->declBit(c+4285,"i_i2c_scl", false,-1);
    tracep->declBit(c+4286,"o_i2c_sda", false,-1);
    tracep->declBit(c+4287,"o_i2c_scl", false,-1);
    tracep->declBit(c+4288,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4289,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4290,"cpu_sim_we", false,-1);
    tracep->declBus(c+4291,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4292,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4293,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4294,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4295,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4296,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4297,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4298,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4299,"i_cpu_reset", false,-1);
    tracep->declBit(c+4300,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4301,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4302,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4359,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4353,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4303,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4304,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4305,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4306,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4307,"o_led", false,-1, 7,0);
    tracep->declBit(c+140,"scope1_ddr3_int", false,-1);
    tracep->declBit(c+141,"scope2_ddr3_int", false,-1);
    tracep->declBit(c+142,"uartrxf_int", false,-1);
    tracep->declBit(c+143,"uarttx_int", false,-1);
    tracep->declBit(c+144,"uarttxf_int", false,-1);
    tracep->declBit(c+145,"uartrx_int", false,-1);
    tracep->declBit(c+146,"i2cscope_int", false,-1);
    tracep->declBit(c+147,"scope3_ddr3_int", false,-1);
    tracep->declBit(c+148,"gpio_int", false,-1);
    tracep->declBit(c+149,"spio_int", false,-1);
    tracep->declBus(c+4150,"ddr3_controller_aux_out", false,-1, 0,0);
    tracep->declBus(c+4309,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+4310,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4311,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+150,"r_sirefclk_en", false,-1);
    tracep->declBus(c+151,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+152,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+153,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+154,"i2cdma_ready", false,-1);
    tracep->declBus(c+4312,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4364,"I2C_ID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+155,"i2c_valid", false,-1);
    tracep->declBit(c+156,"i2c_ready", false,-1);
    tracep->declBit(c+157,"i2c_last", false,-1);
    tracep->declBus(c+158,"i2c_data", false,-1, 7,0);
    tracep->declBus(c+159,"i2c_id", false,-1, 1,0);
    tracep->declBus(c+38,"i2c_debug", false,-1, 31,0);
    tracep->declBit(c+160,"w_console_rx_stb", false,-1);
    tracep->declBit(c+161,"w_console_tx_stb", false,-1);
    tracep->declBit(c+162,"w_console_busy", false,-1);
    tracep->declBus(c+163,"w_console_rx_data", false,-1, 6,0);
    tracep->declBus(c+164,"w_console_tx_data", false,-1, 6,0);
    tracep->declBus(c+165,"uart_debug", false,-1, 31,0);
    tracep->declBit(c+166,"raw_cpu_dbg_stall", false,-1);
    tracep->declBit(c+167,"raw_cpu_dbg_ack", false,-1);
    tracep->declBus(c+4365,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4366,"zip_trigger", false,-1);
    tracep->declBus(c+168,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+169,"zip_cpu_int", false,-1);
    tracep->declBit(c+4308,"i_clk200", false,-1);
    tracep->declBus(c+170,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+171,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+172,"wbu_rx_stb", false,-1);
    tracep->declBit(c+173,"wbu_tx_stb", false,-1);
    tracep->declBit(c+174,"wbu_tx_busy", false,-1);
    tracep->declBus(c+175,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4365,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+176,"w_led", false,-1, 7,0);
    tracep->declBus(c+177,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+178,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+179,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+180,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4367,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+181,"wbwide_i2cdma_addr", false,-1, 21,0);
    tracep->declArray(c+182,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+198,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+200,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+201,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+202,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+203,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+219,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+220,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4366,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+221,"wbwide_i2cm_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4384,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+222,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+223,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+224,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+225,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+241,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+242,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+243,"wbwide_zip_we", false,-1);
    tracep->declBus(c+244,"wbwide_zip_addr", false,-1, 21,0);
    tracep->declArray(c+245,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+261,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+263,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+264,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+265,"wbwide_zip_err", false,-1);
    tracep->declArray(c+266,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+282,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+283,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+284,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+285,"wbwide_wbu_arbiter_addr", false,-1, 21,0);
    tracep->declArray(c+286,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+302,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+304,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+305,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+306,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+307,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+3914,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+3915,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+323,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+324,"wbwide_bkram_addr", false,-1, 21,0);
    tracep->declArray(c+325,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+341,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4366,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+343,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4366,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+344,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+3916,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+3917,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+360,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+361,"wbwide_wbdown_addr", false,-1, 21,0);
    tracep->declArray(c+362,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+378,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+380,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+381,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+3918,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+382,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+3919,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+398,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+399,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+400,"wb32_wbdown_addr", false,-1, 24,0);
    tracep->declBus(c+401,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+402,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+403,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+404,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+3920,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+405,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+3922,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+3923,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4386,"wb32_buildtime_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+3922,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4387,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4388,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+3926,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+3923,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4389,"wb32_gpio_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+3926,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4390,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4313,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+3927,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+3923,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4391,"wb32_sirefclk_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+153,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4392,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+406,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+3928,"wb32_spio_stb", false,-1);
    tracep->declBit(c+3923,"wb32_spio_we", false,-1);
    tracep->declBus(c+4393,"wb32_spio_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_spio_stall", false,-1);
    tracep->declBit(c+407,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4394,"wb32_spio_err", false,-1);
    tracep->declBus(c+408,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_version_cyc", false,-1);
    tracep->declBit(c+3929,"wb32_version_stb", false,-1);
    tracep->declBit(c+3923,"wb32_version_we", false,-1);
    tracep->declBus(c+4395,"wb32_version_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_version_stall", false,-1);
    tracep->declBit(c+3929,"wb32_version_ack", false,-1);
    tracep->declBit(c+4396,"wb32_version_err", false,-1);
    tracep->declBus(c+4397,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+3930,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+3931,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+3932,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+3933,"wb32_i2cscope_addr", false,-1, 24,0);
    tracep->declBus(c+3934,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+3935,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+409,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4366,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+410,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+3936,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+3937,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+3938,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+3939,"wb32_scope1_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3940,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3941,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+411,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4366,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+412,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3942,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+3943,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+3944,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+3945,"wb32_scope2_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3946,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3947,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+413,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4366,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+414,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3948,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+3949,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+3950,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+3951,"wb32_scope3_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+3952,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3953,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+415,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4366,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+416,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3954,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+3955,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+3956,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+3957,"wb32_i2cs_addr", false,-1, 24,0);
    tracep->declBus(c+3958,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+3959,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+417,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4366,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+418,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+3960,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+3961,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+3962,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+3963,"wb32_i2cdma_addr", false,-1, 24,0);
    tracep->declBus(c+3964,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+3965,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+419,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4366,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+420,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+3966,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+3967,"wb32_uart_stb", false,-1);
    tracep->declBit(c+3968,"wb32_uart_we", false,-1);
    tracep->declBus(c+3969,"wb32_uart_addr", false,-1, 24,0);
    tracep->declBus(c+3970,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+3971,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_uart_stall", false,-1);
    tracep->declBit(c+421,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4366,"wb32_uart_err", false,-1);
    tracep->declBus(c+422,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+3972,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+3973,"wb32_fan_stb", false,-1);
    tracep->declBit(c+3974,"wb32_fan_we", false,-1);
    tracep->declBus(c+3975,"wb32_fan_addr", false,-1, 24,0);
    tracep->declBus(c+3976,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+3977,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_fan_stall", false,-1);
    tracep->declBit(c+423,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4366,"wb32_fan_err", false,-1);
    tracep->declBus(c+424,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+3921,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+3978,"wb32_sio_stb", false,-1);
    tracep->declBit(c+3923,"wb32_sio_we", false,-1);
    tracep->declBus(c+3979,"wb32_sio_addr", false,-1, 24,0);
    tracep->declBus(c+3924,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+3925,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_sio_stall", false,-1);
    tracep->declBit(c+425,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4366,"wb32_sio_err", false,-1);
    tracep->declBus(c+426,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+3980,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+3981,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+3982,"wb32_cfg_we", false,-1);
    tracep->declBus(c+3983,"wb32_cfg_addr", false,-1, 24,0);
    tracep->declBus(c+3984,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+3985,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+427,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4366,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4365,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+3986,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+3987,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+3988,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+3989,"wb32_ddr3_phy_addr", false,-1, 24,0);
    tracep->declBus(c+3990,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+3991,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+3661,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+3662,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4366,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+3663,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+3992,"wb32_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+3993,"wb32_ddr3_controller_stb", false,-1);
    tracep->declBit(c+3994,"wb32_ddr3_controller_we", false,-1);
    tracep->declBus(c+3995,"wb32_ddr3_controller_addr", false,-1, 24,0);
    tracep->declBus(c+3996,"wb32_ddr3_controller_data", false,-1, 31,0);
    tracep->declBus(c+3997,"wb32_ddr3_controller_sel", false,-1, 3,0);
    tracep->declBit(c+3664,"wb32_ddr3_controller_stall", false,-1);
    tracep->declBit(c+4314,"wb32_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4366,"wb32_ddr3_controller_err", false,-1);
    tracep->declBus(c+4151,"wb32_ddr3_controller_idata", false,-1, 31,0);
    tracep->declBit(c+428,"wbu_cyc", false,-1);
    tracep->declBit(c+429,"wbu_stb", false,-1);
    tracep->declBit(c+430,"wbu_we", false,-1);
    tracep->declBus(c+431,"wbu_addr", false,-1, 26,0);
    tracep->declBus(c+432,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4398,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+433,"wbu_stall", false,-1);
    tracep->declBit(c+434,"wbu_ack", false,-1);
    tracep->declBit(c+435,"wbu_err", false,-1);
    tracep->declBus(c+436,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+437,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+438,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+439,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+440,"wbu_wbu_arbiter_addr", false,-1, 26,0);
    tracep->declBus(c+441,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+442,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+443,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+444,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+445,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+446,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+447,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+448,"wbu_zip_stb", false,-1);
    tracep->declBit(c+449,"wbu_zip_we", false,-1);
    tracep->declBus(c+450,"wbu_zip_addr", false,-1, 26,0);
    tracep->declBus(c+451,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+452,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4315,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4316,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4366,"wbu_zip_err", false,-1);
    tracep->declBus(c+453,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+425,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+426,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4366,"zip_unused", false,-1);
    tracep->declBit(c+169,"w_bus_int", false,-1);
    tracep->declBus(c+454,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+427,"r_cfg_ack", false,-1);
    tracep->declBit(c+4366,"cfg_unused", false,-1);
    tracep->declBus(c+4399,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4400,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4355,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4402,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4403,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4350,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3914,"i_wb_cyc", false,-1);
    tracep->declBit(c+3915,"i_wb_stb", false,-1);
    tracep->declBit(c+323,"i_wb_we", false,-1);
    tracep->declBus(c+455,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+325,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+341,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+343,"o_wb_ack", false,-1);
    tracep->declArray(c+344,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+456,"w_wstb", false,-1);
    tracep->declBit(c+457,"w_stb", false,-1);
    tracep->declArray(c+458,"w_data", false,-1, 511,0);
    tracep->declBus(c+474,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+475,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+456,"last_wstb", false,-1);
    tracep->declBit(c+457,"last_stb", false,-1);
    tracep->declBus(c+474,"last_addr", false,-1, 13,0);
    tracep->declArray(c+458,"last_data", false,-1, 511,0);
    tracep->declQuad(c+475,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+477,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4353,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBus(c+478,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4275,"o_word", false,-1, 7,0);
    tracep->declBit(c+152,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+479+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+487,"r_delay", false,-1, 31,0);
    tracep->declBus(c+488,"times_three", false,-1, 31,0);
    tracep->declBus(c+489,"times_five", false,-1, 31,0);
    tracep->declBus(c+490,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4405,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+3966,"i_wb_cyc", false,-1);
    tracep->declBit(c+3967,"i_wb_stb", false,-1);
    tracep->declBit(c+3968,"i_wb_we", false,-1);
    tracep->declBus(c+3998,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3970,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3971,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+421,"o_wb_ack", false,-1);
    tracep->declBus(c+422,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+161,"o_uart_stb", false,-1);
    tracep->declBus(c+164,"o_uart_data", false,-1, 6,0);
    tracep->declBit(c+162,"i_uart_busy", false,-1);
    tracep->declBit(c+160,"i_uart_stb", false,-1);
    tracep->declBus(c+163,"i_uart_data", false,-1, 6,0);
    tracep->declBit(c+145,"o_uart_rx_int", false,-1);
    tracep->declBit(c+143,"o_uart_tx_int", false,-1);
    tracep->declBit(c+142,"o_uart_rxfifo_int", false,-1);
    tracep->declBit(c+144,"o_uart_txfifo_int", false,-1);
    tracep->declBus(c+165,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4405,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4406,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4407,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4408,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4409,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+491,"rx_uart_reset", false,-1);
    tracep->declBit(c+145,"rx_empty_n", false,-1);
    tracep->declBit(c+492,"rx_fifo_err", false,-1);
    tracep->declBus(c+493,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+494,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+495,"rxf_wb_read", false,-1);
    tracep->declBus(c+496,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+161,"tx_empty_n", false,-1);
    tracep->declBit(c+497,"txf_err", false,-1);
    tracep->declBus(c+498,"txf_status", false,-1, 15,0);
    tracep->declBit(c+499,"txf_wb_write", false,-1);
    tracep->declBit(c+500,"tx_uart_reset", false,-1);
    tracep->declBus(c+501,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+502,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+503,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+504,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+505,"r_wb_ack", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4362,"BW", false,-1, 31,0);
    tracep->declBus(c+4405,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4360,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4410,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+491,"i_reset", false,-1);
    tracep->declBit(c+160,"i_wr", false,-1);
    tracep->declBus(c+163,"i_data", false,-1, 6,0);
    tracep->declBit(c+145,"o_empty_n", false,-1);
    tracep->declBit(c+495,"i_rd", false,-1);
    tracep->declBus(c+493,"o_data", false,-1, 6,0);
    tracep->declBus(c+494,"o_status", false,-1, 15,0);
    tracep->declBit(c+492,"o_err", false,-1);
    tracep->declBus(c+506,"r_data", false,-1, 6,0);
    tracep->declBus(c+507,"last_write", false,-1, 6,0);
    tracep->declBus(c+508,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+509,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+510,"r_next", false,-1, 5,0);
    tracep->declBit(c+511,"will_overflow", false,-1);
    tracep->declBit(c+512,"will_underflow", false,-1);
    tracep->declBit(c+513,"osrc", false,-1);
    tracep->declBus(c+514,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+515,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+516,"w_write", false,-1);
    tracep->declBit(c+517,"w_read", false,-1);
    tracep->declBus(c+518,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4405,"lglen", false,-1, 3,0);
    tracep->declBit(c+142,"w_half_full", false,-1);
    tracep->declBus(c+519,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4362,"BW", false,-1, 31,0);
    tracep->declBus(c+4405,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4403,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4410,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+500,"i_reset", false,-1);
    tracep->declBit(c+499,"i_wr", false,-1);
    tracep->declBus(c+501,"i_data", false,-1, 6,0);
    tracep->declBit(c+161,"o_empty_n", false,-1);
    tracep->declBit(c+520,"i_rd", false,-1);
    tracep->declBus(c+164,"o_data", false,-1, 6,0);
    tracep->declBus(c+498,"o_status", false,-1, 15,0);
    tracep->declBit(c+497,"o_err", false,-1);
    tracep->declBus(c+521,"r_data", false,-1, 6,0);
    tracep->declBus(c+522,"last_write", false,-1, 6,0);
    tracep->declBus(c+523,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+524,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+525,"r_next", false,-1, 5,0);
    tracep->declBit(c+526,"will_overflow", false,-1);
    tracep->declBit(c+527,"will_underflow", false,-1);
    tracep->declBit(c+528,"osrc", false,-1);
    tracep->declBus(c+529,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+530,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+531,"w_write", false,-1);
    tracep->declBit(c+532,"w_read", false,-1);
    tracep->declBus(c+533,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4405,"lglen", false,-1, 3,0);
    tracep->declBit(c+144,"w_half_full", false,-1);
    tracep->declBus(c+534,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4346,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4348,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4350,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4351,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4352,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4353,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4354,"LANES", false,-1, 31,0);
    tracep->declBus(c+4355,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4362,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4404,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4403,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4360,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4354,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4411,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4356,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4404,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4354,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4356,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4364,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4238,"i_controller_clk", false,-1);
    tracep->declBit(c+35,"i_rst_n", false,-1);
    tracep->declBit(c+3992,"i_wb_cyc", false,-1);
    tracep->declBit(c+3993,"i_wb_stb", false,-1);
    tracep->declBit(c+3994,"i_wb_we", false,-1);
    tracep->declBus(c+3999,"i_wb_addr", false,-1, 23,0);
    tracep->declArray(c+4000,"i_wb_data", false,-1, 255,0);
    tracep->declBus(c+4008,"i_wb_sel", false,-1, 31,0);
    tracep->declBus(c+4366,"i_aux", false,-1, 0,0);
    tracep->declBit(c+3664,"o_wb_stall", false,-1);
    tracep->declBit(c+4314,"o_wb_ack", false,-1);
    tracep->declArray(c+4152,"o_wb_data", false,-1, 255,0);
    tracep->declBus(c+4150,"o_aux", false,-1, 0,0);
    tracep->declBit(c+3986,"i_wb2_cyc", false,-1);
    tracep->declBit(c+3987,"i_wb2_stb", false,-1);
    tracep->declBit(c+3988,"i_wb2_we", false,-1);
    tracep->declBus(c+4009,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3991,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3990,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+3661,"o_wb2_stall", false,-1);
    tracep->declBit(c+3662,"o_wb2_ack", false,-1);
    tracep->declBus(c+3663,"o_wb2_data", false,-1, 31,0);
    tracep->declArray(c+4240,"i_phy_iserdes_data", false,-1, 255,0);
    tracep->declBus(c+4248,"i_phy_iserdes_dqs", false,-1, 31,0);
    tracep->declBus(c+4249,"i_phy_iserdes_bitslip_reference", false,-1, 31,0);
    tracep->declBit(c+4250,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4251,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4254,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4255,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4256,"o_phy_toggle_dqs", false,-1);
    tracep->declArray(c+4257,"o_phy_data", false,-1, 255,0);
    tracep->declBus(c+4265,"o_phy_dm", false,-1, 31,0);
    tracep->declBus(c+4266,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4267,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4268,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4269,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4270,"o_phy_odelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4271,"o_phy_odelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4272,"o_phy_idelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+4273,"o_phy_idelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+4274,"o_phy_bitslip", false,-1, 3,0);
    tracep->declBus(c+4309,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4310,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4311,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4412,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4413,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4414,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4415,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4416,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4417,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4418,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4405,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4419,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4419,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4420,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4421,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4356,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4422,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4358,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4363,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4423,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4422,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4358,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4424,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4400,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4363,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4423,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4425,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4359,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4426,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4408,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4409,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4406,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4407,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4365,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4353,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4365,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4353,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4363,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4427,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4428,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4429,"tRCD", false,-1);
    tracep->declDouble(c+4429,"tRP", false,-1);
    tracep->declBus(c+4431,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4432,"tRFC", false,-1);
    tracep->declBus(c+4434,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4435,"tXPR", false,-1);
    tracep->declDouble(c+4437,"tWR", false,-1);
    tracep->declDouble(c+4346,"tWTR", false,-1);
    tracep->declBus(c+4439,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4440,"tWLO", false,-1);
    tracep->declBus(c+4364,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4346,"tRTP", false,-1);
    tracep->declBus(c+4354,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4352,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4442,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4443,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4444,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4445,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4423,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4364,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4413,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4415,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4412,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4412,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4413,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4412,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4413,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4412,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4415,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4416,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4444,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4417,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4364,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4365,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4444,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4359,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4426,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4365,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4355,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4364,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4352,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4354,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4444,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4443,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4362,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4353,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4446,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4351,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4447,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4448,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4426,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4350,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4444,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4352,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4449,"PASR", false,-1, 2,0);
    tracep->declBus(c+4449,"CWL", false,-1, 2,0);
    tracep->declBus(c+4360,"ASR", false,-1, 0,0);
    tracep->declBus(c+4403,"SRT", false,-1, 0,0);
    tracep->declBus(c+4406,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4450,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4451,"MR2", false,-1, 18,0);
    tracep->declBus(c+4406,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4360,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4403,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4452,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4453,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4454,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4403,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4406,"DIC", false,-1, 1,0);
    tracep->declBus(c+4452,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4360,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4403,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4406,"AL", false,-1, 1,0);
    tracep->declBus(c+4403,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4403,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4455,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4456,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4457,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4406,"BL", false,-1, 1,0);
    tracep->declBus(c+4416,"CL", false,-1, 3,0);
    tracep->declBus(c+4403,"RBT", false,-1, 0,0);
    tracep->declBus(c+4360,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4452,"WR", false,-1, 2,0);
    tracep->declBus(c+4403,"PPD", false,-1, 0,0);
    tracep->declBus(c+4449,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4458,"MR0", false,-1, 18,0);
    tracep->declBus(c+4459,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+3665,"index", false,-1, 31,0);
    tracep->declBus(c+3666,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+3667,"instruction", false,-1, 27,0);
    tracep->declBus(c+3668,"delay_counter", false,-1, 17,0);
    tracep->declBit(c+3669,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+3670,"reset_done", false,-1);
    tracep->declBit(c+3671,"pause_counter", false,-1);
    tracep->declBit(c+3672,"issue_read_command", false,-1);
    tracep->declBit(c+4366,"issue_write_command", false,-1);
    tracep->declBit(c+3673,"stage2_update", false,-1);
    tracep->declBit(c+4177,"stage2_stall", false,-1);
    tracep->declBit(c+4178,"stage1_stall", false,-1);
    tracep->declBus(c+3674,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+4179,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3675+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4180+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+3683,"stage1_pending", false,-1);
    tracep->declBus(c+3684,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+3685,"stage1_we", false,-1);
    tracep->declArray(c+3686,"stage1_data", false,-1, 255,0);
    tracep->declBus(c+3694,"stage1_dm", false,-1, 31,0);
    tracep->declBus(c+3695,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+3696,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+3697,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+3698,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+3699,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+4010,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+3700,"stage2_pending", false,-1);
    tracep->declBus(c+3701,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+3702,"stage2_we", false,-1);
    tracep->declBus(c+3703,"stage2_dm_unaligned", false,-1, 31,0);
    tracep->declBus(c+3704,"stage2_dm_unaligned_temp", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3705+i*1,"stage2_dm", true,(i+0), 31,0);
    }
    tracep->declArray(c+3707,"stage2_data_unaligned", false,-1, 255,0);
    tracep->declArray(c+3715,"stage2_data_unaligned_temp", false,-1, 255,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3723+i*8,"stage2_data", true,(i+0), 255,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3739+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3747+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+3751,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+3752,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+3753,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3754+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4188+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3762+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4196+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3770+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4204+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3778+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4212+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4220+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+3786,"cmd_odt_q", false,-1);
    tracep->declBit(c+4224,"cmd_odt", false,-1);
    tracep->declBit(c+4225,"cmd_ck_en", false,-1);
    tracep->declBit(c+4226,"cmd_reset_n", false,-1);
    tracep->declBit(c+3787,"o_wb_stall_q", false,-1);
    tracep->declBit(c+4227,"o_wb_stall_d", false,-1);
    tracep->declBit(c+4228,"precharge_slot_busy", false,-1);
    tracep->declBit(c+4229,"activate_slot_busy", false,-1);
    tracep->declBus(c+3788,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+3789,"write_dqs_d", false,-1);
    tracep->declBus(c+3790,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+3791,"write_dqs_val", false,-1, 2,0);
    tracep->declBit(c+3792,"write_dq_q", false,-1);
    tracep->declBit(c+3793,"write_dq_d", false,-1);
    tracep->declBus(c+3794,"write_dq", false,-1, 3,0);
    tracep->declBus(c+3795,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+3796,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+3798,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+3799,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+3800,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+3801,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+3802,"dqs_target_index_orig", false,-1, 5,0);
    tracep->declBus(c+3803,"dq_target_index", false,-1, 5,0);
    tracep->declBus(c+3804,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+3805,"dqs_start_index_repeat", false,-1, 2,0);
    tracep->declBus(c+3806,"train_delay", false,-1, 1,0);
    tracep->declBus(c+3807,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+3808,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+3809,"initial_dqs", false,-1);
    tracep->declBus(c+3810,"lane", false,-1, 1,0);
    tracep->declBus(c+3811,"lane_times_8", false,-1, 4,0);
    tracep->declBus(c+3812,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+3813,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3814+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3818+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3823+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+3828,"index_read_pipe", false,-1);
    tracep->declBit(c+3829,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3830+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3832+i*8,"o_wb_data_q", true,(i+0), 255,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4160+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+3848,"write_calib_stb", false,-1);
    tracep->declBus(c+3849,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+3850,"write_calib_we", false,-1);
    tracep->declBus(c+3851,"write_calib_col", false,-1, 9,0);
    tracep->declArray(c+3852,"write_calib_data", false,-1, 255,0);
    tracep->declBit(c+3860,"write_calib_odt", false,-1);
    tracep->declBit(c+3861,"write_calib_dqs", false,-1);
    tracep->declBit(c+3862,"write_calib_dq", false,-1);
    tracep->declBit(c+3863,"prev_write_level_feedback", false,-1);
    tracep->declArray(c+3864,"read_data_store", false,-1, 255,0);
    tracep->declArray(c+3872,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3876+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3880+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3884+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3888+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+3892,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3893+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBit(c+3897,"wb2_stb", false,-1);
    tracep->declBit(c+3898,"wb2_update", false,-1);
    tracep->declBit(c+3899,"wb2_we", false,-1);
    tracep->declBus(c+3900,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3901,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+3902,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3903,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3904,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3905,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3906,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3907,"wb2_phy_odelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+3908,"wb2_phy_odelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+3909,"wb2_phy_idelay_data_ld", false,-1, 3,0);
    tracep->declBus(c+3910,"wb2_phy_idelay_dqs_ld", false,-1, 3,0);
    tracep->declBus(c+3911,"wb2_write_lane", false,-1, 1,0);
    tracep->declBus(c+4011,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declBit(c+4176,"debug_trigger", false,-1);
    tracep->declBit(c+4317,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4460,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4461,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4462,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4463,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4464,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4465,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4466,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4363,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4443,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4351,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4403,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4467,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+172,"i_rx_stb", false,-1);
    tracep->declBus(c+170,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+428,"o_wb_cyc", false,-1);
    tracep->declBit(c+429,"o_wb_stb", false,-1);
    tracep->declBit(c+430,"o_wb_we", false,-1);
    tracep->declBus(c+454,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+432,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+433,"i_wb_stall", false,-1);
    tracep->declBit(c+434,"i_wb_ack", false,-1);
    tracep->declBus(c+436,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+435,"i_wb_err", false,-1);
    tracep->declBit(c+169,"i_interrupt", false,-1);
    tracep->declBit(c+173,"o_tx_stb", false,-1);
    tracep->declBus(c+171,"o_tx_data", false,-1, 7,0);
    tracep->declBit(c+174,"i_tx_busy", false,-1);
    tracep->declBit(c+161,"i_console_stb", false,-1);
    tracep->declBus(c+164,"i_console_data", false,-1, 6,0);
    tracep->declBit(c+162,"o_console_busy", false,-1);
    tracep->declBit(c+160,"o_console_stb", false,-1);
    tracep->declBus(c+163,"o_console_data", false,-1, 6,0);
    tracep->declBit(c+175,"o_dbg", false,-1);
    tracep->declBit(c+535,"soft_reset", false,-1);
    tracep->declBit(c+175,"r_wdt_reset", false,-1);
    tracep->declBit(c+4367,"cmd_port_active", false,-1);
    tracep->declBit(c+536,"rx_valid", false,-1);
    tracep->declBus(c+537,"rx_data", false,-1, 7,0);
    tracep->declBit(c+538,"in_stb", false,-1);
    tracep->declBit(c+539,"in_active", false,-1);
    tracep->declQuad(c+540,"in_word", false,-1, 35,0);
    tracep->declBit(c+173,"ps_full", false,-1);
    tracep->declBus(c+171,"ps_data", false,-1, 7,0);
    tracep->declBit(c+542,"wbu_tx_stb", false,-1);
    tracep->declBus(c+543,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+544,"ififo_valid", false,-1);
    tracep->declQuad(c+545,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+547,"exec_stb", false,-1);
    tracep->declQuad(c+548,"exec_word", false,-1, 35,0);
    tracep->declBit(c+550,"ofifo_rd", false,-1);
    tracep->declQuad(c+551,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+553,"ofifo_err", false,-1);
    tracep->declBit(c+554,"ofifo_empty_n", false,-1);
    tracep->declBit(c+555,"w_bus_busy", false,-1);
    tracep->declBit(c+175,"w_bus_reset", false,-1);
    tracep->declBus(c+556,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+557,"ign_input_busy", false,-1);
    tracep->declBit(c+558,"output_busy", false,-1);
    tracep->declBit(c+559,"out_active", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4468,"BW", false,-1, 31,0);
    tracep->declBus(c+4351,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+175,"i_reset", false,-1);
    tracep->declBit(c+547,"i_wr", false,-1);
    tracep->declQuad(c+548,"i_data", false,-1, 35,0);
    tracep->declBit(c+550,"i_rd", false,-1);
    tracep->declQuad(c+551,"o_data", false,-1, 35,0);
    tracep->declBit(c+554,"o_empty_n", false,-1);
    tracep->declBit(c+553,"o_err", false,-1);
    tracep->declBus(c+4469,"FLEN", false,-1, 31,0);
    tracep->declBus(c+560,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+561,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+562,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+563,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+564,"will_overflow", false,-1);
    tracep->declBit(c+565,"will_underflow", false,-1);
    tracep->declBit(c+566,"r_empty_n", false,-1);
    tracep->declBit(c+567,"w_write", false,-1);
    tracep->declBit(c+568,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+544,"ififo_empty_n", false,-1);
    tracep->declBit(c+569,"ififo_err", false,-1);
    tracep->declBit(c+570,"ififo_rd", false,-1);
    tracep->declBit(c+4366,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4468,"BW", false,-1, 31,0);
    tracep->declBus(c+4443,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+175,"i_reset", false,-1);
    tracep->declBit(c+538,"i_wr", false,-1);
    tracep->declQuad(c+540,"i_data", false,-1, 35,0);
    tracep->declBit(c+570,"i_rd", false,-1);
    tracep->declQuad(c+545,"o_data", false,-1, 35,0);
    tracep->declBit(c+544,"o_empty_n", false,-1);
    tracep->declBit(c+569,"o_err", false,-1);
    tracep->declBus(c+4410,"FLEN", false,-1, 31,0);
    tracep->declBus(c+571,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+572,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+573,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+574,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+575,"will_overflow", false,-1);
    tracep->declBit(c+576,"will_underflow", false,-1);
    tracep->declBit(c+577,"r_empty_n", false,-1);
    tracep->declBit(c+578,"w_write", false,-1);
    tracep->declBit(c+579,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4360,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+536,"i_stb", false,-1);
    tracep->declBit(c+557,"o_busy", false,-1);
    tracep->declBus(c+537,"i_byte", false,-1, 7,0);
    tracep->declBit(c+535,"o_soft_reset", false,-1);
    tracep->declBit(c+538,"o_stb", false,-1);
    tracep->declBit(c+4366,"i_busy", false,-1);
    tracep->declQuad(c+540,"o_codword", false,-1, 35,0);
    tracep->declBit(c+539,"o_active", false,-1);
    tracep->declBit(c+580,"hx_stb", false,-1);
    tracep->declBit(c+581,"hx_valid", false,-1);
    tracep->declBus(c+582,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+583,"cw_stb", false,-1);
    tracep->declBit(c+584,"cw_busy", false,-1);
    tracep->declBit(c+585,"cw_active", false,-1);
    tracep->declQuad(c+586,"cw_word", false,-1, 35,0);
    tracep->declBit(c+588,"cod_busy", false,-1);
    tracep->declBit(c+589,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+583,"i_stb", false,-1);
    tracep->declBit(c+588,"o_busy", false,-1);
    tracep->declQuad(c+586,"i_word", false,-1, 35,0);
    tracep->declBit(c+538,"o_stb", false,-1);
    tracep->declBit(c+4366,"i_busy", false,-1);
    tracep->declQuad(c+540,"o_word", false,-1, 35,0);
    tracep->declBit(c+589,"o_active", false,-1);
    tracep->declBus(c+590,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+591,"r_word", false,-1, 35,0);
    tracep->declBus(c+593,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+594,"r_addr", false,-1, 24,0);
    tracep->declBus(c+595,"w_addr", false,-1, 31,0);
    tracep->declBus(c+596,"rd_len", false,-1, 9,0);
    tracep->declBus(c+597,"cword", false,-1, 31,0);
    tracep->declBus(c+598,"r_stb", false,-1, 2,0);
    tracep->declBit(c+599,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4403,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+580,"i_stb", false,-1);
    tracep->declBit(c+584,"o_busy", false,-1);
    tracep->declBit(c+581,"i_valid", false,-1);
    tracep->declBus(c+582,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+583,"o_stb", false,-1);
    tracep->declBit(c+588,"i_busy", false,-1);
    tracep->declQuad(c+586,"o_codword", false,-1, 35,0);
    tracep->declBit(c+585,"o_active", false,-1);
    tracep->declBus(c+600,"r_len", false,-1, 2,0);
    tracep->declBus(c+601,"cw_len", false,-1, 2,0);
    tracep->declBus(c+602,"lastcw", false,-1, 1,0);
    tracep->declBit(c+603,"w_stb", false,-1);
    tracep->declQuad(c+604,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+580,"skd_stb", false,-1);
    tracep->declBit(c+581,"skd_valid", false,-1);
    tracep->declBus(c+582,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+584,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+536,"i_stb", false,-1);
    tracep->declBit(c+557,"o_busy", false,-1);
    tracep->declBus(c+537,"i_byte", false,-1, 7,0);
    tracep->declBit(c+535,"o_soft_reset", false,-1);
    tracep->declBit(c+580,"o_stb", false,-1);
    tracep->declBit(c+581,"o_valid", false,-1);
    tracep->declBit(c+584,"i_busy", false,-1);
    tracep->declBus(c+582,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4403,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4354,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4467,"AW", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+175,"i_reset", false,-1);
    tracep->declBit(c+544,"i_valid", false,-1);
    tracep->declQuad(c+545,"i_codword", false,-1, 35,0);
    tracep->declBit(c+555,"o_busy", false,-1);
    tracep->declBit(c+428,"o_wb_cyc", false,-1);
    tracep->declBit(c+429,"o_wb_stb", false,-1);
    tracep->declBit(c+430,"o_wb_we", false,-1);
    tracep->declBus(c+454,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+432,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+433,"i_wb_stall", false,-1);
    tracep->declBit(c+434,"i_wb_ack", false,-1);
    tracep->declBus(c+436,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+435,"i_wb_err", false,-1);
    tracep->declBit(c+547,"o_stb", false,-1);
    tracep->declQuad(c+548,"o_codword", false,-1, 35,0);
    tracep->declBit(c+550,"i_fifo_rd", false,-1);
    tracep->declBus(c+4406,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4407,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4408,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4409,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4407,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+606,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+607,"wb_state", false,-1, 1,0);
    tracep->declBus(c+608,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+609,"r_len", false,-1, 9,0);
    tracep->declBit(c+610,"r_inc", false,-1);
    tracep->declBit(c+611,"r_new_addr", false,-1);
    tracep->declBit(c+612,"last_read_request", false,-1);
    tracep->declBit(c+613,"last_ack", false,-1);
    tracep->declBit(c+614,"zero_acks", false,-1);
    tracep->declBit(c+555,"r_busy", false,-1);
    tracep->declBus(c+615,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4470,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4367,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4366,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4360,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+175,"i_soft_reset", false,-1);
    tracep->declBit(c+550,"i_stb", false,-1);
    tracep->declBit(c+558,"o_busy", false,-1);
    tracep->declQuad(c+551,"i_codword", false,-1, 35,0);
    tracep->declBit(c+428,"i_wb_cyc", false,-1);
    tracep->declBit(c+169,"i_int", false,-1);
    tracep->declBit(c+616,"i_bus_busy", false,-1);
    tracep->declBit(c+542,"o_stb", false,-1);
    tracep->declBit(c+559,"o_active", false,-1);
    tracep->declBus(c+543,"o_char", false,-1, 7,0);
    tracep->declBit(c+173,"i_tx_busy", false,-1);
    tracep->declBit(c+617,"dw_busy", false,-1);
    tracep->declBit(c+558,"cw_stb", false,-1);
    tracep->declBit(c+558,"cw_busy", false,-1);
    tracep->declBit(c+618,"cp_stb", false,-1);
    tracep->declBit(c+617,"dw_stb", false,-1);
    tracep->declBit(c+619,"ln_stb", false,-1);
    tracep->declBit(c+620,"ln_busy", false,-1);
    tracep->declBit(c+621,"cp_busy", false,-1);
    tracep->declBit(c+622,"byte_busy", false,-1);
    tracep->declBit(c+623,"cp_active", false,-1);
    tracep->declBit(c+624,"dw_active", false,-1);
    tracep->declBit(c+625,"ln_active", false,-1);
    tracep->declQuad(c+626,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+628,"cp_word", false,-1, 35,0);
    tracep->declBus(c+630,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+631,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+632,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declBus(c+4468,"CW", false,-1, 31,0);
    tracep->declBus(c+4351,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+175,"i_reset", false,-1);
    tracep->declBit(c+558,"i_stb", false,-1);
    tracep->declQuad(c+626,"i_codword", false,-1, 35,0);
    tracep->declBit(c+617,"i_busy", false,-1);
    tracep->declBit(c+618,"o_stb", false,-1);
    tracep->declQuad(c+628,"o_cword", false,-1, 35,0);
    tracep->declBit(c+621,"o_busy", false,-1);
    tracep->declBit(c+623,"o_active", false,-1);
    tracep->declBit(c+633,"aword_valid", false,-1);
    tracep->declQuad(c+634,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+636,"w_addr", false,-1, 31,0);
    tracep->declBus(c+637,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+638,"tbl_busy", false,-1);
    tracep->declBit(c+639,"w_accepted", false,-1);
    tracep->declQuad(c+640,"r_word", false,-1, 35,0);
    tracep->declBus(c+642,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+643,"tbl_filled", false,-1);
    tracep->declBus(c+644,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+645,"pmatch", false,-1);
    tracep->declBit(c+646,"dmatch", false,-1);
    tracep->declBit(c+647,"vaddr", false,-1);
    tracep->declBus(c+648,"cword", false,-1, 31,0);
    tracep->declBus(c+649,"maddr", false,-1, 9,0);
    tracep->declBit(c+650,"matched", false,-1);
    tracep->declBit(c+651,"zmatch", false,-1);
    tracep->declBit(c+652,"hmatch", false,-1);
    tracep->declBus(c+653,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+654,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+628,"r_cword", false,-1, 35,0);
    tracep->declBus(c+655,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+656,"clear_table", false,-1);
    tracep->declBit(c+657,"addr_within_table", false,-1);
    tracep->declBit(c+658,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+659,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+175,"i_reset", false,-1);
    tracep->declBit(c+550,"i_stb", false,-1);
    tracep->declQuad(c+551,"i_codword", false,-1, 35,0);
    tracep->declBit(c+428,"i_cyc", false,-1);
    tracep->declBit(c+616,"i_busy", false,-1);
    tracep->declBit(c+169,"i_int", false,-1);
    tracep->declBit(c+558,"o_stb", false,-1);
    tracep->declQuad(c+626,"o_codword", false,-1, 35,0);
    tracep->declBit(c+558,"o_busy", false,-1);
    tracep->declBit(c+660,"i_tx_busy", false,-1);
    tracep->declQuad(c+4471,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4473,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4475,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4358,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+661,"int_request", false,-1);
    tracep->declBit(c+662,"int_sent", false,-1);
    tracep->declBit(c+663,"idle_expired", false,-1);
    tracep->declBit(c+664,"idle_state", false,-1);
    tracep->declBus(c+665,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+618,"i_stb", false,-1);
    tracep->declQuad(c+628,"i_word", false,-1, 35,0);
    tracep->declBit(c+620,"i_tx_busy", false,-1);
    tracep->declBit(c+617,"o_stb", false,-1);
    tracep->declBus(c+630,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+617,"o_busy", false,-1);
    tracep->declBit(c+624,"o_active", false,-1);
    tracep->declBus(c+666,"w_len", false,-1, 2,0);
    tracep->declBus(c+667,"r_len", false,-1, 2,0);
    tracep->declBus(c+668,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+617,"i_stb", false,-1);
    tracep->declBus(c+630,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+619,"o_stb", false,-1);
    tracep->declBus(c+631,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+669,"i_bus_busy", false,-1);
    tracep->declBit(c+622,"i_tx_busy", false,-1);
    tracep->declBit(c+620,"o_busy", false,-1);
    tracep->declBit(c+625,"o_active", false,-1);
    tracep->declBus(c+4477,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4478,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+670,"last_out_nl", false,-1);
    tracep->declBit(c+671,"last_in_nl", false,-1);
    tracep->declBit(c+672,"full_line", false,-1);
    tracep->declBit(c+673,"r_busy", false,-1);
    tracep->declBus(c+674,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+619,"i_stb", false,-1);
    tracep->declBus(c+631,"i_bits", false,-1, 6,0);
    tracep->declBit(c+542,"o_stb", false,-1);
    tracep->declBus(c+543,"o_char", false,-1, 7,0);
    tracep->declBit(c+622,"o_busy", false,-1);
    tracep->declBit(c+173,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4359,"NIN", false,-1, 31,0);
    tracep->declBus(c+4353,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4399,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+3921,"i_wb_cyc", false,-1);
    tracep->declBit(c+3926,"i_wb_stb", false,-1);
    tracep->declBit(c+3923,"i_wb_we", false,-1);
    tracep->declBus(c+3924,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3925,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+3926,"o_wb_ack", false,-1);
    tracep->declBus(c+4313,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4303,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4304,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+148,"o_int", false,-1);
    tracep->declBus(c+675,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+676,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+677,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+675,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4318,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4358,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4364,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4406,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4353,"RW", false,-1, 31,0);
    tracep->declBus(c+4479,"BAW", false,-1, 31,0);
    tracep->declBus(c+4480,"RESET_ADDRESS", false,-1, 27,0);
    tracep->declBus(c+4360,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4365,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4481,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3954,"i_wb_cyc", false,-1);
    tracep->declBit(c+3955,"i_wb_stb", false,-1);
    tracep->declBit(c+3956,"i_wb_we", false,-1);
    tracep->declBus(c+4012,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3958,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3959,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+417,"o_wb_ack", false,-1);
    tracep->declBus(c+418,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+219,"o_pf_cyc", false,-1);
    tracep->declBit(c+220,"o_pf_stb", false,-1);
    tracep->declBit(c+4366,"o_pf_we", false,-1);
    tracep->declBus(c+221,"o_pf_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4384,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+222,"i_pf_stall", false,-1);
    tracep->declBit(c+223,"i_pf_ack", false,-1);
    tracep->declBit(c+224,"i_pf_err", false,-1);
    tracep->declArray(c+225,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4284,"i_i2c_sda", false,-1);
    tracep->declBit(c+4285,"i_i2c_scl", false,-1);
    tracep->declBit(c+4286,"o_i2c_sda", false,-1);
    tracep->declBit(c+4287,"o_i2c_scl", false,-1);
    tracep->declBit(c+155,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+156,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+158,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+157,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+159,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4366,"i_sync_signal", false,-1);
    tracep->declBus(c+38,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4406,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4407,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4408,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4409,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4363,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4400,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4424,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4358,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4446,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4447,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4412,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4414,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4415,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4416,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4417,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4405,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4418,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4482,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4483,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4484,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4485,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4486,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4487,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+678,"cpu_reset", false,-1);
    tracep->declBit(c+4366,"cpu_clear_cache", false,-1);
    tracep->declBit(c+679,"cpu_new_pc", false,-1);
    tracep->declBus(c+680,"pf_jump_addr", false,-1, 27,0);
    tracep->declBit(c+681,"pf_valid", false,-1);
    tracep->declBit(c+682,"pf_ready", false,-1);
    tracep->declBus(c+683,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+684,"pf_insn_addr", false,-1, 27,0);
    tracep->declBit(c+685,"pf_illegal", false,-1);
    tracep->declBit(c+686,"half_valid", false,-1);
    tracep->declBit(c+687,"imm_cycle", false,-1);
    tracep->declBit(c+4013,"next_valid", false,-1);
    tracep->declBus(c+4014,"next_insn", false,-1, 7,0);
    tracep->declBit(c+688,"insn_ready", false,-1);
    tracep->declBit(c+689,"half_ready", false,-1);
    tracep->declBit(c+690,"i2c_abort", false,-1);
    tracep->declBit(c+691,"insn_valid", false,-1);
    tracep->declBus(c+692,"insn", false,-1, 11,0);
    tracep->declBus(c+693,"half_insn", false,-1, 3,0);
    tracep->declBit(c+694,"i2c_ckedge", false,-1);
    tracep->declBit(c+695,"i2c_stretch", false,-1);
    tracep->declBus(c+696,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+697,"ckcount", false,-1, 11,0);
    tracep->declBus(c+698,"abort_address", false,-1, 27,0);
    tracep->declBus(c+699,"jump_target", false,-1, 27,0);
    tracep->declBit(c+700,"r_wait", false,-1);
    tracep->declBit(c+701,"soft_halt_request", false,-1);
    tracep->declBit(c+678,"r_halted", false,-1);
    tracep->declBit(c+702,"r_err", false,-1);
    tracep->declBit(c+703,"r_aborted", false,-1);
    tracep->declBit(c+704,"r_manual", false,-1);
    tracep->declBit(c+705,"r_sda", false,-1);
    tracep->declBit(c+706,"r_scl", false,-1);
    tracep->declBit(c+707,"w_stopped", false,-1);
    tracep->declBit(c+708,"w_sda", false,-1);
    tracep->declBit(c+709,"w_scl", false,-1);
    tracep->declBit(c+4015,"bus_read", false,-1);
    tracep->declBit(c+4016,"bus_write", false,-1);
    tracep->declBit(c+4017,"bus_override", false,-1);
    tracep->declBit(c+4018,"bus_manual", false,-1);
    tracep->declBit(c+710,"ovw_ready", false,-1);
    tracep->declBit(c+4019,"bus_jump", false,-1);
    tracep->declBus(c+4012,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4012,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+3958,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+3959,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+418,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+711,"s_tvalid", false,-1);
    tracep->declBit(c+689,"s_tready", false,-1);
    tracep->declBus(c+712,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+39,"w_control", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+704,"manual", false,-1);
    tracep->declBit(c+706,"scl", false,-1);
    tracep->declBit(c+705,"sda", false,-1);
    tracep->declBit(c+713,"o_scl", false,-1);
    tracep->declBit(c+714,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+715,"mid_axis_pkt", false,-1);
    tracep->declBus(c+716,"r_channel", false,-1, 1,0);
    tracep->declBus(c+159,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4365,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+40,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+711,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+688,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+717,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+155,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+156,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+158,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+157,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+694,"i_ckedge", false,-1);
    tracep->declBit(c+695,"o_stretch", false,-1);
    tracep->declBit(c+4285,"i_scl", false,-1);
    tracep->declBit(c+4284,"i_sda", false,-1);
    tracep->declBit(c+709,"o_scl", false,-1);
    tracep->declBit(c+708,"o_sda", false,-1);
    tracep->declBit(c+690,"o_abort", false,-1);
    tracep->declBus(c+4412,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4413,"START", false,-1, 3,0);
    tracep->declBus(c+4414,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4415,"STOP", false,-1, 3,0);
    tracep->declBus(c+4416,"DATA", false,-1, 3,0);
    tracep->declBus(c+4417,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4405,"ACK", false,-1, 3,0);
    tracep->declBus(c+4418,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4482,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4483,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4484,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4485,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4486,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4403,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4360,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4449,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4455,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4450,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4452,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4488,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4489,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4490,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4491,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4403,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+718,"last_byte", false,-1);
    tracep->declBit(c+719,"dir", false,-1);
    tracep->declBit(c+720,"will_ack", false,-1);
    tracep->declBus(c+721,"state", false,-1, 3,0);
    tracep->declBus(c+722,"nbits", false,-1, 2,0);
    tracep->declBus(c+723,"sreg", false,-1, 7,0);
    tracep->declBit(c+724,"q_scl", false,-1);
    tracep->declBit(c+725,"q_sda", false,-1);
    tracep->declBit(c+726,"ck_scl", false,-1);
    tracep->declBit(c+727,"ck_sda", false,-1);
    tracep->declBit(c+728,"lst_scl", false,-1);
    tracep->declBit(c+729,"lst_sda", false,-1);
    tracep->declBit(c+730,"stop_bit", false,-1);
    tracep->declBit(c+731,"channel_busy", false,-1);
    tracep->declBit(c+4366,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4479,"AW", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+41,"i_reset", false,-1);
    tracep->declBit(c+679,"i_new_pc", false,-1);
    tracep->declBit(c+4366,"i_clear_cache", false,-1);
    tracep->declBit(c+682,"i_ready", false,-1);
    tracep->declBus(c+680,"i_pc", false,-1, 27,0);
    tracep->declBit(c+681,"o_valid", false,-1);
    tracep->declBit(c+685,"o_illegal", false,-1);
    tracep->declBus(c+683,"o_insn", false,-1, 7,0);
    tracep->declBus(c+684,"o_pc", false,-1, 27,0);
    tracep->declBit(c+219,"o_wb_cyc", false,-1);
    tracep->declBit(c+220,"o_wb_stb", false,-1);
    tracep->declBit(c+4366,"o_wb_we", false,-1);
    tracep->declBus(c+221,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+222,"i_wb_stall", false,-1);
    tracep->declBit(c+223,"i_wb_ack", false,-1);
    tracep->declBit(c+224,"i_wb_err", false,-1);
    tracep->declArray(c+225,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+732,"last_stb", false,-1);
    tracep->declBit(c+733,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+734,"cache_word", false,-1, 511,0);
    tracep->declBit(c+750,"cache_valid", false,-1);
    tracep->declBus(c+751,"inflight", false,-1, 1,0);
    tracep->declBit(c+752,"cache_illegal", false,-1);
    tracep->declBit(c+753,"r_valid", false,-1);
    tracep->declArray(c+754,"r_insn", false,-1, 511,0);
    tracep->declArray(c+770,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4443,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+753,"rg_valid", false,-1);
    tracep->declArray(c+754,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+786,"r_count", false,-1, 6,0);
    tracep->declBus(c+787,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4366,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4492,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4404,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4493,"NELM", false,-1, 31,0);
    tracep->declBus(c+4360,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4400,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4494,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4493,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4495,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4238,"i_data_clk", false,-1);
    tracep->declBit(c+4367,"i_ce", false,-1);
    tracep->declBit(c+703,"i_trigger", false,-1);
    tracep->declBus(c+42,"i_data", false,-1, 30,0);
    tracep->declBit(c+4238,"i_wb_clk", false,-1);
    tracep->declBit(c+3930,"i_wb_cyc", false,-1);
    tracep->declBit(c+3931,"i_wb_stb", false,-1);
    tracep->declBit(c+3932,"i_wb_we", false,-1);
    tracep->declBit(c+4020,"i_wb_addr", false,-1);
    tracep->declBus(c+3934,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3935,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+409,"o_wb_ack", false,-1);
    tracep->declBus(c+410,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+146,"o_interrupt", false,-1);
    tracep->declBit(c+4021,"write_stb", false,-1);
    tracep->declBit(c+4022,"read_from_data", false,-1);
    tracep->declBit(c+4023,"write_to_control", false,-1);
    tracep->declBus(c+410,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4238,"bus_clock", false,-1);
    tracep->declBit(c+788,"read_address", false,-1);
    tracep->declBus(c+3934,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+789,"raddr", false,-1, 9,0);
    tracep->declBus(c+790,"waddr", false,-1, 9,0);
    tracep->declBit(c+791,"bw_reset_request", false,-1);
    tracep->declBit(c+792,"bw_manual_trigger", false,-1);
    tracep->declBit(c+793,"bw_disable_trigger", false,-1);
    tracep->declBit(c+791,"bw_reset_complete", false,-1);
    tracep->declBus(c+794,"br_config", false,-1, 2,0);
    tracep->declBus(c+795,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+796,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+791,"dw_reset", false,-1);
    tracep->declBit(c+792,"dw_manual_trigger", false,-1);
    tracep->declBit(c+793,"dw_disable_trigger", false,-1);
    tracep->declBit(c+797,"dr_triggered", false,-1);
    tracep->declBit(c+798,"dr_primed", false,-1);
    tracep->declBit(c+799,"dw_trigger", false,-1);
    tracep->declBit(c+800,"dr_stopped", false,-1);
    tracep->declBus(c+4444,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+801,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+802,"dw_final_stop", false,-1);
    tracep->declBus(c+803,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+804,"qd_data", false,-1, 30,0);
    tracep->declBit(c+805,"dr_force_write", false,-1);
    tracep->declBit(c+806,"dr_run_timeout", false,-1);
    tracep->declBit(c+807,"new_data", false,-1);
    tracep->declBit(c+808,"dr_force_inhibit", false,-1);
    tracep->declBus(c+804,"w_data", false,-1, 30,0);
    tracep->declBit(c+809,"imm_adr", false,-1);
    tracep->declBit(c+810,"lst_adr", false,-1);
    tracep->declBus(c+811,"lst_val", false,-1, 30,0);
    tracep->declBus(c+812,"imm_val", false,-1, 30,0);
    tracep->declBit(c+813,"record_ce", false,-1);
    tracep->declBus(c+814,"r_data", false,-1, 31,0);
    tracep->declBit(c+802,"bw_stopped", false,-1);
    tracep->declBit(c+797,"bw_triggered", false,-1);
    tracep->declBit(c+798,"bw_primed", false,-1);
    tracep->declBit(c+409,"br_wb_ack", false,-1);
    tracep->declBit(c+815,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3931,"bw_cyc_stb", false,-1);
    tracep->declBus(c+816,"this_addr", false,-1, 9,0);
    tracep->declBus(c+817,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+795,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4492,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+818,"br_level_interrupt", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4362,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4496,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4362,"TB", false,-1, 31,0);
    tracep->declBus(c+4412,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4413,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4414,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4415,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4416,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4417,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4405,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4418,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4482,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4483,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4398,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4300,"i_uart_rx", false,-1);
    tracep->declBit(c+172,"o_wr", false,-1);
    tracep->declBus(c+170,"o_data", false,-1, 7,0);
    tracep->declBus(c+4497,"half_baud", false,-1, 6,0);
    tracep->declBus(c+819,"state", false,-1, 3,0);
    tracep->declBus(c+820,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+821,"zero_baud_counter", false,-1);
    tracep->declBit(c+822,"q_uart", false,-1);
    tracep->declBit(c+823,"qq_uart", false,-1);
    tracep->declBit(c+824,"ck_uart", false,-1);
    tracep->declBus(c+825,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+826,"half_baud_time", false,-1);
    tracep->declBus(c+827,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4492,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4404,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4493,"NELM", false,-1, 31,0);
    tracep->declBus(c+4360,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4400,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4494,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4493,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4495,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4238,"i_data_clk", false,-1);
    tracep->declBit(c+4367,"i_ce", false,-1);
    tracep->declBit(c+4176,"i_trigger", false,-1);
    tracep->declBus(c+3912,"i_data", false,-1, 30,0);
    tracep->declBit(c+4238,"i_wb_clk", false,-1);
    tracep->declBit(c+3936,"i_wb_cyc", false,-1);
    tracep->declBit(c+3937,"i_wb_stb", false,-1);
    tracep->declBit(c+3938,"i_wb_we", false,-1);
    tracep->declBit(c+4024,"i_wb_addr", false,-1);
    tracep->declBus(c+3940,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3941,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+411,"o_wb_ack", false,-1);
    tracep->declBus(c+412,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+140,"o_interrupt", false,-1);
    tracep->declBit(c+4025,"write_stb", false,-1);
    tracep->declBit(c+4026,"read_from_data", false,-1);
    tracep->declBit(c+4027,"write_to_control", false,-1);
    tracep->declBus(c+412,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4238,"bus_clock", false,-1);
    tracep->declBit(c+828,"read_address", false,-1);
    tracep->declBus(c+3940,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+829,"raddr", false,-1, 9,0);
    tracep->declBus(c+830,"waddr", false,-1, 9,0);
    tracep->declBit(c+831,"bw_reset_request", false,-1);
    tracep->declBit(c+832,"bw_manual_trigger", false,-1);
    tracep->declBit(c+833,"bw_disable_trigger", false,-1);
    tracep->declBit(c+831,"bw_reset_complete", false,-1);
    tracep->declBus(c+834,"br_config", false,-1, 2,0);
    tracep->declBus(c+835,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+836,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+831,"dw_reset", false,-1);
    tracep->declBit(c+832,"dw_manual_trigger", false,-1);
    tracep->declBit(c+833,"dw_disable_trigger", false,-1);
    tracep->declBit(c+837,"dr_triggered", false,-1);
    tracep->declBit(c+838,"dr_primed", false,-1);
    tracep->declBit(c+4230,"dw_trigger", false,-1);
    tracep->declBit(c+839,"dr_stopped", false,-1);
    tracep->declBus(c+4444,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+840,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+841,"dw_final_stop", false,-1);
    tracep->declBus(c+842,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+843,"qd_data", false,-1, 30,0);
    tracep->declBit(c+844,"dr_force_write", false,-1);
    tracep->declBit(c+845,"dr_run_timeout", false,-1);
    tracep->declBit(c+846,"new_data", false,-1);
    tracep->declBit(c+847,"dr_force_inhibit", false,-1);
    tracep->declBus(c+843,"w_data", false,-1, 30,0);
    tracep->declBit(c+848,"imm_adr", false,-1);
    tracep->declBit(c+849,"lst_adr", false,-1);
    tracep->declBus(c+850,"lst_val", false,-1, 30,0);
    tracep->declBus(c+851,"imm_val", false,-1, 30,0);
    tracep->declBit(c+852,"record_ce", false,-1);
    tracep->declBus(c+853,"r_data", false,-1, 31,0);
    tracep->declBit(c+841,"bw_stopped", false,-1);
    tracep->declBit(c+837,"bw_triggered", false,-1);
    tracep->declBit(c+838,"bw_primed", false,-1);
    tracep->declBit(c+411,"br_wb_ack", false,-1);
    tracep->declBit(c+854,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3937,"bw_cyc_stb", false,-1);
    tracep->declBus(c+855,"this_addr", false,-1, 9,0);
    tracep->declBus(c+856,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+835,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4492,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+857,"br_level_interrupt", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4492,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4404,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4493,"NELM", false,-1, 31,0);
    tracep->declBus(c+4360,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4400,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4494,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4493,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4495,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4238,"i_data_clk", false,-1);
    tracep->declBit(c+4367,"i_ce", false,-1);
    tracep->declBit(c+4176,"i_trigger", false,-1);
    tracep->declBus(c+4319,"i_data", false,-1, 30,0);
    tracep->declBit(c+4238,"i_wb_clk", false,-1);
    tracep->declBit(c+3942,"i_wb_cyc", false,-1);
    tracep->declBit(c+3943,"i_wb_stb", false,-1);
    tracep->declBit(c+3944,"i_wb_we", false,-1);
    tracep->declBit(c+4028,"i_wb_addr", false,-1);
    tracep->declBus(c+3946,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3947,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+413,"o_wb_ack", false,-1);
    tracep->declBus(c+414,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+141,"o_interrupt", false,-1);
    tracep->declBit(c+4029,"write_stb", false,-1);
    tracep->declBit(c+4030,"read_from_data", false,-1);
    tracep->declBit(c+4031,"write_to_control", false,-1);
    tracep->declBus(c+414,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4238,"bus_clock", false,-1);
    tracep->declBit(c+858,"read_address", false,-1);
    tracep->declBus(c+3946,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+859,"raddr", false,-1, 9,0);
    tracep->declBus(c+860,"waddr", false,-1, 9,0);
    tracep->declBit(c+861,"bw_reset_request", false,-1);
    tracep->declBit(c+862,"bw_manual_trigger", false,-1);
    tracep->declBit(c+863,"bw_disable_trigger", false,-1);
    tracep->declBit(c+861,"bw_reset_complete", false,-1);
    tracep->declBus(c+864,"br_config", false,-1, 2,0);
    tracep->declBus(c+865,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+866,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+861,"dw_reset", false,-1);
    tracep->declBit(c+862,"dw_manual_trigger", false,-1);
    tracep->declBit(c+863,"dw_disable_trigger", false,-1);
    tracep->declBit(c+867,"dr_triggered", false,-1);
    tracep->declBit(c+868,"dr_primed", false,-1);
    tracep->declBit(c+4231,"dw_trigger", false,-1);
    tracep->declBit(c+869,"dr_stopped", false,-1);
    tracep->declBus(c+4444,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+870,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+871,"dw_final_stop", false,-1);
    tracep->declBus(c+872,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+873,"qd_data", false,-1, 30,0);
    tracep->declBit(c+874,"dr_force_write", false,-1);
    tracep->declBit(c+875,"dr_run_timeout", false,-1);
    tracep->declBit(c+876,"new_data", false,-1);
    tracep->declBit(c+877,"dr_force_inhibit", false,-1);
    tracep->declBus(c+873,"w_data", false,-1, 30,0);
    tracep->declBit(c+878,"imm_adr", false,-1);
    tracep->declBit(c+879,"lst_adr", false,-1);
    tracep->declBus(c+880,"lst_val", false,-1, 30,0);
    tracep->declBus(c+881,"imm_val", false,-1, 30,0);
    tracep->declBit(c+882,"record_ce", false,-1);
    tracep->declBus(c+883,"r_data", false,-1, 31,0);
    tracep->declBit(c+871,"bw_stopped", false,-1);
    tracep->declBit(c+867,"bw_triggered", false,-1);
    tracep->declBit(c+868,"bw_primed", false,-1);
    tracep->declBit(c+413,"br_wb_ack", false,-1);
    tracep->declBit(c+884,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3943,"bw_cyc_stb", false,-1);
    tracep->declBus(c+885,"this_addr", false,-1, 9,0);
    tracep->declBus(c+886,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+865,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4492,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+887,"br_level_interrupt", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4492,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4404,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4493,"NELM", false,-1, 31,0);
    tracep->declBus(c+4360,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4400,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4494,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4493,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4495,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4238,"i_data_clk", false,-1);
    tracep->declBit(c+4367,"i_ce", false,-1);
    tracep->declBit(c+4176,"i_trigger", false,-1);
    tracep->declBus(c+36,"i_data", false,-1, 30,0);
    tracep->declBit(c+4238,"i_wb_clk", false,-1);
    tracep->declBit(c+3948,"i_wb_cyc", false,-1);
    tracep->declBit(c+3949,"i_wb_stb", false,-1);
    tracep->declBit(c+3950,"i_wb_we", false,-1);
    tracep->declBit(c+4032,"i_wb_addr", false,-1);
    tracep->declBus(c+3952,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3953,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+415,"o_wb_ack", false,-1);
    tracep->declBus(c+416,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+147,"o_interrupt", false,-1);
    tracep->declBit(c+4033,"write_stb", false,-1);
    tracep->declBit(c+4034,"read_from_data", false,-1);
    tracep->declBit(c+4035,"write_to_control", false,-1);
    tracep->declBus(c+416,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4238,"bus_clock", false,-1);
    tracep->declBit(c+888,"read_address", false,-1);
    tracep->declBus(c+3952,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+889,"raddr", false,-1, 9,0);
    tracep->declBus(c+890,"waddr", false,-1, 9,0);
    tracep->declBit(c+891,"bw_reset_request", false,-1);
    tracep->declBit(c+892,"bw_manual_trigger", false,-1);
    tracep->declBit(c+893,"bw_disable_trigger", false,-1);
    tracep->declBit(c+891,"bw_reset_complete", false,-1);
    tracep->declBus(c+894,"br_config", false,-1, 2,0);
    tracep->declBus(c+895,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+896,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+891,"dw_reset", false,-1);
    tracep->declBit(c+892,"dw_manual_trigger", false,-1);
    tracep->declBit(c+893,"dw_disable_trigger", false,-1);
    tracep->declBit(c+897,"dr_triggered", false,-1);
    tracep->declBit(c+898,"dr_primed", false,-1);
    tracep->declBit(c+4232,"dw_trigger", false,-1);
    tracep->declBit(c+899,"dr_stopped", false,-1);
    tracep->declBus(c+4444,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+900,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+901,"dw_final_stop", false,-1);
    tracep->declBus(c+902,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+903,"qd_data", false,-1, 30,0);
    tracep->declBit(c+904,"dr_force_write", false,-1);
    tracep->declBit(c+905,"dr_run_timeout", false,-1);
    tracep->declBit(c+906,"new_data", false,-1);
    tracep->declBit(c+907,"dr_force_inhibit", false,-1);
    tracep->declBus(c+903,"w_data", false,-1, 30,0);
    tracep->declBit(c+908,"imm_adr", false,-1);
    tracep->declBit(c+909,"lst_adr", false,-1);
    tracep->declBus(c+910,"lst_val", false,-1, 30,0);
    tracep->declBus(c+911,"imm_val", false,-1, 30,0);
    tracep->declBit(c+912,"record_ce", false,-1);
    tracep->declBus(c+913,"r_data", false,-1, 31,0);
    tracep->declBit(c+901,"bw_stopped", false,-1);
    tracep->declBit(c+897,"bw_triggered", false,-1);
    tracep->declBit(c+898,"bw_primed", false,-1);
    tracep->declBit(c+415,"br_wb_ack", false,-1);
    tracep->declBit(c+914,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3949,"bw_cyc_stb", false,-1);
    tracep->declBus(c+915,"this_addr", false,-1, 9,0);
    tracep->declBus(c+916,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+895,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4492,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+917,"br_level_interrupt", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4353,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4444,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4353,"NSW", false,-1, 31,0);
    tracep->declBus(c+4364,"NFF", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3921,"i_wb_cyc", false,-1);
    tracep->declBit(c+3928,"i_wb_stb", false,-1);
    tracep->declBit(c+3923,"i_wb_we", false,-1);
    tracep->declBus(c+3924,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3925,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+407,"o_wb_ack", false,-1);
    tracep->declBus(c+408,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4305,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4306,"i_btn", false,-1, 4,0);
    tracep->declBus(c+176,"o_led", false,-1, 7,0);
    tracep->declBit(c+149,"o_int", false,-1);
    tracep->declBit(c+918,"led_demo", false,-1);
    tracep->declBus(c+919,"r_led", false,-1, 7,0);
    tracep->declBus(c+920,"w_btn", false,-1, 7,0);
    tracep->declBus(c+921,"bounced", false,-1, 7,0);
    tracep->declBus(c+922,"r_sw", false,-1, 7,0);
    tracep->declBit(c+923,"sw_int", false,-1);
    tracep->declBit(c+924,"btn_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+4036,"next_btn", false,-1, 4,0);
    tracep->declBus(c+925,"s_btn", false,-1, 4,0);
    tracep->declBus(c+926,"r_btn", false,-1, 4,0);
    tracep->declBus(c+927,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+924,"r_btn_int", false,-1);
    tracep->declBit(c+4037,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+928,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+922,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4353,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4421,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBus(c+921,"o_leds", false,-1, 7,0);
    tracep->declBus(c+929,"led_owner", false,-1, 7,0);
    tracep->declBit(c+930,"led_dir", false,-1);
    tracep->declBus(c+931,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+932,"led_clk", false,-1);
    tracep->declBus(c+933,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+934,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+935,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+936,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+937,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+938,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+939,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+940,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+941,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4357,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4404,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4448,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4448,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4360,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4359,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4352,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4351,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4360,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4403,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4400,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4358,"PAW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+37,"i_reset", false,-1);
    tracep->declBit(c+241,"o_wb_cyc", false,-1);
    tracep->declBit(c+242,"o_wb_stb", false,-1);
    tracep->declBit(c+243,"o_wb_we", false,-1);
    tracep->declBus(c+244,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+245,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+261,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+263,"i_wb_stall", false,-1);
    tracep->declBit(c+264,"i_wb_ack", false,-1);
    tracep->declArray(c+266,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+265,"i_wb_err", false,-1);
    tracep->declBus(c+168,"i_ext_int", false,-1, 15,0);
    tracep->declBit(c+169,"o_ext_int", false,-1);
    tracep->declBit(c+43,"i_dbg_cyc", false,-1);
    tracep->declBit(c+44,"i_dbg_stb", false,-1);
    tracep->declBit(c+45,"i_dbg_we", false,-1);
    tracep->declBus(c+46,"i_dbg_addr", false,-1, 6,0);
    tracep->declBus(c+47,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4320,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+166,"o_dbg_stall", false,-1);
    tracep->declBit(c+167,"o_dbg_ack", false,-1);
    tracep->declBus(c+453,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4365,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4296,"o_prof_stb", false,-1);
    tracep->declBus(c+4297,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4298,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4498,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4402,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4499,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4500,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4501,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4502,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4503,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4504,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4505,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4506,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4507,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4508,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4509,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4510,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4511,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4512,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4513,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4514,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4515,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4365,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4364,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4352,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4354,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4444,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4358,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4406,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4407,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4408,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+942,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+943,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+944,"ctri_int", false,-1);
    tracep->declBit(c+945,"tma_int", false,-1);
    tracep->declBit(c+946,"tmb_int", false,-1);
    tracep->declBit(c+947,"tmc_int", false,-1);
    tracep->declBit(c+948,"jif_int", false,-1);
    tracep->declBit(c+949,"dmac_int", false,-1);
    tracep->declBit(c+950,"mtc_int", false,-1);
    tracep->declBit(c+951,"moc_int", false,-1);
    tracep->declBit(c+952,"mpc_int", false,-1);
    tracep->declBit(c+953,"mic_int", false,-1);
    tracep->declBit(c+954,"utc_int", false,-1);
    tracep->declBit(c+955,"uoc_int", false,-1);
    tracep->declBit(c+956,"upc_int", false,-1);
    tracep->declBit(c+957,"uic_int", false,-1);
    tracep->declBus(c+958,"actr_data", false,-1, 31,0);
    tracep->declBit(c+959,"actr_ack", false,-1);
    tracep->declBit(c+4366,"actr_stall", false,-1);
    tracep->declBit(c+960,"cpu_clken", false,-1);
    tracep->declBit(c+961,"sys_cyc", false,-1);
    tracep->declBit(c+962,"sys_stb", false,-1);
    tracep->declBit(c+963,"sys_we", false,-1);
    tracep->declBus(c+964,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+965,"sys_data", false,-1, 31,0);
    tracep->declBus(c+966,"cpu_addr", false,-1, 21,0);
    tracep->declBus(c+967,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+968,"sys_ack", false,-1);
    tracep->declBit(c+4366,"sys_stall", false,-1);
    tracep->declBit(c+959,"sel_counter", false,-1);
    tracep->declBit(c+969,"sel_timer", false,-1);
    tracep->declBit(c+970,"sel_pic", false,-1);
    tracep->declBit(c+971,"sel_apic", false,-1);
    tracep->declBit(c+972,"sel_watchdog", false,-1);
    tracep->declBit(c+973,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+974,"sel_dmac", false,-1);
    tracep->declBit(c+975,"sel_mmus", false,-1);
    tracep->declBit(c+976,"dbg_cyc", false,-1);
    tracep->declBit(c+977,"dbg_stb", false,-1);
    tracep->declBit(c+978,"dbg_we", false,-1);
    tracep->declBus(c+979,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+980,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+981,"dbg_ack", false,-1);
    tracep->declBit(c+982,"dbg_stall", false,-1);
    tracep->declBus(c+983,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+984,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+985,"no_dbg_err", false,-1);
    tracep->declBit(c+986,"cpu_break", false,-1);
    tracep->declBit(c+987,"dbg_cmd_write", false,-1);
    tracep->declBit(c+988,"dbg_cpu_write", false,-1);
    tracep->declBit(c+989,"dbg_cpu_read", false,-1);
    tracep->declBus(c+980,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+984,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+990,"reset_hold", false,-1);
    tracep->declBit(c+991,"halt_on_fault", false,-1);
    tracep->declBit(c+991,"dbg_catch", false,-1);
    tracep->declBit(c+992,"reset_request", false,-1);
    tracep->declBit(c+993,"release_request", false,-1);
    tracep->declBit(c+994,"halt_request", false,-1);
    tracep->declBit(c+995,"step_request", false,-1);
    tracep->declBit(c+996,"clear_cache_request", false,-1);
    tracep->declBit(c+997,"cmd_reset", false,-1);
    tracep->declBit(c+998,"cmd_halt", false,-1);
    tracep->declBit(c+999,"cmd_step", false,-1);
    tracep->declBit(c+1000,"cmd_clear_cache", false,-1);
    tracep->declBit(c+1001,"cmd_write", false,-1);
    tracep->declBit(c+1002,"cmd_read", false,-1);
    tracep->declBus(c+1003,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+1004,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+1005,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+997,"cpu_reset", false,-1);
    tracep->declBit(c+998,"cpu_halt", false,-1);
    tracep->declBit(c+1006,"cpu_has_halted", false,-1);
    tracep->declBit(c+1007,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+1008,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+1009,"cpu_gie", false,-1);
    tracep->declBit(c+4366,"wdt_stall", false,-1);
    tracep->declBit(c+1010,"wdt_ack", false,-1);
    tracep->declBit(c+1011,"wdt_reset", false,-1);
    tracep->declBus(c+1012,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+1013,"wdbus_ack", false,-1);
    tracep->declBus(c+1014,"r_wdbus_data", false,-1, 21,0);
    tracep->declBus(c+1015,"pic_data", false,-1, 31,0);
    tracep->declBus(c+1016,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+1017,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+1018,"wdbus_int", false,-1);
    tracep->declBit(c+48,"cpu_op_stall", false,-1);
    tracep->declBit(c+1019,"cpu_pf_stall", false,-1);
    tracep->declBit(c+1020,"cpu_i_count", false,-1);
    tracep->declBit(c+1021,"dmac_stb", false,-1);
    tracep->declBit(c+1022,"dc_err", false,-1);
    tracep->declBus(c+1023,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4366,"dmac_stall", false,-1);
    tracep->declBit(c+1024,"dmac_ack", false,-1);
    tracep->declBit(c+1025,"dc_cyc", false,-1);
    tracep->declBit(c+1026,"dc_stb", false,-1);
    tracep->declBit(c+1027,"dc_we", false,-1);
    tracep->declBit(c+1028,"dc_stall", false,-1);
    tracep->declBit(c+1029,"dc_ack", false,-1);
    tracep->declBus(c+1030,"dc_addr", false,-1, 21,0);
    tracep->declArray(c+1031,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1047,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1049,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1050,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1051,"ctri_sel", false,-1);
    tracep->declBit(c+4366,"ctri_stall", false,-1);
    tracep->declBit(c+1051,"ctri_ack", false,-1);
    tracep->declBus(c+1052,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4366,"tma_stall", false,-1);
    tracep->declBit(c+1053,"tma_ack", false,-1);
    tracep->declBit(c+4366,"tmb_stall", false,-1);
    tracep->declBit(c+1054,"tmb_ack", false,-1);
    tracep->declBit(c+4366,"tmc_stall", false,-1);
    tracep->declBit(c+1055,"tmc_ack", false,-1);
    tracep->declBit(c+4366,"jif_stall", false,-1);
    tracep->declBit(c+1056,"jif_ack", false,-1);
    tracep->declBus(c+1057,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1058,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1059,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1060,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4366,"pic_stall", false,-1);
    tracep->declBit(c+1061,"pic_ack", false,-1);
    tracep->declBit(c+1062,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1063,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1064,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1065,"cpu_we", false,-1);
    tracep->declArray(c+1066,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1082,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1082,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1084,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1100,"cpu_stall", false,-1);
    tracep->declBit(c+1101,"pic_interrupt", false,-1);
    tracep->declBit(c+1102,"cpu_ack", false,-1);
    tracep->declBit(c+1103,"cpu_err", false,-1);
    tracep->declBus(c+1104,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+263,"ext_stall", false,-1);
    tracep->declBit(c+264,"ext_ack", false,-1);
    tracep->declBit(c+1049,"mmu_cyc", false,-1);
    tracep->declBit(c+1062,"mmu_stb", false,-1);
    tracep->declBit(c+1065,"mmu_we", false,-1);
    tracep->declBit(c+1105,"mmu_stall", false,-1);
    tracep->declBit(c+1106,"mmu_ack", false,-1);
    tracep->declBit(c+1107,"mmu_err", false,-1);
    tracep->declBit(c+4366,"mmus_stall", false,-1);
    tracep->declBit(c+1108,"mmus_ack", false,-1);
    tracep->declBus(c+966,"mmu_addr", false,-1, 21,0);
    tracep->declArray(c+1066,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+266,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4365,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4366,"cpu_miss", false,-1);
    tracep->declBit(c+1105,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1106,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+266,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4366,"pf_return_stb", false,-1);
    tracep->declBit(c+4366,"pf_return_we", false,-1);
    tracep->declBit(c+4366,"pf_return_cachable", false,-1);
    tracep->declBus(c+4516,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4516,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+241,"ext_cyc", false,-1);
    tracep->declBit(c+242,"ext_stb", false,-1);
    tracep->declBit(c+243,"ext_we", false,-1);
    tracep->declBit(c+1109,"ext_err", false,-1);
    tracep->declBus(c+244,"ext_addr", false,-1, 21,0);
    tracep->declArray(c+245,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+261,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+266,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1110,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1111,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1112,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1113,"last_sys_stb", false,-1);
    tracep->declBit(c+1114,"cmd_read_ack", false,-1);
    tracep->declBit(c+1108,"r_mmus_ack", false,-1);
    tracep->declBit(c+1115,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1116,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1117,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4366,"mtc_stall", false,-1);
    tracep->declBit(c+1118,"mtc_ack", false,-1);
    tracep->declBit(c+4366,"moc_stall", false,-1);
    tracep->declBit(c+1119,"moc_ack", false,-1);
    tracep->declBit(c+4366,"mpc_stall", false,-1);
    tracep->declBit(c+1120,"mpc_ack", false,-1);
    tracep->declBit(c+4366,"mic_stall", false,-1);
    tracep->declBit(c+1121,"mic_ack", false,-1);
    tracep->declBit(c+4366,"utc_stall", false,-1);
    tracep->declBit(c+1122,"utc_ack", false,-1);
    tracep->declBit(c+4366,"uoc_stall", false,-1);
    tracep->declBit(c+1123,"uoc_ack", false,-1);
    tracep->declBit(c+4366,"upc_stall", false,-1);
    tracep->declBit(c+1124,"upc_ack", false,-1);
    tracep->declBit(c+4366,"uic_stall", false,-1);
    tracep->declBit(c+1125,"uic_ack", false,-1);
    tracep->declBus(c+1126,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1127,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1128,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1129,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1130,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1131,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1132,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1133,"uic_data", false,-1, 31,0);
    tracep->declBus(c+958,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1020,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1134,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1121,"o_wb_ack", false,-1);
    tracep->declBus(c+1129,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+953,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+48,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1135,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1119,"o_wb_ack", false,-1);
    tracep->declBus(c+1127,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+951,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1019,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1136,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1120,"o_wb_ack", false,-1);
    tracep->declBus(c+1128,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+952,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1138,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1118,"o_wb_ack", false,-1);
    tracep->declBus(c+1126,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+950,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1139,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1140,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1125,"o_wb_ack", false,-1);
    tracep->declBus(c+1133,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+957,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+49,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1141,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1123,"o_wb_ack", false,-1);
    tracep->declBus(c+1131,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+955,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1142,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1143,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1124,"o_wb_ack", false,-1);
    tracep->declBus(c+1132,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+956,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4366,"i_reset", false,-1);
    tracep->declBit(c+1144,"i_event", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1145,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1122,"o_wb_ack", false,-1);
    tracep->declBus(c+1130,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+954,"o_int", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4366,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4362,"AW", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+37,"i_reset", false,-1);
    tracep->declBit(c+43,"i_wb_cyc", false,-1);
    tracep->declBit(c+44,"i_wb_stb", false,-1);
    tracep->declBit(c+45,"i_wb_we", false,-1);
    tracep->declBus(c+46,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+47,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+166,"o_wb_stall", false,-1);
    tracep->declBit(c+167,"o_wb_ack", false,-1);
    tracep->declBus(c+453,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+985,"o_wb_err", false,-1);
    tracep->declBit(c+976,"o_dly_cyc", false,-1);
    tracep->declBit(c+977,"o_dly_stb", false,-1);
    tracep->declBit(c+978,"o_dly_we", false,-1);
    tracep->declBus(c+979,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+980,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+984,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+982,"i_dly_stall", false,-1);
    tracep->declBit(c+981,"i_dly_ack", false,-1);
    tracep->declBus(c+983,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4366,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+166,"r_stb", false,-1);
    tracep->declBit(c+1146,"r_we", false,-1);
    tracep->declBus(c+1147,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBus(c+1149,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4351,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4479,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4404,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+961,"i_swb_cyc", false,-1);
    tracep->declBit(c+1021,"i_swb_stb", false,-1);
    tracep->declBit(c+963,"i_swb_we", false,-1);
    tracep->declBus(c+1150,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+965,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_swb_stall", false,-1);
    tracep->declBit(c+1024,"o_swb_ack", false,-1);
    tracep->declBus(c+1023,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+1025,"o_mwb_cyc", false,-1);
    tracep->declBit(c+1026,"o_mwb_stb", false,-1);
    tracep->declBit(c+1027,"o_mwb_we", false,-1);
    tracep->declBus(c+1030,"o_mwb_addr", false,-1, 21,0);
    tracep->declArray(c+1031,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1047,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+1028,"i_mwb_stall", false,-1);
    tracep->declBit(c+1029,"i_mwb_ack", false,-1);
    tracep->declArray(c+266,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+1022,"i_mwb_err", false,-1);
    tracep->declBus(c+1050,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+949,"o_interrupt", false,-1);
    tracep->declBus(c+4517,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4354,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1151,"dma_request", false,-1);
    tracep->declBit(c+1152,"dma_abort", false,-1);
    tracep->declBit(c+1153,"dma_busy", false,-1);
    tracep->declBit(c+1154,"dma_err", false,-1);
    tracep->declBus(c+1155,"dma_src", false,-1, 27,0);
    tracep->declBus(c+1156,"dma_dst", false,-1, 27,0);
    tracep->declBus(c+1157,"read_addr", false,-1, 27,0);
    tracep->declBus(c+1158,"write_addr", false,-1, 27,0);
    tracep->declBus(c+1159,"dma_length", false,-1, 27,0);
    tracep->declBus(c+1160,"remaining_len", false,-1, 27,0);
    tracep->declBus(c+1161,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1162,"dma_trigger", false,-1);
    tracep->declBit(c+1163,"mm2s_request", false,-1);
    tracep->declBit(c+1164,"s2mm_request", false,-1);
    tracep->declBit(c+1165,"mm2s_busy", false,-1);
    tracep->declBit(c+1166,"s2mm_busy", false,-1);
    tracep->declBit(c+1167,"mm2s_err", false,-1);
    tracep->declBit(c+1168,"s2mm_err", false,-1);
    tracep->declBit(c+1169,"mm2s_inc", false,-1);
    tracep->declBit(c+1170,"s2mm_inc", false,-1);
    tracep->declBus(c+1171,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1172,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1173,"mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1174,"s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1175,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1175,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1176,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1177,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4366,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1178,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1179,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1180,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1181,"mm2s_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1182,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1184,"mm2s_valid", false,-1);
    tracep->declBit(c+1185,"mm2s_ready", false,-1);
    tracep->declBit(c+1186,"mm2s_last", false,-1);
    tracep->declArray(c+1187,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1203,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1204,"rx_valid", false,-1);
    tracep->declBit(c+1205,"rx_ready", false,-1);
    tracep->declBit(c+1206,"rx_last", false,-1);
    tracep->declArray(c+1207,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1223,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1224,"tx_valid", false,-1);
    tracep->declBit(c+1225,"tx_ready", false,-1);
    tracep->declBit(c+1226,"tx_last", false,-1);
    tracep->declArray(c+1227,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1243,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1244,"sfifo_full", false,-1);
    tracep->declBit(c+1245,"sfifo_empty", false,-1);
    tracep->declBus(c+1246,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1247,"s2mm_valid", false,-1);
    tracep->declBit(c+1248,"s2mm_ready", false,-1);
    tracep->declBit(c+1249,"s2mm_last", false,-1);
    tracep->declArray(c+1250,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1266,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1267,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1268,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4367,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1269,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1270,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1271,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1272,"s2mm_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1031,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1273,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1025,"wb_cyc", false,-1);
    tracep->declBit(c+1026,"wb_stb", false,-1);
    tracep->declBit(c+1027,"wb_we", false,-1);
    tracep->declBit(c+1028,"wb_stall", false,-1);
    tracep->declBit(c+1029,"wb_ack", false,-1);
    tracep->declBit(c+1022,"wb_err", false,-1);
    tracep->declBus(c+1030,"wb_addr", false,-1, 21,0);
    tracep->declArray(c+1031,"wb_data", false,-1, 511,0);
    tracep->declArray(c+266,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1047,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declArray(c+4518,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4403,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1176,"i_a_cyc", false,-1);
    tracep->declBit(c+1177,"i_a_stb", false,-1);
    tracep->declBit(c+4366,"i_a_we", false,-1);
    tracep->declBus(c+1181,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1031,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1182,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1178,"o_a_stall", false,-1);
    tracep->declBit(c+1179,"o_a_ack", false,-1);
    tracep->declBit(c+1180,"o_a_err", false,-1);
    tracep->declBit(c+1267,"i_b_cyc", false,-1);
    tracep->declBit(c+1268,"i_b_stb", false,-1);
    tracep->declBit(c+4367,"i_b_we", false,-1);
    tracep->declBus(c+1272,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1031,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1273,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1269,"o_b_stall", false,-1);
    tracep->declBit(c+1270,"o_b_ack", false,-1);
    tracep->declBit(c+1271,"o_b_err", false,-1);
    tracep->declBit(c+1025,"o_cyc", false,-1);
    tracep->declBit(c+1026,"o_stb", false,-1);
    tracep->declBit(c+1027,"o_we", false,-1);
    tracep->declBus(c+1030,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1031,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1047,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1028,"i_stall", false,-1);
    tracep->declBit(c+1029,"i_ack", false,-1);
    tracep->declBit(c+1022,"i_err", false,-1);
    tracep->declBit(c+1275,"r_a_owner", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1276,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4351,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4404,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4479,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4521,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4479,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+961,"i_cyc", false,-1);
    tracep->declBit(c+1021,"i_stb", false,-1);
    tracep->declBit(c+963,"i_we", false,-1);
    tracep->declBus(c+1150,"i_addr", false,-1, 1,0);
    tracep->declBus(c+965,"i_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_stall", false,-1);
    tracep->declBit(c+1024,"o_ack", false,-1);
    tracep->declBus(c+1023,"o_data", false,-1, 31,0);
    tracep->declBit(c+1151,"o_dma_request", false,-1);
    tracep->declBit(c+1152,"o_dma_abort", false,-1);
    tracep->declBit(c+1153,"i_dma_busy", false,-1);
    tracep->declBit(c+1154,"i_dma_err", false,-1);
    tracep->declBus(c+1155,"o_src_addr", false,-1, 27,0);
    tracep->declBus(c+1156,"o_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1159,"o_length", false,-1, 27,0);
    tracep->declBus(c+1161,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1169,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1170,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1171,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1172,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1162,"o_trigger", false,-1);
    tracep->declBus(c+1157,"i_current_src", false,-1, 27,0);
    tracep->declBus(c+1158,"i_current_dst", false,-1, 27,0);
    tracep->declBus(c+1160,"i_remaining_len", false,-1, 27,0);
    tracep->declBus(c+1050,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+949,"o_interrupt", false,-1);
    tracep->declBit(c+1277,"int_trigger", false,-1);
    tracep->declBit(c+1278,"r_err", false,-1);
    tracep->declBit(c+1279,"r_zero_len", false,-1);
    tracep->declBit(c+1280,"r_busy", false,-1);
    tracep->declBus(c+1281,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1282,"next_src", false,-1, 31,0);
    tracep->declBus(c+1283,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1284,"next_len", false,-1, 31,0);
    tracep->declBus(c+1285,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1286,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4366,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4366,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4479,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4351,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1152,"i_soft_reset", false,-1);
    tracep->declBit(c+1151,"i_dma_request", false,-1);
    tracep->declBit(c+1153,"o_dma_busy", false,-1);
    tracep->declBit(c+1154,"o_dma_err", false,-1);
    tracep->declBus(c+1155,"i_src_addr", false,-1, 27,0);
    tracep->declBus(c+1156,"i_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1159,"i_length", false,-1, 27,0);
    tracep->declBus(c+1161,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1160,"o_remaining_len", false,-1, 27,0);
    tracep->declBit(c+1162,"i_trigger", false,-1);
    tracep->declBit(c+1163,"o_mm2s_request", false,-1);
    tracep->declBit(c+1165,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1167,"i_mm2s_err", false,-1);
    tracep->declBit(c+1169,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1173,"o_mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1175,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1164,"o_s2mm_request", false,-1);
    tracep->declBit(c+1166,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1168,"i_s2mm_err", false,-1);
    tracep->declBit(c+1170,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1174,"o_s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1175,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4406,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4407,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4408,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4409,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1160,"r_length", false,-1, 27,0);
    tracep->declBus(c+1175,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1287,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4351,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+1288,"i_reset", false,-1);
    tracep->declBit(c+1163,"i_request", false,-1);
    tracep->declBit(c+1165,"o_busy", false,-1);
    tracep->declBit(c+1167,"o_err", false,-1);
    tracep->declBit(c+1169,"i_inc", false,-1);
    tracep->declBus(c+1171,"i_size", false,-1, 1,0);
    tracep->declBus(c+1175,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1173,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1176,"o_rd_cyc", false,-1);
    tracep->declBit(c+1177,"o_rd_stb", false,-1);
    tracep->declBit(c+4366,"o_rd_we", false,-1);
    tracep->declBus(c+1181,"o_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1182,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1178,"i_rd_stall", false,-1);
    tracep->declBit(c+1179,"i_rd_ack", false,-1);
    tracep->declArray(c+266,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1180,"i_rd_err", false,-1);
    tracep->declBit(c+1184,"M_VALID", false,-1);
    tracep->declBit(c+1185,"M_READY", false,-1);
    tracep->declArray(c+1187,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1203,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1186,"M_LAST", false,-1);
    tracep->declBus(c+4409,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4408,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4407,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4406,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1289,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1290,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1291,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1292,"first_size", false,-1, 6,0);
    tracep->declBus(c+1293,"next_addr", false,-1, 27,0);
    tracep->declBus(c+1294,"last_request_addr", false,-1, 27,0);
    tracep->declBus(c+1295,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1296,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1297,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1299,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1301,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1303,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1305,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1306,"fill", false,-1, 7,0);
    tracep->declBus(c+1307,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1184,"m_valid", false,-1);
    tracep->declBit(c+1186,"m_last", false,-1);
    tracep->declArray(c+1187,"sreg", false,-1, 511,0);
    tracep->declBus(c+1203,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1308,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1309,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1310,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1311,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1327,"r_inc", false,-1);
    tracep->declBus(c+1328,"r_size", false,-1, 1,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1152,"i_soft_reset", false,-1);
    tracep->declBit(c+1184,"S_VALID", false,-1);
    tracep->declBit(c+1185,"S_READY", false,-1);
    tracep->declArray(c+1187,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1203,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1186,"S_LAST", false,-1);
    tracep->declBit(c+1204,"M_VALID", false,-1);
    tracep->declBit(c+1205,"M_READY", false,-1);
    tracep->declArray(c+1207,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1223,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1206,"M_LAST", false,-1);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1329,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1361,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1362,"fill", false,-1, 7,0);
    tracep->declBit(c+1204,"m_valid", false,-1);
    tracep->declBit(c+1206,"m_last", false,-1);
    tracep->declBit(c+1363,"next_last", false,-1);
    tracep->declBit(c+1364,"r_last", false,-1);
    tracep->declBit(c+1365,"r_full", false,-1);
    tracep->declBus(c+1223,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1366,"shift", false,-1, 5,0);
    tracep->declArray(c+1367,"s_data", false,-1, 511,0);
    tracep->declBus(c+4522,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4351,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+1288,"i_reset", false,-1);
    tracep->declBit(c+1164,"i_request", false,-1);
    tracep->declBit(c+1166,"o_busy", false,-1);
    tracep->declBit(c+1168,"o_err", false,-1);
    tracep->declBit(c+1170,"i_inc", false,-1);
    tracep->declBus(c+1172,"i_size", false,-1, 1,0);
    tracep->declBus(c+1174,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1247,"S_VALID", false,-1);
    tracep->declBit(c+1248,"S_READY", false,-1);
    tracep->declArray(c+1250,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1266,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1249,"S_LAST", false,-1);
    tracep->declBit(c+1267,"o_wr_cyc", false,-1);
    tracep->declBit(c+1268,"o_wr_stb", false,-1);
    tracep->declBit(c+4367,"o_wr_we", false,-1);
    tracep->declBus(c+1272,"o_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1031,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1273,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1269,"i_wr_stall", false,-1);
    tracep->declBit(c+1270,"i_wr_ack", false,-1);
    tracep->declArray(c+266,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1271,"i_wr_err", false,-1);
    tracep->declBus(c+4409,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4408,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4407,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4406,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+1383,"r_inc", false,-1);
    tracep->declBus(c+1384,"r_size", false,-1, 1,0);
    tracep->declBus(c+1385,"next_addr", false,-1, 28,0);
    tracep->declBus(c+1386,"subaddr", false,-1, 5,0);
    tracep->declArray(c+1387,"next_data", false,-1, 1023,0);
    tracep->declArray(c+1419,"r_data", false,-1, 511,0);
    tracep->declArray(c+1435,"next_sel", false,-1, 127,0);
    tracep->declArray(c+1439,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+1443,"r_sel", false,-1, 63,0);
    tracep->declBit(c+1445,"r_last", false,-1);
    tracep->declBus(c+1446,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+1447,"wb_pipeline_full", false,-1);
    tracep->declBit(c+1448,"addr_overflow", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4517,"BW", false,-1, 31,0);
    tracep->declBus(c+4354,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+1288,"i_reset", false,-1);
    tracep->declBit(c+1204,"i_wr", false,-1);
    tracep->declArray(c+1449,"i_data", false,-1, 519,0);
    tracep->declBit(c+1244,"o_full", false,-1);
    tracep->declBus(c+1246,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1225,"i_rd", false,-1);
    tracep->declArray(c+1466,"o_data", false,-1, 519,0);
    tracep->declBit(c+1245,"o_empty", false,-1);
    tracep->declBus(c+4359,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1244,"r_full", false,-1);
    tracep->declBit(c+1245,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1483+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+1755,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+1756,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1757,"w_wr", false,-1);
    tracep->declBit(c+1758,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1152,"i_soft_reset", false,-1);
    tracep->declBus(c+1172,"i_size", false,-1, 1,0);
    tracep->declBit(c+1224,"S_VALID", false,-1);
    tracep->declBit(c+1225,"S_READY", false,-1);
    tracep->declArray(c+1227,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1243,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1226,"S_LAST", false,-1);
    tracep->declBit(c+1247,"M_VALID", false,-1);
    tracep->declBit(c+1248,"M_READY", false,-1);
    tracep->declArray(c+1250,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1266,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1249,"M_LAST", false,-1);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4409,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4408,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4407,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4406,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1247,"m_valid", false,-1);
    tracep->declBit(c+1249,"m_last", false,-1);
    tracep->declBit(c+1759,"r_last", false,-1);
    tracep->declBit(c+1760,"r_next", false,-1);
    tracep->declArray(c+1250,"sreg", false,-1, 511,0);
    tracep->declBus(c+1266,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1761,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+991,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+1762,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+990,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4523,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1061,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1061,"o_wb_ack", false,-1);
    tracep->declBus(c+1015,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+942,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1101,"o_interrupt", false,-1);
    tracep->declBus(c+1763,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1764,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1765,"r_mie", false,-1);
    tracep->declBit(c+1766,"w_any", false,-1);
    tracep->declBit(c+1767,"wb_write", false,-1);
    tracep->declBit(c+1768,"enable_ints", false,-1);
    tracep->declBit(c+1769,"disable_ints", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4523,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+1051,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1051,"o_wb_ack", false,-1);
    tracep->declBus(c+1052,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+943,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+944,"o_interrupt", false,-1);
    tracep->declBus(c+1770,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1771,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1772,"r_mie", false,-1);
    tracep->declBit(c+1773,"w_any", false,-1);
    tracep->declBit(c+1774,"wb_write", false,-1);
    tracep->declBit(c+1775,"enable_ints", false,-1);
    tracep->declBit(c+1776,"disable_ints", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+1049,"i_a_cyc", false,-1);
    tracep->declBit(c+1062,"i_a_stb", false,-1);
    tracep->declBit(c+1065,"i_a_we", false,-1);
    tracep->declBus(c+966,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1066,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1082,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1105,"o_a_stall", false,-1);
    tracep->declBit(c+1106,"o_a_ack", false,-1);
    tracep->declBit(c+1107,"o_a_err", false,-1);
    tracep->declBit(c+1025,"i_b_cyc", false,-1);
    tracep->declBit(c+1026,"i_b_stb", false,-1);
    tracep->declBit(c+1027,"i_b_we", false,-1);
    tracep->declBus(c+1030,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1031,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1047,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1028,"o_b_stall", false,-1);
    tracep->declBit(c+1029,"o_b_ack", false,-1);
    tracep->declBit(c+1022,"o_b_err", false,-1);
    tracep->declBit(c+241,"o_cyc", false,-1);
    tracep->declBit(c+242,"o_stb", false,-1);
    tracep->declBit(c+243,"o_we", false,-1);
    tracep->declBus(c+244,"o_adr", false,-1, 21,0);
    tracep->declArray(c+245,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+261,"o_sel", false,-1, 63,0);
    tracep->declBit(c+263,"i_stall", false,-1);
    tracep->declBit(c+264,"i_ack", false,-1);
    tracep->declBit(c+1109,"i_err", false,-1);
    tracep->declBit(c+1777,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4357,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4358,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4448,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4352,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4403,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4448,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4360,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1101,"i_interrupt", false,-1);
    tracep->declBit(c+960,"i_cpu_clken", false,-1);
    tracep->declBit(c+998,"i_halt", false,-1);
    tracep->declBit(c+1000,"i_clear_cache", false,-1);
    tracep->declBus(c+1003,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1001,"i_dbg_we", false,-1);
    tracep->declBus(c+1004,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1778,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1007,"o_dbg_stall", false,-1);
    tracep->declBit(c+1006,"o_halted", false,-1);
    tracep->declBus(c+1104,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1005,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+986,"o_break", false,-1);
    tracep->declBit(c+1049,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1062,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1063,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1064,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1065,"o_wb_we", false,-1);
    tracep->declBus(c+966,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1066,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1082,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1100,"i_wb_stall", false,-1);
    tracep->declBit(c+1102,"i_wb_ack", false,-1);
    tracep->declArray(c+1084,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1103,"i_wb_err", false,-1);
    tracep->declBit(c+48,"o_op_stall", false,-1);
    tracep->declBit(c+1019,"o_pf_stall", false,-1);
    tracep->declBit(c+1020,"o_i_count", false,-1);
    tracep->declBus(c+4365,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4296,"o_prof_stb", false,-1);
    tracep->declBus(c+4297,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4298,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4404,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4367,"cpu_clken", false,-1);
    tracep->declBit(c+4238,"cpu_clock", false,-1);
    tracep->declBit(c+4367,"clk_gate", false,-1);
    tracep->declBus(c+4365,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+1779,"pf_new_pc", false,-1);
    tracep->declBit(c+1780,"clear_icache", false,-1);
    tracep->declBit(c+50,"pf_ready", false,-1);
    tracep->declBus(c+1781,"pf_request_address", false,-1, 27,0);
    tracep->declBus(c+1782,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1783,"pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+1784,"pf_valid", false,-1);
    tracep->declBit(c+1785,"pf_illegal", false,-1);
    tracep->declBit(c+1786,"pf_cyc", false,-1);
    tracep->declBit(c+1787,"pf_stb", false,-1);
    tracep->declBit(c+1788,"pf_stall", false,-1);
    tracep->declBit(c+1789,"pf_ack", false,-1);
    tracep->declBit(c+1790,"pf_err", false,-1);
    tracep->declBus(c+1791,"pf_addr", false,-1, 21,0);
    tracep->declBit(c+4366,"pf_we", false,-1);
    tracep->declArray(c+4368,"pf_data", false,-1, 511,0);
    tracep->declBit(c+1792,"clear_dcache", false,-1);
    tracep->declBit(c+51,"mem_ce", false,-1);
    tracep->declBit(c+1793,"bus_lock", false,-1);
    tracep->declBus(c+1794,"mem_op", false,-1, 2,0);
    tracep->declBus(c+1795,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+1796,"mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+1797,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1066,"mem_data", false,-1, 511,0);
    tracep->declBus(c+1798,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+1799,"mem_busy", false,-1);
    tracep->declBit(c+1800,"mem_rdbusy", false,-1);
    tracep->declBit(c+1801,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+1802,"mem_valid", false,-1);
    tracep->declBit(c+1803,"mem_bus_err", false,-1);
    tracep->declBus(c+1804,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1805,"mem_result", false,-1, 31,0);
    tracep->declBit(c+1806,"mem_stb_lcl", false,-1);
    tracep->declBit(c+1807,"mem_stb_gbl", false,-1);
    tracep->declBit(c+1808,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+1809,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+1810,"mem_bus_addr", false,-1, 21,0);
    tracep->declBit(c+1811,"mem_we", false,-1);
    tracep->declBit(c+1812,"mem_stall", false,-1);
    tracep->declBit(c+1813,"mem_ack", false,-1);
    tracep->declBit(c+1814,"mem_err", false,-1);
    tracep->declQuad(c+1815,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+1007,"w_dbg_stall", false,-1);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4443,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4358,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4352,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4444,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4404,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4354,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4443,"CS", false,-1, 31,0);
    tracep->declBus(c+4352,"LS", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4354,"DP", false,-1, 31,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4406,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4407,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4408,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4409,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1792,"i_clear", false,-1);
    tracep->declBit(c+51,"i_pipe_stb", false,-1);
    tracep->declBit(c+1793,"i_lock", false,-1);
    tracep->declBus(c+1794,"i_op", false,-1, 2,0);
    tracep->declBus(c+1795,"i_addr", false,-1, 31,0);
    tracep->declBus(c+1797,"i_data", false,-1, 31,0);
    tracep->declBus(c+1798,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+1799,"o_busy", false,-1);
    tracep->declBit(c+1800,"o_rdbusy", false,-1);
    tracep->declBit(c+1801,"o_pipe_stalled", false,-1);
    tracep->declBit(c+1802,"o_valid", false,-1);
    tracep->declBit(c+1803,"o_err", false,-1);
    tracep->declBus(c+1804,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+1805,"o_data", false,-1, 31,0);
    tracep->declBit(c+1809,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1808,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+1807,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+1806,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+1811,"o_wb_we", false,-1);
    tracep->declBus(c+1810,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1066,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1815,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1812,"i_wb_stall", false,-1);
    tracep->declBit(c+1813,"i_wb_ack", false,-1);
    tracep->declBit(c+1814,"i_wb_err", false,-1);
    tracep->declArray(c+1084,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4448,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1817,"ik", false,-1, 31,0);
    tracep->declBit(c+1818,"cyc", false,-1);
    tracep->declBit(c+1819,"stb", false,-1);
    tracep->declBit(c+1820,"last_ack", false,-1);
    tracep->declBit(c+1821,"end_of_line", false,-1);
    tracep->declBit(c+1822,"last_line_stb", false,-1);
    tracep->declBit(c+1823,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1824,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+1825,"npending", false,-1, 4,0);
    tracep->declBus(c+1826,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1827+i*1,"c_vtags", true,(i+0), 18,0);
    }
    tracep->declBit(c+1835,"set_vflag", false,-1);
    tracep->declBus(c+1836,"state", false,-1, 1,0);
    tracep->declBus(c+1837,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+1838,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+1854,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+1870,"lock_gbl", false,-1);
    tracep->declBit(c+1871,"lock_lcl", false,-1);
    tracep->declBit(c+1872,"c_wr", false,-1);
    tracep->declArray(c+1873,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+1889,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+1891,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+1892,"last_tag", false,-1, 18,0);
    tracep->declBit(c+1893,"last_tag_valid", false,-1);
    tracep->declBus(c+1894,"i_cline", false,-1, 2,0);
    tracep->declBus(c+1895,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+1896,"cache_miss_inow", false,-1);
    tracep->declBit(c+1897,"w_cachable", false,-1);
    tracep->declBit(c+1898,"raw_cachable_address", false,-1);
    tracep->declBit(c+1899,"r_cachable", false,-1);
    tracep->declBit(c+1900,"r_svalid", false,-1);
    tracep->declBit(c+1901,"r_dvalid", false,-1);
    tracep->declBit(c+1902,"r_rd", false,-1);
    tracep->declBit(c+1903,"r_cache_miss", false,-1);
    tracep->declBit(c+1904,"r_rd_pending", false,-1);
    tracep->declBus(c+1905,"r_addr", false,-1, 21,0);
    tracep->declBus(c+1906,"r_cline", false,-1, 2,0);
    tracep->declBus(c+1907,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+1908,"r_ctag", false,-1, 18,0);
    tracep->declBit(c+1909,"wr_cstb", false,-1);
    tracep->declBit(c+1910,"r_iv", false,-1);
    tracep->declBit(c+1911,"in_cache", false,-1);
    tracep->declBus(c+1912,"r_itag", false,-1, 18,0);
    tracep->declBus(c+1913,"req_data", false,-1, 12,0);
    tracep->declBit(c+1914,"gie", false,-1);
    tracep->declArray(c+1915,"pre_data", false,-1, 511,0);
    tracep->declArray(c+1931,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+1947,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+1948,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+1815,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+1950,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+1951,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+1967,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1983+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+1999,"wraddr", false,-1, 4,0);
    tracep->declBus(c+2000,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4524,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+2001,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1898,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4366,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4443,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4358,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4352,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4401,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4410,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4443,"CW", false,-1, 31,0);
    tracep->declBus(c+4352,"LS", false,-1, 31,0);
    tracep->declBus(c+4401,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4404,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1779,"i_new_pc", false,-1);
    tracep->declBit(c+1780,"i_clear_cache", false,-1);
    tracep->declBit(c+50,"i_ready", false,-1);
    tracep->declBus(c+1781,"i_pc", false,-1, 27,0);
    tracep->declBit(c+1784,"o_valid", false,-1);
    tracep->declBit(c+1785,"o_illegal", false,-1);
    tracep->declBus(c+1782,"o_insn", false,-1, 31,0);
    tracep->declBus(c+1783,"o_pc", false,-1, 27,0);
    tracep->declBit(c+1786,"o_wb_cyc", false,-1);
    tracep->declBit(c+1787,"o_wb_stb", false,-1);
    tracep->declBit(c+4366,"o_wb_we", false,-1);
    tracep->declBus(c+1791,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4368,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+1788,"i_wb_stall", false,-1);
    tracep->declBit(c+1789,"i_wb_ack", false,-1);
    tracep->declBit(c+1790,"i_wb_err", false,-1);
    tracep->declArray(c+1084,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4364,"INLSB", false,-1, 31,0);
    tracep->declBit(c+2002,"r_v", false,-1);
    tracep->declArray(c+2003,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2019+i*1,"cache_tags", true,(i+0), 15,0);
    }
    tracep->declBus(c+2027,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+2028,"r_v_from_pc", false,-1);
    tracep->declBit(c+2029,"r_v_from_last", false,-1);
    tracep->declBit(c+2030,"rvsrc", false,-1);
    tracep->declBit(c+2031,"w_v_from_pc", false,-1);
    tracep->declBit(c+2032,"w_v_from_last", false,-1);
    tracep->declBus(c+2033,"lastpc", false,-1, 27,0);
    tracep->declBus(c+2034,"wraddr", false,-1, 5,0);
    tracep->declBus(c+2035,"pc_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2036,"last_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2037,"tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2038,"pc_tag", false,-1, 21,3);
    tracep->declBus(c+2039,"lasttag", false,-1, 21,3);
    tracep->declBit(c+2040,"illegal_valid", false,-1);
    tracep->declBus(c+2041,"illegal_cache", false,-1, 21,3);
    tracep->declArray(c+2042,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2058,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+1783,"r_pc", false,-1, 27,0);
    tracep->declBit(c+2074,"isrc", false,-1);
    tracep->declBus(c+2075,"delay", false,-1, 1,0);
    tracep->declBit(c+2076,"svmask", false,-1);
    tracep->declBit(c+2077,"last_ack", false,-1);
    tracep->declBit(c+2078,"needload", false,-1);
    tracep->declBit(c+2079,"last_addr", false,-1);
    tracep->declBit(c+2080,"bus_abort", false,-1);
    tracep->declBus(c+2081,"saddr", false,-1, 2,0);
    tracep->declBit(c+52,"w_advance", false,-1);
    tracep->declBit(c+2082,"w_invalidate_result", false,-1);
    tracep->declBus(c+2083,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2084,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2085,"shifted", false,-1, 511,0);
    tracep->declBus(c+2101,"shift", false,-1, 3,0);
    tracep->declBit(c+4366,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1809,"i_a_cyc_a", false,-1);
    tracep->declBit(c+1808,"i_a_cyc_b", false,-1);
    tracep->declBit(c+1807,"i_a_stb_a", false,-1);
    tracep->declBit(c+1806,"i_a_stb_b", false,-1);
    tracep->declBit(c+1811,"i_a_we", false,-1);
    tracep->declBus(c+1810,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1066,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1815,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1812,"o_a_stall", false,-1);
    tracep->declBit(c+1813,"o_a_ack", false,-1);
    tracep->declBit(c+1814,"o_a_err", false,-1);
    tracep->declBit(c+1786,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4366,"i_b_cyc_b", false,-1);
    tracep->declBit(c+1787,"i_b_stb_a", false,-1);
    tracep->declBit(c+4366,"i_b_stb_b", false,-1);
    tracep->declBit(c+4366,"i_b_we", false,-1);
    tracep->declBus(c+1791,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1066,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4384,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1788,"o_b_stall", false,-1);
    tracep->declBit(c+1789,"o_b_ack", false,-1);
    tracep->declBit(c+1790,"o_b_err", false,-1);
    tracep->declBit(c+1049,"o_cyc_a", false,-1);
    tracep->declBit(c+1063,"o_cyc_b", false,-1);
    tracep->declBit(c+1062,"o_stb_a", false,-1);
    tracep->declBit(c+1064,"o_stb_b", false,-1);
    tracep->declBit(c+1065,"o_we", false,-1);
    tracep->declBus(c+966,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1066,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1082,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1100,"i_stall", false,-1);
    tracep->declBit(c+1102,"i_ack", false,-1);
    tracep->declBit(c+1103,"i_err", false,-1);
    tracep->declBit(c+2102,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4420,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4357,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4352,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4403,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4420,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1101,"i_interrupt", false,-1);
    tracep->declBit(c+4367,"o_clken", false,-1);
    tracep->declBit(c+998,"i_halt", false,-1);
    tracep->declBit(c+1000,"i_clear_cache", false,-1);
    tracep->declBus(c+1003,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1001,"i_dbg_we", false,-1);
    tracep->declBus(c+1004,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1778,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1007,"o_dbg_stall", false,-1);
    tracep->declBus(c+1104,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1005,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+986,"o_break", false,-1);
    tracep->declBit(c+1779,"o_pf_new_pc", false,-1);
    tracep->declBit(c+1780,"o_clear_icache", false,-1);
    tracep->declBit(c+50,"o_pf_ready", false,-1);
    tracep->declBus(c+1781,"o_pf_request_address", false,-1, 27,0);
    tracep->declBit(c+1784,"i_pf_valid", false,-1);
    tracep->declBit(c+1785,"i_pf_illegal", false,-1);
    tracep->declBus(c+1782,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1783,"i_pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+1792,"o_clear_dcache", false,-1);
    tracep->declBit(c+51,"o_mem_ce", false,-1);
    tracep->declBit(c+1793,"o_bus_lock", false,-1);
    tracep->declBus(c+1794,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+1795,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+1797,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+1796,"o_mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+1798,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+1799,"i_mem_busy", false,-1);
    tracep->declBit(c+1800,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+1801,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+1802,"i_mem_valid", false,-1);
    tracep->declBit(c+1803,"i_bus_err", false,-1);
    tracep->declBus(c+1804,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1805,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+48,"o_op_stall", false,-1);
    tracep->declBit(c+1019,"o_pf_stall", false,-1);
    tracep->declBit(c+1020,"o_i_count", false,-1);
    tracep->declBus(c+4365,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4296,"o_prof_stb", false,-1);
    tracep->declBus(c+4297,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4298,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4525,"RESET_BUS_ADDRESS", false,-1, 25,0);
    tracep->declBus(c+4526,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4398,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4412,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4413,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4482,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4487,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4523,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4350,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4426,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4448,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4447,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4351,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4446,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4353,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4362,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4443,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4444,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4354,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2103+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2135,"flags", false,-1, 3,0);
    tracep->declBus(c+2136,"iflags", false,-1, 3,0);
    tracep->declBus(c+2137,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2138,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2139,"break_en", false,-1);
    tracep->declBit(c+2140,"user_step", false,-1);
    tracep->declBit(c+2141,"sleep", false,-1);
    tracep->declBit(c+2142,"r_halted", false,-1);
    tracep->declBit(c+2143,"break_pending", false,-1);
    tracep->declBit(c+2144,"trap", false,-1);
    tracep->declBit(c+2145,"gie", false,-1);
    tracep->declBit(c+2146,"ubreak", false,-1);
    tracep->declBit(c+2147,"pending_interrupt", false,-1);
    tracep->declBit(c+2148,"stepped", false,-1);
    tracep->declBit(c+2149,"step", false,-1);
    tracep->declBit(c+2150,"ill_err_u", false,-1);
    tracep->declBit(c+2151,"ill_err_i", false,-1);
    tracep->declBit(c+2152,"ibus_err_flag", false,-1);
    tracep->declBit(c+2153,"ubus_err_flag", false,-1);
    tracep->declBit(c+2154,"idiv_err_flag", false,-1);
    tracep->declBit(c+2155,"udiv_err_flag", false,-1);
    tracep->declBit(c+4366,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4366,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2156,"ihalt_phase", false,-1);
    tracep->declBit(c+2157,"uhalt_phase", false,-1);
    tracep->declBit(c+2158,"master_ce", false,-1);
    tracep->declBit(c+53,"master_stall", false,-1);
    tracep->declBus(c+2159,"pf_pc", false,-1, 27,0);
    tracep->declBit(c+2160,"new_pc", false,-1);
    tracep->declBit(c+2160,"clear_pipeline", false,-1);
    tracep->declBit(c+54,"dcd_stalled", false,-1);
    tracep->declBit(c+2145,"pf_gie", false,-1);
    tracep->declBus(c+2161,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+55,"dcd_ce", false,-1);
    tracep->declBit(c+2162,"dcd_phase", false,-1);
    tracep->declBus(c+2163,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2164,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2165,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2166,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2167,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2168,"dcd_Acc", false,-1);
    tracep->declBit(c+2169,"dcd_Bcc", false,-1);
    tracep->declBit(c+2170,"dcd_Apc", false,-1);
    tracep->declBit(c+2171,"dcd_Bpc", false,-1);
    tracep->declBit(c+2172,"dcd_Rcc", false,-1);
    tracep->declBit(c+2173,"dcd_Rpc", false,-1);
    tracep->declBus(c+2174,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2175,"dcd_wR", false,-1);
    tracep->declBit(c+2176,"dcd_rA", false,-1);
    tracep->declBit(c+2177,"dcd_rB", false,-1);
    tracep->declBit(c+2178,"dcd_ALU", false,-1);
    tracep->declBit(c+2179,"dcd_M", false,-1);
    tracep->declBit(c+2180,"dcd_DIV", false,-1);
    tracep->declBit(c+2181,"dcd_FP", false,-1);
    tracep->declBit(c+2182,"dcd_wF", false,-1);
    tracep->declBit(c+2145,"dcd_gie", false,-1);
    tracep->declBit(c+2183,"dcd_break", false,-1);
    tracep->declBit(c+2184,"dcd_lock", false,-1);
    tracep->declBit(c+2185,"dcd_pipe", false,-1);
    tracep->declBit(c+2186,"dcd_ljmp", false,-1);
    tracep->declBit(c+2187,"dcd_valid", false,-1);
    tracep->declBus(c+4321,"dcd_pc", false,-1, 27,0);
    tracep->declBus(c+2188,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2189,"dcd_zI", false,-1);
    tracep->declBit(c+56,"dcd_A_stall", false,-1);
    tracep->declBit(c+57,"dcd_B_stall", false,-1);
    tracep->declBit(c+4322,"dcd_F_stall", false,-1);
    tracep->declBit(c+2190,"dcd_illegal", false,-1);
    tracep->declBit(c+2191,"dcd_early_branch", false,-1);
    tracep->declBit(c+2192,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2193,"dcd_branch_pc", false,-1, 27,0);
    tracep->declBit(c+4323,"dcd_sim", false,-1);
    tracep->declBus(c+4324,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2194,"prelock_stall", false,-1);
    tracep->declBit(c+2195,"last_lock_insn", false,-1);
    tracep->declBit(c+2196,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2197,"pending_sreg_write", false,-1);
    tracep->declBit(c+4325,"op_valid", false,-1);
    tracep->declBit(c+2198,"op_valid_mem", false,-1);
    tracep->declBit(c+2199,"op_valid_alu", false,-1);
    tracep->declBit(c+2200,"op_valid_div", false,-1);
    tracep->declBit(c+2201,"op_valid_fpu", false,-1);
    tracep->declBit(c+58,"op_stall", false,-1);
    tracep->declBus(c+2202,"op_opn", false,-1, 3,0);
    tracep->declBus(c+1798,"op_R", false,-1, 4,0);
    tracep->declBit(c+2203,"op_Rcc", false,-1);
    tracep->declBus(c+2204,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2205,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2206,"op_rA", false,-1);
    tracep->declBit(c+2207,"op_rB", false,-1);
    tracep->declBus(c+2208,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2209,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2210,"op_pc", false,-1, 27,0);
    tracep->declBus(c+2211,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2212,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+1797,"op_Av", false,-1, 31,0);
    tracep->declBus(c+1795,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+59,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+60,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2213,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2214,"op_wR", false,-1);
    tracep->declBit(c+2215,"op_wF", false,-1);
    tracep->declBit(c+2145,"op_gie", false,-1);
    tracep->declBus(c+2216,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2217,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2218,"op_F", false,-1, 7,0);
    tracep->declBit(c+61,"op_ce", false,-1);
    tracep->declBit(c+2219,"op_phase", false,-1);
    tracep->declBit(c+2220,"op_pipe", false,-1);
    tracep->declBit(c+2221,"r_op_break", false,-1);
    tracep->declBit(c+2222,"w_op_valid", false,-1);
    tracep->declBit(c+4366,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4527,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2223,"op_illegal", false,-1);
    tracep->declBit(c+2221,"op_break", false,-1);
    tracep->declBit(c+2224,"op_lock", false,-1);
    tracep->declBit(c+4326,"op_sim", false,-1);
    tracep->declBus(c+4327,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4328,"alu_sim", false,-1);
    tracep->declBus(c+4329,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2225,"alu_pc", false,-1, 27,0);
    tracep->declBus(c+2226,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2227,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2228,"mem_pc_valid", false,-1);
    tracep->declBit(c+2229,"alu_pc_valid", false,-1);
    tracep->declBit(c+2230,"alu_phase", false,-1);
    tracep->declBit(c+4330,"alu_ce", false,-1);
    tracep->declBit(c+62,"alu_stall", false,-1);
    tracep->declBus(c+2231,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2232,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2233,"alu_valid", false,-1);
    tracep->declBit(c+2234,"alu_busy", false,-1);
    tracep->declBit(c+2235,"set_cond", false,-1);
    tracep->declBit(c+2236,"alu_wR", false,-1);
    tracep->declBit(c+2237,"alu_wF", false,-1);
    tracep->declBit(c+2145,"alu_gie", false,-1);
    tracep->declBit(c+2238,"alu_illegal", false,-1);
    tracep->declBit(c+63,"mem_ce", false,-1);
    tracep->declBit(c+64,"mem_stalled", false,-1);
    tracep->declBit(c+65,"div_ce", false,-1);
    tracep->declBit(c+2239,"div_error", false,-1);
    tracep->declBit(c+2240,"div_busy", false,-1);
    tracep->declBit(c+2241,"div_valid", false,-1);
    tracep->declBus(c+2242,"div_result", false,-1, 31,0);
    tracep->declBus(c+2243,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4366,"fpu_ce", false,-1);
    tracep->declBit(c+4366,"fpu_error", false,-1);
    tracep->declBit(c+4366,"fpu_busy", false,-1);
    tracep->declBit(c+4366,"fpu_valid", false,-1);
    tracep->declBus(c+4365,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4412,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+66,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2244,"dbgv", false,-1);
    tracep->declBit(c+2245,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2246,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2247,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2248,"r_dbg_stall", false,-1);
    tracep->declBit(c+2249,"wr_write_pc", false,-1);
    tracep->declBit(c+2250,"wr_write_cc", false,-1);
    tracep->declBit(c+2251,"wr_write_scc", false,-1);
    tracep->declBit(c+2252,"wr_write_ucc", false,-1);
    tracep->declBit(c+2253,"wr_reg_ce", false,-1);
    tracep->declBit(c+2254,"wr_flags_ce", false,-1);
    tracep->declBus(c+2255,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2256,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2257,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2258,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2259,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2260,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2261,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2262,"ipc", false,-1, 27,0);
    tracep->declBus(c+2263,"upc", false,-1, 27,0);
    tracep->declBit(c+2264,"last_write_to_cc", false,-1);
    tracep->declBit(c+2265,"cc_write_hold", false,-1);
    tracep->declBit(c+1780,"r_clear_icache", false,-1);
    tracep->declBit(c+67,"pfpcset", false,-1);
    tracep->declBus(c+68,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4367,"w_clken", false,-1);
    tracep->declBus(c+2266,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2267,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2268,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+69,"avsrc", false,-1, 2,0);
    tracep->declBus(c+70,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2269,"bisrc", false,-1, 1,0);
    tracep->declBit(c+71,"cpu_sim", false,-1);
    tracep->declBus(c+4403,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2270,"r_alu_sim", false,-1);
    tracep->declBus(c+2271,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2272,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2194,"r_prelock_stall", false,-1);
    tracep->declBus(c+2273,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+1796,"r_lock_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+1792,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2154,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2155,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4444,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+2274,"i_reset", false,-1);
    tracep->declBit(c+65,"i_wr", false,-1);
    tracep->declBit(c+2275,"i_signed", false,-1);
    tracep->declBus(c+1797,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+1795,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2240,"o_busy", false,-1);
    tracep->declBit(c+2241,"o_valid", false,-1);
    tracep->declBit(c+2239,"o_err", false,-1);
    tracep->declBus(c+2242,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2243,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2276,"r_busy", false,-1);
    tracep->declBus(c+2277,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2278,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2280,"diff", false,-1, 32,0);
    tracep->declBit(c+2282,"r_sign", false,-1);
    tracep->declBit(c+2283,"pre_sign", false,-1);
    tracep->declBit(c+2284,"r_z", false,-1);
    tracep->declBit(c+2285,"r_c", false,-1);
    tracep->declBit(c+2286,"last_bit", false,-1);
    tracep->declBus(c+2287,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2288,"zero_divisor", false,-1);
    tracep->declBit(c+2289,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2202,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2225,"r_alu_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2230,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4366,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4366,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2156,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2224,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2220,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2196,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2197,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2214,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2143,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2290,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2148,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2291,"prof_stb", false,-1);
    tracep->declBus(c+2292,"prof_addr", false,-1, 27,0);
    tracep->declBus(c+2293,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2157,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2219,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+1798,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2204,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2205,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2206,"r_op_rA", false,-1);
    tracep->declBit(c+2207,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2294,"r_op_sim", false,-1);
    tracep->declBus(c+2295,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2296,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1104,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2238,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2145,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2210,"r_op_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2144,"r_trap", false,-1);
    tracep->declBit(c+2146,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2153,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2150,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2263,"r_upc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4366,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4352,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+2274,"i_reset", false,-1);
    tracep->declBit(c+4330,"i_stb", false,-1);
    tracep->declBus(c+2202,"i_op", false,-1, 3,0);
    tracep->declBus(c+1797,"i_a", false,-1, 31,0);
    tracep->declBus(c+1795,"i_b", false,-1, 31,0);
    tracep->declBus(c+2231,"o_c", false,-1, 31,0);
    tracep->declBus(c+2232,"o_f", false,-1, 3,0);
    tracep->declBit(c+2233,"o_valid", false,-1);
    tracep->declBit(c+2234,"o_busy", false,-1);
    tracep->declBus(c+2297,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2298,"z", false,-1);
    tracep->declBit(c+2299,"n", false,-1);
    tracep->declBit(c+2300,"v", false,-1);
    tracep->declBit(c+2301,"vx", false,-1);
    tracep->declBit(c+2302,"c", false,-1);
    tracep->declBit(c+2303,"pre_sign", false,-1);
    tracep->declBit(c+2304,"set_ovfl", false,-1);
    tracep->declBit(c+2305,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2306,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2308,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2310,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2312,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2314,"mpyhi", false,-1);
    tracep->declBit(c+2315,"mpybusy", false,-1);
    tracep->declBit(c+2316,"mpydone", false,-1);
    tracep->declBit(c+72,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2234,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2317,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2319,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4352,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+2274,"i_reset", false,-1);
    tracep->declBit(c+72,"i_stb", false,-1);
    tracep->declBus(c+2321,"i_op", false,-1, 1,0);
    tracep->declBus(c+1797,"i_a", false,-1, 31,0);
    tracep->declBus(c+1795,"i_b", false,-1, 31,0);
    tracep->declBit(c+2316,"o_valid", false,-1);
    tracep->declBit(c+2315,"o_busy", false,-1);
    tracep->declQuad(c+2312,"o_result", false,-1, 63,0);
    tracep->declBit(c+2314,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2322,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2324,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2326,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2327,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2328,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2329,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2314,"r_hi", false,-1);
    tracep->declQuad(c+2330,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2332,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2334,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2336,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4420,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4420,"AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+2338,"i_reset", false,-1);
    tracep->declBit(c+55,"i_ce", false,-1);
    tracep->declBit(c+54,"i_stalled", false,-1);
    tracep->declBus(c+1782,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2145,"i_gie", false,-1);
    tracep->declBus(c+1783,"i_pc", false,-1, 27,0);
    tracep->declBit(c+1784,"i_pf_valid", false,-1);
    tracep->declBit(c+1785,"i_illegal", false,-1);
    tracep->declBit(c+2187,"o_valid", false,-1);
    tracep->declBit(c+2162,"o_phase", false,-1);
    tracep->declBit(c+2190,"o_illegal", false,-1);
    tracep->declBus(c+4321,"o_pc", false,-1, 27,0);
    tracep->declBus(c+2266,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2267,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2268,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2166,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2167,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2188,"o_I", false,-1, 31,0);
    tracep->declBit(c+2189,"o_zI", false,-1);
    tracep->declBus(c+2174,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2182,"o_wF", false,-1);
    tracep->declBus(c+2161,"o_op", false,-1, 3,0);
    tracep->declBit(c+2178,"o_ALU", false,-1);
    tracep->declBit(c+2179,"o_M", false,-1);
    tracep->declBit(c+2180,"o_DV", false,-1);
    tracep->declBit(c+2181,"o_FP", false,-1);
    tracep->declBit(c+2183,"o_break", false,-1);
    tracep->declBit(c+2184,"o_lock", false,-1);
    tracep->declBit(c+2175,"o_wR", false,-1);
    tracep->declBit(c+2176,"o_rA", false,-1);
    tracep->declBit(c+2177,"o_rB", false,-1);
    tracep->declBit(c+2191,"o_early_branch", false,-1);
    tracep->declBit(c+2192,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2193,"o_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2186,"o_ljmp", false,-1);
    tracep->declBit(c+2185,"o_pipe", false,-1);
    tracep->declBit(c+4323,"o_sim", false,-1);
    tracep->declBus(c+4324,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4487,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4526,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4398,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4493,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4422,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4423,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2339,"w_op", false,-1, 4,0);
    tracep->declBit(c+2340,"w_ldi", false,-1);
    tracep->declBit(c+2341,"w_mov", false,-1);
    tracep->declBit(c+2342,"w_cmptst", false,-1);
    tracep->declBit(c+2343,"w_ldilo", false,-1);
    tracep->declBit(c+2344,"w_ALU", false,-1);
    tracep->declBit(c+2345,"w_brev", false,-1);
    tracep->declBit(c+2346,"w_noop", false,-1);
    tracep->declBit(c+2347,"w_lock", false,-1);
    tracep->declBit(c+2348,"w_sim", false,-1);
    tracep->declBit(c+2349,"w_break", false,-1);
    tracep->declBit(c+2350,"w_special", false,-1);
    tracep->declBit(c+2351,"w_add", false,-1);
    tracep->declBit(c+2352,"w_mpy", false,-1);
    tracep->declBus(c+2166,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2167,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2166,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2353,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2354,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2353,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2354,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2355,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2356,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2357,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2358,"w_wF", false,-1);
    tracep->declBit(c+2359,"w_mem", false,-1);
    tracep->declBit(c+2360,"w_sto", false,-1);
    tracep->declBit(c+2361,"w_div", false,-1);
    tracep->declBit(c+2362,"w_fpu", false,-1);
    tracep->declBit(c+2363,"w_wR", false,-1);
    tracep->declBit(c+2364,"w_rA", false,-1);
    tracep->declBit(c+2365,"w_rB", false,-1);
    tracep->declBit(c+2366,"w_wR_n", false,-1);
    tracep->declBit(c+2367,"w_ljmp", false,-1);
    tracep->declBit(c+2186,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2368,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2369,"iword", false,-1, 31,0);
    tracep->declBit(c+2370,"pf_valid", false,-1);
    tracep->declBus(c+2371,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2372,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2373,"r_I", false,-1, 22,0);
    tracep->declBus(c+2374,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+2375,"w_I", false,-1, 22,0);
    tracep->declBit(c+2376,"w_Iz", false,-1);
    tracep->declBus(c+2377,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2187,"r_valid", false,-1);
    tracep->declBit(c+2378,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4366,"illegal_shift", false,-1);
    tracep->declBit(c+4366,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+2379,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+2380,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2162,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2191,"r_early_branch", false,-1);
    tracep->declBit(c+2192,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2186,"r_ljmp", false,-1);
    tracep->declBus(c+2193,"r_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2381,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2185,"r_pipe", false,-1);
    tracep->declBit(c+2378,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_ce", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+2382,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1056,"o_wb_ack", false,-1);
    tracep->declBus(c+1060,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+948,"o_int", false,-1);
    tracep->declBus(c+1060,"r_counter", false,-1, 31,0);
    tracep->declBit(c+2383,"int_set", false,-1);
    tracep->declBit(c+2384,"new_set", false,-1);
    tracep->declBit(c+2385,"int_now", false,-1);
    tracep->declBus(c+2386,"int_when", false,-1, 31,0);
    tracep->declBus(c+2387,"new_when", false,-1, 31,0);
    tracep->declBus(c+2388,"till_wb", false,-1, 31,0);
    tracep->declBus(c+2389,"till_when", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4493,"VW", false,-1, 31,0);
    tracep->declBus(c+4360,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_ce", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+2390,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1053,"o_wb_ack", false,-1);
    tracep->declBus(c+1057,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+945,"o_int", false,-1);
    tracep->declBit(c+2391,"r_running", false,-1);
    tracep->declBit(c+2392,"r_zero", false,-1);
    tracep->declBus(c+2393,"r_value", false,-1, 30,0);
    tracep->declBit(c+2394,"wb_write", false,-1);
    tracep->declBit(c+2395,"auto_reload", false,-1);
    tracep->declBus(c+2396,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2395,"r_auto_reload", false,-1);
    tracep->declBus(c+2396,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4493,"VW", false,-1, 31,0);
    tracep->declBus(c+4360,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_ce", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+2397,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1054,"o_wb_ack", false,-1);
    tracep->declBus(c+1058,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+946,"o_int", false,-1);
    tracep->declBit(c+2398,"r_running", false,-1);
    tracep->declBit(c+2399,"r_zero", false,-1);
    tracep->declBus(c+2400,"r_value", false,-1, 30,0);
    tracep->declBit(c+2401,"wb_write", false,-1);
    tracep->declBit(c+2402,"auto_reload", false,-1);
    tracep->declBus(c+2403,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2402,"r_auto_reload", false,-1);
    tracep->declBus(c+2403,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4493,"VW", false,-1, 31,0);
    tracep->declBus(c+4360,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_ce", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+2404,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1055,"o_wb_ack", false,-1);
    tracep->declBus(c+1059,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+947,"o_int", false,-1);
    tracep->declBit(c+2405,"r_running", false,-1);
    tracep->declBit(c+2406,"r_zero", false,-1);
    tracep->declBus(c+2407,"r_value", false,-1, 30,0);
    tracep->declBit(c+2408,"wb_write", false,-1);
    tracep->declBit(c+2409,"auto_reload", false,-1);
    tracep->declBus(c+2410,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2409,"r_auto_reload", false,-1);
    tracep->declBus(c+2410,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4350,"BW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+2411,"i_reset", false,-1);
    tracep->declBus(c+4528,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+1018,"o_int", false,-1);
    tracep->declBus(c+2412,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4404,"BW", false,-1, 31,0);
    tracep->declBus(c+4493,"VW", false,-1, 31,0);
    tracep->declBus(c+4403,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+997,"i_reset", false,-1);
    tracep->declBit(c+1137,"i_ce", false,-1);
    tracep->declBit(c+961,"i_wb_cyc", false,-1);
    tracep->declBit(c+2413,"i_wb_stb", false,-1);
    tracep->declBit(c+963,"i_wb_we", false,-1);
    tracep->declBus(c+965,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4398,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+1010,"o_wb_ack", false,-1);
    tracep->declBus(c+1012,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1011,"o_int", false,-1);
    tracep->declBit(c+2414,"r_running", false,-1);
    tracep->declBit(c+2415,"r_zero", false,-1);
    tracep->declBus(c+2416,"r_value", false,-1, 30,0);
    tracep->declBit(c+2417,"wb_write", false,-1);
    tracep->declBit(c+4366,"auto_reload", false,-1);
    tracep->declBus(c+4529,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4530,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4530,"TB", false,-1, 4,0);
    tracep->declBus(c+4496,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+173,"i_wr", false,-1);
    tracep->declBus(c+171,"i_data", false,-1, 7,0);
    tracep->declBit(c+4301,"o_uart_tx", false,-1);
    tracep->declBit(c+174,"o_busy", false,-1);
    tracep->declBus(c+4412,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4482,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4398,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+2418,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+2419,"state", false,-1, 3,0);
    tracep->declBus(c+2420,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+174,"r_busy", false,-1);
    tracep->declBit(c+2421,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3972,"i_wb_cyc", false,-1);
    tracep->declBit(c+3973,"i_wb_stb", false,-1);
    tracep->declBit(c+3974,"i_wb_we", false,-1);
    tracep->declBus(c+4038,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+3976,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3977,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+423,"o_wb_ack", false,-1);
    tracep->declBus(c+424,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4277,"i_temp_sda", false,-1);
    tracep->declBit(c+4278,"i_temp_scl", false,-1);
    tracep->declBit(c+4279,"o_temp_sda", false,-1);
    tracep->declBit(c+4280,"o_temp_scl", false,-1);
    tracep->declBit(c+4281,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4282,"o_sys_pwm", false,-1);
    tracep->declBit(c+4283,"i_fan_tach", false,-1);
    tracep->declBus(c+4312,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4531,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4532,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4533,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4534,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4426,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+2422,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+2423,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+2424,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+2425,"ck_tach", false,-1);
    tracep->declBit(c+2426,"last_tach", false,-1);
    tracep->declBus(c+2427,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+2428,"tach_reset", false,-1);
    tracep->declBus(c+2429,"tach_count", false,-1, 26,0);
    tracep->declBus(c+2430,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+2431,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4366,"i2c_wb_stall", false,-1);
    tracep->declBit(c+2432,"i2c_wb_ack", false,-1);
    tracep->declBus(c+2433,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+2434,"ign_mem_cyc", false,-1);
    tracep->declBit(c+2435,"mem_stb", false,-1);
    tracep->declBit(c+4366,"ign_mem_we", false,-1);
    tracep->declBit(c+4360,"ign_mem_sel", false,-1);
    tracep->declBus(c+2436,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4402,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+2437,"mem_data", false,-1, 7,0);
    tracep->declBit(c+2438,"mem_ack", false,-1);
    tracep->declBit(c+2439,"i2cd_valid", false,-1);
    tracep->declBit(c+2440,"i2cd_last", false,-1);
    tracep->declBit(c+4366,"ign_i2cd_id", false,-1);
    tracep->declBus(c+2441,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+2442,"pp_ms", false,-1);
    tracep->declBus(c+2443,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+2444,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+2445,"temp_data", false,-1, 31,0);
    tracep->declBit(c+2446,"pre_ack", false,-1);
    tracep->declBus(c+2447,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4444,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4365,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4403,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4444,"AW", false,-1, 31,0);
    tracep->declBus(c+4353,"DW", false,-1, 31,0);
    tracep->declBus(c+4353,"RW", false,-1, 31,0);
    tracep->declBus(c+4444,"BAW", false,-1, 31,0);
    tracep->declBus(c+4470,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4403,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4365,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4535,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3972,"i_wb_cyc", false,-1);
    tracep->declBit(c+4039,"i_wb_stb", false,-1);
    tracep->declBit(c+3974,"i_wb_we", false,-1);
    tracep->declBus(c+4040,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3976,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3977,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+2432,"o_wb_ack", false,-1);
    tracep->declBus(c+2433,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2434,"o_pf_cyc", false,-1);
    tracep->declBit(c+2435,"o_pf_stb", false,-1);
    tracep->declBit(c+4366,"o_pf_we", false,-1);
    tracep->declBus(c+2436,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4402,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4360,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4366,"i_pf_stall", false,-1);
    tracep->declBit(c+2438,"i_pf_ack", false,-1);
    tracep->declBit(c+4366,"i_pf_err", false,-1);
    tracep->declBus(c+2437,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4277,"i_i2c_sda", false,-1);
    tracep->declBit(c+4278,"i_i2c_scl", false,-1);
    tracep->declBit(c+4279,"o_i2c_sda", false,-1);
    tracep->declBit(c+4280,"o_i2c_scl", false,-1);
    tracep->declBit(c+2439,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4367,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2441,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2440,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4366,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+2442,"i_sync_signal", false,-1);
    tracep->declBus(c+4312,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4406,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4407,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4408,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4409,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4363,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4400,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4424,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4358,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4446,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4447,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4412,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4414,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4415,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4416,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4417,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4405,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4418,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4482,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4483,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4484,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4485,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4486,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4487,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+2448,"cpu_reset", false,-1);
    tracep->declBit(c+4366,"cpu_clear_cache", false,-1);
    tracep->declBit(c+2449,"cpu_new_pc", false,-1);
    tracep->declBus(c+2450,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+2451,"pf_valid", false,-1);
    tracep->declBit(c+2452,"pf_ready", false,-1);
    tracep->declBus(c+2453,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+2454,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+2455,"pf_illegal", false,-1);
    tracep->declBit(c+2456,"half_valid", false,-1);
    tracep->declBit(c+2457,"imm_cycle", false,-1);
    tracep->declBit(c+4041,"next_valid", false,-1);
    tracep->declBus(c+4042,"next_insn", false,-1, 7,0);
    tracep->declBit(c+2458,"insn_ready", false,-1);
    tracep->declBit(c+2459,"half_ready", false,-1);
    tracep->declBit(c+2460,"i2c_abort", false,-1);
    tracep->declBit(c+2461,"insn_valid", false,-1);
    tracep->declBus(c+2462,"insn", false,-1, 11,0);
    tracep->declBus(c+2463,"half_insn", false,-1, 3,0);
    tracep->declBit(c+2464,"i2c_ckedge", false,-1);
    tracep->declBit(c+2465,"i2c_stretch", false,-1);
    tracep->declBus(c+2466,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+2467,"ckcount", false,-1, 11,0);
    tracep->declBus(c+2468,"abort_address", false,-1, 4,0);
    tracep->declBus(c+2469,"jump_target", false,-1, 4,0);
    tracep->declBit(c+2470,"r_wait", false,-1);
    tracep->declBit(c+2471,"soft_halt_request", false,-1);
    tracep->declBit(c+2448,"r_halted", false,-1);
    tracep->declBit(c+2472,"r_err", false,-1);
    tracep->declBit(c+2473,"r_aborted", false,-1);
    tracep->declBit(c+2474,"r_manual", false,-1);
    tracep->declBit(c+2475,"r_sda", false,-1);
    tracep->declBit(c+2476,"r_scl", false,-1);
    tracep->declBit(c+2477,"w_stopped", false,-1);
    tracep->declBit(c+2478,"w_sda", false,-1);
    tracep->declBit(c+2479,"w_scl", false,-1);
    tracep->declBit(c+4043,"bus_read", false,-1);
    tracep->declBit(c+4044,"bus_write", false,-1);
    tracep->declBit(c+4045,"bus_override", false,-1);
    tracep->declBit(c+4046,"bus_manual", false,-1);
    tracep->declBit(c+2480,"ovw_ready", false,-1);
    tracep->declBit(c+4047,"bus_jump", false,-1);
    tracep->declBus(c+4040,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4040,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+3976,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+3977,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+2433,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+2481,"s_tvalid", false,-1);
    tracep->declBit(c+2459,"s_tready", false,-1);
    tracep->declBus(c+2482,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4331,"w_control", false,-1, 31,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+2474,"manual", false,-1);
    tracep->declBit(c+2476,"scl", false,-1);
    tracep->declBit(c+2475,"sda", false,-1);
    tracep->declBit(c+2483,"o_scl", false,-1);
    tracep->declBit(c+2484,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4365,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+73,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+2481,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+2458,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+2485,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+2439,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4367,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2441,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2440,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+2464,"i_ckedge", false,-1);
    tracep->declBit(c+2465,"o_stretch", false,-1);
    tracep->declBit(c+4278,"i_scl", false,-1);
    tracep->declBit(c+4277,"i_sda", false,-1);
    tracep->declBit(c+2479,"o_scl", false,-1);
    tracep->declBit(c+2478,"o_sda", false,-1);
    tracep->declBit(c+2460,"o_abort", false,-1);
    tracep->declBus(c+4412,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4413,"START", false,-1, 3,0);
    tracep->declBus(c+4414,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4415,"STOP", false,-1, 3,0);
    tracep->declBus(c+4416,"DATA", false,-1, 3,0);
    tracep->declBus(c+4417,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4405,"ACK", false,-1, 3,0);
    tracep->declBus(c+4418,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4482,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4483,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4484,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4485,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4486,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4403,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4360,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4449,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4455,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4450,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4452,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4488,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4489,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4490,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4491,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4403,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+2486,"last_byte", false,-1);
    tracep->declBit(c+2487,"dir", false,-1);
    tracep->declBit(c+2488,"will_ack", false,-1);
    tracep->declBus(c+2489,"state", false,-1, 3,0);
    tracep->declBus(c+2490,"nbits", false,-1, 2,0);
    tracep->declBus(c+2491,"sreg", false,-1, 7,0);
    tracep->declBit(c+2492,"q_scl", false,-1);
    tracep->declBit(c+2493,"q_sda", false,-1);
    tracep->declBit(c+2494,"ck_scl", false,-1);
    tracep->declBit(c+2495,"ck_sda", false,-1);
    tracep->declBit(c+2496,"lst_scl", false,-1);
    tracep->declBit(c+2497,"lst_sda", false,-1);
    tracep->declBit(c+2498,"stop_bit", false,-1);
    tracep->declBit(c+2499,"channel_busy", false,-1);
    tracep->declBit(c+4366,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4444,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4353,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4444,"AW", false,-1, 31,0);
    tracep->declBus(c+4353,"DW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+74,"i_reset", false,-1);
    tracep->declBit(c+2449,"i_new_pc", false,-1);
    tracep->declBit(c+4366,"i_clear_cache", false,-1);
    tracep->declBit(c+2452,"i_ready", false,-1);
    tracep->declBus(c+2450,"i_pc", false,-1, 4,0);
    tracep->declBit(c+2451,"o_valid", false,-1);
    tracep->declBit(c+2455,"o_illegal", false,-1);
    tracep->declBus(c+2453,"o_insn", false,-1, 7,0);
    tracep->declBus(c+2454,"o_pc", false,-1, 4,0);
    tracep->declBit(c+2434,"o_wb_cyc", false,-1);
    tracep->declBit(c+2435,"o_wb_stb", false,-1);
    tracep->declBit(c+4366,"o_wb_we", false,-1);
    tracep->declBus(c+2436,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4402,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4366,"i_wb_stall", false,-1);
    tracep->declBit(c+2438,"i_wb_ack", false,-1);
    tracep->declBit(c+4366,"i_wb_err", false,-1);
    tracep->declBus(c+2437,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+2500,"last_stb", false,-1);
    tracep->declBit(c+2501,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+2502,"cache_word", false,-1, 7,0);
    tracep->declBit(c+2503,"cache_valid", false,-1);
    tracep->declBus(c+2504,"inflight", false,-1, 1,0);
    tracep->declBit(c+2505,"cache_illegal", false,-1);
    tracep->declBit(c+4366,"r_valid", false,-1);
    tracep->declBus(c+4402,"r_insn", false,-1, 7,0);
    tracep->declBus(c+2437,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declBus(c+4353,"SW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3960,"i_wb_cyc", false,-1);
    tracep->declBit(c+3961,"i_wb_stb", false,-1);
    tracep->declBit(c+3962,"i_wb_we", false,-1);
    tracep->declBus(c+4048,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+3964,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3965,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4366,"o_wb_stall", false,-1);
    tracep->declBit(c+419,"o_wb_ack", false,-1);
    tracep->declBus(c+420,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2506,"S_VALID", false,-1);
    tracep->declBit(c+154,"S_READY", false,-1);
    tracep->declBus(c+158,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+157,"S_LAST", false,-1);
    tracep->declBit(c+179,"o_dma_cyc", false,-1);
    tracep->declBit(c+180,"o_dma_stb", false,-1);
    tracep->declBit(c+4367,"o_dma_we", false,-1);
    tracep->declBus(c+181,"o_dma_addr", false,-1, 21,0);
    tracep->declArray(c+182,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+198,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+200,"i_dma_stall", false,-1);
    tracep->declBit(c+201,"i_dma_ack", false,-1);
    tracep->declArray(c+203,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+202,"i_dma_err", false,-1);
    tracep->declBus(c+4365,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4443,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2507,"r_baseaddr", false,-1, 27,0);
    tracep->declBus(c+2508,"r_memlen", false,-1, 27,0);
    tracep->declBus(c+2509,"subaddr", false,-1, 5,0);
    tracep->declBus(c+2510,"current_addr", false,-1, 27,0);
    tracep->declBus(c+4049,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+4050,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+2511,"wb_last", false,-1);
    tracep->declBit(c+2512,"bus_err", false,-1);
    tracep->declBit(c+2513,"r_reset", false,-1);
    tracep->declBit(c+2514,"r_overflow", false,-1);
    tracep->declBit(c+2515,"skd_valid", false,-1);
    tracep->declBit(c+2516,"skd_ready", false,-1);
    tracep->declBit(c+2517,"skd_last", false,-1);
    tracep->declBus(c+2518,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4446,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+2506,"i_valid", false,-1);
    tracep->declBit(c+154,"o_ready", false,-1);
    tracep->declBus(c+2519,"i_data", false,-1, 8,0);
    tracep->declBit(c+2515,"o_valid", false,-1);
    tracep->declBit(c+2516,"i_ready", false,-1);
    tracep->declBus(c+2520,"o_data", false,-1, 8,0);
    tracep->declBus(c+2521,"w_data", false,-1, 8,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+2522,"r_valid", false,-1);
    tracep->declBus(c+2521,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+2515,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4419,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4404,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4424,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4421,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+3916,"i_wcyc", false,-1);
    tracep->declBit(c+3917,"i_wstb", false,-1);
    tracep->declBit(c+360,"i_wwe", false,-1);
    tracep->declBus(c+2523,"i_waddr", false,-1, 20,0);
    tracep->declArray(c+362,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+378,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+380,"o_wstall", false,-1);
    tracep->declBit(c+381,"o_wack", false,-1);
    tracep->declArray(c+382,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+3918,"o_werr", false,-1);
    tracep->declBit(c+3919,"o_scyc", false,-1);
    tracep->declBit(c+398,"o_sstb", false,-1);
    tracep->declBit(c+399,"o_swe", false,-1);
    tracep->declBus(c+400,"o_saddr", false,-1, 24,0);
    tracep->declBus(c+401,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+402,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+403,"i_sstall", false,-1);
    tracep->declBit(c+404,"i_sack", false,-1);
    tracep->declBus(c+405,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+3920,"i_serr", false,-1);
    tracep->declBus(c+4354,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4444,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+3919,"r_cyc", false,-1);
    tracep->declBit(c+2524,"r_stb", false,-1);
    tracep->declBit(c+399,"r_we", false,-1);
    tracep->declBit(c+381,"r_ack", false,-1);
    tracep->declBit(c+3918,"r_err", false,-1);
    tracep->declBit(c+2525,"r_first", false,-1);
    tracep->declBus(c+400,"r_addr", false,-1, 24,0);
    tracep->declBit(c+2526,"s_null", false,-1);
    tracep->declBit(c+2527,"s_last", false,-1);
    tracep->declArray(c+2528,"s_data", false,-1, 511,0);
    tracep->declArray(c+382,"r_data", false,-1, 511,0);
    tracep->declArray(c+2544,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+2560,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+2562,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+2564,"r_shift", false,-1, 3,0);
    tracep->declBus(c+2565,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+2566,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+2567,"fifo_full", false,-1);
    tracep->declBit(c+2568,"fifo_empty", false,-1);
    tracep->declBit(c+2569,"fifo_ack", false,-1);
    tracep->declBus(c+2570,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4536,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+2571,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4444,"BW", false,-1, 31,0);
    tracep->declBus(c+4444,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+114,"i_reset", false,-1);
    tracep->declBit(c+2572,"i_wr", false,-1);
    tracep->declBus(c+2573,"i_data", false,-1, 4,0);
    tracep->declBit(c+2567,"o_full", false,-1);
    tracep->declBus(c+2570,"o_fill", false,-1, 5,0);
    tracep->declBit(c+404,"i_rd", false,-1);
    tracep->declBus(c+2574,"o_data", false,-1, 4,0);
    tracep->declBit(c+2568,"o_empty", false,-1);
    tracep->declBus(c+4404,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2575,"r_full", false,-1);
    tracep->declBit(c+2576,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2577+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+2609,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2610,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2611,"w_wr", false,-1);
    tracep->declBit(c+2612,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4355,"NM", false,-1, 31,0);
    tracep->declBus(c+4448,"NS", false,-1, 31,0);
    tracep->declBus(c+4421,"AW", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declArray(c+4537,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4547,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4443,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4365,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBus(c+3919,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+398,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+399,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+400,"i_maddr", false,-1, 24,0);
    tracep->declBus(c+401,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+402,"i_msel", false,-1, 3,0);
    tracep->declBus(c+403,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+404,"o_mack", false,-1, 0,0);
    tracep->declBus(c+405,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+3920,"o_merr", false,-1, 0,0);
    tracep->declBus(c+4051,"o_scyc", false,-1, 11,0);
    tracep->declBus(c+4052,"o_sstb", false,-1, 11,0);
    tracep->declBus(c+4053,"o_swe", false,-1, 11,0);
    tracep->declArray(c+4054,"o_saddr", false,-1, 299,0);
    tracep->declArray(c+4064,"o_sdata", false,-1, 383,0);
    tracep->declQuad(c+4076,"o_ssel", false,-1, 47,0);
    tracep->declBus(c+3913,"i_sstall", false,-1, 11,0);
    tracep->declBus(c+3632,"i_sack", false,-1, 11,0);
    tracep->declArray(c+3633,"i_sdata", false,-1, 383,0);
    tracep->declBus(c+4557,"i_serr", false,-1, 11,0);
    tracep->declBus(c+4365,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4355,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4354,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4078+i*1,"request", true,(i+0), 12,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2613+i*1,"grant", true,(i+0), 12,0);
    }
    tracep->declBus(c+2614,"mgrant", false,-1, 0,0);
    tracep->declBus(c+4079,"sgrant", false,-1, 11,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2615+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2616,"mfull", false,-1, 0,0);
    tracep->declBus(c+2617,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2618,"mempty", false,-1, 0,0);
    tracep->declBus(c+4403,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4355,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4359,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4080+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+3919,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+4081,"m_stb", false,-1, 0,0);
    tracep->declBus(c+4082,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4083+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4084+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4085+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4233,"m_stall", false,-1, 0,0);
    tracep->declBus(c+4234,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3645+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4332,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4558,"s_err", false,-1, 15,0);
    tracep->declBus(c+4086,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2619,"iN", false,-1, 31,0);
    tracep->declBus(c+4333,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4087,"regrant", false,-1, 12,0);
    tracep->declBus(c+4334,"reindex", false,-1, 3,0);
    tracep->declBit(c+4088,"stay_on_channel", false,-1);
    tracep->declBit(c+4089,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4090,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4087,"r_regrant", false,-1, 12,0);
    tracep->declBus(c+4334,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2620,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+115,"skd_stb", false,-1);
    tracep->declBit(c+4235,"skd_stall", false,-1);
    tracep->declBit(c+4091,"skd_we", false,-1);
    tracep->declBus(c+4092,"skd_addr", false,-1, 24,0);
    tracep->declBus(c+4093,"skd_data", false,-1, 31,0);
    tracep->declBus(c+4094,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2621,"decoded", false,-1, 12,0);
    tracep->declBit(c+2622,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4448,"NS", false,-1, 31,0);
    tracep->declBus(c+4421,"AW", false,-1, 31,0);
    tracep->declBus(c+4559,"DW", false,-1, 31,0);
    tracep->declArray(c+4537,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4547,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4481,"ACCESS_ALLOWED", false,-1, 11,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+116,"i_valid", false,-1);
    tracep->declBit(c+4235,"o_stall", false,-1);
    tracep->declBus(c+4092,"i_addr", false,-1, 24,0);
    tracep->declQuad(c+4095,"i_data", false,-1, 36,0);
    tracep->declBit(c+4086,"o_valid", false,-1);
    tracep->declBit(c+4236,"i_stall", false,-1);
    tracep->declBus(c+2621,"o_decode", false,-1, 12,0);
    tracep->declBus(c+2623,"o_addr", false,-1, 24,0);
    tracep->declQuad(c+4097,"o_data", false,-1, 36,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+117,"request", false,-1, 12,0);
    tracep->declBus(c+4099,"prerequest", false,-1, 11,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+118,"r_request", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+119,"r_request_NS", false,-1);
    tracep->declBit(c+120,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4560,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+121,"i_reset", false,-1);
    tracep->declBit(c+398,"i_valid", false,-1);
    tracep->declBit(c+2622,"o_ready", false,-1);
    tracep->declQuad(c+2624,"i_data", false,-1, 61,0);
    tracep->declBit(c+115,"o_valid", false,-1);
    tracep->declBit(c+4237,"i_ready", false,-1);
    tracep->declQuad(c+4100,"o_data", false,-1, 61,0);
    tracep->declQuad(c+2626,"w_data", false,-1, 61,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+403,"r_valid", false,-1);
    tracep->declQuad(c+2626,"r_data", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+404,"r_mack", false,-1, 0,0);
    tracep->declBus(c+3920,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+122,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+123,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[11] ");
    tracep->declBit(c+124,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+125,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+126,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+127,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+128,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+129,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+130,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+131,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+132,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+133,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4479,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4401,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4404,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+437,"i_scyc", false,-1);
    tracep->declBit(c+438,"i_sstb", false,-1);
    tracep->declBit(c+439,"i_swe", false,-1);
    tracep->declBus(c+2628,"i_saddr", false,-1, 25,0);
    tracep->declBus(c+441,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+442,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+443,"o_sstall", false,-1);
    tracep->declBit(c+444,"o_sack", false,-1);
    tracep->declBus(c+446,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+445,"o_serr", false,-1);
    tracep->declBit(c+282,"o_wcyc", false,-1);
    tracep->declBit(c+283,"o_wstb", false,-1);
    tracep->declBit(c+284,"o_wwe", false,-1);
    tracep->declBus(c+285,"o_waddr", false,-1, 21,0);
    tracep->declArray(c+286,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+302,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+304,"i_wstall", false,-1);
    tracep->declBit(c+305,"i_wack", false,-1);
    tracep->declArray(c+307,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+306,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4444,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+282,"r_cyc", false,-1);
    tracep->declBit(c+2629,"r_stb", false,-1);
    tracep->declBit(c+284,"r_we", false,-1);
    tracep->declBit(c+444,"r_ack", false,-1);
    tracep->declBit(c+445,"r_err", false,-1);
    tracep->declBus(c+285,"r_addr", false,-1, 21,0);
    tracep->declArray(c+286,"r_data", false,-1, 511,0);
    tracep->declArray(c+2630,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+302,"r_sel", false,-1, 63,0);
    tracep->declBus(c+2646,"r_shift", false,-1, 3,0);
    tracep->declBit(c+2647,"fifo_full", false,-1);
    tracep->declBit(c+2648,"ign_fifo_empty", false,-1);
    tracep->declBus(c+2649,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+2650,"w_shift", false,-1, 3,0);
    tracep->declBus(c+2651,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+2652,"w_data", false,-1, 511,0);
    tracep->declQuad(c+2668,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4354,"BW", false,-1, 31,0);
    tracep->declBus(c+4444,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+75,"i_reset", false,-1);
    tracep->declBit(c+2670,"i_wr", false,-1);
    tracep->declBus(c+2646,"i_data", false,-1, 3,0);
    tracep->declBit(c+2647,"o_full", false,-1);
    tracep->declBus(c+2649,"o_fill", false,-1, 5,0);
    tracep->declBit(c+305,"i_rd", false,-1);
    tracep->declBus(c+2651,"o_data", false,-1, 3,0);
    tracep->declBit(c+2648,"o_empty", false,-1);
    tracep->declBus(c+4404,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2647,"r_full", false,-1);
    tracep->declBit(c+2648,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2671+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+2703,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2704,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2705,"w_wr", false,-1);
    tracep->declBit(c+2706,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4355,"NM", false,-1, 31,0);
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4419,"AW", false,-1, 31,0);
    tracep->declBus(c+4404,"DW", false,-1, 31,0);
    tracep->declQuad(c+4561,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4563,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4443,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4365,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBus(c+428,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+429,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+430,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+431,"i_maddr", false,-1, 26,0);
    tracep->declBus(c+432,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4398,"i_msel", false,-1, 3,0);
    tracep->declBus(c+433,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+434,"o_mack", false,-1, 0,0);
    tracep->declBus(c+436,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+435,"o_merr", false,-1, 0,0);
    tracep->declBus(c+2707,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+2708,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2709,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2710,"o_saddr", false,-1, 53,0);
    tracep->declQuad(c+2712,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+2714,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4335,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4336,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+2715,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+2717,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4365,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4355,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4364,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2718+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2719+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2720,"mgrant", false,-1, 0,0);
    tracep->declBus(c+2721,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2722+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2723,"mfull", false,-1, 0,0);
    tracep->declBus(c+2724,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2725,"mempty", false,-1, 0,0);
    tracep->declBus(c+4403,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4355,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4354,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4102+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+428,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+2726,"m_stb", false,-1, 0,0);
    tracep->declBus(c+2727,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2728+i*1,"m_addr", true,(i+0), 26,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2729+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2730+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+134,"m_stall", false,-1, 0,0);
    tracep->declBus(c+76,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2731+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4337,"s_ack", false,-1, 3,0);
    tracep->declBus(c+2735,"s_err", false,-1, 3,0);
    tracep->declBus(c+2736,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2737,"iN", false,-1, 31,0);
    tracep->declBus(c+4338,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4103,"regrant", false,-1, 2,0);
    tracep->declBus(c+4339,"reindex", false,-1, 1,0);
    tracep->declBit(c+2738,"stay_on_channel", false,-1);
    tracep->declBit(c+2739,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4104,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4103,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4339,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2740,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+77,"skd_stb", false,-1);
    tracep->declBit(c+135,"skd_stall", false,-1);
    tracep->declBit(c+2741,"skd_we", false,-1);
    tracep->declBus(c+2742,"skd_addr", false,-1, 26,0);
    tracep->declBus(c+2743,"skd_data", false,-1, 31,0);
    tracep->declBus(c+2744,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2745,"decoded", false,-1, 2,0);
    tracep->declBit(c+2746,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4419,"AW", false,-1, 31,0);
    tracep->declBus(c+4559,"DW", false,-1, 31,0);
    tracep->declQuad(c+4561,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4563,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4409,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+78,"i_valid", false,-1);
    tracep->declBit(c+135,"o_stall", false,-1);
    tracep->declBus(c+2742,"i_addr", false,-1, 26,0);
    tracep->declQuad(c+2747,"i_data", false,-1, 36,0);
    tracep->declBit(c+2736,"o_valid", false,-1);
    tracep->declBit(c+136,"i_stall", false,-1);
    tracep->declBus(c+2745,"o_decode", false,-1, 2,0);
    tracep->declBus(c+2749,"o_addr", false,-1, 26,0);
    tracep->declQuad(c+2750,"o_data", false,-1, 36,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+79,"request", false,-1, 2,0);
    tracep->declBus(c+2752,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+80,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+81,"r_request_NS", false,-1);
    tracep->declBit(c+82,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4410,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset", false,-1);
    tracep->declBit(c+429,"i_valid", false,-1);
    tracep->declBit(c+2746,"o_ready", false,-1);
    tracep->declQuad(c+2753,"i_data", false,-1, 63,0);
    tracep->declBit(c+77,"o_valid", false,-1);
    tracep->declBit(c+137,"i_ready", false,-1);
    tracep->declQuad(c+2755,"o_data", false,-1, 63,0);
    tracep->declQuad(c+2757,"w_data", false,-1, 63,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+433,"r_valid", false,-1);
    tracep->declQuad(c+2757,"r_data", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+434,"r_mack", false,-1, 0,0);
    tracep->declBus(c+435,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+84,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+85,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4354,"NM", false,-1, 31,0);
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4401,"DW", false,-1, 31,0);
    tracep->declQuad(c+4565,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4567,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4443,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4365,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4403,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4360,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBus(c+4105,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+2759,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+2760,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+2761,"i_maddr", false,-1, 87,0);
    tracep->declArray(c+2764,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+2828,"i_msel", false,-1, 255,0);
    tracep->declBus(c+2836,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+2837,"o_mack", false,-1, 3,0);
    tracep->declArray(c+2838,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+2902,"o_merr", false,-1, 3,0);
    tracep->declBus(c+4106,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+4107,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2903,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2904,"o_saddr", false,-1, 43,0);
    tracep->declArray(c+2906,"o_sdata", false,-1, 1023,0);
    tracep->declArray(c+2938,"o_ssel", false,-1, 127,0);
    tracep->declBus(c+2942,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+2943,"i_sack", false,-1, 1,0);
    tracep->declArray(c+2944,"i_sdata", false,-1, 1023,0);
    tracep->declBus(c+4108,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4365,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4364,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4364,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2976+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2980+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2984+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2988,"mgrant", false,-1, 3,0);
    tracep->declBus(c+4109,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2989+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2993,"mfull", false,-1, 3,0);
    tracep->declBus(c+2994,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+2995,"mempty", false,-1, 3,0);
    tracep->declBus(c+4412,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4354,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4354,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4110+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4114+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+4105,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+2996,"m_stb", false,-1, 3,0);
    tracep->declBus(c+2997,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2998+i*1,"m_addr", true,(i+0), 21,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3002+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3066+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4118,"m_stall", false,-1, 3,0);
    tracep->declBus(c+4119,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3074+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+4120,"s_ack", false,-1, 3,0);
    tracep->declBus(c+4121,"s_err", false,-1, 3,0);
    tracep->declBus(c+3138,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4360,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+4340,"iN", false,-1, 31,0);
    tracep->declBus(c+4341,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4122,"regrant", false,-1, 2,0);
    tracep->declBus(c+4342,"reindex", false,-1, 1,0);
    tracep->declBit(c+3139,"stay_on_channel", false,-1);
    tracep->declBit(c+4123,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4124,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4122,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4342,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4125,"regrant", false,-1, 2,0);
    tracep->declBus(c+4343,"reindex", false,-1, 1,0);
    tracep->declBit(c+3140,"stay_on_channel", false,-1);
    tracep->declBit(c+4126,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4127,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4125,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4343,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4128,"regrant", false,-1, 2,0);
    tracep->declBus(c+4344,"reindex", false,-1, 1,0);
    tracep->declBit(c+3141,"stay_on_channel", false,-1);
    tracep->declBit(c+4129,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4130,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4128,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4344,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4131,"regrant", false,-1, 2,0);
    tracep->declBus(c+4345,"reindex", false,-1, 1,0);
    tracep->declBit(c+3142,"stay_on_channel", false,-1);
    tracep->declBit(c+4132,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4133,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4131,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4345,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3143,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+3144,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+3145,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+3146,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+86,"skd_stb", false,-1);
    tracep->declBit(c+4134,"skd_stall", false,-1);
    tracep->declBit(c+3147,"skd_we", false,-1);
    tracep->declBus(c+3148,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3149,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3165,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3167,"decoded", false,-1, 2,0);
    tracep->declBit(c+3168,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4569,"DW", false,-1, 31,0);
    tracep->declQuad(c+4565,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4567,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4409,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+87,"i_valid", false,-1);
    tracep->declBit(c+4134,"o_stall", false,-1);
    tracep->declBus(c+3148,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3169,"i_data", false,-1, 576,0);
    tracep->declBit(c+3188,"o_valid", false,-1);
    tracep->declBit(c+4135,"i_stall", false,-1);
    tracep->declBus(c+3167,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3189,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3190,"o_data", false,-1, 576,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+88,"request", false,-1, 2,0);
    tracep->declBus(c+3209,"prerequest", false,-1, 1,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+89,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+90,"r_request_NS", false,-1);
    tracep->declBit(c+91,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4570,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+92,"i_reset", false,-1);
    tracep->declBit(c+180,"i_valid", false,-1);
    tracep->declBit(c+3168,"o_ready", false,-1);
    tracep->declArray(c+3210,"i_data", false,-1, 598,0);
    tracep->declBit(c+86,"o_valid", false,-1);
    tracep->declBit(c+4136,"i_ready", false,-1);
    tracep->declArray(c+3229,"o_data", false,-1, 598,0);
    tracep->declArray(c+3248,"w_data", false,-1, 598,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3267,"r_valid", false,-1);
    tracep->declArray(c+3248,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+93,"skd_stb", false,-1);
    tracep->declBit(c+4137,"skd_stall", false,-1);
    tracep->declBit(c+3268,"skd_we", false,-1);
    tracep->declBus(c+3269,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3270,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3286,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3288,"decoded", false,-1, 2,0);
    tracep->declBit(c+3289,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4569,"DW", false,-1, 31,0);
    tracep->declQuad(c+4565,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4567,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4409,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+94,"i_valid", false,-1);
    tracep->declBit(c+4137,"o_stall", false,-1);
    tracep->declBus(c+3269,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3290,"i_data", false,-1, 576,0);
    tracep->declBit(c+3309,"o_valid", false,-1);
    tracep->declBit(c+4138,"i_stall", false,-1);
    tracep->declBus(c+3288,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3310,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3311,"o_data", false,-1, 576,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+95,"request", false,-1, 2,0);
    tracep->declBus(c+3330,"prerequest", false,-1, 1,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+96,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+97,"r_request_NS", false,-1);
    tracep->declBit(c+98,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4570,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+99,"i_reset", false,-1);
    tracep->declBit(c+220,"i_valid", false,-1);
    tracep->declBit(c+3289,"o_ready", false,-1);
    tracep->declArray(c+3331,"i_data", false,-1, 598,0);
    tracep->declBit(c+93,"o_valid", false,-1);
    tracep->declBit(c+4139,"i_ready", false,-1);
    tracep->declArray(c+3350,"o_data", false,-1, 598,0);
    tracep->declArray(c+3369,"w_data", false,-1, 598,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3388,"r_valid", false,-1);
    tracep->declArray(c+3369,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+100,"skd_stb", false,-1);
    tracep->declBit(c+4140,"skd_stall", false,-1);
    tracep->declBit(c+3389,"skd_we", false,-1);
    tracep->declBus(c+3390,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3391,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3407,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3409,"decoded", false,-1, 2,0);
    tracep->declBit(c+3410,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4569,"DW", false,-1, 31,0);
    tracep->declQuad(c+4565,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4567,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4409,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+101,"i_valid", false,-1);
    tracep->declBit(c+4140,"o_stall", false,-1);
    tracep->declBus(c+3390,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3411,"i_data", false,-1, 576,0);
    tracep->declBit(c+3430,"o_valid", false,-1);
    tracep->declBit(c+4141,"i_stall", false,-1);
    tracep->declBus(c+3409,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3431,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3432,"o_data", false,-1, 576,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+102,"request", false,-1, 2,0);
    tracep->declBus(c+3451,"prerequest", false,-1, 1,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+103,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+104,"r_request_NS", false,-1);
    tracep->declBit(c+105,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4570,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+106,"i_reset", false,-1);
    tracep->declBit(c+242,"i_valid", false,-1);
    tracep->declBit(c+3410,"o_ready", false,-1);
    tracep->declArray(c+3452,"i_data", false,-1, 598,0);
    tracep->declBit(c+100,"o_valid", false,-1);
    tracep->declBit(c+4142,"i_ready", false,-1);
    tracep->declArray(c+3471,"o_data", false,-1, 598,0);
    tracep->declArray(c+3490,"w_data", false,-1, 598,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3509,"r_valid", false,-1);
    tracep->declArray(c+3490,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+107,"skd_stb", false,-1);
    tracep->declBit(c+4143,"skd_stall", false,-1);
    tracep->declBit(c+3510,"skd_we", false,-1);
    tracep->declBus(c+3511,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3512,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3528,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3530,"decoded", false,-1, 2,0);
    tracep->declBit(c+3531,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4364,"NS", false,-1, 31,0);
    tracep->declBus(c+4358,"AW", false,-1, 31,0);
    tracep->declBus(c+4569,"DW", false,-1, 31,0);
    tracep->declQuad(c+4565,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4567,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4409,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4360,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+4239,"i_reset", false,-1);
    tracep->declBit(c+108,"i_valid", false,-1);
    tracep->declBit(c+4143,"o_stall", false,-1);
    tracep->declBus(c+3511,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3532,"i_data", false,-1, 576,0);
    tracep->declBit(c+3551,"o_valid", false,-1);
    tracep->declBit(c+4144,"i_stall", false,-1);
    tracep->declBus(c+3530,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3552,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3553,"o_data", false,-1, 576,0);
    tracep->declBus(c+4360,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+109,"request", false,-1, 2,0);
    tracep->declBus(c+3572,"prerequest", false,-1, 1,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+110,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+111,"r_request_NS", false,-1);
    tracep->declBit(c+112,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4403,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4403,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4570,"DW", false,-1, 31,0);
    tracep->declBus(c+4360,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4238,"i_clk", false,-1);
    tracep->declBit(c+113,"i_reset", false,-1);
    tracep->declBit(c+283,"i_valid", false,-1);
    tracep->declBit(c+3531,"o_ready", false,-1);
    tracep->declArray(c+3573,"i_data", false,-1, 598,0);
    tracep->declBit(c+107,"o_valid", false,-1);
    tracep->declBit(c+4145,"i_ready", false,-1);
    tracep->declArray(c+3592,"o_data", false,-1, 598,0);
    tracep->declArray(c+3611,"w_data", false,-1, 598,0);
    tracep->declBit(c+4366,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+304,"r_valid", false,-1);
    tracep->declArray(c+3611,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+2837,"r_mack", false,-1, 3,0);
    tracep->declBus(c+2902,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3630,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4146,"regrant", false,-1, 3,0);
    tracep->declBus(c+4147,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3631,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4148,"regrant", false,-1, 3,0);
    tracep->declBus(c+4149,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+138,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+139,"drop_sgrant", false,-1);
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
extern const VlWide<8>/*255:0*/ Vmain__ConstPool__CONST_h9e67c271_0;
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
    VlWide<12>/*383:0*/ __Vtemp_hc53c1a3f__0;
    VlWide<8>/*255:0*/ __Vtemp_hc54d2555__0;
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
    bufp->fullBit(oldp+35,(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n));
    bufp->fullIData(oldp+36,(vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4),31);
    bufp->fullBit(oldp+37,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullIData(oldp+38,((((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                               << 0x1fU) | vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4)),32);
    bufp->fullIData(oldp+39,((((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                               << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                             << 0x18U) 
                                            | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))),32);
    bufp->fullBit(oldp+40,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+41,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullIData(oldp+42,(vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4),31);
    bufp->fullBit(oldp+43,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc));
    bufp->fullBit(oldp+44,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb));
    bufp->fullBit(oldp+45,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
    bufp->fullCData(oldp+46,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr),7);
    bufp->fullIData(oldp+47,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_data),32);
    bufp->fullBit(oldp+48,(vlSelf->main__DOT__swic__DOT__cpu_op_stall));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                            & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                               >> 1U))));
    bufp->fullBit(oldp+50,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready));
    bufp->fullBit(oldp+51,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
    bufp->fullBit(oldp+52,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance));
    bufp->fullBit(oldp+53,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall));
    bufp->fullBit(oldp+54,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled));
    bufp->fullBit(oldp+55,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                            & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                      >> 6U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
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
    bufp->fullBit(oldp+58,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
    bufp->fullIData(oldp+59,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v),32);
    bufp->fullIData(oldp+60,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v),32);
    bufp->fullBit(oldp+61,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
    bufp->fullBit(oldp+62,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)) 
                            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0))));
    bufp->fullBit(oldp+63,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
    bufp->fullBit(oldp+64,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled));
    bufp->fullBit(oldp+65,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce));
    bufp->fullBit(oldp+66,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional));
    bufp->fullBit(oldp+67,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset));
    bufp->fullCData(oldp+68,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc),3);
    bufp->fullCData(oldp+69,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc),3);
    bufp->fullCData(oldp+70,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc),3);
    bufp->fullBit(oldp+71,(((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
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
    bufp->fullBit(oldp+72,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
    bufp->fullBit(oldp+73,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+74,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullBit(oldp+75,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
    bufp->fullCData(oldp+76,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
    bufp->fullBit(oldp+77,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+78,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+79,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+80,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+81,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+82,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+83,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+84,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+85,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+86,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+87,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+88,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+89,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+92,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+93,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+94,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+95,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+96,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+99,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+100,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+102,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+103,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+106,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+109,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+110,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+113,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+114,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
    bufp->fullBit(oldp+115,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+116,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullSData(oldp+117,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),13);
    bufp->fullSData(oldp+118,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),12);
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+121,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+122,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+133,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+134,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullBit(oldp+135,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+136,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+138,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+139,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+140,(vlSelf->main__DOT__scope1_ddr3_int));
    bufp->fullBit(oldp+141,(vlSelf->main__DOT__scope2_ddr3_int));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+146,(vlSelf->main__DOT__i2cscope_int));
    bufp->fullBit(oldp+147,(vlSelf->main__DOT__scope3_ddr3_int));
    bufp->fullBit(oldp+148,(vlSelf->main__DOT__gpio_int));
    bufp->fullBit(oldp+149,(vlSelf->main__DOT__spio_int));
    bufp->fullBit(oldp+150,(vlSelf->main__DOT__r_sirefclk_en));
    bufp->fullIData(oldp+151,(vlSelf->main__DOT__r_sirefclk_data),30);
    bufp->fullBit(oldp+152,(vlSelf->main__DOT__w_sirefclk_unused_stb));
    bufp->fullBit(oldp+153,(vlSelf->main__DOT__r_sirefclk_ack));
    bufp->fullBit(oldp+154,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullBit(oldp+155,(vlSelf->main__DOT__i2c_valid));
    bufp->fullBit(oldp+156,(vlSelf->main__DOT__i2c_ready));
    bufp->fullBit(oldp+157,(vlSelf->main__DOT__i2c_last));
    bufp->fullCData(oldp+158,(vlSelf->main__DOT__i2c_data),8);
    bufp->fullCData(oldp+159,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
    bufp->fullBit(oldp+160,(vlSelf->main__DOT__w_console_rx_stb));
    bufp->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+162,(vlSelf->main__DOT__w_console_busy));
    bufp->fullCData(oldp+163,(vlSelf->main__DOT__w_console_rx_data),7);
    bufp->fullCData(oldp+164,(vlSelf->main__DOT__w_console_tx_data),7);
    bufp->fullIData(oldp+165,(vlSelf->main__DOT__uart_debug),32);
    bufp->fullBit(oldp+166,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
    bufp->fullBit(oldp+167,(vlSelf->main__DOT__raw_cpu_dbg_ack));
    bufp->fullSData(oldp+168,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+169,(vlSelf->main__DOT__zip_cpu_int));
    bufp->fullCData(oldp+170,(vlSelf->main__DOT__wbu_rx_data),8);
    bufp->fullCData(oldp+171,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
    bufp->fullBit(oldp+172,(vlSelf->main__DOT__wbu_rx_stb));
    bufp->fullBit(oldp+173,(vlSelf->main__DOT__genbus__DOT__ps_full));
    bufp->fullBit(oldp+174,(vlSelf->main__DOT__txv__DOT__r_busy));
    bufp->fullBit(oldp+175,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
    bufp->fullCData(oldp+176,(vlSelf->main__DOT__w_led),8);
    bufp->fullSData(oldp+177,((((IData)(vlSelf->main__DOT__spio_int) 
                                << 8U) | ((0x80U & 
                                           ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                            << 2U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                << 1U))))),15);
    bufp->fullSData(oldp+178,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+179,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    bufp->fullBit(oldp+180,(vlSelf->main__DOT__wbwide_i2cdma_stb));
    bufp->fullIData(oldp+181,(vlSelf->main__DOT__wbwide_i2cdma_addr),22);
    bufp->fullWData(oldp+182,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
    bufp->fullQData(oldp+198,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
    bufp->fullBit(oldp+200,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
    bufp->fullBit(oldp+201,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
    bufp->fullBit(oldp+202,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
    bufp->fullWData(oldp+203,(__Vtemp_h053daff0__0),512);
    bufp->fullBit(oldp+219,(vlSelf->main__DOT__wbwide_i2cm_cyc));
    bufp->fullBit(oldp+220,(vlSelf->main__DOT__wbwide_i2cm_stb));
    bufp->fullIData(oldp+221,(vlSelf->main__DOT__wbwide_i2cm_addr),22);
    bufp->fullBit(oldp+222,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+223,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 1U))));
    bufp->fullBit(oldp+224,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+225,(__Vtemp_h3711b190__0),512);
    bufp->fullBit(oldp+241,(vlSelf->main__DOT__wbwide_zip_cyc));
    bufp->fullBit(oldp+242,(vlSelf->main__DOT__wbwide_zip_stb));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                    : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
    bufp->fullIData(oldp+244,(vlSelf->main__DOT__wbwide_zip_addr),22);
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
    bufp->fullWData(oldp+245,(__Vtemp_h58eb921b__0),512);
    bufp->fullQData(oldp+261,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)
                                : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+264,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 2U))));
    bufp->fullBit(oldp+265,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+266,(__Vtemp_hc1d82fb0__0),512);
    bufp->fullBit(oldp+282,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+283,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
    bufp->fullBit(oldp+284,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
    bufp->fullIData(oldp+285,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),22);
    bufp->fullWData(oldp+286,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
    bufp->fullQData(oldp+302,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
    bufp->fullBit(oldp+304,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+305,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 3U))));
    bufp->fullBit(oldp+306,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+307,(__Vtemp_hc1851150__0),512);
    bufp->fullBit(oldp+323,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    bufp->fullIData(oldp+324,((0x3fffffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),22);
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
    bufp->fullWData(oldp+325,(__Vtemp_h07963193__0),512);
    bufp->fullQData(oldp+341,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+343,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+344,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+360,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+361,((0x3fffffU & (IData)(
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
    bufp->fullWData(oldp+362,(__Vtemp_h07b62ab3__0),512);
    bufp->fullQData(oldp+378,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
    bufp->fullBit(oldp+380,(vlSelf->main__DOT__wbwide_wbdown_stall));
    bufp->fullBit(oldp+381,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
    bufp->fullWData(oldp+382,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+398,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+399,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullIData(oldp+400,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),25);
    bufp->fullIData(oldp+401,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+402,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+403,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+404,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullIData(oldp+405,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullIData(oldp+406,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+407,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+408,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+409,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+410,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+411,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+412,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+413,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+414,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+415,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+416,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+417,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+418,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+419,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+420,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+421,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+422,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+423,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+424,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+425,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+426,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+427,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+428,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+429,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+430,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+431,((0x7ffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),27);
    bufp->fullIData(oldp+432,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+433,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+434,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+435,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+436,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+437,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+438,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+439,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+440,((0x7ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),27);
    bufp->fullIData(oldp+441,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+442,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+443,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+444,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+445,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+446,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+447,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+448,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+450,((0x7ffffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                     >> 0x1bU)))),27);
    bufp->fullIData(oldp+451,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+452,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+453,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullIData(oldp+454,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullSData(oldp+455,((0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),14);
    bufp->fullBit(oldp+456,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+457,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+458,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+474,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+475,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+477,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+478,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+479,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+480,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+481,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+482,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+483,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+484,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+485,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+486,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+487,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+488,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+489,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+490,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullBit(oldp+491,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+492,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+493,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+494,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+495,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+496,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+497,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+498,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+499,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+500,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+501,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+502,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+503,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+504,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+505,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+506,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+507,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+508,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+509,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+510,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+511,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+512,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+513,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+514,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+515,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+516,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+517,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+518,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+519,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+520,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+521,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+522,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+523,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+524,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+525,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+526,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+527,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+528,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+529,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+530,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+531,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+532,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+533,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+534,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+535,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+536,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+537,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+538,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+539,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                             | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                  | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                 | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+540,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+542,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+543,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+544,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+545,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+547,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+548,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+550,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+551,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+553,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+554,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+555,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+556,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+557,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+558,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+560,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+561,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+562,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+563,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+564,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+565,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+566,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+567,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+568,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+569,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+570,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+571,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+572,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+573,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+574,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+576,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+578,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+579,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+580,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+581,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+582,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+583,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+584,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+585,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                             | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+586,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+588,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+589,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                             | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+590,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+591,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+593,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+594,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+595,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+596,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+597,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+598,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+599,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                  >> 0x21U))))));
    bufp->fullCData(oldp+600,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+601,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+602,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+603,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+604,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+606,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                         >> 0x1fU)) 
                                << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+607,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+608,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+609,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+610,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+611,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+612,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+613,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+614,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+615,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+616,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+618,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+620,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+621,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+622,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+623,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+624,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+625,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+626,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+628,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+630,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+631,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+632,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+633,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+634,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+636,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+637,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+638,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+639,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+640,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+642,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+643,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+644,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+645,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+646,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+647,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+648,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+649,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+650,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+651,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+652,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+653,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+654,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+655,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+656,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+657,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+659,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                   >> 9U))));
    bufp->fullBit(oldp+660,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+661,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+662,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+663,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                             & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                >> 0x15U))));
    bufp->fullBit(oldp+664,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+665,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+666,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+667,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+668,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+669,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+670,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+671,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+672,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+673,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+674,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+675,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+676,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+677,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullBit(oldp+678,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+679,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+680,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),28);
    bufp->fullBit(oldp+681,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+682,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+683,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+684,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),28);
    bufp->fullBit(oldp+685,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+686,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+689,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+690,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+691,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+692,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+693,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+694,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+695,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+696,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+697,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+698,(vlSelf->main__DOT__i2ci__DOT__abort_address),28);
    bufp->fullIData(oldp+699,(vlSelf->main__DOT__i2ci__DOT__jump_target),28);
    bufp->fullBit(oldp+700,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+701,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+702,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+703,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+704,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+705,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+706,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                             | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+708,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+709,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+710,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+711,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+712,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+713,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+714,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+715,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+716,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+717,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+718,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+719,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+720,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+721,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+722,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+723,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+724,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+725,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+726,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+727,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+728,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+729,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+730,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+731,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+732,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+733,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+734,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+750,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+751,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+752,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+753,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+754,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+770,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+786,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+787,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+788,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+789,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+790,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+791,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+793,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+794,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+795,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+796,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+797,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+798,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+799,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+800,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+801,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+802,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+803,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+804,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+805,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+806,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+807,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+808,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+809,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+810,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+811,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+812,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+813,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+814,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+815,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+816,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+817,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+818,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+819,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+820,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+821,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+822,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+823,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+824,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+825,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+826,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+827,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+828,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+829,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+830,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+831,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+833,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+834,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+835,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+836,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+837,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+838,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+839,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+840,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+841,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+842,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+843,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+844,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+845,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+846,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+847,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+848,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+849,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+850,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+851,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+852,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+853,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+854,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+855,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+856,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+857,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+858,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+859,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+860,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+861,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+862,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+863,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+864,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+865,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+866,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+867,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+868,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+869,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+870,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+871,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+872,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+873,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+874,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+875,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+876,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+877,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+878,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+879,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+880,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+881,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+882,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+883,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+884,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+885,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+886,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+888,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+889,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+890,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+891,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+892,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+893,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+894,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+895,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+896,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+897,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+898,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+899,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+900,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+901,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+902,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+903,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+904,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+905,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+906,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+907,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+908,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+909,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+910,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+911,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+912,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+913,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+914,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+915,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+916,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+917,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+918,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+919,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+920,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+921,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+922,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+923,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+924,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+925,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+926,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+927,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullSData(oldp+928,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+929,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+930,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+931,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+932,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+933,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+934,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+935,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+936,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+937,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+938,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+939,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+940,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+941,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+942,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+943,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+944,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+945,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+946,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+947,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+948,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+949,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+950,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+951,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+952,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+953,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+954,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+955,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+956,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+957,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+958,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+959,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+960,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                             | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                       >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+961,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+962,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+963,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+964,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+965,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+966,(vlSelf->main__DOT__swic__DOT__cpu_addr),22);
    bufp->fullIData(oldp+967,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+968,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+969,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+970,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+971,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+972,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+973,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+974,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                             & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                >> 7U))));
    bufp->fullBit(oldp+976,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+977,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+978,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+979,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+980,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+981,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+982,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+983,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+984,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+985,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+986,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+987,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+988,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+989,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+990,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+991,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+992,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+993,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                             & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+994,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+995,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+996,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+997,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+998,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+999,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+1000,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+1001,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+1002,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+1003,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+1004,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+1005,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+1006,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+1007,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+1008,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+1009,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
    bufp->fullBit(oldp+1010,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+1011,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+1012,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+1013,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+1014,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),22);
    bufp->fullIData(oldp+1015,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+1016,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+1017,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                          >> 2U))))));
    bufp->fullBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+1019,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+1020,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+1021,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+1022,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+1023,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+1024,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+1025,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+1026,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+1027,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+1028,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+1029,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+1030,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),22);
    bufp->fullWData(oldp+1031,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1047,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1049,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1050,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1051,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1052,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1053,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1054,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1055,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1056,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1057,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1058,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1059,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1060,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1061,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1063,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1064,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1065,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1066,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1082,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1084,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1102,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1103,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1105,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1106,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1107,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1108,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1109,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1110,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1111,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1112,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1113,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1114,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1115,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1116,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1117,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1118,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1119,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1120,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1121,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1122,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1123,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1124,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1125,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1126,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1127,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1128,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1129,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1130,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1131,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1132,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1133,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1134,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1135,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1136,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1137,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1138,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1139,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1141,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1142,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1143,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1144,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1145,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1146,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1147,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1148,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1149,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1150,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1151,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1152,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1153,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1154,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1155,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),28);
    bufp->fullIData(oldp+1156,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),28);
    bufp->fullIData(oldp+1157,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1158,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1159,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),28);
    bufp->fullIData(oldp+1160,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),28);
    bufp->fullSData(oldp+1161,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1162,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1163,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1164,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1165,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1166,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1167,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1168,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1169,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1170,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1171,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1172,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1173,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),28);
    bufp->fullIData(oldp+1174,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),28);
    bufp->fullSData(oldp+1175,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1176,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1177,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1178,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1179,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1180,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1181,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),22);
    bufp->fullQData(oldp+1182,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1184,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1185,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1186,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1187,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1203,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1204,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1205,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1206,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1207,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1223,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1224,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1225,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1226,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1227,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1243,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1248,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1249,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1250,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1266,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1267,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1268,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1269,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1270,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1271,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1272,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),22);
    bufp->fullQData(oldp+1273,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1275,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1276,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1277,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1278,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1279,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1280,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1281,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1282,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1283,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1284,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1285,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1286,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1287,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1288,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1289,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1290,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1292,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1293,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),28);
    bufp->fullIData(oldp+1294,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),28);
    bufp->fullCData(oldp+1295,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1296,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1297,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1299,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1301,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1303,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1305,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1306,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1307,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1308,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1309,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1310,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1311,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1327,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1328,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1329,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1361,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1362,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1363,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1364,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1365,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1366,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1367,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+1383,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+1384,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+1385,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),29);
    bufp->fullCData(oldp+1386,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+1387,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+1419,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+1435,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+1439,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+1443,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+1445,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+1446,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+1447,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+1448,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+1449,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+1466,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+1483,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+1500,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+1517,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+1534,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+1551,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+1568,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+1585,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+1602,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+1619,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+1636,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+1653,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+1670,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+1687,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+1704,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+1721,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+1738,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+1755,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+1756,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+1757,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+1758,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+1759,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+1760,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+1761,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+1762,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+1763,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+1764,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1765,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+1766,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+1767,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+1768,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+1769,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+1770,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+1771,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1772,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+1773,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+1775,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+1777,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+1778,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+1779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),28);
    bufp->fullIData(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),28);
    bufp->fullBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+1790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+1791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),22);
    bufp->fullBit(oldp+1792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+1793,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+1794,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+1795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+1796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),28);
    bufp->fullIData(oldp+1797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+1798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+1799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+1800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+1801,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+1802,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+1803,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+1804,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+1805,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+1806,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+1807,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+1808,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+1809,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+1810,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),22);
    bufp->fullBit(oldp+1811,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+1812,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+1813,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+1814,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+1815,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+1817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+1818,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+1819,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+1820,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+1821,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+1822,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+1823,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+1824,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+1825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+1826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+1827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),19);
    bufp->fullIData(oldp+1828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),19);
    bufp->fullIData(oldp+1829,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),19);
    bufp->fullIData(oldp+1830,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),19);
    bufp->fullIData(oldp+1831,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),19);
    bufp->fullIData(oldp+1832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),19);
    bufp->fullIData(oldp+1833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),19);
    bufp->fullIData(oldp+1834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),19);
    bufp->fullBit(oldp+1835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+1836,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+1837,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+1838,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+1854,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+1870,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+1871,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+1872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+1873,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+1889,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+1891,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+1892,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),19);
    bufp->fullBit(oldp+1893,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+1894,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1895,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+1896,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+1897,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+1898,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+1899,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+1900,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+1901,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+1902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+1903,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+1904,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+1905,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),22);
    bufp->fullCData(oldp+1906,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1907,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+1908,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                            >> 3U))),19);
    bufp->fullBit(oldp+1909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+1910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+1911,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+1912,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),19);
    bufp->fullSData(oldp+1913,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+1914,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+1915,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+1931,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+1947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+1948,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+1950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+1951,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+1967,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+1986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+1993,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+1994,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+1998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+1999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+2000,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+2001,((0xfffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),28);
    bufp->fullBit(oldp+2002,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+2003,(__Vtemp_he3c3974d__0),512);
    bufp->fullSData(oldp+2019,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),16);
    bufp->fullSData(oldp+2020,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),16);
    bufp->fullSData(oldp+2021,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),16);
    bufp->fullSData(oldp+2022,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),16);
    bufp->fullSData(oldp+2023,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),16);
    bufp->fullSData(oldp+2024,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),16);
    bufp->fullSData(oldp+2025,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),16);
    bufp->fullSData(oldp+2026,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),16);
    bufp->fullCData(oldp+2027,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+2028,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+2029,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+2030,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+2031,((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U)) 
                               == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                               >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                  >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+2032,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+2033,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),28);
    bufp->fullCData(oldp+2034,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+2035,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),19);
    bufp->fullIData(oldp+2036,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),19);
    bufp->fullIData(oldp+2037,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),19);
    bufp->fullIData(oldp+2038,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U))),19);
    bufp->fullIData(oldp+2039,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                            >> 9U))),19);
    bufp->fullBit(oldp+2040,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2041,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),19);
    bufp->fullWData(oldp+2042,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2058,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2080,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2081,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2082,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2083,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2084,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2085,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2101,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2118,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2119,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2120,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2123,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2124,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2125,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2126,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2127,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2128,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2130,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2131,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2132,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2133,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2134,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2135,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2136,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),28);
    bufp->fullBit(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2162,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2163,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2164,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2165,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2168,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2169,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2170,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2171,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2172,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2173,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),28);
    bufp->fullBit(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2195,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2210,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),28);
    bufp->fullIData(oldp+2211,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2212,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2213,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2214,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2215,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2216,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2217,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2218,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),28);
    bufp->fullCData(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2232,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2234,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2236,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2237,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2242,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2243,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2244,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2246,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2247,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2248,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2249,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2250,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2251,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2252,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2253,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2262,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),28);
    bufp->fullIData(oldp+2263,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),28);
    bufp->fullBit(oldp+2264,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2265,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2272,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2274,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2275,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2276,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2278,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2280,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2283,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2284,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2285,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2286,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2287,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2288,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2289,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2290,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2291,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2292,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),28);
    bufp->fullIData(oldp+2293,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2294,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2295,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2296,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2297,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2298,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2299,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2300,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2301,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2302,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2303,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2304,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2305,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2306,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2308,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2310,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2312,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2314,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2315,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2316,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2317,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2319,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2321,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2322,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2326,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2327,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2328,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2329,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2330,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2332,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2334,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2336,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2338,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2339,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2340,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2341,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2342,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2343,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2344,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2345,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2346,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2347,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2348,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2349,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2350,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2351,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2352,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2353,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2354,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2355,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2356,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2357,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2358,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2359,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2360,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2361,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2362,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2363,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2364,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2365,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2366,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2367,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2368,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2369,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2370,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2371,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2372,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2373,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2374,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+2375,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+2376,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+2377,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+2378,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+2379,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+2380,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+2381,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+2382,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+2383,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+2384,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+2385,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+2386,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+2387,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+2388,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+2389,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+2390,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+2391,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+2392,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+2393,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+2394,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+2395,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2396,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+2399,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+2400,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+2402,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2403,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2404,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+2405,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+2406,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+2407,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+2408,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+2409,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2410,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+2412,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+2413,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+2415,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+2416,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+2417,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+2418,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+2419,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+2420,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+2421,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullSData(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+2432,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+2440,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+2447,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+2448,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+2461,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+2462,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+2463,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+2464,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+2465,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+2466,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+2467,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+2468,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+2469,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+2470,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+2471,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+2472,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+2473,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+2474,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+2475,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+2476,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+2477,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+2478,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+2479,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+2480,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+2481,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+2482,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+2483,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+2484,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+2485,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+2486,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+2487,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+2488,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+2489,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+2490,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+2491,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+2492,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+2493,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+2494,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+2495,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+2496,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+2497,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+2498,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+2499,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+2500,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+2501,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+2502,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+2503,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+2504,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+2505,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+2506,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+2507,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),28);
    bufp->fullIData(oldp+2508,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),28);
    bufp->fullCData(oldp+2509,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+2510,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),28);
    bufp->fullBit(oldp+2511,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+2512,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+2513,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+2514,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+2515,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+2516,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+2517,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+2518,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+2519,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+2520,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+2521,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+2522,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullIData(oldp+2523,((0x1fffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                     >> 0x16U)))),21);
    bufp->fullBit(oldp+2524,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+2525,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+2526,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+2527,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+2528,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+2544,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+2560,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+2562,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+2564,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+2565,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullCData(oldp+2566,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullBit(oldp+2567,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+2568,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+2569,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+2570,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullIData(oldp+2571,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullBit(oldp+2572,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+2573,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+2574,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+2575,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2576,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2577,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+2578,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+2579,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+2580,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+2581,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+2582,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+2583,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+2584,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+2585,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+2586,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+2587,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+2588,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+2589,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+2590,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+2591,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+2592,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+2593,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+2594,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+2595,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+2596,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+2597,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+2598,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+2599,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+2600,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+2601,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+2602,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+2603,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+2604,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+2605,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+2606,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+2607,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+2608,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+2609,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2610,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2611,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2612,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+2613,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),13);
    bufp->fullBit(oldp+2614,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2615,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2616,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+2617,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2618,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullIData(oldp+2619,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullCData(oldp+2620,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullSData(oldp+2621,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),13);
    bufp->fullBit(oldp+2622,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullIData(oldp+2623,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullQData(oldp+2624,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),62);
    bufp->fullQData(oldp+2626,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),62);
    bufp->fullIData(oldp+2628,((0x3ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),26);
    bufp->fullBit(oldp+2629,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+2630,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+2647,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2649,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+2650,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+2651,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+2652,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+2668,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+2670,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+2671,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+2672,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+2673,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+2674,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+2675,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+2676,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+2677,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+2678,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+2679,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+2680,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+2681,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+2682,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+2683,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+2684,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+2685,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+2686,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+2687,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+2688,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+2689,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+2690,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+2691,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+2692,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+2693,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+2694,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+2695,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+2696,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+2697,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+2698,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+2699,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+2700,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+2701,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+2702,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+2703,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2704,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2705,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2706,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+2707,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+2708,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+2709,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+2710,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),54);
    bufp->fullQData(oldp+2712,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+2714,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+2715,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+2717,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+2718,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2719,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+2720,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2721,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+2722,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2723,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+2724,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2725,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+2726,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+2727,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+2728,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),27);
    bufp->fullIData(oldp+2729,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+2730,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+2731,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+2732,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+2733,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+2734,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+2735,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+2736,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+2737,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+2738,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2739,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+2740,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2741,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3fU)))));
    bufp->fullIData(oldp+2742,((0x7ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),27);
    bufp->fullIData(oldp+2743,((IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+2744,((0xfU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullCData(oldp+2745,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+2746,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+2747,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3fU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullIData(oldp+2749,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),27);
    bufp->fullQData(oldp+2750,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+2752,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullQData(oldp+2753,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),64);
    bufp->fullQData(oldp+2755,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),64);
    bufp->fullQData(oldp+2757,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),64);
    bufp->fullCData(oldp+2759,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+2760,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
    bufp->fullWData(oldp+2761,(__Vtemp_h708d16f1__0),88);
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
    bufp->fullWData(oldp+2764,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+2828,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+2836,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+2837,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+2838,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+2902,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+2903,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),2);
    bufp->fullQData(oldp+2904,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),44);
    bufp->fullWData(oldp+2906,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1024);
    bufp->fullWData(oldp+2938,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),128);
    bufp->fullCData(oldp+2942,(((IData)(vlSelf->main__DOT__wbwide_wbdown_stall) 
                                << 1U)),2);
    bufp->fullCData(oldp+2943,((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) 
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
    bufp->fullWData(oldp+2944,(__Vtemp_h7899650d__0),1024);
    bufp->fullCData(oldp+2976,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2977,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),3);
    bufp->fullCData(oldp+2978,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),3);
    bufp->fullCData(oldp+2979,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),3);
    bufp->fullCData(oldp+2980,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),2);
    bufp->fullCData(oldp+2981,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),2);
    bufp->fullCData(oldp+2982,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),2);
    bufp->fullCData(oldp+2983,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),2);
    bufp->fullCData(oldp+2984,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),3);
    bufp->fullCData(oldp+2985,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),3);
    bufp->fullCData(oldp+2986,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),3);
    bufp->fullCData(oldp+2987,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),3);
    bufp->fullCData(oldp+2988,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+2989,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+2990,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+2991,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+2992,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+2993,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+2994,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+2995,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+2996,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+2997,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+2998,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),22);
    bufp->fullIData(oldp+2999,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),22);
    bufp->fullIData(oldp+3000,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),22);
    bufp->fullIData(oldp+3001,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),22);
    bufp->fullWData(oldp+3002,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+3018,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+3034,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+3050,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+3066,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+3068,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+3070,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+3072,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullWData(oldp+3074,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3090,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3106,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3122,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullCData(oldp+3138,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullBit(oldp+3139,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3140,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3141,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3142,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullCData(oldp+3143,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3144,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3145,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3146,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3147,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3148,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3149,(__Vtemp_h53a5df10__0),512);
    bufp->fullQData(oldp+3165,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3167,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3168,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3169,(__Vtemp_hb52cb2db__0),577);
    bufp->fullBit(oldp+3188,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3189,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3190,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3209,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3210,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3229,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3248,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3267,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3268,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3269,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3270,(__Vtemp_hebded4b4__0),512);
    bufp->fullQData(oldp+3286,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3288,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3289,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3290,(__Vtemp_h0a2cdfa5__0),577);
    bufp->fullBit(oldp+3309,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3310,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3311,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3330,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),2);
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
    bufp->fullWData(oldp+3331,(__Vtemp_he57bd368__0),599);
    bufp->fullWData(oldp+3350,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3369,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3388,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3389,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3390,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3391,(__Vtemp_h0964a254__0),512);
    bufp->fullQData(oldp+3407,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3409,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3410,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3411,(__Vtemp_h925b4b87__0),577);
    bufp->fullBit(oldp+3430,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3431,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3432,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3451,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3452,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3471,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3490,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3509,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3510,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3511,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3512,(__Vtemp_h5b5f8605__0),512);
    bufp->fullQData(oldp+3528,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3530,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3531,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3532,(__Vtemp_hfe9179b2__0),577);
    bufp->fullBit(oldp+3551,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3552,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3553,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3572,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3573,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3592,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3611,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullCData(oldp+3630,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3631,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullSData(oldp+3632,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
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
    __Vtemp_hc53c1a3f__0[0U] = vlSelf->main__DOT__i2cscopei__DOT__o_bus_data;
    __Vtemp_hc53c1a3f__0[1U] = vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data;
    __Vtemp_hc53c1a3f__0[2U] = vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data;
    __Vtemp_hc53c1a3f__0[3U] = vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data;
    __Vtemp_hc53c1a3f__0[4U] = vlSelf->main__DOT__i2ci__DOT__bus_read_data;
    __Vtemp_hc53c1a3f__0[5U] = vlSelf->main__DOT__wb32_i2cdma_idata;
    __Vtemp_hc53c1a3f__0[6U] = vlSelf->main__DOT__wb32_uart_idata;
    __Vtemp_hc53c1a3f__0[7U] = vlSelf->main__DOT__wb32_fan_idata;
    __Vtemp_hc53c1a3f__0[8U] = vlSelf->main__DOT__r_wb32_sio_data;
    __Vtemp_hc53c1a3f__0[9U] = 0U;
    __Vtemp_hc53c1a3f__0[0xaU] = (IData)((((QData)((IData)(
                                                           vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))));
    __Vtemp_hc53c1a3f__0[0xbU] = (IData)(((((QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->main__DOT__wb32_ddr3_phy_idata))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+3633,(__Vtemp_hc53c1a3f__0),384);
    bufp->fullIData(oldp+3645,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3646,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3647,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3648,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3649,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3650,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3651,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3652,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3653,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3654,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3655,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3656,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3657,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3658,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3659,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3660,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullBit(oldp+3661,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+3662,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+3663,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullBit(oldp+3664,(vlSelf->main__DOT__wb32_ddr3_controller_stall));
    bufp->fullIData(oldp+3665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+3666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+3667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullIData(oldp+3668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),18);
    bufp->fullBit(oldp+3669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+3670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+3671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+3672,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                              & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+3673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullCData(oldp+3674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullSData(oldp+3675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+3676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+3677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+3678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+3679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+3680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+3681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullBit(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+3684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullWData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),256);
    bufp->fullIData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),32);
    bufp->fullSData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+3699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullBit(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+3701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullIData(oldp+3703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),32);
    bufp->fullIData(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),32);
    bufp->fullIData(oldp+3705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),32);
    bufp->fullIData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),32);
    bufp->fullWData(oldp+3707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),256);
    bufp->fullWData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),256);
    bufp->fullWData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),256);
    bufp->fullWData(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),256);
    bufp->fullQData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullQData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
    bufp->fullQData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
    bufp->fullQData(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
    bufp->fullCData(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullCData(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
    bufp->fullCData(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
    bufp->fullSData(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+3755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+3756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+3757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+3758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+3759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+3760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+3761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+3762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+3763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+3764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+3765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+3766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+3767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+3768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+3769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+3770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+3772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+3773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+3774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+3775,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+3776,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+3777,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+3778,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+3779,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+3780,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+3781,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+3782,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+3783,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+3784,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+3785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullBit(oldp+3786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+3787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullCData(oldp+3788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+3789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+3790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+3791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullBit(oldp+3792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
    bufp->fullBit(oldp+3793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+3794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+3795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+3796,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+3798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+3799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+3800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+3801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+3802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+3803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index),6);
    bufp->fullCData(oldp+3804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullCData(oldp+3805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat),3);
    bufp->fullCData(oldp+3806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+3809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullCData(oldp+3810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),2);
    bufp->fullCData(oldp+3811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),5);
    bufp->fullSData(oldp+3812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+3813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+3814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+3815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
    bufp->fullCData(oldp+3816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
    bufp->fullCData(oldp+3817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
    bufp->fullCData(oldp+3818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+3819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+3820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+3821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+3822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+3823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+3824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+3825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+3826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+3827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+3828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+3829,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+3830,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+3831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullWData(oldp+3832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),256);
    bufp->fullWData(oldp+3840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),256);
    bufp->fullBit(oldp+3848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+3849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+3850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+3851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullWData(oldp+3852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),256);
    bufp->fullBit(oldp+3860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+3861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+3862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+3863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullWData(oldp+3864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),256);
    bufp->fullWData(oldp+3872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+3876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+3877,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
    bufp->fullCData(oldp+3878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
    bufp->fullCData(oldp+3879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
    bufp->fullCData(oldp+3880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+3888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+3893,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3894,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3895,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3896,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
    bufp->fullBit(oldp+3897,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+3898,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+3899,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+3900,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+3901,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+3902,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+3903,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3904,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3905,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3906,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3907,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),4);
    bufp->fullCData(oldp+3908,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),4);
    bufp->fullCData(oldp+3909,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),4);
    bufp->fullCData(oldp+3910,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),4);
    bufp->fullCData(oldp+3911,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),2);
    bufp->fullIData(oldp+3912,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
    bufp->fullSData(oldp+3913,((((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                 << 0xbU) | ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                             << 0xaU))),12);
    bufp->fullBit(oldp+3914,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
    bufp->fullBit(oldp+3915,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
    bufp->fullBit(oldp+3916,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3917,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3918,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullBit(oldp+3919,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+3920,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullBit(oldp+3921,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 8U))));
    bufp->fullBit(oldp+3922,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3923,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 8U))));
    bufp->fullIData(oldp+3924,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+3925,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x20U)))),4);
    bufp->fullBit(oldp+3926,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0x100U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3927,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullBit(oldp+3928,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+3929,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                       >> 8U) & (0x400U 
                                                 == 
                                                 (0x700U 
                                                  & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+3930,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+3931,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+3932,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullIData(oldp+3933,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),25);
    bufp->fullIData(oldp+3934,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+3935,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+3936,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3937,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3938,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullIData(oldp+3939,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                               << 7U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                                 >> 0x19U)))),25);
    bufp->fullIData(oldp+3940,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+3941,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 4U)))),4);
    bufp->fullBit(oldp+3942,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+3943,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+3944,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullIData(oldp+3945,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                               << 0xeU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                 >> 0x12U)))),25);
    bufp->fullIData(oldp+3946,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+3947,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 8U)))),4);
    bufp->fullBit(oldp+3948,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 3U))));
    bufp->fullBit(oldp+3949,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 3U))));
    bufp->fullBit(oldp+3950,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 3U))));
    bufp->fullIData(oldp+3951,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                               << 0x15U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                 >> 0xbU)))),25);
    bufp->fullIData(oldp+3952,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+3953,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0xcU)))),4);
    bufp->fullBit(oldp+3954,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 4U))));
    bufp->fullBit(oldp+3955,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 4U))));
    bufp->fullBit(oldp+3956,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 4U))));
    bufp->fullIData(oldp+3957,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                              >> 4U))),25);
    bufp->fullIData(oldp+3958,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+3959,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x10U)))),4);
    bufp->fullBit(oldp+3960,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 5U))));
    bufp->fullBit(oldp+3961,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 5U))));
    bufp->fullBit(oldp+3962,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 5U))));
    bufp->fullIData(oldp+3963,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                               << 3U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                 >> 0x1dU)))),25);
    bufp->fullIData(oldp+3964,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+3965,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x14U)))),4);
    bufp->fullBit(oldp+3966,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 6U))));
    bufp->fullBit(oldp+3967,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 6U))));
    bufp->fullBit(oldp+3968,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 6U))));
    bufp->fullIData(oldp+3969,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                               << 0xaU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                 >> 0x16U)))),25);
    bufp->fullIData(oldp+3970,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+3971,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x18U)))),4);
    bufp->fullBit(oldp+3972,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 7U))));
    bufp->fullBit(oldp+3973,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 7U))));
    bufp->fullBit(oldp+3974,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U))));
    bufp->fullIData(oldp+3975,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                               << 0x11U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                 >> 0xfU)))),25);
    bufp->fullIData(oldp+3976,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+3977,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x1cU)))),4);
    bufp->fullBit(oldp+3978,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 8U))));
    bufp->fullIData(oldp+3979,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                               << 0x18U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                 >> 8U)))),25);
    bufp->fullBit(oldp+3980,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 9U))));
    bufp->fullBit(oldp+3981,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 9U))));
    bufp->fullBit(oldp+3982,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 9U))));
    bufp->fullIData(oldp+3983,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                              >> 1U))),25);
    bufp->fullIData(oldp+3984,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+3985,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x24U)))),4);
    bufp->fullBit(oldp+3986,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+3987,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+3988,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xaU))));
    bufp->fullIData(oldp+3989,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                               << 6U) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                 >> 0x1aU)))),25);
    bufp->fullIData(oldp+3990,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+3991,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x28U)))),4);
    bufp->fullBit(oldp+3992,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+3993,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+3994,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xbU))));
    bufp->fullIData(oldp+3995,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                               << 0xdU) 
                                              | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                 >> 0x13U)))),25);
    bufp->fullIData(oldp+3996,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]),32);
    bufp->fullCData(oldp+3997,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x2cU)))),4);
    bufp->fullCData(oldp+3998,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                      >> 0x16U))),2);
    bufp->fullIData(oldp+3999,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                              << 0xdU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                >> 0x13U)))),24);
    __Vtemp_hc54d2555__0[0U] = vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU];
    __Vtemp_hc54d2555__0[1U] = 0U;
    __Vtemp_hc54d2555__0[2U] = 0U;
    __Vtemp_hc54d2555__0[3U] = 0U;
    __Vtemp_hc54d2555__0[4U] = 0U;
    __Vtemp_hc54d2555__0[5U] = 0U;
    __Vtemp_hc54d2555__0[6U] = 0U;
    __Vtemp_hc54d2555__0[7U] = 0U;
    bufp->fullWData(oldp+4000,(__Vtemp_hc54d2555__0),256);
    bufp->fullIData(oldp+4008,(((IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                         >> 0x10U)) 
                                >> 0x1cU)),32);
    bufp->fullCData(oldp+4009,((0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                          << 6U) | 
                                         (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                          >> 0x1aU)))),7);
    bufp->fullIData(oldp+4010,((0xffffffU & ((IData)(5U) 
                                             + ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                 << 0xdU) 
                                                | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                   >> 0x13U))))),24);
    bufp->fullIData(oldp+4011,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullCData(oldp+4012,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 4U))),2);
    bufp->fullBit(oldp+4013,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+4014,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+4015,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+4016,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+4017,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+4018,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+4019,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+4020,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+4021,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+4022,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+4023,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+4024,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+4025,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+4026,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4027,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4028,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+4029,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+4030,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4031,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4032,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+4033,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+4034,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4035,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullCData(oldp+4036,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullBit(oldp+4037,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullCData(oldp+4038,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),3);
    bufp->fullBit(oldp+4039,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+4040,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),2);
    bufp->fullBit(oldp+4041,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+4042,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+4043,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+4044,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+4045,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+4046,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+4047,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullCData(oldp+4048,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 0x1dU))),2);
    bufp->fullIData(oldp+4049,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+4050,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullSData(oldp+4051,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),12);
    bufp->fullSData(oldp+4052,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),12);
    bufp->fullSData(oldp+4053,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),12);
    bufp->fullWData(oldp+4054,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),300);
    bufp->fullWData(oldp+4064,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),384);
    bufp->fullQData(oldp+4076,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),48);
    bufp->fullSData(oldp+4078,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),13);
    bufp->fullSData(oldp+4079,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),12);
    bufp->fullCData(oldp+4080,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4081,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+4082,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+4083,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+4084,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+4085,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullBit(oldp+4086,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullSData(oldp+4087,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),13);
    bufp->fullBit(oldp+4088,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+4089,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4090,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4091,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3dU)))));
    bufp->fullIData(oldp+4092,((0x1ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),25);
    bufp->fullIData(oldp+4093,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+4094,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullQData(oldp+4095,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3dU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullQData(oldp+4097,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+4099,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),12);
    bufp->fullQData(oldp+4100,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),62);
    bufp->fullCData(oldp+4102,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4103,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4104,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4105,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+4106,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),2);
    bufp->fullCData(oldp+4107,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),2);
    bufp->fullCData(oldp+4108,(((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err) 
                                << 1U)),2);
    bufp->fullCData(oldp+4109,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+4110,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4111,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4112,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4113,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4114,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+4115,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+4116,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+4117,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+4118,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4119,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullCData(oldp+4120,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullCData(oldp+4121,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+4122,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4123,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4124,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4125,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4126,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4127,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4128,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4129,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4130,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4131,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullBit(oldp+4132,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4133,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullBit(oldp+4134,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4135,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4136,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4137,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4138,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4139,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4140,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4141,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4142,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4143,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4144,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4145,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4146,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4147,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4148,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4149,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullBit(oldp+4150,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+4151,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data[0U]),32);
    bufp->fullWData(oldp+4152,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data),256);
    bufp->fullCData(oldp+4160,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+4161,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+4162,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+4163,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+4164,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+4165,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+4166,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+4167,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+4168,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+4169,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+4170,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+4171,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+4172,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+4173,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+4174,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+4175,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+4176,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U])));
    bufp->fullBit(oldp+4177,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+4178,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+4179,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+4180,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+4181,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+4182,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+4183,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+4184,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+4185,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+4186,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+4187,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullCData(oldp+4188,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+4189,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+4190,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+4191,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+4192,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+4193,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+4194,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+4195,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+4196,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+4197,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+4198,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+4199,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+4200,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+4201,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+4202,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+4203,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+4204,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+4205,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+4206,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+4207,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+4208,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+4209,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+4210,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+4211,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+4212,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+4213,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+4214,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+4215,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+4216,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+4217,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+4218,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+4219,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+4220,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+4221,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+4222,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+4223,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+4224,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+4225,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+4226,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+4227,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+4228,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+4229,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullBit(oldp+4230,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4231,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4232,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4233,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4234,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullBit(oldp+4235,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4236,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4237,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4238,(vlSelf->i_clk));
    bufp->fullBit(oldp+4239,(vlSelf->i_reset));
    bufp->fullWData(oldp+4240,(vlSelf->i_ddr3_controller_iserdes_data),256);
    bufp->fullIData(oldp+4248,(vlSelf->i_ddr3_controller_iserdes_dqs),32);
    bufp->fullIData(oldp+4249,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),32);
    bufp->fullBit(oldp+4250,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4251,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4254,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4255,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4256,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullWData(oldp+4257,(vlSelf->o_ddr3_controller_data),256);
    bufp->fullIData(oldp+4265,(vlSelf->o_ddr3_controller_dm),32);
    bufp->fullCData(oldp+4266,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4267,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4268,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4269,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4270,(vlSelf->o_ddr3_controller_odelay_data_ld),4);
    bufp->fullCData(oldp+4271,(vlSelf->o_ddr3_controller_odelay_dqs_ld),4);
    bufp->fullCData(oldp+4272,(vlSelf->o_ddr3_controller_idelay_data_ld),4);
    bufp->fullCData(oldp+4273,(vlSelf->o_ddr3_controller_idelay_dqs_ld),4);
    bufp->fullCData(oldp+4274,(vlSelf->o_ddr3_controller_bitslip),4);
    bufp->fullCData(oldp+4275,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4276,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4277,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4278,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4279,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4280,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4281,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4282,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4283,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4284,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4285,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4286,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4287,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4288,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4289,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4290,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4291,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4292,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4293,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4294,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4295,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4296,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4297,(vlSelf->cpu_prof_addr),28);
    bufp->fullIData(oldp+4298,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4299,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4300,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4301,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4302,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4303,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4304,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4305,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4306,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4307,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4308,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4309,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+4310,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+4311,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+4312,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4313,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4314,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U] & (0xeU == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->fullBit(oldp+4315,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4316,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4317,((0U == ((((((((Vmain__ConstPool__CONST_h9e67c271_0[0U] 
                                            ^ vlSelf->i_ddr3_controller_iserdes_data[0U]) 
                                           | (Vmain__ConstPool__CONST_h9e67c271_0[1U] 
                                              ^ vlSelf->i_ddr3_controller_iserdes_data[1U])) 
                                          | (Vmain__ConstPool__CONST_h9e67c271_0[2U] 
                                             ^ vlSelf->i_ddr3_controller_iserdes_data[2U])) 
                                         | (Vmain__ConstPool__CONST_h9e67c271_0[3U] 
                                            ^ vlSelf->i_ddr3_controller_iserdes_data[3U])) 
                                        | (Vmain__ConstPool__CONST_h9e67c271_0[4U] 
                                           ^ vlSelf->i_ddr3_controller_iserdes_data[4U])) 
                                       | (Vmain__ConstPool__CONST_h9e67c271_0[5U] 
                                          ^ vlSelf->i_ddr3_controller_iserdes_data[5U])) 
                                      | (Vmain__ConstPool__CONST_h9e67c271_0[6U] 
                                         ^ vlSelf->i_ddr3_controller_iserdes_data[6U])) 
                                     | (Vmain__ConstPool__CONST_h9e67c271_0[7U] 
                                        ^ vlSelf->i_ddr3_controller_iserdes_data[7U])))));
    bufp->fullSData(oldp+4318,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4319,(vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4),31);
    bufp->fullCData(oldp+4320,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4321,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),28);
    bufp->fullBit(oldp+4322,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4325,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4326,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4327,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4328,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4329,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4330,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4331,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullSData(oldp+4332,(((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
    bufp->fullIData(oldp+4333,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4334,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4335,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4336,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullCData(oldp+4337,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4338,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4339,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullIData(oldp+4340,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullIData(oldp+4341,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4342,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4343,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4344,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4345,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4346,(10.0));
    bufp->fullDouble(oldp+4348,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4350,(0xeU),32);
    bufp->fullIData(oldp+4351,(0xaU),32);
    bufp->fullIData(oldp+4352,(3U),32);
    bufp->fullIData(oldp+4353,(8U),32);
    bufp->fullIData(oldp+4354,(4U),32);
    bufp->fullIData(oldp+4355,(1U),32);
    bufp->fullIData(oldp+4356,(0x18U),32);
    bufp->fullIData(oldp+4357,(0x2000000U),32);
    bufp->fullIData(oldp+4358,(0x16U),32);
    bufp->fullIData(oldp+4359,(0x10U),32);
    bufp->fullBit(oldp+4360,(1U));
    bufp->fullIData(oldp+4361,(0x64U),24);
    bufp->fullIData(oldp+4362,(7U),32);
    bufp->fullIData(oldp+4363,(0x13U),32);
    bufp->fullIData(oldp+4364,(2U),32);
    bufp->fullIData(oldp+4365,(0U),32);
    bufp->fullBit(oldp+4366,(0U));
    bufp->fullBit(oldp+4367,(1U));
    bufp->fullWData(oldp+4368,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4384,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+4386,(vlSelf->main__DOT__wb32_buildtime_addr),25);
    bufp->fullBit(oldp+4387,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4388,(0x173842U),32);
    bufp->fullIData(oldp+4389,(vlSelf->main__DOT__wb32_gpio_addr),25);
    bufp->fullBit(oldp+4390,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullIData(oldp+4391,(vlSelf->main__DOT__wb32_sirefclk_addr),25);
    bufp->fullBit(oldp+4392,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullIData(oldp+4393,(vlSelf->main__DOT__wb32_spio_addr),25);
    bufp->fullBit(oldp+4394,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullIData(oldp+4395,(vlSelf->main__DOT__wb32_version_addr),25);
    bufp->fullBit(oldp+4396,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4397,(0x20230830U),32);
    bufp->fullCData(oldp+4398,(0xfU),4);
    bufp->fullCData(oldp+4399,(0x20U),8);
    bufp->fullIData(oldp+4400,(0x14U),32);
    bufp->fullIData(oldp+4401,(0x200U),32);
    bufp->fullCData(oldp+4402,(0U),8);
    bufp->fullBit(oldp+4403,(0U));
    bufp->fullIData(oldp+4404,(0x20U),32);
    bufp->fullCData(oldp+4405,(6U),4);
    bufp->fullCData(oldp+4406,(0U),2);
    bufp->fullCData(oldp+4407,(1U),2);
    bufp->fullCData(oldp+4408,(2U),2);
    bufp->fullCData(oldp+4409,(3U),2);
    bufp->fullIData(oldp+4410,(0x40U),32);
    bufp->fullIData(oldp+4411,(0x100U),32);
    bufp->fullCData(oldp+4412,(0U),4);
    bufp->fullCData(oldp+4413,(1U),4);
    bufp->fullCData(oldp+4414,(2U),4);
    bufp->fullCData(oldp+4415,(3U),4);
    bufp->fullCData(oldp+4416,(4U),4);
    bufp->fullCData(oldp+4417,(5U),4);
    bufp->fullCData(oldp+4418,(7U),4);
    bufp->fullIData(oldp+4419,(0x1bU),32);
    bufp->fullIData(oldp+4420,(0x1aU),32);
    bufp->fullIData(oldp+4421,(0x19U),32);
    bufp->fullIData(oldp+4422,(0x17U),32);
    bufp->fullIData(oldp+4423,(0x12U),32);
    bufp->fullIData(oldp+4424,(0x15U),32);
    bufp->fullIData(oldp+4425,(0x11U),32);
    bufp->fullIData(oldp+4426,(0xdU),32);
    bufp->fullIData(oldp+4427,(0xbebc200U),32);
    bufp->fullIData(oldp+4428,(0x1dcd6500U),32);
    bufp->fullDouble(oldp+4429,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4431,(0x23U),32);
    bufp->fullDouble(oldp+4432,(350.0));
    bufp->fullIData(oldp+4434,(0x1e78U),32);
    bufp->fullDouble(oldp+4435,(360.0));
    bufp->fullDouble(oldp+4437,(15.0));
    bufp->fullIData(oldp+4439,(0xaU),19);
    bufp->fullDouble(oldp+4440,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4442,(0x80U),32);
    bufp->fullIData(oldp+4443,(6U),32);
    bufp->fullIData(oldp+4444,(5U),32);
    bufp->fullIData(oldp+4445,(0x2f080U),19);
    bufp->fullIData(oldp+4446,(9U),32);
    bufp->fullIData(oldp+4447,(0xbU),32);
    bufp->fullIData(oldp+4448,(0xcU),32);
    bufp->fullCData(oldp+4449,(0U),3);
    bufp->fullCData(oldp+4450,(2U),3);
    bufp->fullIData(oldp+4451,(0x20040U),19);
    bufp->fullCData(oldp+4452,(3U),3);
    bufp->fullIData(oldp+4453,(0x30004U),19);
    bufp->fullIData(oldp+4454,(0x30000U),19);
    bufp->fullCData(oldp+4455,(1U),3);
    bufp->fullIData(oldp+4456,(0x100c4U),19);
    bufp->fullIData(oldp+4457,(0x10044U),19);
    bufp->fullIData(oldp+4458,(0x720U),19);
    bufp->fullIData(oldp+4459,(0x4380005U),28);
    bufp->fullIData(oldp+4460,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4461,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4462,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4463,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4464,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4465,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4466,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4467,(0x1eU),32);
    bufp->fullIData(oldp+4468,(0x24U),32);
    bufp->fullIData(oldp+4469,(0x400U),32);
    bufp->fullCData(oldp+4470,(0U),5);
    bufp->fullQData(oldp+4471,(0x100000000ULL),36);
    bufp->fullQData(oldp+4473,(0x40000000ULL),36);
    bufp->fullQData(oldp+4475,(0ULL),36);
    bufp->fullCData(oldp+4477,(0x4fU),7);
    bufp->fullCData(oldp+4478,(0x49U),7);
    bufp->fullIData(oldp+4479,(0x1cU),32);
    bufp->fullIData(oldp+4480,(0U),28);
    bufp->fullSData(oldp+4481,(0xfffU),12);
    bufp->fullCData(oldp+4482,(8U),4);
    bufp->fullCData(oldp+4483,(9U),4);
    bufp->fullCData(oldp+4484,(0xaU),4);
    bufp->fullCData(oldp+4485,(0xbU),4);
    bufp->fullCData(oldp+4486,(0xcU),4);
    bufp->fullCData(oldp+4487,(0xdU),4);
    bufp->fullCData(oldp+4488,(4U),3);
    bufp->fullCData(oldp+4489,(5U),3);
    bufp->fullCData(oldp+4490,(6U),3);
    bufp->fullCData(oldp+4491,(7U),3);
    bufp->fullCData(oldp+4492,(0xaU),5);
    bufp->fullIData(oldp+4493,(0x1fU),32);
    bufp->fullIData(oldp+4494,(0x1fcU),20);
    bufp->fullIData(oldp+4495,(0x7fffffffU),31);
    bufp->fullCData(oldp+4496,(0x64U),7);
    bufp->fullCData(oldp+4497,(0x32U),7);
    bufp->fullIData(oldp+4498,(0xc0000000U),32);
    bufp->fullCData(oldp+4499,(1U),8);
    bufp->fullCData(oldp+4500,(2U),8);
    bufp->fullCData(oldp+4501,(3U),8);
    bufp->fullCData(oldp+4502,(4U),8);
    bufp->fullCData(oldp+4503,(5U),8);
    bufp->fullCData(oldp+4504,(6U),8);
    bufp->fullCData(oldp+4505,(7U),8);
    bufp->fullCData(oldp+4506,(8U),8);
    bufp->fullCData(oldp+4507,(9U),8);
    bufp->fullCData(oldp+4508,(0xaU),8);
    bufp->fullCData(oldp+4509,(0xbU),8);
    bufp->fullCData(oldp+4510,(0xcU),8);
    bufp->fullCData(oldp+4511,(0xdU),8);
    bufp->fullCData(oldp+4512,(0xeU),8);
    bufp->fullCData(oldp+4513,(0xfU),8);
    bufp->fullCData(oldp+4514,(0x80U),8);
    bufp->fullCData(oldp+4515,(0x10U),8);
    bufp->fullIData(oldp+4516,(0U),20);
    bufp->fullIData(oldp+4517,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4518,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4521,(0x41425254U),32);
    bufp->fullIData(oldp+4522,(0x40U),32);
    bufp->fullIData(oldp+4523,(0xfU),32);
    bufp->fullBit(oldp+4524,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4525,(0x800000U),26);
    bufp->fullCData(oldp+4526,(0xeU),4);
    bufp->fullSData(oldp+4527,(0x1d7U),9);
    bufp->fullSData(oldp+4528,(0x2000U),14);
    bufp->fullIData(oldp+4529,(0U),31);
    bufp->fullCData(oldp+4530,(7U),5);
    bufp->fullIData(oldp+4531,(0x5f5e100U),32);
    bufp->fullIData(oldp+4532,(0x186a0U),32);
    bufp->fullIData(oldp+4533,(0x4e20U),32);
    bufp->fullIData(oldp+4534,(0x1387U),32);
    bufp->fullSData(oldp+4535,(0xc8U),12);
    bufp->fullIData(oldp+4536,(0x10U),32);
    bufp->fullWData(oldp+4537,(Vmain__ConstPool__CONST_h3dd842ba_0),300);
    bufp->fullWData(oldp+4547,(Vmain__ConstPool__CONST_h21727c79_0),300);
    bufp->fullSData(oldp+4557,(0U),12);
    bufp->fullSData(oldp+4558,(0xf000U),16);
    bufp->fullIData(oldp+4559,(0x25U),32);
    bufp->fullIData(oldp+4560,(0x3eU),32);
    bufp->fullQData(oldp+4561,(0x20000000000000ULL),54);
    bufp->fullQData(oldp+4563,(0x20000004000000ULL),54);
    bufp->fullQData(oldp+4565,(0x80000080000ULL),44);
    bufp->fullQData(oldp+4567,(0x80000380000ULL),44);
    bufp->fullIData(oldp+4569,(0x241U),32);
    bufp->fullIData(oldp+4570,(0x257U),32);
}
