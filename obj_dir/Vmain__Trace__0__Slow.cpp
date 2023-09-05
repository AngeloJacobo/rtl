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
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declQuad(c+4152,"i_ddr3_controller_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4154,"i_ddr3_controller_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4155,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4156,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4157,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4160,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4161,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4162,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declQuad(c+4163,"o_ddr3_controller_data", false,-1, 63,0);
    tracep->declBus(c+4165,"o_ddr3_controller_dm", false,-1, 7,0);
    tracep->declBus(c+4166,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4167,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4168,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4169,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4170,"o_ddr3_controller_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4171,"o_ddr3_controller_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4172,"o_ddr3_controller_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4173,"o_ddr3_controller_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4174,"o_ddr3_controller_bitslip", false,-1, 0,0);
    tracep->declBit(c+4175,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBus(c+4176,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4177,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4178,"i_fan_sda", false,-1);
    tracep->declBit(c+4179,"i_fan_scl", false,-1);
    tracep->declBit(c+4180,"o_fan_sda", false,-1);
    tracep->declBit(c+4181,"o_fan_scl", false,-1);
    tracep->declBit(c+4182,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4183,"o_sys_pwm", false,-1);
    tracep->declBit(c+4184,"i_fan_tach", false,-1);
    tracep->declBit(c+4185,"i_i2c_sda", false,-1);
    tracep->declBit(c+4186,"i_i2c_scl", false,-1);
    tracep->declBit(c+4187,"o_i2c_sda", false,-1);
    tracep->declBit(c+4188,"o_i2c_scl", false,-1);
    tracep->declBit(c+4189,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4190,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4191,"cpu_sim_we", false,-1);
    tracep->declBus(c+4192,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4193,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4194,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4195,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4196,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4197,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4198,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4199,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4200,"i_cpu_reset", false,-1);
    tracep->declBit(c+4201,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4202,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4203,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4204,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4205,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4206,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4207,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4208,"o_led", false,-1, 7,0);
    tracep->declBit(c+4209,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4250,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4252,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4254,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4255,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4256,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4257,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4258,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4258,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4259,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4260,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4261,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4262,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4263,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4264,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4265,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4266,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4263,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4267,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4256,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declQuad(c+4152,"i_ddr3_controller_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4154,"i_ddr3_controller_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4155,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4156,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4157,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4160,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4161,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4162,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declQuad(c+4163,"o_ddr3_controller_data", false,-1, 63,0);
    tracep->declBus(c+4165,"o_ddr3_controller_dm", false,-1, 7,0);
    tracep->declBus(c+4166,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4167,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4168,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4169,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4170,"o_ddr3_controller_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4171,"o_ddr3_controller_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4172,"o_ddr3_controller_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4173,"o_ddr3_controller_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4174,"o_ddr3_controller_bitslip", false,-1, 0,0);
    tracep->declBit(c+4175,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBus(c+4176,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4177,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4178,"i_fan_sda", false,-1);
    tracep->declBit(c+4179,"i_fan_scl", false,-1);
    tracep->declBit(c+4180,"o_fan_sda", false,-1);
    tracep->declBit(c+4181,"o_fan_scl", false,-1);
    tracep->declBit(c+4182,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4183,"o_sys_pwm", false,-1);
    tracep->declBit(c+4184,"i_fan_tach", false,-1);
    tracep->declBit(c+4185,"i_i2c_sda", false,-1);
    tracep->declBit(c+4186,"i_i2c_scl", false,-1);
    tracep->declBit(c+4187,"o_i2c_sda", false,-1);
    tracep->declBit(c+4188,"o_i2c_scl", false,-1);
    tracep->declBit(c+4189,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4190,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4191,"cpu_sim_we", false,-1);
    tracep->declBus(c+4192,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4193,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4194,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4195,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4196,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4197,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4198,"cpu_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4199,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4200,"i_cpu_reset", false,-1);
    tracep->declBit(c+4201,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4202,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4203,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4263,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4257,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4204,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4205,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4206,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4207,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4208,"o_led", false,-1, 7,0);
    tracep->declBit(c+135,"scope1_ddr3_int", false,-1);
    tracep->declBit(c+136,"scope2_ddr3_int", false,-1);
    tracep->declBit(c+137,"uartrxf_int", false,-1);
    tracep->declBit(c+138,"uarttx_int", false,-1);
    tracep->declBit(c+139,"uarttxf_int", false,-1);
    tracep->declBit(c+140,"uartrx_int", false,-1);
    tracep->declBit(c+141,"i2cscope_int", false,-1);
    tracep->declBit(c+142,"scope3_ddr3_int", false,-1);
    tracep->declBit(c+143,"gpio_int", false,-1);
    tracep->declBit(c+144,"spio_int", false,-1);
    tracep->declBus(c+145,"ddr3_controller_aux_out", false,-1, 0,0);
    tracep->declBus(c+35,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+4210,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4211,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+146,"r_sirefclk_en", false,-1);
    tracep->declBus(c+147,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+148,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+149,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+150,"i2cdma_ready", false,-1);
    tracep->declBus(c+4212,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4268,"I2C_ID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+151,"i2c_valid", false,-1);
    tracep->declBit(c+152,"i2c_ready", false,-1);
    tracep->declBit(c+153,"i2c_last", false,-1);
    tracep->declBus(c+154,"i2c_data", false,-1, 7,0);
    tracep->declBus(c+155,"i2c_id", false,-1, 1,0);
    tracep->declBus(c+36,"i2c_debug", false,-1, 31,0);
    tracep->declBit(c+156,"w_console_rx_stb", false,-1);
    tracep->declBit(c+157,"w_console_tx_stb", false,-1);
    tracep->declBit(c+158,"w_console_busy", false,-1);
    tracep->declBus(c+159,"w_console_rx_data", false,-1, 6,0);
    tracep->declBus(c+160,"w_console_tx_data", false,-1, 6,0);
    tracep->declBus(c+161,"uart_debug", false,-1, 31,0);
    tracep->declBit(c+162,"raw_cpu_dbg_stall", false,-1);
    tracep->declBit(c+163,"raw_cpu_dbg_ack", false,-1);
    tracep->declBus(c+4269,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4270,"zip_trigger", false,-1);
    tracep->declBus(c+164,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+165,"zip_cpu_int", false,-1);
    tracep->declBit(c+4209,"i_clk200", false,-1);
    tracep->declBus(c+166,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+167,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+168,"wbu_rx_stb", false,-1);
    tracep->declBit(c+169,"wbu_tx_stb", false,-1);
    tracep->declBit(c+170,"wbu_tx_busy", false,-1);
    tracep->declBus(c+171,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4269,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+172,"w_led", false,-1, 7,0);
    tracep->declBus(c+173,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+174,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+175,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+176,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4271,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+177,"wbwide_i2cdma_addr", false,-1, 21,0);
    tracep->declArray(c+178,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+197,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+198,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+199,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+215,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+216,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4270,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+217,"wbwide_i2cm_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4288,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+218,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+219,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+220,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+221,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+237,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+238,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+239,"wbwide_zip_we", false,-1);
    tracep->declBus(c+240,"wbwide_zip_addr", false,-1, 21,0);
    tracep->declArray(c+241,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+257,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+259,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+260,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+261,"wbwide_zip_err", false,-1);
    tracep->declArray(c+262,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+278,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+279,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+280,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+281,"wbwide_wbu_arbiter_addr", false,-1, 21,0);
    tracep->declArray(c+282,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+298,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+300,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+301,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+302,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+303,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+319,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+320,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+321,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+322,"wbwide_bkram_addr", false,-1, 21,0);
    tracep->declArray(c+323,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+339,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4270,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+341,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4270,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+342,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+358,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+359,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+360,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+361,"wbwide_wbdown_addr", false,-1, 21,0);
    tracep->declArray(c+362,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+378,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+380,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+381,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+382,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+383,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+399,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+400,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+401,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+402,"wb32_wbdown_addr", false,-1, 24,0);
    tracep->declBus(c+403,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+404,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+405,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+406,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+407,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+408,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+410,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+411,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4290,"wb32_buildtime_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+410,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4291,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4292,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+414,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+411,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4293,"wb32_gpio_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+414,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4294,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4213,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+415,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+411,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4295,"wb32_sirefclk_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+149,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4296,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+416,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+417,"wb32_spio_stb", false,-1);
    tracep->declBit(c+411,"wb32_spio_we", false,-1);
    tracep->declBus(c+4297,"wb32_spio_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_spio_stall", false,-1);
    tracep->declBit(c+418,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4298,"wb32_spio_err", false,-1);
    tracep->declBus(c+419,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_version_cyc", false,-1);
    tracep->declBit(c+420,"wb32_version_stb", false,-1);
    tracep->declBit(c+411,"wb32_version_we", false,-1);
    tracep->declBus(c+4299,"wb32_version_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_version_stall", false,-1);
    tracep->declBit(c+420,"wb32_version_ack", false,-1);
    tracep->declBit(c+4300,"wb32_version_err", false,-1);
    tracep->declBus(c+4301,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+421,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+422,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+423,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+424,"wb32_i2cscope_addr", false,-1, 24,0);
    tracep->declBus(c+425,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+426,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+427,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4270,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+428,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+429,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+430,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+431,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+432,"wb32_scope1_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+433,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+434,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+435,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4270,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+436,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+437,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+438,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+439,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+440,"wb32_scope2_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+441,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+442,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+443,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4270,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+444,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+445,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+446,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+447,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+448,"wb32_scope3_ddr3_addr", false,-1, 24,0);
    tracep->declBus(c+449,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+450,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+451,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4270,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+452,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+453,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+454,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+455,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+456,"wb32_i2cs_addr", false,-1, 24,0);
    tracep->declBus(c+457,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+458,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+459,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4270,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+460,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+461,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+462,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+463,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+464,"wb32_i2cdma_addr", false,-1, 24,0);
    tracep->declBus(c+465,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+466,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+467,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4270,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+468,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+469,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+470,"wb32_uart_stb", false,-1);
    tracep->declBit(c+471,"wb32_uart_we", false,-1);
    tracep->declBus(c+472,"wb32_uart_addr", false,-1, 24,0);
    tracep->declBus(c+473,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+474,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_uart_stall", false,-1);
    tracep->declBit(c+475,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4270,"wb32_uart_err", false,-1);
    tracep->declBus(c+476,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+477,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+478,"wb32_fan_stb", false,-1);
    tracep->declBit(c+479,"wb32_fan_we", false,-1);
    tracep->declBus(c+480,"wb32_fan_addr", false,-1, 24,0);
    tracep->declBus(c+481,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+482,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_fan_stall", false,-1);
    tracep->declBit(c+483,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4270,"wb32_fan_err", false,-1);
    tracep->declBus(c+484,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+409,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+485,"wb32_sio_stb", false,-1);
    tracep->declBit(c+411,"wb32_sio_we", false,-1);
    tracep->declBus(c+486,"wb32_sio_addr", false,-1, 24,0);
    tracep->declBus(c+412,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+413,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_sio_stall", false,-1);
    tracep->declBit(c+487,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4270,"wb32_sio_err", false,-1);
    tracep->declBus(c+488,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+489,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+490,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+491,"wb32_cfg_we", false,-1);
    tracep->declBus(c+492,"wb32_cfg_addr", false,-1, 24,0);
    tracep->declBus(c+493,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+494,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+495,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4270,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4269,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+496,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+497,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+498,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+499,"wb32_ddr3_phy_addr", false,-1, 24,0);
    tracep->declBus(c+500,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+501,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+502,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+503,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4270,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+504,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+505,"wb32_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+506,"wb32_ddr3_controller_stb", false,-1);
    tracep->declBit(c+507,"wb32_ddr3_controller_we", false,-1);
    tracep->declBus(c+508,"wb32_ddr3_controller_addr", false,-1, 24,0);
    tracep->declBus(c+509,"wb32_ddr3_controller_data", false,-1, 31,0);
    tracep->declBus(c+510,"wb32_ddr3_controller_sel", false,-1, 3,0);
    tracep->declBit(c+511,"wb32_ddr3_controller_stall", false,-1);
    tracep->declBit(c+512,"wb32_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4270,"wb32_ddr3_controller_err", false,-1);
    tracep->declBus(c+513,"wb32_ddr3_controller_idata", false,-1, 31,0);
    tracep->declBit(c+514,"wbu_cyc", false,-1);
    tracep->declBit(c+515,"wbu_stb", false,-1);
    tracep->declBit(c+516,"wbu_we", false,-1);
    tracep->declBus(c+517,"wbu_addr", false,-1, 26,0);
    tracep->declBus(c+518,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4302,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+519,"wbu_stall", false,-1);
    tracep->declBit(c+520,"wbu_ack", false,-1);
    tracep->declBit(c+521,"wbu_err", false,-1);
    tracep->declBus(c+522,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+523,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+524,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+525,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+526,"wbu_wbu_arbiter_addr", false,-1, 26,0);
    tracep->declBus(c+527,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+528,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+529,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+530,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+531,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+532,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+533,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+534,"wbu_zip_stb", false,-1);
    tracep->declBit(c+535,"wbu_zip_we", false,-1);
    tracep->declBus(c+536,"wbu_zip_addr", false,-1, 26,0);
    tracep->declBus(c+537,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+538,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4214,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4215,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4270,"wbu_zip_err", false,-1);
    tracep->declBus(c+539,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+487,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+488,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4270,"zip_unused", false,-1);
    tracep->declBit(c+165,"w_bus_int", false,-1);
    tracep->declBus(c+540,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+495,"r_cfg_ack", false,-1);
    tracep->declBit(c+4270,"cfg_unused", false,-1);
    tracep->declBus(c+4303,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4304,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4258,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4306,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4307,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4254,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+319,"i_wb_cyc", false,-1);
    tracep->declBit(c+320,"i_wb_stb", false,-1);
    tracep->declBit(c+321,"i_wb_we", false,-1);
    tracep->declBus(c+541,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+323,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+339,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+341,"o_wb_ack", false,-1);
    tracep->declArray(c+342,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+542,"w_wstb", false,-1);
    tracep->declBit(c+543,"w_stb", false,-1);
    tracep->declArray(c+544,"w_data", false,-1, 511,0);
    tracep->declBus(c+560,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+561,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+542,"last_wstb", false,-1);
    tracep->declBit(c+543,"last_stb", false,-1);
    tracep->declBus(c+560,"last_addr", false,-1, 13,0);
    tracep->declArray(c+544,"last_data", false,-1, 511,0);
    tracep->declQuad(c+561,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+563,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4257,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBus(c+564,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4176,"o_word", false,-1, 7,0);
    tracep->declBit(c+148,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+565+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+573,"r_delay", false,-1, 31,0);
    tracep->declBus(c+574,"times_three", false,-1, 31,0);
    tracep->declBus(c+575,"times_five", false,-1, 31,0);
    tracep->declBus(c+576,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4309,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+469,"i_wb_cyc", false,-1);
    tracep->declBit(c+470,"i_wb_stb", false,-1);
    tracep->declBit(c+471,"i_wb_we", false,-1);
    tracep->declBus(c+577,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+473,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+474,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+475,"o_wb_ack", false,-1);
    tracep->declBus(c+476,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+157,"o_uart_stb", false,-1);
    tracep->declBus(c+160,"o_uart_data", false,-1, 6,0);
    tracep->declBit(c+158,"i_uart_busy", false,-1);
    tracep->declBit(c+156,"i_uart_stb", false,-1);
    tracep->declBus(c+159,"i_uart_data", false,-1, 6,0);
    tracep->declBit(c+140,"o_uart_rx_int", false,-1);
    tracep->declBit(c+138,"o_uart_tx_int", false,-1);
    tracep->declBit(c+137,"o_uart_rxfifo_int", false,-1);
    tracep->declBit(c+139,"o_uart_txfifo_int", false,-1);
    tracep->declBus(c+161,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4309,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4310,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4311,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4312,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4313,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+578,"rx_uart_reset", false,-1);
    tracep->declBit(c+140,"rx_empty_n", false,-1);
    tracep->declBit(c+579,"rx_fifo_err", false,-1);
    tracep->declBus(c+580,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+581,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+582,"rxf_wb_read", false,-1);
    tracep->declBus(c+583,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+157,"tx_empty_n", false,-1);
    tracep->declBit(c+584,"txf_err", false,-1);
    tracep->declBus(c+585,"txf_status", false,-1, 15,0);
    tracep->declBit(c+586,"txf_wb_write", false,-1);
    tracep->declBit(c+587,"tx_uart_reset", false,-1);
    tracep->declBus(c+588,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+589,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+590,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+591,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+592,"r_wb_ack", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4266,"BW", false,-1, 31,0);
    tracep->declBus(c+4309,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4264,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4314,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+578,"i_reset", false,-1);
    tracep->declBit(c+156,"i_wr", false,-1);
    tracep->declBus(c+159,"i_data", false,-1, 6,0);
    tracep->declBit(c+140,"o_empty_n", false,-1);
    tracep->declBit(c+582,"i_rd", false,-1);
    tracep->declBus(c+580,"o_data", false,-1, 6,0);
    tracep->declBus(c+581,"o_status", false,-1, 15,0);
    tracep->declBit(c+579,"o_err", false,-1);
    tracep->declBus(c+593,"r_data", false,-1, 6,0);
    tracep->declBus(c+594,"last_write", false,-1, 6,0);
    tracep->declBus(c+595,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+596,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+597,"r_next", false,-1, 5,0);
    tracep->declBit(c+598,"will_overflow", false,-1);
    tracep->declBit(c+599,"will_underflow", false,-1);
    tracep->declBit(c+600,"osrc", false,-1);
    tracep->declBus(c+601,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+602,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+603,"w_write", false,-1);
    tracep->declBit(c+604,"w_read", false,-1);
    tracep->declBus(c+605,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4309,"lglen", false,-1, 3,0);
    tracep->declBit(c+137,"w_half_full", false,-1);
    tracep->declBus(c+606,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4266,"BW", false,-1, 31,0);
    tracep->declBus(c+4309,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4307,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4314,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+587,"i_reset", false,-1);
    tracep->declBit(c+586,"i_wr", false,-1);
    tracep->declBus(c+588,"i_data", false,-1, 6,0);
    tracep->declBit(c+157,"o_empty_n", false,-1);
    tracep->declBit(c+607,"i_rd", false,-1);
    tracep->declBus(c+160,"o_data", false,-1, 6,0);
    tracep->declBus(c+585,"o_status", false,-1, 15,0);
    tracep->declBit(c+584,"o_err", false,-1);
    tracep->declBus(c+608,"r_data", false,-1, 6,0);
    tracep->declBus(c+609,"last_write", false,-1, 6,0);
    tracep->declBus(c+610,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+611,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+612,"r_next", false,-1, 5,0);
    tracep->declBit(c+613,"will_overflow", false,-1);
    tracep->declBit(c+614,"will_underflow", false,-1);
    tracep->declBit(c+615,"osrc", false,-1);
    tracep->declBus(c+616,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+617,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+618,"w_write", false,-1);
    tracep->declBit(c+619,"w_read", false,-1);
    tracep->declBus(c+620,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4309,"lglen", false,-1, 3,0);
    tracep->declBit(c+139,"w_half_full", false,-1);
    tracep->declBus(c+621,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4250,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4252,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4254,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4255,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4256,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4257,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4258,"LANES", false,-1, 31,0);
    tracep->declBus(c+4258,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4266,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4308,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4307,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4264,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4259,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4314,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4260,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4257,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4259,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4260,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4258,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4150,"i_controller_clk", false,-1);
    tracep->declBit(c+4216,"i_rst_n", false,-1);
    tracep->declBit(c+505,"i_wb_cyc", false,-1);
    tracep->declBit(c+506,"i_wb_stb", false,-1);
    tracep->declBit(c+507,"i_wb_we", false,-1);
    tracep->declBus(c+622,"i_wb_addr", false,-1, 23,0);
    tracep->declQuad(c+623,"i_wb_data", false,-1, 63,0);
    tracep->declBus(c+625,"i_wb_sel", false,-1, 7,0);
    tracep->declBus(c+4270,"i_aux", false,-1, 0,0);
    tracep->declBit(c+511,"o_wb_stall", false,-1);
    tracep->declBit(c+512,"o_wb_ack", false,-1);
    tracep->declQuad(c+626,"o_wb_data", false,-1, 63,0);
    tracep->declBus(c+145,"o_aux", false,-1, 0,0);
    tracep->declBit(c+496,"i_wb2_cyc", false,-1);
    tracep->declBit(c+497,"i_wb2_stb", false,-1);
    tracep->declBit(c+498,"i_wb2_we", false,-1);
    tracep->declBus(c+628,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+501,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+500,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+502,"o_wb2_stall", false,-1);
    tracep->declBit(c+503,"o_wb2_ack", false,-1);
    tracep->declBus(c+504,"o_wb2_data", false,-1, 31,0);
    tracep->declQuad(c+4152,"i_phy_iserdes_data", false,-1, 63,0);
    tracep->declBus(c+4154,"i_phy_iserdes_dqs", false,-1, 7,0);
    tracep->declBus(c+4155,"i_phy_iserdes_bitslip_reference", false,-1, 7,0);
    tracep->declBit(c+4156,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4157,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4160,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4161,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4162,"o_phy_toggle_dqs", false,-1);
    tracep->declQuad(c+4163,"o_phy_data", false,-1, 63,0);
    tracep->declBus(c+4165,"o_phy_dm", false,-1, 7,0);
    tracep->declBus(c+4166,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4167,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4168,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4169,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4170,"o_phy_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4171,"o_phy_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4172,"o_phy_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+4173,"o_phy_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+4174,"o_phy_bitslip", false,-1, 0,0);
    tracep->declBit(c+4175,"o_phy_write_leveling_calib", false,-1);
    tracep->declBus(c+35,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4210,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4211,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4315,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4316,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4317,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4318,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4319,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4320,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4321,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4322,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4322,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4323,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4324,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4260,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4325,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4262,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4267,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4326,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4325,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4262,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4327,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4304,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4267,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4326,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4328,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4263,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4329,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4312,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4313,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4310,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4311,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4269,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4257,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4269,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4257,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4267,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4330,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4331,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4332,"tRCD", false,-1);
    tracep->declDouble(c+4332,"tRP", false,-1);
    tracep->declBus(c+4334,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4335,"tRFC", false,-1);
    tracep->declBus(c+4337,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4338,"tXPR", false,-1);
    tracep->declDouble(c+4340,"tWR", false,-1);
    tracep->declDouble(c+4250,"tWTR", false,-1);
    tracep->declBus(c+4342,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4343,"tWLO", false,-1);
    tracep->declBus(c+4268,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4250,"tRTP", false,-1);
    tracep->declBus(c+4259,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4256,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4345,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4346,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4347,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4348,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4263,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4268,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4316,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4318,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4315,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4315,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4316,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4315,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4316,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4315,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4318,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4319,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4347,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4320,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4268,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4269,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4347,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4263,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4329,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4269,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4258,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4268,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4256,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4259,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4347,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4346,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4266,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4257,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4349,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4255,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4350,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4351,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4329,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4254,"CHECK_STARTING_DATA", false,-1, 31,0);
    tracep->declBus(c+4352,"BITSLIP_DQS_TRAIN_3", false,-1, 31,0);
    tracep->declBus(c+4263,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4347,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4258,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4304,"REPEAT_CLK_SAMPLING", false,-1, 31,0);
    tracep->declBus(c+4353,"PASR", false,-1, 2,0);
    tracep->declBus(c+4353,"CWL", false,-1, 2,0);
    tracep->declBus(c+4264,"ASR", false,-1, 0,0);
    tracep->declBus(c+4307,"SRT", false,-1, 0,0);
    tracep->declBus(c+4310,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4354,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4355,"MR2", false,-1, 18,0);
    tracep->declBus(c+4310,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4264,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4307,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4356,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4357,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4358,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4307,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4310,"DIC", false,-1, 1,0);
    tracep->declBus(c+4356,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4264,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4307,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4310,"AL", false,-1, 1,0);
    tracep->declBus(c+4264,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4307,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4359,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4360,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4361,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4310,"BL", false,-1, 1,0);
    tracep->declBus(c+4319,"CL", false,-1, 3,0);
    tracep->declBus(c+4307,"RBT", false,-1, 0,0);
    tracep->declBus(c+4264,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4356,"WR", false,-1, 2,0);
    tracep->declBus(c+4307,"PPD", false,-1, 0,0);
    tracep->declBus(c+4353,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4362,"MR0", false,-1, 18,0);
    tracep->declBus(c+4363,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+629,"index", false,-1, 31,0);
    tracep->declBus(c+630,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+631,"instruction", false,-1, 27,0);
    tracep->declBus(c+632,"delay_counter", false,-1, 15,0);
    tracep->declBit(c+633,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+634,"reset_done", false,-1);
    tracep->declBit(c+635,"pause_counter", false,-1);
    tracep->declBit(c+636,"issue_read_command", false,-1);
    tracep->declBit(c+4270,"issue_write_command", false,-1);
    tracep->declBit(c+637,"stage2_update", false,-1);
    tracep->declBit(c+638,"stage2_stall", false,-1);
    tracep->declBit(c+639,"stage1_stall", false,-1);
    tracep->declBus(c+640,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+641,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+642+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+650+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+658,"stage1_pending", false,-1);
    tracep->declBus(c+659,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+660,"stage1_we", false,-1);
    tracep->declQuad(c+661,"stage1_data", false,-1, 63,0);
    tracep->declBus(c+663,"stage1_dm", false,-1, 7,0);
    tracep->declBus(c+664,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+665,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+666,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+667,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+668,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+669,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+670,"stage2_pending", false,-1);
    tracep->declBus(c+671,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+672,"stage2_we", false,-1);
    tracep->declBus(c+673,"stage2_dm_unaligned", false,-1, 7,0);
    tracep->declBus(c+674,"stage2_dm_unaligned_temp", false,-1, 7,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+675+i*1,"stage2_dm", true,(i+0), 7,0);
    }
    tracep->declQuad(c+677,"stage2_data_unaligned", false,-1, 63,0);
    tracep->declQuad(c+679,"stage2_data_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+681+i*2,"stage2_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+685+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+687+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+688,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+689,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+690,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+691+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+699+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+707+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+715+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+723+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+731+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+739+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+747+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+755+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+759,"cmd_odt_q", false,-1);
    tracep->declBit(c+760,"cmd_odt", false,-1);
    tracep->declBit(c+761,"cmd_ck_en", false,-1);
    tracep->declBit(c+762,"cmd_reset_n", false,-1);
    tracep->declBit(c+763,"o_wb_stall_q", false,-1);
    tracep->declBit(c+764,"o_wb_stall_d", false,-1);
    tracep->declBit(c+765,"precharge_slot_busy", false,-1);
    tracep->declBit(c+766,"activate_slot_busy", false,-1);
    tracep->declBus(c+767,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+768,"write_dqs_d", false,-1);
    tracep->declBus(c+769,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+770,"write_dqs_val", false,-1, 2,0);
    tracep->declBit(c+771,"write_dq_q", false,-1);
    tracep->declBit(c+772,"write_dq_d", false,-1);
    tracep->declBus(c+773,"write_dq", false,-1, 3,0);
    tracep->declBus(c+774,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+775,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+777,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+778,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+779,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+780,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+781,"dqs_target_index_orig", false,-1, 5,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+782+i*1,"dq_target_index", true,(i+0), 5,0);
    }
    tracep->declBus(c+783,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+784,"dqs_start_index_repeat", false,-1, 0,0);
    tracep->declBus(c+785,"train_delay", false,-1, 1,0);
    tracep->declBus(c+786,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+787,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+788,"initial_dqs", false,-1);
    tracep->declBus(c+789,"lane", false,-1, 0,0);
    tracep->declBus(c+790,"lane_times_8", false,-1, 2,0);
    tracep->declBus(c+791,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+792,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+793+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+794+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+799+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+804,"index_read_pipe", false,-1);
    tracep->declBit(c+805,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+806+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+808+i*2,"o_wb_data_q", true,(i+0), 63,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+812+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+828,"write_calib_stb", false,-1);
    tracep->declBus(c+829,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+830,"write_calib_we", false,-1);
    tracep->declBus(c+831,"write_calib_col", false,-1, 9,0);
    tracep->declQuad(c+832,"write_calib_data", false,-1, 63,0);
    tracep->declBit(c+834,"write_calib_odt", false,-1);
    tracep->declBit(c+835,"write_calib_dqs", false,-1);
    tracep->declBit(c+836,"write_calib_dq", false,-1);
    tracep->declBit(c+837,"prev_write_level_feedback", false,-1);
    tracep->declQuad(c+838,"read_data_store", false,-1, 63,0);
    tracep->declArray(c+840,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+844+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+845+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+846+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+847+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+848,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+849+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+850,"sample_clk_repeat", false,-1, 5,0);
    tracep->declBit(c+851,"stored_write_level_feedback", false,-1);
    tracep->declBus(c+852,"start_index_check", false,-1, 5,0);
    tracep->declQuad(c+853,"read_lane_data", false,-1, 63,0);
    tracep->declBit(c+855,"odelay_cntvalue_repeated", false,-1);
    tracep->declBit(c+856,"wb2_stb", false,-1);
    tracep->declBit(c+857,"wb2_update", false,-1);
    tracep->declBit(c+858,"wb2_we", false,-1);
    tracep->declBus(c+859,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+860,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+861,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+862,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+863,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+864,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+865,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+866,"wb2_phy_odelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+867,"wb2_phy_odelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+868,"wb2_phy_idelay_data_ld", false,-1, 0,0);
    tracep->declBus(c+869,"wb2_phy_idelay_dqs_ld", false,-1, 0,0);
    tracep->declBus(c+870,"write_level_fail", false,-1, 0,0);
    tracep->declBus(c+871,"wb2_write_lane", false,-1, 0,0);
    tracep->declBit(c+872,"sync_rst", false,-1);
    tracep->declBus(c+873,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declBit(c+874,"debug_trigger", false,-1);
    tracep->declBit(c+4217,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4364,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4365,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4366,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4367,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4368,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4369,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4370,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4267,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4346,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4255,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4307,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4371,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+168,"i_rx_stb", false,-1);
    tracep->declBus(c+166,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+514,"o_wb_cyc", false,-1);
    tracep->declBit(c+515,"o_wb_stb", false,-1);
    tracep->declBit(c+516,"o_wb_we", false,-1);
    tracep->declBus(c+540,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+518,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+519,"i_wb_stall", false,-1);
    tracep->declBit(c+520,"i_wb_ack", false,-1);
    tracep->declBus(c+522,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+521,"i_wb_err", false,-1);
    tracep->declBit(c+165,"i_interrupt", false,-1);
    tracep->declBit(c+169,"o_tx_stb", false,-1);
    tracep->declBus(c+167,"o_tx_data", false,-1, 7,0);
    tracep->declBit(c+170,"i_tx_busy", false,-1);
    tracep->declBit(c+157,"i_console_stb", false,-1);
    tracep->declBus(c+160,"i_console_data", false,-1, 6,0);
    tracep->declBit(c+158,"o_console_busy", false,-1);
    tracep->declBit(c+156,"o_console_stb", false,-1);
    tracep->declBus(c+159,"o_console_data", false,-1, 6,0);
    tracep->declBit(c+171,"o_dbg", false,-1);
    tracep->declBit(c+875,"soft_reset", false,-1);
    tracep->declBit(c+171,"r_wdt_reset", false,-1);
    tracep->declBit(c+4271,"cmd_port_active", false,-1);
    tracep->declBit(c+876,"rx_valid", false,-1);
    tracep->declBus(c+877,"rx_data", false,-1, 7,0);
    tracep->declBit(c+878,"in_stb", false,-1);
    tracep->declBit(c+879,"in_active", false,-1);
    tracep->declQuad(c+880,"in_word", false,-1, 35,0);
    tracep->declBit(c+169,"ps_full", false,-1);
    tracep->declBus(c+167,"ps_data", false,-1, 7,0);
    tracep->declBit(c+882,"wbu_tx_stb", false,-1);
    tracep->declBus(c+883,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+884,"ififo_valid", false,-1);
    tracep->declQuad(c+885,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+887,"exec_stb", false,-1);
    tracep->declQuad(c+888,"exec_word", false,-1, 35,0);
    tracep->declBit(c+890,"ofifo_rd", false,-1);
    tracep->declQuad(c+891,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+893,"ofifo_err", false,-1);
    tracep->declBit(c+894,"ofifo_empty_n", false,-1);
    tracep->declBit(c+895,"w_bus_busy", false,-1);
    tracep->declBit(c+171,"w_bus_reset", false,-1);
    tracep->declBus(c+896,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+897,"ign_input_busy", false,-1);
    tracep->declBit(c+898,"output_busy", false,-1);
    tracep->declBit(c+899,"out_active", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4372,"BW", false,-1, 31,0);
    tracep->declBus(c+4255,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+887,"i_wr", false,-1);
    tracep->declQuad(c+888,"i_data", false,-1, 35,0);
    tracep->declBit(c+890,"i_rd", false,-1);
    tracep->declQuad(c+891,"o_data", false,-1, 35,0);
    tracep->declBit(c+894,"o_empty_n", false,-1);
    tracep->declBit(c+893,"o_err", false,-1);
    tracep->declBus(c+4373,"FLEN", false,-1, 31,0);
    tracep->declBus(c+900,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+901,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+902,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+903,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+904,"will_overflow", false,-1);
    tracep->declBit(c+905,"will_underflow", false,-1);
    tracep->declBit(c+906,"r_empty_n", false,-1);
    tracep->declBit(c+907,"w_write", false,-1);
    tracep->declBit(c+908,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+884,"ififo_empty_n", false,-1);
    tracep->declBit(c+909,"ififo_err", false,-1);
    tracep->declBit(c+910,"ififo_rd", false,-1);
    tracep->declBit(c+4270,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4372,"BW", false,-1, 31,0);
    tracep->declBus(c+4346,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+878,"i_wr", false,-1);
    tracep->declQuad(c+880,"i_data", false,-1, 35,0);
    tracep->declBit(c+910,"i_rd", false,-1);
    tracep->declQuad(c+885,"o_data", false,-1, 35,0);
    tracep->declBit(c+884,"o_empty_n", false,-1);
    tracep->declBit(c+909,"o_err", false,-1);
    tracep->declBus(c+4314,"FLEN", false,-1, 31,0);
    tracep->declBus(c+911,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+912,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+913,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+914,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+915,"will_overflow", false,-1);
    tracep->declBit(c+916,"will_underflow", false,-1);
    tracep->declBit(c+917,"r_empty_n", false,-1);
    tracep->declBit(c+918,"w_write", false,-1);
    tracep->declBit(c+919,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4264,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+876,"i_stb", false,-1);
    tracep->declBit(c+897,"o_busy", false,-1);
    tracep->declBus(c+877,"i_byte", false,-1, 7,0);
    tracep->declBit(c+875,"o_soft_reset", false,-1);
    tracep->declBit(c+878,"o_stb", false,-1);
    tracep->declBit(c+4270,"i_busy", false,-1);
    tracep->declQuad(c+880,"o_codword", false,-1, 35,0);
    tracep->declBit(c+879,"o_active", false,-1);
    tracep->declBit(c+920,"hx_stb", false,-1);
    tracep->declBit(c+921,"hx_valid", false,-1);
    tracep->declBus(c+922,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+923,"cw_stb", false,-1);
    tracep->declBit(c+924,"cw_busy", false,-1);
    tracep->declBit(c+925,"cw_active", false,-1);
    tracep->declQuad(c+926,"cw_word", false,-1, 35,0);
    tracep->declBit(c+928,"cod_busy", false,-1);
    tracep->declBit(c+929,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+923,"i_stb", false,-1);
    tracep->declBit(c+928,"o_busy", false,-1);
    tracep->declQuad(c+926,"i_word", false,-1, 35,0);
    tracep->declBit(c+878,"o_stb", false,-1);
    tracep->declBit(c+4270,"i_busy", false,-1);
    tracep->declQuad(c+880,"o_word", false,-1, 35,0);
    tracep->declBit(c+929,"o_active", false,-1);
    tracep->declBus(c+930,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+931,"r_word", false,-1, 35,0);
    tracep->declBus(c+933,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+934,"r_addr", false,-1, 24,0);
    tracep->declBus(c+935,"w_addr", false,-1, 31,0);
    tracep->declBus(c+936,"rd_len", false,-1, 9,0);
    tracep->declBus(c+937,"cword", false,-1, 31,0);
    tracep->declBus(c+938,"r_stb", false,-1, 2,0);
    tracep->declBit(c+939,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4307,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+920,"i_stb", false,-1);
    tracep->declBit(c+924,"o_busy", false,-1);
    tracep->declBit(c+921,"i_valid", false,-1);
    tracep->declBus(c+922,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+923,"o_stb", false,-1);
    tracep->declBit(c+928,"i_busy", false,-1);
    tracep->declQuad(c+926,"o_codword", false,-1, 35,0);
    tracep->declBit(c+925,"o_active", false,-1);
    tracep->declBus(c+940,"r_len", false,-1, 2,0);
    tracep->declBus(c+941,"cw_len", false,-1, 2,0);
    tracep->declBus(c+942,"lastcw", false,-1, 1,0);
    tracep->declBit(c+943,"w_stb", false,-1);
    tracep->declQuad(c+944,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+920,"skd_stb", false,-1);
    tracep->declBit(c+921,"skd_valid", false,-1);
    tracep->declBus(c+922,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+924,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+876,"i_stb", false,-1);
    tracep->declBit(c+897,"o_busy", false,-1);
    tracep->declBus(c+877,"i_byte", false,-1, 7,0);
    tracep->declBit(c+875,"o_soft_reset", false,-1);
    tracep->declBit(c+920,"o_stb", false,-1);
    tracep->declBit(c+921,"o_valid", false,-1);
    tracep->declBit(c+924,"i_busy", false,-1);
    tracep->declBus(c+922,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4307,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4259,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4371,"AW", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+884,"i_valid", false,-1);
    tracep->declQuad(c+885,"i_codword", false,-1, 35,0);
    tracep->declBit(c+895,"o_busy", false,-1);
    tracep->declBit(c+514,"o_wb_cyc", false,-1);
    tracep->declBit(c+515,"o_wb_stb", false,-1);
    tracep->declBit(c+516,"o_wb_we", false,-1);
    tracep->declBus(c+540,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+518,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+519,"i_wb_stall", false,-1);
    tracep->declBit(c+520,"i_wb_ack", false,-1);
    tracep->declBus(c+522,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+521,"i_wb_err", false,-1);
    tracep->declBit(c+887,"o_stb", false,-1);
    tracep->declQuad(c+888,"o_codword", false,-1, 35,0);
    tracep->declBit(c+890,"i_fifo_rd", false,-1);
    tracep->declBus(c+4310,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4311,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4312,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4313,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4311,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+946,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+947,"wb_state", false,-1, 1,0);
    tracep->declBus(c+948,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+949,"r_len", false,-1, 9,0);
    tracep->declBit(c+950,"r_inc", false,-1);
    tracep->declBit(c+951,"r_new_addr", false,-1);
    tracep->declBit(c+952,"last_read_request", false,-1);
    tracep->declBit(c+953,"last_ack", false,-1);
    tracep->declBit(c+954,"zero_acks", false,-1);
    tracep->declBit(c+895,"r_busy", false,-1);
    tracep->declBus(c+955,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4374,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4271,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4270,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4264,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+171,"i_soft_reset", false,-1);
    tracep->declBit(c+890,"i_stb", false,-1);
    tracep->declBit(c+898,"o_busy", false,-1);
    tracep->declQuad(c+891,"i_codword", false,-1, 35,0);
    tracep->declBit(c+514,"i_wb_cyc", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+956,"i_bus_busy", false,-1);
    tracep->declBit(c+882,"o_stb", false,-1);
    tracep->declBit(c+899,"o_active", false,-1);
    tracep->declBus(c+883,"o_char", false,-1, 7,0);
    tracep->declBit(c+169,"i_tx_busy", false,-1);
    tracep->declBit(c+957,"dw_busy", false,-1);
    tracep->declBit(c+898,"cw_stb", false,-1);
    tracep->declBit(c+898,"cw_busy", false,-1);
    tracep->declBit(c+958,"cp_stb", false,-1);
    tracep->declBit(c+957,"dw_stb", false,-1);
    tracep->declBit(c+959,"ln_stb", false,-1);
    tracep->declBit(c+960,"ln_busy", false,-1);
    tracep->declBit(c+961,"cp_busy", false,-1);
    tracep->declBit(c+962,"byte_busy", false,-1);
    tracep->declBit(c+963,"cp_active", false,-1);
    tracep->declBit(c+964,"dw_active", false,-1);
    tracep->declBit(c+965,"ln_active", false,-1);
    tracep->declQuad(c+966,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+968,"cp_word", false,-1, 35,0);
    tracep->declBus(c+970,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+971,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+972,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declBus(c+4372,"CW", false,-1, 31,0);
    tracep->declBus(c+4255,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+898,"i_stb", false,-1);
    tracep->declQuad(c+966,"i_codword", false,-1, 35,0);
    tracep->declBit(c+957,"i_busy", false,-1);
    tracep->declBit(c+958,"o_stb", false,-1);
    tracep->declQuad(c+968,"o_cword", false,-1, 35,0);
    tracep->declBit(c+961,"o_busy", false,-1);
    tracep->declBit(c+963,"o_active", false,-1);
    tracep->declBit(c+973,"aword_valid", false,-1);
    tracep->declQuad(c+974,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+976,"w_addr", false,-1, 31,0);
    tracep->declBus(c+977,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+978,"tbl_busy", false,-1);
    tracep->declBit(c+979,"w_accepted", false,-1);
    tracep->declQuad(c+980,"r_word", false,-1, 35,0);
    tracep->declBus(c+982,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+983,"tbl_filled", false,-1);
    tracep->declBus(c+984,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+985,"pmatch", false,-1);
    tracep->declBit(c+986,"dmatch", false,-1);
    tracep->declBit(c+987,"vaddr", false,-1);
    tracep->declBus(c+988,"cword", false,-1, 31,0);
    tracep->declBus(c+989,"maddr", false,-1, 9,0);
    tracep->declBit(c+990,"matched", false,-1);
    tracep->declBit(c+991,"zmatch", false,-1);
    tracep->declBit(c+992,"hmatch", false,-1);
    tracep->declBus(c+993,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+994,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+968,"r_cword", false,-1, 35,0);
    tracep->declBus(c+995,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+996,"clear_table", false,-1);
    tracep->declBit(c+997,"addr_within_table", false,-1);
    tracep->declBit(c+998,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+999,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+890,"i_stb", false,-1);
    tracep->declQuad(c+891,"i_codword", false,-1, 35,0);
    tracep->declBit(c+514,"i_cyc", false,-1);
    tracep->declBit(c+956,"i_busy", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+898,"o_stb", false,-1);
    tracep->declQuad(c+966,"o_codword", false,-1, 35,0);
    tracep->declBit(c+898,"o_busy", false,-1);
    tracep->declBit(c+1000,"i_tx_busy", false,-1);
    tracep->declQuad(c+4375,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4377,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4379,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4262,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+1001,"int_request", false,-1);
    tracep->declBit(c+1002,"int_sent", false,-1);
    tracep->declBit(c+1003,"idle_expired", false,-1);
    tracep->declBit(c+1004,"idle_state", false,-1);
    tracep->declBus(c+1005,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+958,"i_stb", false,-1);
    tracep->declQuad(c+968,"i_word", false,-1, 35,0);
    tracep->declBit(c+960,"i_tx_busy", false,-1);
    tracep->declBit(c+957,"o_stb", false,-1);
    tracep->declBus(c+970,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+957,"o_busy", false,-1);
    tracep->declBit(c+964,"o_active", false,-1);
    tracep->declBus(c+1006,"w_len", false,-1, 2,0);
    tracep->declBus(c+1007,"r_len", false,-1, 2,0);
    tracep->declBus(c+1008,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+957,"i_stb", false,-1);
    tracep->declBus(c+970,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+959,"o_stb", false,-1);
    tracep->declBus(c+971,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1009,"i_bus_busy", false,-1);
    tracep->declBit(c+962,"i_tx_busy", false,-1);
    tracep->declBit(c+960,"o_busy", false,-1);
    tracep->declBit(c+965,"o_active", false,-1);
    tracep->declBus(c+4381,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4382,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+1010,"last_out_nl", false,-1);
    tracep->declBit(c+1011,"last_in_nl", false,-1);
    tracep->declBit(c+1012,"full_line", false,-1);
    tracep->declBit(c+1013,"r_busy", false,-1);
    tracep->declBus(c+1014,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+959,"i_stb", false,-1);
    tracep->declBus(c+971,"i_bits", false,-1, 6,0);
    tracep->declBit(c+882,"o_stb", false,-1);
    tracep->declBus(c+883,"o_char", false,-1, 7,0);
    tracep->declBit(c+962,"o_busy", false,-1);
    tracep->declBit(c+169,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4263,"NIN", false,-1, 31,0);
    tracep->declBus(c+4257,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4303,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+409,"i_wb_cyc", false,-1);
    tracep->declBit(c+414,"i_wb_stb", false,-1);
    tracep->declBit(c+411,"i_wb_we", false,-1);
    tracep->declBus(c+412,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+413,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+414,"o_wb_ack", false,-1);
    tracep->declBus(c+4213,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4204,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4205,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+143,"o_int", false,-1);
    tracep->declBus(c+1015,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+1016,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+1017,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+1015,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4218,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4262,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4268,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4310,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4257,"RW", false,-1, 31,0);
    tracep->declBus(c+4383,"BAW", false,-1, 31,0);
    tracep->declBus(c+4384,"RESET_ADDRESS", false,-1, 27,0);
    tracep->declBus(c+4264,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4269,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4385,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+453,"i_wb_cyc", false,-1);
    tracep->declBit(c+454,"i_wb_stb", false,-1);
    tracep->declBit(c+455,"i_wb_we", false,-1);
    tracep->declBus(c+1018,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+457,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+458,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+459,"o_wb_ack", false,-1);
    tracep->declBus(c+460,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+215,"o_pf_cyc", false,-1);
    tracep->declBit(c+216,"o_pf_stb", false,-1);
    tracep->declBit(c+4270,"o_pf_we", false,-1);
    tracep->declBus(c+217,"o_pf_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4288,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+218,"i_pf_stall", false,-1);
    tracep->declBit(c+219,"i_pf_ack", false,-1);
    tracep->declBit(c+220,"i_pf_err", false,-1);
    tracep->declArray(c+221,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4185,"i_i2c_sda", false,-1);
    tracep->declBit(c+4186,"i_i2c_scl", false,-1);
    tracep->declBit(c+4187,"o_i2c_sda", false,-1);
    tracep->declBit(c+4188,"o_i2c_scl", false,-1);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+155,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4270,"i_sync_signal", false,-1);
    tracep->declBus(c+36,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4310,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4311,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4312,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4313,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4267,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4304,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4327,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4262,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4349,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4350,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4315,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4317,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4318,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4319,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4320,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4321,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4386,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4387,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4388,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4389,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4390,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4391,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+1019,"cpu_reset", false,-1);
    tracep->declBit(c+4270,"cpu_clear_cache", false,-1);
    tracep->declBit(c+1020,"cpu_new_pc", false,-1);
    tracep->declBus(c+1021,"pf_jump_addr", false,-1, 27,0);
    tracep->declBit(c+1022,"pf_valid", false,-1);
    tracep->declBit(c+1023,"pf_ready", false,-1);
    tracep->declBus(c+1024,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+1025,"pf_insn_addr", false,-1, 27,0);
    tracep->declBit(c+1026,"pf_illegal", false,-1);
    tracep->declBit(c+1027,"half_valid", false,-1);
    tracep->declBit(c+1028,"imm_cycle", false,-1);
    tracep->declBit(c+1029,"next_valid", false,-1);
    tracep->declBus(c+1030,"next_insn", false,-1, 7,0);
    tracep->declBit(c+1031,"insn_ready", false,-1);
    tracep->declBit(c+1032,"half_ready", false,-1);
    tracep->declBit(c+1033,"i2c_abort", false,-1);
    tracep->declBit(c+1034,"insn_valid", false,-1);
    tracep->declBus(c+1035,"insn", false,-1, 11,0);
    tracep->declBus(c+1036,"half_insn", false,-1, 3,0);
    tracep->declBit(c+1037,"i2c_ckedge", false,-1);
    tracep->declBit(c+1038,"i2c_stretch", false,-1);
    tracep->declBus(c+1039,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+1040,"ckcount", false,-1, 11,0);
    tracep->declBus(c+1041,"abort_address", false,-1, 27,0);
    tracep->declBus(c+1042,"jump_target", false,-1, 27,0);
    tracep->declBit(c+1043,"r_wait", false,-1);
    tracep->declBit(c+1044,"soft_halt_request", false,-1);
    tracep->declBit(c+1019,"r_halted", false,-1);
    tracep->declBit(c+1045,"r_err", false,-1);
    tracep->declBit(c+1046,"r_aborted", false,-1);
    tracep->declBit(c+1047,"r_manual", false,-1);
    tracep->declBit(c+1048,"r_sda", false,-1);
    tracep->declBit(c+1049,"r_scl", false,-1);
    tracep->declBit(c+1050,"w_stopped", false,-1);
    tracep->declBit(c+1051,"w_sda", false,-1);
    tracep->declBit(c+1052,"w_scl", false,-1);
    tracep->declBit(c+1053,"bus_read", false,-1);
    tracep->declBit(c+1054,"bus_write", false,-1);
    tracep->declBit(c+1055,"bus_override", false,-1);
    tracep->declBit(c+1056,"bus_manual", false,-1);
    tracep->declBit(c+1057,"ovw_ready", false,-1);
    tracep->declBit(c+1058,"bus_jump", false,-1);
    tracep->declBus(c+1018,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+1018,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+457,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+458,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+460,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+1059,"s_tvalid", false,-1);
    tracep->declBit(c+1032,"s_tready", false,-1);
    tracep->declBus(c+1060,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+37,"w_control", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+1047,"manual", false,-1);
    tracep->declBit(c+1049,"scl", false,-1);
    tracep->declBit(c+1048,"sda", false,-1);
    tracep->declBit(c+1061,"o_scl", false,-1);
    tracep->declBit(c+1062,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+1063,"mid_axis_pkt", false,-1);
    tracep->declBus(c+1064,"r_channel", false,-1, 1,0);
    tracep->declBus(c+155,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4269,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+38,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+1059,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+1031,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+1065,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+1037,"i_ckedge", false,-1);
    tracep->declBit(c+1038,"o_stretch", false,-1);
    tracep->declBit(c+4186,"i_scl", false,-1);
    tracep->declBit(c+4185,"i_sda", false,-1);
    tracep->declBit(c+1052,"o_scl", false,-1);
    tracep->declBit(c+1051,"o_sda", false,-1);
    tracep->declBit(c+1033,"o_abort", false,-1);
    tracep->declBus(c+4315,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4316,"START", false,-1, 3,0);
    tracep->declBus(c+4317,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4318,"STOP", false,-1, 3,0);
    tracep->declBus(c+4319,"DATA", false,-1, 3,0);
    tracep->declBus(c+4320,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4309,"ACK", false,-1, 3,0);
    tracep->declBus(c+4321,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4386,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4387,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4388,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4389,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4390,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4307,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4264,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4353,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4359,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4354,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4356,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4392,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4393,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4394,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4395,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4307,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+1066,"last_byte", false,-1);
    tracep->declBit(c+1067,"dir", false,-1);
    tracep->declBit(c+1068,"will_ack", false,-1);
    tracep->declBus(c+1069,"state", false,-1, 3,0);
    tracep->declBus(c+1070,"nbits", false,-1, 2,0);
    tracep->declBus(c+1071,"sreg", false,-1, 7,0);
    tracep->declBit(c+1072,"q_scl", false,-1);
    tracep->declBit(c+1073,"q_sda", false,-1);
    tracep->declBit(c+1074,"ck_scl", false,-1);
    tracep->declBit(c+1075,"ck_sda", false,-1);
    tracep->declBit(c+1076,"lst_scl", false,-1);
    tracep->declBit(c+1077,"lst_sda", false,-1);
    tracep->declBit(c+1078,"stop_bit", false,-1);
    tracep->declBit(c+1079,"channel_busy", false,-1);
    tracep->declBit(c+4270,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4383,"AW", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+39,"i_reset", false,-1);
    tracep->declBit(c+1020,"i_new_pc", false,-1);
    tracep->declBit(c+4270,"i_clear_cache", false,-1);
    tracep->declBit(c+1023,"i_ready", false,-1);
    tracep->declBus(c+1021,"i_pc", false,-1, 27,0);
    tracep->declBit(c+1022,"o_valid", false,-1);
    tracep->declBit(c+1026,"o_illegal", false,-1);
    tracep->declBus(c+1024,"o_insn", false,-1, 7,0);
    tracep->declBus(c+1025,"o_pc", false,-1, 27,0);
    tracep->declBit(c+215,"o_wb_cyc", false,-1);
    tracep->declBit(c+216,"o_wb_stb", false,-1);
    tracep->declBit(c+4270,"o_wb_we", false,-1);
    tracep->declBus(c+217,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+218,"i_wb_stall", false,-1);
    tracep->declBit(c+219,"i_wb_ack", false,-1);
    tracep->declBit(c+220,"i_wb_err", false,-1);
    tracep->declArray(c+221,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1080,"last_stb", false,-1);
    tracep->declBit(c+1081,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+1082,"cache_word", false,-1, 511,0);
    tracep->declBit(c+1098,"cache_valid", false,-1);
    tracep->declBus(c+1099,"inflight", false,-1, 1,0);
    tracep->declBit(c+1100,"cache_illegal", false,-1);
    tracep->declBit(c+1101,"r_valid", false,-1);
    tracep->declArray(c+1102,"r_insn", false,-1, 511,0);
    tracep->declArray(c+1118,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4346,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+1101,"rg_valid", false,-1);
    tracep->declArray(c+1102,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+1134,"r_count", false,-1, 6,0);
    tracep->declBus(c+1135,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4270,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4396,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4308,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4397,"NELM", false,-1, 31,0);
    tracep->declBus(c+4264,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4304,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4398,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4397,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4399,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4150,"i_data_clk", false,-1);
    tracep->declBit(c+4271,"i_ce", false,-1);
    tracep->declBit(c+1046,"i_trigger", false,-1);
    tracep->declBus(c+40,"i_data", false,-1, 30,0);
    tracep->declBit(c+4150,"i_wb_clk", false,-1);
    tracep->declBit(c+421,"i_wb_cyc", false,-1);
    tracep->declBit(c+422,"i_wb_stb", false,-1);
    tracep->declBit(c+423,"i_wb_we", false,-1);
    tracep->declBit(c+1136,"i_wb_addr", false,-1);
    tracep->declBus(c+425,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+426,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+427,"o_wb_ack", false,-1);
    tracep->declBus(c+428,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+141,"o_interrupt", false,-1);
    tracep->declBit(c+1137,"write_stb", false,-1);
    tracep->declBit(c+1138,"read_from_data", false,-1);
    tracep->declBit(c+1139,"write_to_control", false,-1);
    tracep->declBus(c+428,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4150,"bus_clock", false,-1);
    tracep->declBit(c+1140,"read_address", false,-1);
    tracep->declBus(c+425,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1141,"raddr", false,-1, 9,0);
    tracep->declBus(c+1142,"waddr", false,-1, 9,0);
    tracep->declBit(c+1143,"bw_reset_request", false,-1);
    tracep->declBit(c+1144,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1145,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1143,"bw_reset_complete", false,-1);
    tracep->declBus(c+1146,"br_config", false,-1, 2,0);
    tracep->declBus(c+1147,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1148,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1143,"dw_reset", false,-1);
    tracep->declBit(c+1144,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1145,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1149,"dr_triggered", false,-1);
    tracep->declBit(c+1150,"dr_primed", false,-1);
    tracep->declBit(c+1151,"dw_trigger", false,-1);
    tracep->declBit(c+1152,"dr_stopped", false,-1);
    tracep->declBus(c+4347,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1153,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1154,"dw_final_stop", false,-1);
    tracep->declBus(c+1155,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1156,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1157,"dr_force_write", false,-1);
    tracep->declBit(c+1158,"dr_run_timeout", false,-1);
    tracep->declBit(c+1159,"new_data", false,-1);
    tracep->declBit(c+1160,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1156,"w_data", false,-1, 30,0);
    tracep->declBit(c+1161,"imm_adr", false,-1);
    tracep->declBit(c+1162,"lst_adr", false,-1);
    tracep->declBus(c+1163,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1164,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1165,"record_ce", false,-1);
    tracep->declBus(c+1166,"r_data", false,-1, 31,0);
    tracep->declBit(c+1154,"bw_stopped", false,-1);
    tracep->declBit(c+1149,"bw_triggered", false,-1);
    tracep->declBit(c+1150,"bw_primed", false,-1);
    tracep->declBit(c+427,"br_wb_ack", false,-1);
    tracep->declBit(c+1167,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+422,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1168,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1169,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1147,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4396,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1170,"br_level_interrupt", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4266,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4400,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4266,"TB", false,-1, 31,0);
    tracep->declBus(c+4315,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4316,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4317,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4318,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4319,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4320,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4309,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4321,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4386,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4387,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4302,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4201,"i_uart_rx", false,-1);
    tracep->declBit(c+168,"o_wr", false,-1);
    tracep->declBus(c+166,"o_data", false,-1, 7,0);
    tracep->declBus(c+4401,"half_baud", false,-1, 6,0);
    tracep->declBus(c+1171,"state", false,-1, 3,0);
    tracep->declBus(c+1172,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+1173,"zero_baud_counter", false,-1);
    tracep->declBit(c+1174,"q_uart", false,-1);
    tracep->declBit(c+1175,"qq_uart", false,-1);
    tracep->declBit(c+1176,"ck_uart", false,-1);
    tracep->declBus(c+1177,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+1178,"half_baud_time", false,-1);
    tracep->declBus(c+1179,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4396,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4308,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4397,"NELM", false,-1, 31,0);
    tracep->declBus(c+4264,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4304,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4398,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4397,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4399,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4150,"i_data_clk", false,-1);
    tracep->declBit(c+4271,"i_ce", false,-1);
    tracep->declBit(c+874,"i_trigger", false,-1);
    tracep->declBus(c+41,"i_data", false,-1, 30,0);
    tracep->declBit(c+4150,"i_wb_clk", false,-1);
    tracep->declBit(c+429,"i_wb_cyc", false,-1);
    tracep->declBit(c+430,"i_wb_stb", false,-1);
    tracep->declBit(c+431,"i_wb_we", false,-1);
    tracep->declBit(c+1180,"i_wb_addr", false,-1);
    tracep->declBus(c+433,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+434,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+435,"o_wb_ack", false,-1);
    tracep->declBus(c+436,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+135,"o_interrupt", false,-1);
    tracep->declBit(c+1181,"write_stb", false,-1);
    tracep->declBit(c+1182,"read_from_data", false,-1);
    tracep->declBit(c+1183,"write_to_control", false,-1);
    tracep->declBus(c+436,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4150,"bus_clock", false,-1);
    tracep->declBit(c+1184,"read_address", false,-1);
    tracep->declBus(c+433,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1185,"raddr", false,-1, 9,0);
    tracep->declBus(c+1186,"waddr", false,-1, 9,0);
    tracep->declBit(c+1187,"bw_reset_request", false,-1);
    tracep->declBit(c+1188,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1189,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1187,"bw_reset_complete", false,-1);
    tracep->declBus(c+1190,"br_config", false,-1, 2,0);
    tracep->declBus(c+1191,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1192,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1187,"dw_reset", false,-1);
    tracep->declBit(c+1188,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1189,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1193,"dr_triggered", false,-1);
    tracep->declBit(c+1194,"dr_primed", false,-1);
    tracep->declBit(c+1195,"dw_trigger", false,-1);
    tracep->declBit(c+1196,"dr_stopped", false,-1);
    tracep->declBus(c+4347,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1197,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1198,"dw_final_stop", false,-1);
    tracep->declBus(c+1199,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1200,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1201,"dr_force_write", false,-1);
    tracep->declBit(c+1202,"dr_run_timeout", false,-1);
    tracep->declBit(c+1203,"new_data", false,-1);
    tracep->declBit(c+1204,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1200,"w_data", false,-1, 30,0);
    tracep->declBit(c+1205,"imm_adr", false,-1);
    tracep->declBit(c+1206,"lst_adr", false,-1);
    tracep->declBus(c+1207,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1208,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1209,"record_ce", false,-1);
    tracep->declBus(c+1210,"r_data", false,-1, 31,0);
    tracep->declBit(c+1198,"bw_stopped", false,-1);
    tracep->declBit(c+1193,"bw_triggered", false,-1);
    tracep->declBit(c+1194,"bw_primed", false,-1);
    tracep->declBit(c+435,"br_wb_ack", false,-1);
    tracep->declBit(c+1211,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+430,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1212,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1213,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1191,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4396,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1214,"br_level_interrupt", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4396,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4308,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4397,"NELM", false,-1, 31,0);
    tracep->declBus(c+4264,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4304,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4398,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4397,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4399,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4150,"i_data_clk", false,-1);
    tracep->declBit(c+4271,"i_ce", false,-1);
    tracep->declBit(c+874,"i_trigger", false,-1);
    tracep->declBus(c+4219,"i_data", false,-1, 30,0);
    tracep->declBit(c+4150,"i_wb_clk", false,-1);
    tracep->declBit(c+437,"i_wb_cyc", false,-1);
    tracep->declBit(c+438,"i_wb_stb", false,-1);
    tracep->declBit(c+439,"i_wb_we", false,-1);
    tracep->declBit(c+1215,"i_wb_addr", false,-1);
    tracep->declBus(c+441,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+442,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+443,"o_wb_ack", false,-1);
    tracep->declBus(c+444,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+136,"o_interrupt", false,-1);
    tracep->declBit(c+1216,"write_stb", false,-1);
    tracep->declBit(c+1217,"read_from_data", false,-1);
    tracep->declBit(c+1218,"write_to_control", false,-1);
    tracep->declBus(c+444,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4150,"bus_clock", false,-1);
    tracep->declBit(c+1219,"read_address", false,-1);
    tracep->declBus(c+441,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1220,"raddr", false,-1, 9,0);
    tracep->declBus(c+1221,"waddr", false,-1, 9,0);
    tracep->declBit(c+1222,"bw_reset_request", false,-1);
    tracep->declBit(c+1223,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1224,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1222,"bw_reset_complete", false,-1);
    tracep->declBus(c+1225,"br_config", false,-1, 2,0);
    tracep->declBus(c+1226,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1227,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1222,"dw_reset", false,-1);
    tracep->declBit(c+1223,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1224,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1228,"dr_triggered", false,-1);
    tracep->declBit(c+1229,"dr_primed", false,-1);
    tracep->declBit(c+1230,"dw_trigger", false,-1);
    tracep->declBit(c+1231,"dr_stopped", false,-1);
    tracep->declBus(c+4347,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1232,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1233,"dw_final_stop", false,-1);
    tracep->declBus(c+1234,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1235,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1236,"dr_force_write", false,-1);
    tracep->declBit(c+1237,"dr_run_timeout", false,-1);
    tracep->declBit(c+1238,"new_data", false,-1);
    tracep->declBit(c+1239,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1235,"w_data", false,-1, 30,0);
    tracep->declBit(c+1240,"imm_adr", false,-1);
    tracep->declBit(c+1241,"lst_adr", false,-1);
    tracep->declBus(c+1242,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1243,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1244,"record_ce", false,-1);
    tracep->declBus(c+1245,"r_data", false,-1, 31,0);
    tracep->declBit(c+1233,"bw_stopped", false,-1);
    tracep->declBit(c+1228,"bw_triggered", false,-1);
    tracep->declBit(c+1229,"bw_primed", false,-1);
    tracep->declBit(c+443,"br_wb_ack", false,-1);
    tracep->declBit(c+1246,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+438,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1247,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1248,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1226,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4396,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1249,"br_level_interrupt", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4396,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4308,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4397,"NELM", false,-1, 31,0);
    tracep->declBus(c+4264,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4304,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4398,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4397,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4399,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4150,"i_data_clk", false,-1);
    tracep->declBit(c+4271,"i_ce", false,-1);
    tracep->declBit(c+874,"i_trigger", false,-1);
    tracep->declBus(c+4220,"i_data", false,-1, 30,0);
    tracep->declBit(c+4150,"i_wb_clk", false,-1);
    tracep->declBit(c+445,"i_wb_cyc", false,-1);
    tracep->declBit(c+446,"i_wb_stb", false,-1);
    tracep->declBit(c+447,"i_wb_we", false,-1);
    tracep->declBit(c+1250,"i_wb_addr", false,-1);
    tracep->declBus(c+449,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+450,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+451,"o_wb_ack", false,-1);
    tracep->declBus(c+452,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+142,"o_interrupt", false,-1);
    tracep->declBit(c+1251,"write_stb", false,-1);
    tracep->declBit(c+1252,"read_from_data", false,-1);
    tracep->declBit(c+1253,"write_to_control", false,-1);
    tracep->declBus(c+452,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4150,"bus_clock", false,-1);
    tracep->declBit(c+1254,"read_address", false,-1);
    tracep->declBus(c+449,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1255,"raddr", false,-1, 9,0);
    tracep->declBus(c+1256,"waddr", false,-1, 9,0);
    tracep->declBit(c+1257,"bw_reset_request", false,-1);
    tracep->declBit(c+1258,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1259,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1257,"bw_reset_complete", false,-1);
    tracep->declBus(c+1260,"br_config", false,-1, 2,0);
    tracep->declBus(c+1261,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1262,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1257,"dw_reset", false,-1);
    tracep->declBit(c+1258,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1259,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1263,"dr_triggered", false,-1);
    tracep->declBit(c+1264,"dr_primed", false,-1);
    tracep->declBit(c+1265,"dw_trigger", false,-1);
    tracep->declBit(c+1266,"dr_stopped", false,-1);
    tracep->declBus(c+4347,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1267,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1268,"dw_final_stop", false,-1);
    tracep->declBus(c+1269,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1270,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1271,"dr_force_write", false,-1);
    tracep->declBit(c+1272,"dr_run_timeout", false,-1);
    tracep->declBit(c+1273,"new_data", false,-1);
    tracep->declBit(c+1274,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1270,"w_data", false,-1, 30,0);
    tracep->declBit(c+1275,"imm_adr", false,-1);
    tracep->declBit(c+1276,"lst_adr", false,-1);
    tracep->declBus(c+1277,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1278,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1279,"record_ce", false,-1);
    tracep->declBus(c+1280,"r_data", false,-1, 31,0);
    tracep->declBit(c+1268,"bw_stopped", false,-1);
    tracep->declBit(c+1263,"bw_triggered", false,-1);
    tracep->declBit(c+1264,"bw_primed", false,-1);
    tracep->declBit(c+451,"br_wb_ack", false,-1);
    tracep->declBit(c+1281,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+446,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1282,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1283,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1261,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4396,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1284,"br_level_interrupt", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4257,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4347,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4257,"NSW", false,-1, 31,0);
    tracep->declBus(c+4268,"NFF", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+409,"i_wb_cyc", false,-1);
    tracep->declBit(c+417,"i_wb_stb", false,-1);
    tracep->declBit(c+411,"i_wb_we", false,-1);
    tracep->declBus(c+412,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+413,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+418,"o_wb_ack", false,-1);
    tracep->declBus(c+419,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4206,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4207,"i_btn", false,-1, 4,0);
    tracep->declBus(c+172,"o_led", false,-1, 7,0);
    tracep->declBit(c+144,"o_int", false,-1);
    tracep->declBit(c+1285,"led_demo", false,-1);
    tracep->declBus(c+1286,"r_led", false,-1, 7,0);
    tracep->declBus(c+1287,"w_btn", false,-1, 7,0);
    tracep->declBus(c+1288,"bounced", false,-1, 7,0);
    tracep->declBus(c+1289,"r_sw", false,-1, 7,0);
    tracep->declBit(c+1290,"sw_int", false,-1);
    tracep->declBit(c+1291,"btn_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+1292,"next_btn", false,-1, 4,0);
    tracep->declBus(c+1293,"s_btn", false,-1, 4,0);
    tracep->declBus(c+1294,"r_btn", false,-1, 4,0);
    tracep->declBus(c+1295,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+1291,"r_btn_int", false,-1);
    tracep->declBit(c+1296,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+1297,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+1289,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4257,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4324,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBus(c+1288,"o_leds", false,-1, 7,0);
    tracep->declBus(c+1298,"led_owner", false,-1, 7,0);
    tracep->declBit(c+1299,"led_dir", false,-1);
    tracep->declBus(c+1300,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+1301,"led_clk", false,-1);
    tracep->declBus(c+1302,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+1303,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+1304,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+1305,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+1306,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+1307,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+1308,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+1309,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+1310,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4261,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4308,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4351,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4351,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4264,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4263,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4256,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4255,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4264,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4307,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4304,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4262,"PAW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4221,"i_reset", false,-1);
    tracep->declBit(c+237,"o_wb_cyc", false,-1);
    tracep->declBit(c+238,"o_wb_stb", false,-1);
    tracep->declBit(c+239,"o_wb_we", false,-1);
    tracep->declBus(c+240,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+241,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+257,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+259,"i_wb_stall", false,-1);
    tracep->declBit(c+260,"i_wb_ack", false,-1);
    tracep->declArray(c+262,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+261,"i_wb_err", false,-1);
    tracep->declBus(c+164,"i_ext_int", false,-1, 15,0);
    tracep->declBit(c+165,"o_ext_int", false,-1);
    tracep->declBit(c+42,"i_dbg_cyc", false,-1);
    tracep->declBit(c+43,"i_dbg_stb", false,-1);
    tracep->declBit(c+44,"i_dbg_we", false,-1);
    tracep->declBus(c+45,"i_dbg_addr", false,-1, 6,0);
    tracep->declBus(c+46,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4222,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_dbg_stall", false,-1);
    tracep->declBit(c+163,"o_dbg_ack", false,-1);
    tracep->declBus(c+539,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4269,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4197,"o_prof_stb", false,-1);
    tracep->declBus(c+4198,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4199,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4402,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4306,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4403,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4404,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4405,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4406,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4407,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4408,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4409,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4410,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4411,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4412,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4413,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4414,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4415,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4416,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4417,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4418,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4419,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4269,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4268,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4256,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4259,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4347,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4262,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4310,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4311,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4312,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+1311,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+1312,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+1313,"ctri_int", false,-1);
    tracep->declBit(c+1314,"tma_int", false,-1);
    tracep->declBit(c+1315,"tmb_int", false,-1);
    tracep->declBit(c+1316,"tmc_int", false,-1);
    tracep->declBit(c+1317,"jif_int", false,-1);
    tracep->declBit(c+1318,"dmac_int", false,-1);
    tracep->declBit(c+1319,"mtc_int", false,-1);
    tracep->declBit(c+1320,"moc_int", false,-1);
    tracep->declBit(c+1321,"mpc_int", false,-1);
    tracep->declBit(c+1322,"mic_int", false,-1);
    tracep->declBit(c+1323,"utc_int", false,-1);
    tracep->declBit(c+1324,"uoc_int", false,-1);
    tracep->declBit(c+1325,"upc_int", false,-1);
    tracep->declBit(c+1326,"uic_int", false,-1);
    tracep->declBus(c+1327,"actr_data", false,-1, 31,0);
    tracep->declBit(c+1328,"actr_ack", false,-1);
    tracep->declBit(c+4270,"actr_stall", false,-1);
    tracep->declBit(c+1329,"cpu_clken", false,-1);
    tracep->declBit(c+1330,"sys_cyc", false,-1);
    tracep->declBit(c+1331,"sys_stb", false,-1);
    tracep->declBit(c+1332,"sys_we", false,-1);
    tracep->declBus(c+1333,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+1334,"sys_data", false,-1, 31,0);
    tracep->declBus(c+1335,"cpu_addr", false,-1, 21,0);
    tracep->declBus(c+1336,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+1337,"sys_ack", false,-1);
    tracep->declBit(c+4270,"sys_stall", false,-1);
    tracep->declBit(c+1328,"sel_counter", false,-1);
    tracep->declBit(c+1338,"sel_timer", false,-1);
    tracep->declBit(c+1339,"sel_pic", false,-1);
    tracep->declBit(c+1340,"sel_apic", false,-1);
    tracep->declBit(c+1341,"sel_watchdog", false,-1);
    tracep->declBit(c+1342,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+1343,"sel_dmac", false,-1);
    tracep->declBit(c+1344,"sel_mmus", false,-1);
    tracep->declBit(c+1345,"dbg_cyc", false,-1);
    tracep->declBit(c+1346,"dbg_stb", false,-1);
    tracep->declBit(c+1347,"dbg_we", false,-1);
    tracep->declBus(c+1348,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+1349,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+1350,"dbg_ack", false,-1);
    tracep->declBit(c+1351,"dbg_stall", false,-1);
    tracep->declBus(c+1352,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+1353,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+1354,"no_dbg_err", false,-1);
    tracep->declBit(c+1355,"cpu_break", false,-1);
    tracep->declBit(c+1356,"dbg_cmd_write", false,-1);
    tracep->declBit(c+1357,"dbg_cpu_write", false,-1);
    tracep->declBit(c+1358,"dbg_cpu_read", false,-1);
    tracep->declBus(c+1349,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+1353,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+1359,"reset_hold", false,-1);
    tracep->declBit(c+1360,"halt_on_fault", false,-1);
    tracep->declBit(c+1360,"dbg_catch", false,-1);
    tracep->declBit(c+1361,"reset_request", false,-1);
    tracep->declBit(c+1362,"release_request", false,-1);
    tracep->declBit(c+1363,"halt_request", false,-1);
    tracep->declBit(c+1364,"step_request", false,-1);
    tracep->declBit(c+1365,"clear_cache_request", false,-1);
    tracep->declBit(c+1366,"cmd_reset", false,-1);
    tracep->declBit(c+1367,"cmd_halt", false,-1);
    tracep->declBit(c+1368,"cmd_step", false,-1);
    tracep->declBit(c+1369,"cmd_clear_cache", false,-1);
    tracep->declBit(c+1370,"cmd_write", false,-1);
    tracep->declBit(c+1371,"cmd_read", false,-1);
    tracep->declBus(c+1372,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+1373,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+1374,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1366,"cpu_reset", false,-1);
    tracep->declBit(c+1367,"cpu_halt", false,-1);
    tracep->declBit(c+1375,"cpu_has_halted", false,-1);
    tracep->declBit(c+1376,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+1377,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+1378,"cpu_gie", false,-1);
    tracep->declBit(c+4270,"wdt_stall", false,-1);
    tracep->declBit(c+1379,"wdt_ack", false,-1);
    tracep->declBit(c+1380,"wdt_reset", false,-1);
    tracep->declBus(c+1381,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+1382,"wdbus_ack", false,-1);
    tracep->declBus(c+1383,"r_wdbus_data", false,-1, 21,0);
    tracep->declBus(c+1384,"pic_data", false,-1, 31,0);
    tracep->declBus(c+1385,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+1386,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+1387,"wdbus_int", false,-1);
    tracep->declBit(c+47,"cpu_op_stall", false,-1);
    tracep->declBit(c+1388,"cpu_pf_stall", false,-1);
    tracep->declBit(c+1389,"cpu_i_count", false,-1);
    tracep->declBit(c+1390,"dmac_stb", false,-1);
    tracep->declBit(c+1391,"dc_err", false,-1);
    tracep->declBus(c+1392,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4270,"dmac_stall", false,-1);
    tracep->declBit(c+1393,"dmac_ack", false,-1);
    tracep->declBit(c+1394,"dc_cyc", false,-1);
    tracep->declBit(c+1395,"dc_stb", false,-1);
    tracep->declBit(c+1396,"dc_we", false,-1);
    tracep->declBit(c+1397,"dc_stall", false,-1);
    tracep->declBit(c+1398,"dc_ack", false,-1);
    tracep->declBus(c+1399,"dc_addr", false,-1, 21,0);
    tracep->declArray(c+1400,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1416,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1418,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1419,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1420,"ctri_sel", false,-1);
    tracep->declBit(c+4270,"ctri_stall", false,-1);
    tracep->declBit(c+1420,"ctri_ack", false,-1);
    tracep->declBus(c+1421,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4270,"tma_stall", false,-1);
    tracep->declBit(c+1422,"tma_ack", false,-1);
    tracep->declBit(c+4270,"tmb_stall", false,-1);
    tracep->declBit(c+1423,"tmb_ack", false,-1);
    tracep->declBit(c+4270,"tmc_stall", false,-1);
    tracep->declBit(c+1424,"tmc_ack", false,-1);
    tracep->declBit(c+4270,"jif_stall", false,-1);
    tracep->declBit(c+1425,"jif_ack", false,-1);
    tracep->declBus(c+1426,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1427,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1428,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1429,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4270,"pic_stall", false,-1);
    tracep->declBit(c+1430,"pic_ack", false,-1);
    tracep->declBit(c+1431,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1432,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1433,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1434,"cpu_we", false,-1);
    tracep->declArray(c+1435,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1451,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1451,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1453,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1469,"cpu_stall", false,-1);
    tracep->declBit(c+1470,"pic_interrupt", false,-1);
    tracep->declBit(c+1471,"cpu_ack", false,-1);
    tracep->declBit(c+1472,"cpu_err", false,-1);
    tracep->declBus(c+1473,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+259,"ext_stall", false,-1);
    tracep->declBit(c+260,"ext_ack", false,-1);
    tracep->declBit(c+1418,"mmu_cyc", false,-1);
    tracep->declBit(c+1431,"mmu_stb", false,-1);
    tracep->declBit(c+1434,"mmu_we", false,-1);
    tracep->declBit(c+1474,"mmu_stall", false,-1);
    tracep->declBit(c+1475,"mmu_ack", false,-1);
    tracep->declBit(c+1476,"mmu_err", false,-1);
    tracep->declBit(c+4270,"mmus_stall", false,-1);
    tracep->declBit(c+1477,"mmus_ack", false,-1);
    tracep->declBus(c+1335,"mmu_addr", false,-1, 21,0);
    tracep->declArray(c+1435,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+262,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4269,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4270,"cpu_miss", false,-1);
    tracep->declBit(c+1474,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1475,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+262,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4270,"pf_return_stb", false,-1);
    tracep->declBit(c+4270,"pf_return_we", false,-1);
    tracep->declBit(c+4270,"pf_return_cachable", false,-1);
    tracep->declBus(c+4420,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4420,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+237,"ext_cyc", false,-1);
    tracep->declBit(c+238,"ext_stb", false,-1);
    tracep->declBit(c+239,"ext_we", false,-1);
    tracep->declBit(c+1478,"ext_err", false,-1);
    tracep->declBus(c+240,"ext_addr", false,-1, 21,0);
    tracep->declArray(c+241,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+257,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+262,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1479,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1480,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1481,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1482,"last_sys_stb", false,-1);
    tracep->declBit(c+1483,"cmd_read_ack", false,-1);
    tracep->declBit(c+1477,"r_mmus_ack", false,-1);
    tracep->declBit(c+1484,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1485,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1486,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4270,"mtc_stall", false,-1);
    tracep->declBit(c+1487,"mtc_ack", false,-1);
    tracep->declBit(c+4270,"moc_stall", false,-1);
    tracep->declBit(c+1488,"moc_ack", false,-1);
    tracep->declBit(c+4270,"mpc_stall", false,-1);
    tracep->declBit(c+1489,"mpc_ack", false,-1);
    tracep->declBit(c+4270,"mic_stall", false,-1);
    tracep->declBit(c+1490,"mic_ack", false,-1);
    tracep->declBit(c+4270,"utc_stall", false,-1);
    tracep->declBit(c+1491,"utc_ack", false,-1);
    tracep->declBit(c+4270,"uoc_stall", false,-1);
    tracep->declBit(c+1492,"uoc_ack", false,-1);
    tracep->declBit(c+4270,"upc_stall", false,-1);
    tracep->declBit(c+1493,"upc_ack", false,-1);
    tracep->declBit(c+4270,"uic_stall", false,-1);
    tracep->declBit(c+1494,"uic_ack", false,-1);
    tracep->declBus(c+1495,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1496,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1497,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1498,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1499,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1500,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1501,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1502,"uic_data", false,-1, 31,0);
    tracep->declBus(c+1327,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1389,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1503,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1490,"o_wb_ack", false,-1);
    tracep->declBus(c+1498,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1322,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+47,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1504,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1488,"o_wb_ack", false,-1);
    tracep->declBus(c+1496,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1320,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1388,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1505,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1489,"o_wb_ack", false,-1);
    tracep->declBus(c+1497,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1321,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1507,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1487,"o_wb_ack", false,-1);
    tracep->declBus(c+1495,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1319,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1508,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1509,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1494,"o_wb_ack", false,-1);
    tracep->declBus(c+1502,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1326,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+48,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1510,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1492,"o_wb_ack", false,-1);
    tracep->declBus(c+1500,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1324,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1511,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1512,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1493,"o_wb_ack", false,-1);
    tracep->declBus(c+1501,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1325,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4270,"i_reset", false,-1);
    tracep->declBit(c+1513,"i_event", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1514,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1491,"o_wb_ack", false,-1);
    tracep->declBus(c+1499,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1323,"o_int", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4270,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4266,"AW", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4221,"i_reset", false,-1);
    tracep->declBit(c+42,"i_wb_cyc", false,-1);
    tracep->declBit(c+43,"i_wb_stb", false,-1);
    tracep->declBit(c+44,"i_wb_we", false,-1);
    tracep->declBus(c+45,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+46,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_wb_stall", false,-1);
    tracep->declBit(c+163,"o_wb_ack", false,-1);
    tracep->declBus(c+539,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1354,"o_wb_err", false,-1);
    tracep->declBit(c+1345,"o_dly_cyc", false,-1);
    tracep->declBit(c+1346,"o_dly_stb", false,-1);
    tracep->declBit(c+1347,"o_dly_we", false,-1);
    tracep->declBus(c+1348,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+1349,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+1353,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+1351,"i_dly_stall", false,-1);
    tracep->declBit(c+1350,"i_dly_ack", false,-1);
    tracep->declBus(c+1352,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4270,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+162,"r_stb", false,-1);
    tracep->declBit(c+1515,"r_we", false,-1);
    tracep->declBus(c+1516,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1517,"r_data", false,-1, 31,0);
    tracep->declBus(c+1518,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4383,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4308,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1330,"i_swb_cyc", false,-1);
    tracep->declBit(c+1390,"i_swb_stb", false,-1);
    tracep->declBit(c+1332,"i_swb_we", false,-1);
    tracep->declBus(c+1519,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+1334,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_swb_stall", false,-1);
    tracep->declBit(c+1393,"o_swb_ack", false,-1);
    tracep->declBus(c+1392,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+1394,"o_mwb_cyc", false,-1);
    tracep->declBit(c+1395,"o_mwb_stb", false,-1);
    tracep->declBit(c+1396,"o_mwb_we", false,-1);
    tracep->declBus(c+1399,"o_mwb_addr", false,-1, 21,0);
    tracep->declArray(c+1400,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1416,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+1397,"i_mwb_stall", false,-1);
    tracep->declBit(c+1398,"i_mwb_ack", false,-1);
    tracep->declArray(c+262,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+1391,"i_mwb_err", false,-1);
    tracep->declBus(c+1419,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+1318,"o_interrupt", false,-1);
    tracep->declBus(c+4421,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4259,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1520,"dma_request", false,-1);
    tracep->declBit(c+1521,"dma_abort", false,-1);
    tracep->declBit(c+1522,"dma_busy", false,-1);
    tracep->declBit(c+1523,"dma_err", false,-1);
    tracep->declBus(c+1524,"dma_src", false,-1, 27,0);
    tracep->declBus(c+1525,"dma_dst", false,-1, 27,0);
    tracep->declBus(c+1526,"read_addr", false,-1, 27,0);
    tracep->declBus(c+1527,"write_addr", false,-1, 27,0);
    tracep->declBus(c+1528,"dma_length", false,-1, 27,0);
    tracep->declBus(c+1529,"remaining_len", false,-1, 27,0);
    tracep->declBus(c+1530,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1531,"dma_trigger", false,-1);
    tracep->declBit(c+1532,"mm2s_request", false,-1);
    tracep->declBit(c+1533,"s2mm_request", false,-1);
    tracep->declBit(c+1534,"mm2s_busy", false,-1);
    tracep->declBit(c+1535,"s2mm_busy", false,-1);
    tracep->declBit(c+1536,"mm2s_err", false,-1);
    tracep->declBit(c+1537,"s2mm_err", false,-1);
    tracep->declBit(c+1538,"mm2s_inc", false,-1);
    tracep->declBit(c+1539,"s2mm_inc", false,-1);
    tracep->declBus(c+1540,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1541,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1542,"mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1543,"s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1544,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1544,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1545,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1546,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4270,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1547,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1548,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1549,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1550,"mm2s_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1551,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1553,"mm2s_valid", false,-1);
    tracep->declBit(c+1554,"mm2s_ready", false,-1);
    tracep->declBit(c+1555,"mm2s_last", false,-1);
    tracep->declArray(c+1556,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1572,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1573,"rx_valid", false,-1);
    tracep->declBit(c+1574,"rx_ready", false,-1);
    tracep->declBit(c+1575,"rx_last", false,-1);
    tracep->declArray(c+1576,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1592,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1593,"tx_valid", false,-1);
    tracep->declBit(c+1594,"tx_ready", false,-1);
    tracep->declBit(c+1595,"tx_last", false,-1);
    tracep->declArray(c+1596,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1612,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1613,"sfifo_full", false,-1);
    tracep->declBit(c+1614,"sfifo_empty", false,-1);
    tracep->declBus(c+1615,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1616,"s2mm_valid", false,-1);
    tracep->declBit(c+1617,"s2mm_ready", false,-1);
    tracep->declBit(c+1618,"s2mm_last", false,-1);
    tracep->declArray(c+1619,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1635,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1636,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1637,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4271,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1638,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1639,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1640,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1641,"s2mm_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1400,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1642,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1394,"wb_cyc", false,-1);
    tracep->declBit(c+1395,"wb_stb", false,-1);
    tracep->declBit(c+1396,"wb_we", false,-1);
    tracep->declBit(c+1397,"wb_stall", false,-1);
    tracep->declBit(c+1398,"wb_ack", false,-1);
    tracep->declBit(c+1391,"wb_err", false,-1);
    tracep->declBus(c+1399,"wb_addr", false,-1, 21,0);
    tracep->declArray(c+1400,"wb_data", false,-1, 511,0);
    tracep->declArray(c+262,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1416,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declArray(c+4422,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4307,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1545,"i_a_cyc", false,-1);
    tracep->declBit(c+1546,"i_a_stb", false,-1);
    tracep->declBit(c+4270,"i_a_we", false,-1);
    tracep->declBus(c+1550,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1400,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1551,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1547,"o_a_stall", false,-1);
    tracep->declBit(c+1548,"o_a_ack", false,-1);
    tracep->declBit(c+1549,"o_a_err", false,-1);
    tracep->declBit(c+1636,"i_b_cyc", false,-1);
    tracep->declBit(c+1637,"i_b_stb", false,-1);
    tracep->declBit(c+4271,"i_b_we", false,-1);
    tracep->declBus(c+1641,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1400,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1642,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1638,"o_b_stall", false,-1);
    tracep->declBit(c+1639,"o_b_ack", false,-1);
    tracep->declBit(c+1640,"o_b_err", false,-1);
    tracep->declBit(c+1394,"o_cyc", false,-1);
    tracep->declBit(c+1395,"o_stb", false,-1);
    tracep->declBit(c+1396,"o_we", false,-1);
    tracep->declBus(c+1399,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1400,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1416,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1397,"i_stall", false,-1);
    tracep->declBit(c+1398,"i_ack", false,-1);
    tracep->declBit(c+1391,"i_err", false,-1);
    tracep->declBit(c+1644,"r_a_owner", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1645,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4308,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4383,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4425,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4383,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1330,"i_cyc", false,-1);
    tracep->declBit(c+1390,"i_stb", false,-1);
    tracep->declBit(c+1332,"i_we", false,-1);
    tracep->declBus(c+1519,"i_addr", false,-1, 1,0);
    tracep->declBus(c+1334,"i_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_stall", false,-1);
    tracep->declBit(c+1393,"o_ack", false,-1);
    tracep->declBus(c+1392,"o_data", false,-1, 31,0);
    tracep->declBit(c+1520,"o_dma_request", false,-1);
    tracep->declBit(c+1521,"o_dma_abort", false,-1);
    tracep->declBit(c+1522,"i_dma_busy", false,-1);
    tracep->declBit(c+1523,"i_dma_err", false,-1);
    tracep->declBus(c+1524,"o_src_addr", false,-1, 27,0);
    tracep->declBus(c+1525,"o_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1528,"o_length", false,-1, 27,0);
    tracep->declBus(c+1530,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1538,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1539,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1540,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1541,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1531,"o_trigger", false,-1);
    tracep->declBus(c+1526,"i_current_src", false,-1, 27,0);
    tracep->declBus(c+1527,"i_current_dst", false,-1, 27,0);
    tracep->declBus(c+1529,"i_remaining_len", false,-1, 27,0);
    tracep->declBus(c+1419,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+1318,"o_interrupt", false,-1);
    tracep->declBit(c+1646,"int_trigger", false,-1);
    tracep->declBit(c+1647,"r_err", false,-1);
    tracep->declBit(c+1648,"r_zero_len", false,-1);
    tracep->declBit(c+1649,"r_busy", false,-1);
    tracep->declBus(c+1650,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1651,"next_src", false,-1, 31,0);
    tracep->declBus(c+1652,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1653,"next_len", false,-1, 31,0);
    tracep->declBus(c+1654,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1655,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4270,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4270,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4383,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4255,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1521,"i_soft_reset", false,-1);
    tracep->declBit(c+1520,"i_dma_request", false,-1);
    tracep->declBit(c+1522,"o_dma_busy", false,-1);
    tracep->declBit(c+1523,"o_dma_err", false,-1);
    tracep->declBus(c+1524,"i_src_addr", false,-1, 27,0);
    tracep->declBus(c+1525,"i_dst_addr", false,-1, 27,0);
    tracep->declBus(c+1528,"i_length", false,-1, 27,0);
    tracep->declBus(c+1530,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1529,"o_remaining_len", false,-1, 27,0);
    tracep->declBit(c+1531,"i_trigger", false,-1);
    tracep->declBit(c+1532,"o_mm2s_request", false,-1);
    tracep->declBit(c+1534,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1536,"i_mm2s_err", false,-1);
    tracep->declBit(c+1538,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1542,"o_mm2s_addr", false,-1, 27,0);
    tracep->declBus(c+1544,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1533,"o_s2mm_request", false,-1);
    tracep->declBit(c+1535,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1537,"i_s2mm_err", false,-1);
    tracep->declBit(c+1539,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1543,"o_s2mm_addr", false,-1, 27,0);
    tracep->declBus(c+1544,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4310,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4311,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4312,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4313,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1529,"r_length", false,-1, 27,0);
    tracep->declBus(c+1544,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1656,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4255,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1657,"i_reset", false,-1);
    tracep->declBit(c+1532,"i_request", false,-1);
    tracep->declBit(c+1534,"o_busy", false,-1);
    tracep->declBit(c+1536,"o_err", false,-1);
    tracep->declBit(c+1538,"i_inc", false,-1);
    tracep->declBus(c+1540,"i_size", false,-1, 1,0);
    tracep->declBus(c+1544,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1542,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1545,"o_rd_cyc", false,-1);
    tracep->declBit(c+1546,"o_rd_stb", false,-1);
    tracep->declBit(c+4270,"o_rd_we", false,-1);
    tracep->declBus(c+1550,"o_rd_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1551,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1547,"i_rd_stall", false,-1);
    tracep->declBit(c+1548,"i_rd_ack", false,-1);
    tracep->declArray(c+262,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1549,"i_rd_err", false,-1);
    tracep->declBit(c+1553,"M_VALID", false,-1);
    tracep->declBit(c+1554,"M_READY", false,-1);
    tracep->declArray(c+1556,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1572,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1555,"M_LAST", false,-1);
    tracep->declBus(c+4313,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4312,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4311,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4310,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1658,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1659,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1660,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1661,"first_size", false,-1, 6,0);
    tracep->declBus(c+1662,"next_addr", false,-1, 27,0);
    tracep->declBus(c+1663,"last_request_addr", false,-1, 27,0);
    tracep->declBus(c+1664,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1665,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1666,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1668,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1670,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1672,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1674,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1675,"fill", false,-1, 7,0);
    tracep->declBus(c+1676,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1553,"m_valid", false,-1);
    tracep->declBit(c+1555,"m_last", false,-1);
    tracep->declArray(c+1556,"sreg", false,-1, 511,0);
    tracep->declBus(c+1572,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1677,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1678,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1679,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1680,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1696,"r_inc", false,-1);
    tracep->declBus(c+1697,"r_size", false,-1, 1,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1521,"i_soft_reset", false,-1);
    tracep->declBit(c+1553,"S_VALID", false,-1);
    tracep->declBit(c+1554,"S_READY", false,-1);
    tracep->declArray(c+1556,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1572,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1555,"S_LAST", false,-1);
    tracep->declBit(c+1573,"M_VALID", false,-1);
    tracep->declBit(c+1574,"M_READY", false,-1);
    tracep->declArray(c+1576,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1592,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1575,"M_LAST", false,-1);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1698,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1730,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1731,"fill", false,-1, 7,0);
    tracep->declBit(c+1573,"m_valid", false,-1);
    tracep->declBit(c+1575,"m_last", false,-1);
    tracep->declBit(c+1732,"next_last", false,-1);
    tracep->declBit(c+1733,"r_last", false,-1);
    tracep->declBit(c+1734,"r_full", false,-1);
    tracep->declBus(c+1592,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1735,"shift", false,-1, 5,0);
    tracep->declArray(c+1736,"s_data", false,-1, 511,0);
    tracep->declBus(c+4426,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4255,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1657,"i_reset", false,-1);
    tracep->declBit(c+1533,"i_request", false,-1);
    tracep->declBit(c+1535,"o_busy", false,-1);
    tracep->declBit(c+1537,"o_err", false,-1);
    tracep->declBit(c+1539,"i_inc", false,-1);
    tracep->declBus(c+1541,"i_size", false,-1, 1,0);
    tracep->declBus(c+1543,"i_addr", false,-1, 27,0);
    tracep->declBit(c+1616,"S_VALID", false,-1);
    tracep->declBit(c+1617,"S_READY", false,-1);
    tracep->declArray(c+1619,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1635,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1618,"S_LAST", false,-1);
    tracep->declBit(c+1636,"o_wr_cyc", false,-1);
    tracep->declBit(c+1637,"o_wr_stb", false,-1);
    tracep->declBit(c+4271,"o_wr_we", false,-1);
    tracep->declBus(c+1641,"o_wr_addr", false,-1, 21,0);
    tracep->declArray(c+1400,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1642,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1638,"i_wr_stall", false,-1);
    tracep->declBit(c+1639,"i_wr_ack", false,-1);
    tracep->declArray(c+262,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1640,"i_wr_err", false,-1);
    tracep->declBus(c+4313,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4312,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4311,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4310,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+1752,"r_inc", false,-1);
    tracep->declBus(c+1753,"r_size", false,-1, 1,0);
    tracep->declBus(c+1754,"next_addr", false,-1, 28,0);
    tracep->declBus(c+1755,"subaddr", false,-1, 5,0);
    tracep->declArray(c+1756,"next_data", false,-1, 1023,0);
    tracep->declArray(c+1788,"r_data", false,-1, 511,0);
    tracep->declArray(c+1804,"next_sel", false,-1, 127,0);
    tracep->declArray(c+1808,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+1812,"r_sel", false,-1, 63,0);
    tracep->declBit(c+1814,"r_last", false,-1);
    tracep->declBus(c+1815,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+1816,"wb_pipeline_full", false,-1);
    tracep->declBit(c+1817,"addr_overflow", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4421,"BW", false,-1, 31,0);
    tracep->declBus(c+4259,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1657,"i_reset", false,-1);
    tracep->declBit(c+1573,"i_wr", false,-1);
    tracep->declArray(c+1818,"i_data", false,-1, 519,0);
    tracep->declBit(c+1613,"o_full", false,-1);
    tracep->declBus(c+1615,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1594,"i_rd", false,-1);
    tracep->declArray(c+1835,"o_data", false,-1, 519,0);
    tracep->declBit(c+1614,"o_empty", false,-1);
    tracep->declBus(c+4263,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1613,"r_full", false,-1);
    tracep->declBit(c+1614,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1852+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+2124,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+2125,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+2126,"w_wr", false,-1);
    tracep->declBit(c+2127,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1521,"i_soft_reset", false,-1);
    tracep->declBus(c+1541,"i_size", false,-1, 1,0);
    tracep->declBit(c+1593,"S_VALID", false,-1);
    tracep->declBit(c+1594,"S_READY", false,-1);
    tracep->declArray(c+1596,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1612,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1595,"S_LAST", false,-1);
    tracep->declBit(c+1616,"M_VALID", false,-1);
    tracep->declBit(c+1617,"M_READY", false,-1);
    tracep->declArray(c+1619,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1635,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1618,"M_LAST", false,-1);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4313,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4312,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4311,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4310,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1616,"m_valid", false,-1);
    tracep->declBit(c+1618,"m_last", false,-1);
    tracep->declBit(c+2128,"r_last", false,-1);
    tracep->declBit(c+2129,"r_next", false,-1);
    tracep->declArray(c+1619,"sreg", false,-1, 511,0);
    tracep->declBus(c+1635,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+2130,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+1360,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+2131,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+1359,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4352,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1430,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1430,"o_wb_ack", false,-1);
    tracep->declBus(c+1384,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1311,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1470,"o_interrupt", false,-1);
    tracep->declBus(c+2132,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2133,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2134,"r_mie", false,-1);
    tracep->declBit(c+2135,"w_any", false,-1);
    tracep->declBit(c+2136,"wb_write", false,-1);
    tracep->declBit(c+2137,"enable_ints", false,-1);
    tracep->declBit(c+2138,"disable_ints", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4352,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+1420,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1420,"o_wb_ack", false,-1);
    tracep->declBus(c+1421,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1312,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1313,"o_interrupt", false,-1);
    tracep->declBus(c+2139,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2140,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2141,"r_mie", false,-1);
    tracep->declBit(c+2142,"w_any", false,-1);
    tracep->declBit(c+2143,"wb_write", false,-1);
    tracep->declBit(c+2144,"enable_ints", false,-1);
    tracep->declBit(c+2145,"disable_ints", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1418,"i_a_cyc", false,-1);
    tracep->declBit(c+1431,"i_a_stb", false,-1);
    tracep->declBit(c+1434,"i_a_we", false,-1);
    tracep->declBus(c+1335,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1435,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1451,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1474,"o_a_stall", false,-1);
    tracep->declBit(c+1475,"o_a_ack", false,-1);
    tracep->declBit(c+1476,"o_a_err", false,-1);
    tracep->declBit(c+1394,"i_b_cyc", false,-1);
    tracep->declBit(c+1395,"i_b_stb", false,-1);
    tracep->declBit(c+1396,"i_b_we", false,-1);
    tracep->declBus(c+1399,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1400,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1416,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1397,"o_b_stall", false,-1);
    tracep->declBit(c+1398,"o_b_ack", false,-1);
    tracep->declBit(c+1391,"o_b_err", false,-1);
    tracep->declBit(c+237,"o_cyc", false,-1);
    tracep->declBit(c+238,"o_stb", false,-1);
    tracep->declBit(c+239,"o_we", false,-1);
    tracep->declBus(c+240,"o_adr", false,-1, 21,0);
    tracep->declArray(c+241,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+257,"o_sel", false,-1, 63,0);
    tracep->declBit(c+259,"i_stall", false,-1);
    tracep->declBit(c+260,"i_ack", false,-1);
    tracep->declBit(c+1478,"i_err", false,-1);
    tracep->declBit(c+2146,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4261,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4262,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4351,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4308,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4256,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4307,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4351,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4264,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1470,"i_interrupt", false,-1);
    tracep->declBit(c+1329,"i_cpu_clken", false,-1);
    tracep->declBit(c+1367,"i_halt", false,-1);
    tracep->declBit(c+1369,"i_clear_cache", false,-1);
    tracep->declBus(c+1372,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1370,"i_dbg_we", false,-1);
    tracep->declBus(c+1373,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2147,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1376,"o_dbg_stall", false,-1);
    tracep->declBit(c+1375,"o_halted", false,-1);
    tracep->declBus(c+1473,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1374,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1355,"o_break", false,-1);
    tracep->declBit(c+1418,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1431,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1432,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1433,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1434,"o_wb_we", false,-1);
    tracep->declBus(c+1335,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1435,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1451,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1469,"i_wb_stall", false,-1);
    tracep->declBit(c+1471,"i_wb_ack", false,-1);
    tracep->declArray(c+1453,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1472,"i_wb_err", false,-1);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1388,"o_pf_stall", false,-1);
    tracep->declBit(c+1389,"o_i_count", false,-1);
    tracep->declBus(c+4269,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4197,"o_prof_stb", false,-1);
    tracep->declBus(c+4198,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4199,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4308,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4271,"cpu_clken", false,-1);
    tracep->declBit(c+4150,"cpu_clock", false,-1);
    tracep->declBit(c+4271,"clk_gate", false,-1);
    tracep->declBus(c+4269,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+2148,"pf_new_pc", false,-1);
    tracep->declBit(c+2149,"clear_icache", false,-1);
    tracep->declBit(c+49,"pf_ready", false,-1);
    tracep->declBus(c+2150,"pf_request_address", false,-1, 27,0);
    tracep->declBus(c+2151,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2152,"pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+2153,"pf_valid", false,-1);
    tracep->declBit(c+2154,"pf_illegal", false,-1);
    tracep->declBit(c+2155,"pf_cyc", false,-1);
    tracep->declBit(c+2156,"pf_stb", false,-1);
    tracep->declBit(c+2157,"pf_stall", false,-1);
    tracep->declBit(c+2158,"pf_ack", false,-1);
    tracep->declBit(c+2159,"pf_err", false,-1);
    tracep->declBus(c+2160,"pf_addr", false,-1, 21,0);
    tracep->declBit(c+4270,"pf_we", false,-1);
    tracep->declArray(c+4272,"pf_data", false,-1, 511,0);
    tracep->declBit(c+2161,"clear_dcache", false,-1);
    tracep->declBit(c+50,"mem_ce", false,-1);
    tracep->declBit(c+2162,"bus_lock", false,-1);
    tracep->declBus(c+2163,"mem_op", false,-1, 2,0);
    tracep->declBus(c+2164,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+2165,"mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+2166,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1435,"mem_data", false,-1, 511,0);
    tracep->declBus(c+2167,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+2168,"mem_busy", false,-1);
    tracep->declBit(c+2169,"mem_rdbusy", false,-1);
    tracep->declBit(c+2170,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+2171,"mem_valid", false,-1);
    tracep->declBit(c+2172,"mem_bus_err", false,-1);
    tracep->declBus(c+2173,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2174,"mem_result", false,-1, 31,0);
    tracep->declBit(c+2175,"mem_stb_lcl", false,-1);
    tracep->declBit(c+2176,"mem_stb_gbl", false,-1);
    tracep->declBit(c+2177,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+2178,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+2179,"mem_bus_addr", false,-1, 21,0);
    tracep->declBit(c+2180,"mem_we", false,-1);
    tracep->declBit(c+2181,"mem_stall", false,-1);
    tracep->declBit(c+2182,"mem_ack", false,-1);
    tracep->declBit(c+2183,"mem_err", false,-1);
    tracep->declQuad(c+2184,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+1376,"w_dbg_stall", false,-1);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4346,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4262,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4256,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4347,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4308,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4259,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4346,"CS", false,-1, 31,0);
    tracep->declBus(c+4256,"LS", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4259,"DP", false,-1, 31,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4310,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4311,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4312,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4313,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+2161,"i_clear", false,-1);
    tracep->declBit(c+50,"i_pipe_stb", false,-1);
    tracep->declBit(c+2162,"i_lock", false,-1);
    tracep->declBus(c+2163,"i_op", false,-1, 2,0);
    tracep->declBus(c+2164,"i_addr", false,-1, 31,0);
    tracep->declBus(c+2166,"i_data", false,-1, 31,0);
    tracep->declBus(c+2167,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+2168,"o_busy", false,-1);
    tracep->declBit(c+2169,"o_rdbusy", false,-1);
    tracep->declBit(c+2170,"o_pipe_stalled", false,-1);
    tracep->declBit(c+2171,"o_valid", false,-1);
    tracep->declBit(c+2172,"o_err", false,-1);
    tracep->declBus(c+2173,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+2174,"o_data", false,-1, 31,0);
    tracep->declBit(c+2178,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2177,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+2176,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+2175,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+2180,"o_wb_we", false,-1);
    tracep->declBus(c+2179,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+1435,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+2184,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+2181,"i_wb_stall", false,-1);
    tracep->declBit(c+2182,"i_wb_ack", false,-1);
    tracep->declBit(c+2183,"i_wb_err", false,-1);
    tracep->declArray(c+1453,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4351,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2186,"ik", false,-1, 31,0);
    tracep->declBit(c+2187,"cyc", false,-1);
    tracep->declBit(c+2188,"stb", false,-1);
    tracep->declBit(c+2189,"last_ack", false,-1);
    tracep->declBit(c+2190,"end_of_line", false,-1);
    tracep->declBit(c+2191,"last_line_stb", false,-1);
    tracep->declBit(c+2192,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2193,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+2194,"npending", false,-1, 4,0);
    tracep->declBus(c+2195,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2196+i*1,"c_vtags", true,(i+0), 18,0);
    }
    tracep->declBit(c+2204,"set_vflag", false,-1);
    tracep->declBus(c+2205,"state", false,-1, 1,0);
    tracep->declBus(c+2206,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+2207,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+2223,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+2239,"lock_gbl", false,-1);
    tracep->declBit(c+2240,"lock_lcl", false,-1);
    tracep->declBit(c+2241,"c_wr", false,-1);
    tracep->declArray(c+2242,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+2258,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+2260,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+2261,"last_tag", false,-1, 18,0);
    tracep->declBit(c+2262,"last_tag_valid", false,-1);
    tracep->declBus(c+2263,"i_cline", false,-1, 2,0);
    tracep->declBus(c+2264,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+2265,"cache_miss_inow", false,-1);
    tracep->declBit(c+2266,"w_cachable", false,-1);
    tracep->declBit(c+2267,"raw_cachable_address", false,-1);
    tracep->declBit(c+2268,"r_cachable", false,-1);
    tracep->declBit(c+2269,"r_svalid", false,-1);
    tracep->declBit(c+2270,"r_dvalid", false,-1);
    tracep->declBit(c+2271,"r_rd", false,-1);
    tracep->declBit(c+2272,"r_cache_miss", false,-1);
    tracep->declBit(c+2273,"r_rd_pending", false,-1);
    tracep->declBus(c+2274,"r_addr", false,-1, 21,0);
    tracep->declBus(c+2275,"r_cline", false,-1, 2,0);
    tracep->declBus(c+2276,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+2277,"r_ctag", false,-1, 18,0);
    tracep->declBit(c+2278,"wr_cstb", false,-1);
    tracep->declBit(c+2279,"r_iv", false,-1);
    tracep->declBit(c+2280,"in_cache", false,-1);
    tracep->declBus(c+2281,"r_itag", false,-1, 18,0);
    tracep->declBus(c+2282,"req_data", false,-1, 12,0);
    tracep->declBit(c+2283,"gie", false,-1);
    tracep->declArray(c+2284,"pre_data", false,-1, 511,0);
    tracep->declArray(c+2300,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+2316,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+2317,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+2184,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+2319,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+2320,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+2336,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2352+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+2368,"wraddr", false,-1, 4,0);
    tracep->declBus(c+2369,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4427,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+2370,"i_addr", false,-1, 27,0);
    tracep->declBit(c+2267,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4270,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4346,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4262,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4256,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4305,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4314,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4346,"CW", false,-1, 31,0);
    tracep->declBus(c+4256,"LS", false,-1, 31,0);
    tracep->declBus(c+4305,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4308,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+2148,"i_new_pc", false,-1);
    tracep->declBit(c+2149,"i_clear_cache", false,-1);
    tracep->declBit(c+49,"i_ready", false,-1);
    tracep->declBus(c+2150,"i_pc", false,-1, 27,0);
    tracep->declBit(c+2153,"o_valid", false,-1);
    tracep->declBit(c+2154,"o_illegal", false,-1);
    tracep->declBus(c+2151,"o_insn", false,-1, 31,0);
    tracep->declBus(c+2152,"o_pc", false,-1, 27,0);
    tracep->declBit(c+2155,"o_wb_cyc", false,-1);
    tracep->declBit(c+2156,"o_wb_stb", false,-1);
    tracep->declBit(c+4270,"o_wb_we", false,-1);
    tracep->declBus(c+2160,"o_wb_addr", false,-1, 21,0);
    tracep->declArray(c+4272,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+2157,"i_wb_stall", false,-1);
    tracep->declBit(c+2158,"i_wb_ack", false,-1);
    tracep->declBit(c+2159,"i_wb_err", false,-1);
    tracep->declArray(c+1453,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4268,"INLSB", false,-1, 31,0);
    tracep->declBit(c+2371,"r_v", false,-1);
    tracep->declArray(c+2372,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2388+i*1,"cache_tags", true,(i+0), 15,0);
    }
    tracep->declBus(c+2396,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+2397,"r_v_from_pc", false,-1);
    tracep->declBit(c+2398,"r_v_from_last", false,-1);
    tracep->declBit(c+2399,"rvsrc", false,-1);
    tracep->declBit(c+2400,"w_v_from_pc", false,-1);
    tracep->declBit(c+2401,"w_v_from_last", false,-1);
    tracep->declBus(c+2402,"lastpc", false,-1, 27,0);
    tracep->declBus(c+2403,"wraddr", false,-1, 5,0);
    tracep->declBus(c+2404,"pc_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2405,"last_tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2406,"tag_lookup", false,-1, 21,3);
    tracep->declBus(c+2407,"pc_tag", false,-1, 21,3);
    tracep->declBus(c+2408,"lasttag", false,-1, 21,3);
    tracep->declBit(c+2409,"illegal_valid", false,-1);
    tracep->declBus(c+2410,"illegal_cache", false,-1, 21,3);
    tracep->declArray(c+2411,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2427,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+2152,"r_pc", false,-1, 27,0);
    tracep->declBit(c+2443,"isrc", false,-1);
    tracep->declBus(c+2444,"delay", false,-1, 1,0);
    tracep->declBit(c+2445,"svmask", false,-1);
    tracep->declBit(c+2446,"last_ack", false,-1);
    tracep->declBit(c+2447,"needload", false,-1);
    tracep->declBit(c+2448,"last_addr", false,-1);
    tracep->declBit(c+2449,"bus_abort", false,-1);
    tracep->declBus(c+2450,"saddr", false,-1, 2,0);
    tracep->declBit(c+51,"w_advance", false,-1);
    tracep->declBit(c+2451,"w_invalidate_result", false,-1);
    tracep->declBus(c+2452,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2453,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2454,"shifted", false,-1, 511,0);
    tracep->declBus(c+2470,"shift", false,-1, 3,0);
    tracep->declBit(c+4270,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+2178,"i_a_cyc_a", false,-1);
    tracep->declBit(c+2177,"i_a_cyc_b", false,-1);
    tracep->declBit(c+2176,"i_a_stb_a", false,-1);
    tracep->declBit(c+2175,"i_a_stb_b", false,-1);
    tracep->declBit(c+2180,"i_a_we", false,-1);
    tracep->declBus(c+2179,"i_a_adr", false,-1, 21,0);
    tracep->declArray(c+1435,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+2184,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+2181,"o_a_stall", false,-1);
    tracep->declBit(c+2182,"o_a_ack", false,-1);
    tracep->declBit(c+2183,"o_a_err", false,-1);
    tracep->declBit(c+2155,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4270,"i_b_cyc_b", false,-1);
    tracep->declBit(c+2156,"i_b_stb_a", false,-1);
    tracep->declBit(c+4270,"i_b_stb_b", false,-1);
    tracep->declBit(c+4270,"i_b_we", false,-1);
    tracep->declBus(c+2160,"i_b_adr", false,-1, 21,0);
    tracep->declArray(c+1435,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4288,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+2157,"o_b_stall", false,-1);
    tracep->declBit(c+2158,"o_b_ack", false,-1);
    tracep->declBit(c+2159,"o_b_err", false,-1);
    tracep->declBit(c+1418,"o_cyc_a", false,-1);
    tracep->declBit(c+1432,"o_cyc_b", false,-1);
    tracep->declBit(c+1431,"o_stb_a", false,-1);
    tracep->declBit(c+1433,"o_stb_b", false,-1);
    tracep->declBit(c+1434,"o_we", false,-1);
    tracep->declBus(c+1335,"o_adr", false,-1, 21,0);
    tracep->declArray(c+1435,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1451,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1469,"i_stall", false,-1);
    tracep->declBit(c+1471,"i_ack", false,-1);
    tracep->declBit(c+1472,"i_err", false,-1);
    tracep->declBit(c+2471,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4323,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4261,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4256,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4307,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4323,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1470,"i_interrupt", false,-1);
    tracep->declBit(c+4271,"o_clken", false,-1);
    tracep->declBit(c+1367,"i_halt", false,-1);
    tracep->declBit(c+1369,"i_clear_cache", false,-1);
    tracep->declBus(c+1372,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1370,"i_dbg_we", false,-1);
    tracep->declBus(c+1373,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2147,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1376,"o_dbg_stall", false,-1);
    tracep->declBus(c+1473,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1374,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1355,"o_break", false,-1);
    tracep->declBit(c+2148,"o_pf_new_pc", false,-1);
    tracep->declBit(c+2149,"o_clear_icache", false,-1);
    tracep->declBit(c+49,"o_pf_ready", false,-1);
    tracep->declBus(c+2150,"o_pf_request_address", false,-1, 27,0);
    tracep->declBit(c+2153,"i_pf_valid", false,-1);
    tracep->declBit(c+2154,"i_pf_illegal", false,-1);
    tracep->declBus(c+2151,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2152,"i_pf_instruction_pc", false,-1, 27,0);
    tracep->declBit(c+2161,"o_clear_dcache", false,-1);
    tracep->declBit(c+50,"o_mem_ce", false,-1);
    tracep->declBit(c+2162,"o_bus_lock", false,-1);
    tracep->declBus(c+2163,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+2164,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+2166,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+2165,"o_mem_lock_pc", false,-1, 27,0);
    tracep->declBus(c+2167,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+2168,"i_mem_busy", false,-1);
    tracep->declBit(c+2169,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+2170,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+2171,"i_mem_valid", false,-1);
    tracep->declBit(c+2172,"i_bus_err", false,-1);
    tracep->declBus(c+2173,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2174,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1388,"o_pf_stall", false,-1);
    tracep->declBit(c+1389,"o_i_count", false,-1);
    tracep->declBus(c+4269,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4197,"o_prof_stb", false,-1);
    tracep->declBus(c+4198,"o_prof_addr", false,-1, 27,0);
    tracep->declBus(c+4199,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4428,"RESET_BUS_ADDRESS", false,-1, 25,0);
    tracep->declBus(c+4429,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4302,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4315,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4316,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4386,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4391,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4352,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4254,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4329,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4351,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4350,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4255,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4349,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4257,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4266,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4346,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4347,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4259,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2472+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2504,"flags", false,-1, 3,0);
    tracep->declBus(c+2505,"iflags", false,-1, 3,0);
    tracep->declBus(c+2506,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2507,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2508,"break_en", false,-1);
    tracep->declBit(c+2509,"user_step", false,-1);
    tracep->declBit(c+2510,"sleep", false,-1);
    tracep->declBit(c+2511,"r_halted", false,-1);
    tracep->declBit(c+2512,"break_pending", false,-1);
    tracep->declBit(c+2513,"trap", false,-1);
    tracep->declBit(c+2514,"gie", false,-1);
    tracep->declBit(c+2515,"ubreak", false,-1);
    tracep->declBit(c+2516,"pending_interrupt", false,-1);
    tracep->declBit(c+2517,"stepped", false,-1);
    tracep->declBit(c+2518,"step", false,-1);
    tracep->declBit(c+2519,"ill_err_u", false,-1);
    tracep->declBit(c+2520,"ill_err_i", false,-1);
    tracep->declBit(c+2521,"ibus_err_flag", false,-1);
    tracep->declBit(c+2522,"ubus_err_flag", false,-1);
    tracep->declBit(c+2523,"idiv_err_flag", false,-1);
    tracep->declBit(c+2524,"udiv_err_flag", false,-1);
    tracep->declBit(c+4270,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4270,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2525,"ihalt_phase", false,-1);
    tracep->declBit(c+2526,"uhalt_phase", false,-1);
    tracep->declBit(c+2527,"master_ce", false,-1);
    tracep->declBit(c+52,"master_stall", false,-1);
    tracep->declBus(c+2528,"pf_pc", false,-1, 27,0);
    tracep->declBit(c+2529,"new_pc", false,-1);
    tracep->declBit(c+2529,"clear_pipeline", false,-1);
    tracep->declBit(c+53,"dcd_stalled", false,-1);
    tracep->declBit(c+2514,"pf_gie", false,-1);
    tracep->declBus(c+2530,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+54,"dcd_ce", false,-1);
    tracep->declBit(c+2531,"dcd_phase", false,-1);
    tracep->declBus(c+2532,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2533,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2534,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2535,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2536,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2537,"dcd_Acc", false,-1);
    tracep->declBit(c+2538,"dcd_Bcc", false,-1);
    tracep->declBit(c+2539,"dcd_Apc", false,-1);
    tracep->declBit(c+2540,"dcd_Bpc", false,-1);
    tracep->declBit(c+2541,"dcd_Rcc", false,-1);
    tracep->declBit(c+2542,"dcd_Rpc", false,-1);
    tracep->declBus(c+2543,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2544,"dcd_wR", false,-1);
    tracep->declBit(c+2545,"dcd_rA", false,-1);
    tracep->declBit(c+2546,"dcd_rB", false,-1);
    tracep->declBit(c+2547,"dcd_ALU", false,-1);
    tracep->declBit(c+2548,"dcd_M", false,-1);
    tracep->declBit(c+2549,"dcd_DIV", false,-1);
    tracep->declBit(c+2550,"dcd_FP", false,-1);
    tracep->declBit(c+2551,"dcd_wF", false,-1);
    tracep->declBit(c+2514,"dcd_gie", false,-1);
    tracep->declBit(c+2552,"dcd_break", false,-1);
    tracep->declBit(c+2553,"dcd_lock", false,-1);
    tracep->declBit(c+2554,"dcd_pipe", false,-1);
    tracep->declBit(c+2555,"dcd_ljmp", false,-1);
    tracep->declBit(c+2556,"dcd_valid", false,-1);
    tracep->declBus(c+4223,"dcd_pc", false,-1, 27,0);
    tracep->declBus(c+2557,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2558,"dcd_zI", false,-1);
    tracep->declBit(c+55,"dcd_A_stall", false,-1);
    tracep->declBit(c+56,"dcd_B_stall", false,-1);
    tracep->declBit(c+4224,"dcd_F_stall", false,-1);
    tracep->declBit(c+2559,"dcd_illegal", false,-1);
    tracep->declBit(c+2560,"dcd_early_branch", false,-1);
    tracep->declBit(c+2561,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2562,"dcd_branch_pc", false,-1, 27,0);
    tracep->declBit(c+4225,"dcd_sim", false,-1);
    tracep->declBus(c+4226,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2563,"prelock_stall", false,-1);
    tracep->declBit(c+2564,"last_lock_insn", false,-1);
    tracep->declBit(c+2565,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2566,"pending_sreg_write", false,-1);
    tracep->declBit(c+4227,"op_valid", false,-1);
    tracep->declBit(c+2567,"op_valid_mem", false,-1);
    tracep->declBit(c+2568,"op_valid_alu", false,-1);
    tracep->declBit(c+2569,"op_valid_div", false,-1);
    tracep->declBit(c+2570,"op_valid_fpu", false,-1);
    tracep->declBit(c+57,"op_stall", false,-1);
    tracep->declBus(c+2571,"op_opn", false,-1, 3,0);
    tracep->declBus(c+2167,"op_R", false,-1, 4,0);
    tracep->declBit(c+2572,"op_Rcc", false,-1);
    tracep->declBus(c+2573,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2574,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2575,"op_rA", false,-1);
    tracep->declBit(c+2576,"op_rB", false,-1);
    tracep->declBus(c+2577,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2578,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2579,"op_pc", false,-1, 27,0);
    tracep->declBus(c+2580,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2581,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2166,"op_Av", false,-1, 31,0);
    tracep->declBus(c+2164,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+58,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+59,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2582,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2583,"op_wR", false,-1);
    tracep->declBit(c+2584,"op_wF", false,-1);
    tracep->declBit(c+2514,"op_gie", false,-1);
    tracep->declBus(c+2585,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2586,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2587,"op_F", false,-1, 7,0);
    tracep->declBit(c+60,"op_ce", false,-1);
    tracep->declBit(c+2588,"op_phase", false,-1);
    tracep->declBit(c+2589,"op_pipe", false,-1);
    tracep->declBit(c+2590,"r_op_break", false,-1);
    tracep->declBit(c+2591,"w_op_valid", false,-1);
    tracep->declBit(c+4270,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4430,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2592,"op_illegal", false,-1);
    tracep->declBit(c+2590,"op_break", false,-1);
    tracep->declBit(c+2593,"op_lock", false,-1);
    tracep->declBit(c+4228,"op_sim", false,-1);
    tracep->declBus(c+4229,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4230,"alu_sim", false,-1);
    tracep->declBus(c+4231,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2594,"alu_pc", false,-1, 27,0);
    tracep->declBus(c+2595,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2596,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2597,"mem_pc_valid", false,-1);
    tracep->declBit(c+2598,"alu_pc_valid", false,-1);
    tracep->declBit(c+2599,"alu_phase", false,-1);
    tracep->declBit(c+4232,"alu_ce", false,-1);
    tracep->declBit(c+61,"alu_stall", false,-1);
    tracep->declBus(c+2600,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2601,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2602,"alu_valid", false,-1);
    tracep->declBit(c+2603,"alu_busy", false,-1);
    tracep->declBit(c+2604,"set_cond", false,-1);
    tracep->declBit(c+2605,"alu_wR", false,-1);
    tracep->declBit(c+2606,"alu_wF", false,-1);
    tracep->declBit(c+2514,"alu_gie", false,-1);
    tracep->declBit(c+2607,"alu_illegal", false,-1);
    tracep->declBit(c+62,"mem_ce", false,-1);
    tracep->declBit(c+63,"mem_stalled", false,-1);
    tracep->declBit(c+64,"div_ce", false,-1);
    tracep->declBit(c+2608,"div_error", false,-1);
    tracep->declBit(c+2609,"div_busy", false,-1);
    tracep->declBit(c+2610,"div_valid", false,-1);
    tracep->declBus(c+2611,"div_result", false,-1, 31,0);
    tracep->declBus(c+2612,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4270,"fpu_ce", false,-1);
    tracep->declBit(c+4270,"fpu_error", false,-1);
    tracep->declBit(c+4270,"fpu_busy", false,-1);
    tracep->declBit(c+4270,"fpu_valid", false,-1);
    tracep->declBus(c+4269,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4315,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+65,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2613,"dbgv", false,-1);
    tracep->declBit(c+2614,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2615,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2616,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2617,"r_dbg_stall", false,-1);
    tracep->declBit(c+2618,"wr_write_pc", false,-1);
    tracep->declBit(c+2619,"wr_write_cc", false,-1);
    tracep->declBit(c+2620,"wr_write_scc", false,-1);
    tracep->declBit(c+2621,"wr_write_ucc", false,-1);
    tracep->declBit(c+2622,"wr_reg_ce", false,-1);
    tracep->declBit(c+2623,"wr_flags_ce", false,-1);
    tracep->declBus(c+2624,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2625,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2626,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2627,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2628,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2629,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2630,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2631,"ipc", false,-1, 27,0);
    tracep->declBus(c+2632,"upc", false,-1, 27,0);
    tracep->declBit(c+2633,"last_write_to_cc", false,-1);
    tracep->declBit(c+2634,"cc_write_hold", false,-1);
    tracep->declBit(c+2149,"r_clear_icache", false,-1);
    tracep->declBit(c+66,"pfpcset", false,-1);
    tracep->declBus(c+67,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4271,"w_clken", false,-1);
    tracep->declBus(c+2635,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2636,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2637,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+68,"avsrc", false,-1, 2,0);
    tracep->declBus(c+69,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2638,"bisrc", false,-1, 1,0);
    tracep->declBit(c+70,"cpu_sim", false,-1);
    tracep->declBus(c+4307,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2639,"r_alu_sim", false,-1);
    tracep->declBus(c+2640,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2641,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2563,"r_prelock_stall", false,-1);
    tracep->declBus(c+2642,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+2165,"r_lock_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+2161,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2523,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2524,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4347,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+2643,"i_reset", false,-1);
    tracep->declBit(c+64,"i_wr", false,-1);
    tracep->declBit(c+2644,"i_signed", false,-1);
    tracep->declBus(c+2166,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+2164,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2609,"o_busy", false,-1);
    tracep->declBit(c+2610,"o_valid", false,-1);
    tracep->declBit(c+2608,"o_err", false,-1);
    tracep->declBus(c+2611,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2612,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2645,"r_busy", false,-1);
    tracep->declBus(c+2646,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2647,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2649,"diff", false,-1, 32,0);
    tracep->declBit(c+2651,"r_sign", false,-1);
    tracep->declBit(c+2652,"pre_sign", false,-1);
    tracep->declBit(c+2653,"r_z", false,-1);
    tracep->declBit(c+2654,"r_c", false,-1);
    tracep->declBit(c+2655,"last_bit", false,-1);
    tracep->declBus(c+2656,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2657,"zero_divisor", false,-1);
    tracep->declBit(c+2658,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2571,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2594,"r_alu_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2599,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4270,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4270,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2525,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2593,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2589,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2565,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2566,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2583,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2512,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2659,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2517,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2660,"prof_stb", false,-1);
    tracep->declBus(c+2661,"prof_addr", false,-1, 27,0);
    tracep->declBus(c+2662,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2526,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2588,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+2167,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2573,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2574,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2575,"r_op_rA", false,-1);
    tracep->declBit(c+2576,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2663,"r_op_sim", false,-1);
    tracep->declBus(c+2664,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2665,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1473,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2607,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2514,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2579,"r_op_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2513,"r_trap", false,-1);
    tracep->declBit(c+2515,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2522,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2519,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2632,"r_upc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4270,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4256,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+2643,"i_reset", false,-1);
    tracep->declBit(c+4232,"i_stb", false,-1);
    tracep->declBus(c+2571,"i_op", false,-1, 3,0);
    tracep->declBus(c+2166,"i_a", false,-1, 31,0);
    tracep->declBus(c+2164,"i_b", false,-1, 31,0);
    tracep->declBus(c+2600,"o_c", false,-1, 31,0);
    tracep->declBus(c+2601,"o_f", false,-1, 3,0);
    tracep->declBit(c+2602,"o_valid", false,-1);
    tracep->declBit(c+2603,"o_busy", false,-1);
    tracep->declBus(c+2666,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2667,"z", false,-1);
    tracep->declBit(c+2668,"n", false,-1);
    tracep->declBit(c+2669,"v", false,-1);
    tracep->declBit(c+2670,"vx", false,-1);
    tracep->declBit(c+2671,"c", false,-1);
    tracep->declBit(c+2672,"pre_sign", false,-1);
    tracep->declBit(c+2673,"set_ovfl", false,-1);
    tracep->declBit(c+2674,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2675,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2677,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2679,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2681,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2683,"mpyhi", false,-1);
    tracep->declBit(c+2684,"mpybusy", false,-1);
    tracep->declBit(c+2685,"mpydone", false,-1);
    tracep->declBit(c+71,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2603,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2686,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2688,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4256,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+2643,"i_reset", false,-1);
    tracep->declBit(c+71,"i_stb", false,-1);
    tracep->declBus(c+2690,"i_op", false,-1, 1,0);
    tracep->declBus(c+2166,"i_a", false,-1, 31,0);
    tracep->declBus(c+2164,"i_b", false,-1, 31,0);
    tracep->declBit(c+2685,"o_valid", false,-1);
    tracep->declBit(c+2684,"o_busy", false,-1);
    tracep->declQuad(c+2681,"o_result", false,-1, 63,0);
    tracep->declBit(c+2683,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2691,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2693,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2695,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2696,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2697,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2698,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2683,"r_hi", false,-1);
    tracep->declQuad(c+2699,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2701,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2703,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2705,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4323,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4323,"AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+2707,"i_reset", false,-1);
    tracep->declBit(c+54,"i_ce", false,-1);
    tracep->declBit(c+53,"i_stalled", false,-1);
    tracep->declBus(c+2151,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2514,"i_gie", false,-1);
    tracep->declBus(c+2152,"i_pc", false,-1, 27,0);
    tracep->declBit(c+2153,"i_pf_valid", false,-1);
    tracep->declBit(c+2154,"i_illegal", false,-1);
    tracep->declBit(c+2556,"o_valid", false,-1);
    tracep->declBit(c+2531,"o_phase", false,-1);
    tracep->declBit(c+2559,"o_illegal", false,-1);
    tracep->declBus(c+4223,"o_pc", false,-1, 27,0);
    tracep->declBus(c+2635,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2636,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2637,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2535,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2536,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2557,"o_I", false,-1, 31,0);
    tracep->declBit(c+2558,"o_zI", false,-1);
    tracep->declBus(c+2543,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2551,"o_wF", false,-1);
    tracep->declBus(c+2530,"o_op", false,-1, 3,0);
    tracep->declBit(c+2547,"o_ALU", false,-1);
    tracep->declBit(c+2548,"o_M", false,-1);
    tracep->declBit(c+2549,"o_DV", false,-1);
    tracep->declBit(c+2550,"o_FP", false,-1);
    tracep->declBit(c+2552,"o_break", false,-1);
    tracep->declBit(c+2553,"o_lock", false,-1);
    tracep->declBit(c+2544,"o_wR", false,-1);
    tracep->declBit(c+2545,"o_rA", false,-1);
    tracep->declBit(c+2546,"o_rB", false,-1);
    tracep->declBit(c+2560,"o_early_branch", false,-1);
    tracep->declBit(c+2561,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2562,"o_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2555,"o_ljmp", false,-1);
    tracep->declBit(c+2554,"o_pipe", false,-1);
    tracep->declBit(c+4225,"o_sim", false,-1);
    tracep->declBus(c+4226,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4391,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4429,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4302,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4397,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4325,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4326,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2708,"w_op", false,-1, 4,0);
    tracep->declBit(c+2709,"w_ldi", false,-1);
    tracep->declBit(c+2710,"w_mov", false,-1);
    tracep->declBit(c+2711,"w_cmptst", false,-1);
    tracep->declBit(c+2712,"w_ldilo", false,-1);
    tracep->declBit(c+2713,"w_ALU", false,-1);
    tracep->declBit(c+2714,"w_brev", false,-1);
    tracep->declBit(c+2715,"w_noop", false,-1);
    tracep->declBit(c+2716,"w_lock", false,-1);
    tracep->declBit(c+2717,"w_sim", false,-1);
    tracep->declBit(c+2718,"w_break", false,-1);
    tracep->declBit(c+2719,"w_special", false,-1);
    tracep->declBit(c+2720,"w_add", false,-1);
    tracep->declBit(c+2721,"w_mpy", false,-1);
    tracep->declBus(c+2535,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2536,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2535,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2722,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2723,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2722,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2723,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2724,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2725,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2726,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2727,"w_wF", false,-1);
    tracep->declBit(c+2728,"w_mem", false,-1);
    tracep->declBit(c+2729,"w_sto", false,-1);
    tracep->declBit(c+2730,"w_div", false,-1);
    tracep->declBit(c+2731,"w_fpu", false,-1);
    tracep->declBit(c+2732,"w_wR", false,-1);
    tracep->declBit(c+2733,"w_rA", false,-1);
    tracep->declBit(c+2734,"w_rB", false,-1);
    tracep->declBit(c+2735,"w_wR_n", false,-1);
    tracep->declBit(c+2736,"w_ljmp", false,-1);
    tracep->declBit(c+2555,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2737,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2738,"iword", false,-1, 31,0);
    tracep->declBit(c+2739,"pf_valid", false,-1);
    tracep->declBus(c+2740,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2741,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2742,"r_I", false,-1, 22,0);
    tracep->declBus(c+2743,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+2744,"w_I", false,-1, 22,0);
    tracep->declBit(c+2745,"w_Iz", false,-1);
    tracep->declBus(c+2746,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2556,"r_valid", false,-1);
    tracep->declBit(c+2747,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4270,"illegal_shift", false,-1);
    tracep->declBit(c+4270,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+2748,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+2749,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2531,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2560,"r_early_branch", false,-1);
    tracep->declBit(c+2561,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2555,"r_ljmp", false,-1);
    tracep->declBus(c+2562,"r_branch_pc", false,-1, 27,0);
    tracep->declBit(c+2750,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2554,"r_pipe", false,-1);
    tracep->declBit(c+2747,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_ce", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+2751,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1425,"o_wb_ack", false,-1);
    tracep->declBus(c+1429,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1317,"o_int", false,-1);
    tracep->declBus(c+1429,"r_counter", false,-1, 31,0);
    tracep->declBit(c+2752,"int_set", false,-1);
    tracep->declBit(c+2753,"new_set", false,-1);
    tracep->declBit(c+2754,"int_now", false,-1);
    tracep->declBus(c+2755,"int_when", false,-1, 31,0);
    tracep->declBus(c+2756,"new_when", false,-1, 31,0);
    tracep->declBus(c+2757,"till_wb", false,-1, 31,0);
    tracep->declBus(c+2758,"till_when", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4397,"VW", false,-1, 31,0);
    tracep->declBus(c+4264,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_ce", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+2759,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1422,"o_wb_ack", false,-1);
    tracep->declBus(c+1426,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1314,"o_int", false,-1);
    tracep->declBit(c+2760,"r_running", false,-1);
    tracep->declBit(c+2761,"r_zero", false,-1);
    tracep->declBus(c+2762,"r_value", false,-1, 30,0);
    tracep->declBit(c+2763,"wb_write", false,-1);
    tracep->declBit(c+2764,"auto_reload", false,-1);
    tracep->declBus(c+2765,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2764,"r_auto_reload", false,-1);
    tracep->declBus(c+2765,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4397,"VW", false,-1, 31,0);
    tracep->declBus(c+4264,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_ce", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+2766,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1423,"o_wb_ack", false,-1);
    tracep->declBus(c+1427,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1315,"o_int", false,-1);
    tracep->declBit(c+2767,"r_running", false,-1);
    tracep->declBit(c+2768,"r_zero", false,-1);
    tracep->declBus(c+2769,"r_value", false,-1, 30,0);
    tracep->declBit(c+2770,"wb_write", false,-1);
    tracep->declBit(c+2771,"auto_reload", false,-1);
    tracep->declBus(c+2772,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2771,"r_auto_reload", false,-1);
    tracep->declBus(c+2772,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4397,"VW", false,-1, 31,0);
    tracep->declBus(c+4264,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_ce", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+2773,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1424,"o_wb_ack", false,-1);
    tracep->declBus(c+1428,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1316,"o_int", false,-1);
    tracep->declBit(c+2774,"r_running", false,-1);
    tracep->declBit(c+2775,"r_zero", false,-1);
    tracep->declBus(c+2776,"r_value", false,-1, 30,0);
    tracep->declBit(c+2777,"wb_write", false,-1);
    tracep->declBit(c+2778,"auto_reload", false,-1);
    tracep->declBus(c+2779,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2778,"r_auto_reload", false,-1);
    tracep->declBus(c+2779,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4254,"BW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+2780,"i_reset", false,-1);
    tracep->declBus(c+4431,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+1387,"o_int", false,-1);
    tracep->declBus(c+2781,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4308,"BW", false,-1, 31,0);
    tracep->declBus(c+4397,"VW", false,-1, 31,0);
    tracep->declBus(c+4307,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+1366,"i_reset", false,-1);
    tracep->declBit(c+1506,"i_ce", false,-1);
    tracep->declBit(c+1330,"i_wb_cyc", false,-1);
    tracep->declBit(c+2782,"i_wb_stb", false,-1);
    tracep->declBit(c+1332,"i_wb_we", false,-1);
    tracep->declBus(c+1334,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4302,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+1379,"o_wb_ack", false,-1);
    tracep->declBus(c+1381,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1380,"o_int", false,-1);
    tracep->declBit(c+2783,"r_running", false,-1);
    tracep->declBit(c+2784,"r_zero", false,-1);
    tracep->declBus(c+2785,"r_value", false,-1, 30,0);
    tracep->declBit(c+2786,"wb_write", false,-1);
    tracep->declBit(c+4270,"auto_reload", false,-1);
    tracep->declBus(c+4432,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4433,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4433,"TB", false,-1, 4,0);
    tracep->declBus(c+4400,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+169,"i_wr", false,-1);
    tracep->declBus(c+167,"i_data", false,-1, 7,0);
    tracep->declBit(c+4202,"o_uart_tx", false,-1);
    tracep->declBit(c+170,"o_busy", false,-1);
    tracep->declBus(c+4315,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4386,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4302,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+2787,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+2788,"state", false,-1, 3,0);
    tracep->declBus(c+2789,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+170,"r_busy", false,-1);
    tracep->declBit(c+2790,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+477,"i_wb_cyc", false,-1);
    tracep->declBit(c+478,"i_wb_stb", false,-1);
    tracep->declBit(c+479,"i_wb_we", false,-1);
    tracep->declBus(c+2791,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+481,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+482,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+483,"o_wb_ack", false,-1);
    tracep->declBus(c+484,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4178,"i_temp_sda", false,-1);
    tracep->declBit(c+4179,"i_temp_scl", false,-1);
    tracep->declBit(c+4180,"o_temp_sda", false,-1);
    tracep->declBit(c+4181,"o_temp_scl", false,-1);
    tracep->declBit(c+4182,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4183,"o_sys_pwm", false,-1);
    tracep->declBit(c+4184,"i_fan_tach", false,-1);
    tracep->declBus(c+4212,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4434,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4435,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4436,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4437,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4329,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+2792,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+2793,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+2794,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+2795,"ck_tach", false,-1);
    tracep->declBit(c+2796,"last_tach", false,-1);
    tracep->declBus(c+2797,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+2798,"tach_reset", false,-1);
    tracep->declBus(c+2799,"tach_count", false,-1, 26,0);
    tracep->declBus(c+2800,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+2801,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4270,"i2c_wb_stall", false,-1);
    tracep->declBit(c+2802,"i2c_wb_ack", false,-1);
    tracep->declBus(c+2803,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+2804,"ign_mem_cyc", false,-1);
    tracep->declBit(c+2805,"mem_stb", false,-1);
    tracep->declBit(c+4270,"ign_mem_we", false,-1);
    tracep->declBit(c+4264,"ign_mem_sel", false,-1);
    tracep->declBus(c+2806,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4306,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+2807,"mem_data", false,-1, 7,0);
    tracep->declBit(c+2808,"mem_ack", false,-1);
    tracep->declBit(c+2809,"i2cd_valid", false,-1);
    tracep->declBit(c+2810,"i2cd_last", false,-1);
    tracep->declBit(c+4270,"ign_i2cd_id", false,-1);
    tracep->declBus(c+2811,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+2812,"pp_ms", false,-1);
    tracep->declBus(c+2813,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+2814,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+2815,"temp_data", false,-1, 31,0);
    tracep->declBit(c+2816,"pre_ack", false,-1);
    tracep->declBus(c+2817,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4347,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4269,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4307,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4347,"AW", false,-1, 31,0);
    tracep->declBus(c+4257,"DW", false,-1, 31,0);
    tracep->declBus(c+4257,"RW", false,-1, 31,0);
    tracep->declBus(c+4347,"BAW", false,-1, 31,0);
    tracep->declBus(c+4374,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4307,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4269,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4438,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+477,"i_wb_cyc", false,-1);
    tracep->declBit(c+2818,"i_wb_stb", false,-1);
    tracep->declBit(c+479,"i_wb_we", false,-1);
    tracep->declBus(c+2819,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+481,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+482,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+2802,"o_wb_ack", false,-1);
    tracep->declBus(c+2803,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2804,"o_pf_cyc", false,-1);
    tracep->declBit(c+2805,"o_pf_stb", false,-1);
    tracep->declBit(c+4270,"o_pf_we", false,-1);
    tracep->declBus(c+2806,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4306,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4264,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4270,"i_pf_stall", false,-1);
    tracep->declBit(c+2808,"i_pf_ack", false,-1);
    tracep->declBit(c+4270,"i_pf_err", false,-1);
    tracep->declBus(c+2807,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4178,"i_i2c_sda", false,-1);
    tracep->declBit(c+4179,"i_i2c_scl", false,-1);
    tracep->declBit(c+4180,"o_i2c_sda", false,-1);
    tracep->declBit(c+4181,"o_i2c_scl", false,-1);
    tracep->declBit(c+2809,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4271,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2811,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2810,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4270,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+2812,"i_sync_signal", false,-1);
    tracep->declBus(c+4212,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4310,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4311,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4312,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4313,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4267,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4304,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4327,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4262,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4349,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4350,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4315,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4317,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4318,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4319,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4320,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4309,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4321,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4386,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4387,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4388,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4389,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4390,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4391,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+2820,"cpu_reset", false,-1);
    tracep->declBit(c+4270,"cpu_clear_cache", false,-1);
    tracep->declBit(c+2821,"cpu_new_pc", false,-1);
    tracep->declBus(c+2822,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+2823,"pf_valid", false,-1);
    tracep->declBit(c+2824,"pf_ready", false,-1);
    tracep->declBus(c+2825,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+2826,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+2827,"pf_illegal", false,-1);
    tracep->declBit(c+2828,"half_valid", false,-1);
    tracep->declBit(c+2829,"imm_cycle", false,-1);
    tracep->declBit(c+2830,"next_valid", false,-1);
    tracep->declBus(c+2831,"next_insn", false,-1, 7,0);
    tracep->declBit(c+2832,"insn_ready", false,-1);
    tracep->declBit(c+2833,"half_ready", false,-1);
    tracep->declBit(c+2834,"i2c_abort", false,-1);
    tracep->declBit(c+2835,"insn_valid", false,-1);
    tracep->declBus(c+2836,"insn", false,-1, 11,0);
    tracep->declBus(c+2837,"half_insn", false,-1, 3,0);
    tracep->declBit(c+2838,"i2c_ckedge", false,-1);
    tracep->declBit(c+2839,"i2c_stretch", false,-1);
    tracep->declBus(c+2840,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+2841,"ckcount", false,-1, 11,0);
    tracep->declBus(c+2842,"abort_address", false,-1, 4,0);
    tracep->declBus(c+2843,"jump_target", false,-1, 4,0);
    tracep->declBit(c+2844,"r_wait", false,-1);
    tracep->declBit(c+2845,"soft_halt_request", false,-1);
    tracep->declBit(c+2820,"r_halted", false,-1);
    tracep->declBit(c+2846,"r_err", false,-1);
    tracep->declBit(c+2847,"r_aborted", false,-1);
    tracep->declBit(c+2848,"r_manual", false,-1);
    tracep->declBit(c+2849,"r_sda", false,-1);
    tracep->declBit(c+2850,"r_scl", false,-1);
    tracep->declBit(c+2851,"w_stopped", false,-1);
    tracep->declBit(c+2852,"w_sda", false,-1);
    tracep->declBit(c+2853,"w_scl", false,-1);
    tracep->declBit(c+2854,"bus_read", false,-1);
    tracep->declBit(c+2855,"bus_write", false,-1);
    tracep->declBit(c+2856,"bus_override", false,-1);
    tracep->declBit(c+2857,"bus_manual", false,-1);
    tracep->declBit(c+2858,"ovw_ready", false,-1);
    tracep->declBit(c+2859,"bus_jump", false,-1);
    tracep->declBus(c+2819,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+2819,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+481,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+482,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+2803,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+2860,"s_tvalid", false,-1);
    tracep->declBit(c+2833,"s_tready", false,-1);
    tracep->declBus(c+2861,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4233,"w_control", false,-1, 31,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+2848,"manual", false,-1);
    tracep->declBit(c+2850,"scl", false,-1);
    tracep->declBit(c+2849,"sda", false,-1);
    tracep->declBit(c+2862,"o_scl", false,-1);
    tracep->declBit(c+2863,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4269,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+72,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+2860,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+2832,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+2864,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+2809,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4271,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2811,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2810,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+2838,"i_ckedge", false,-1);
    tracep->declBit(c+2839,"o_stretch", false,-1);
    tracep->declBit(c+4179,"i_scl", false,-1);
    tracep->declBit(c+4178,"i_sda", false,-1);
    tracep->declBit(c+2853,"o_scl", false,-1);
    tracep->declBit(c+2852,"o_sda", false,-1);
    tracep->declBit(c+2834,"o_abort", false,-1);
    tracep->declBus(c+4315,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4316,"START", false,-1, 3,0);
    tracep->declBus(c+4317,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4318,"STOP", false,-1, 3,0);
    tracep->declBus(c+4319,"DATA", false,-1, 3,0);
    tracep->declBus(c+4320,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4309,"ACK", false,-1, 3,0);
    tracep->declBus(c+4321,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4386,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4387,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4388,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4389,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4390,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4307,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4264,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4353,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4359,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4354,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4356,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4392,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4393,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4394,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4395,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4307,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+2865,"last_byte", false,-1);
    tracep->declBit(c+2866,"dir", false,-1);
    tracep->declBit(c+2867,"will_ack", false,-1);
    tracep->declBus(c+2868,"state", false,-1, 3,0);
    tracep->declBus(c+2869,"nbits", false,-1, 2,0);
    tracep->declBus(c+2870,"sreg", false,-1, 7,0);
    tracep->declBit(c+2871,"q_scl", false,-1);
    tracep->declBit(c+2872,"q_sda", false,-1);
    tracep->declBit(c+2873,"ck_scl", false,-1);
    tracep->declBit(c+2874,"ck_sda", false,-1);
    tracep->declBit(c+2875,"lst_scl", false,-1);
    tracep->declBit(c+2876,"lst_sda", false,-1);
    tracep->declBit(c+2877,"stop_bit", false,-1);
    tracep->declBit(c+2878,"channel_busy", false,-1);
    tracep->declBit(c+4270,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4347,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4257,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4347,"AW", false,-1, 31,0);
    tracep->declBus(c+4257,"DW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+73,"i_reset", false,-1);
    tracep->declBit(c+2821,"i_new_pc", false,-1);
    tracep->declBit(c+4270,"i_clear_cache", false,-1);
    tracep->declBit(c+2824,"i_ready", false,-1);
    tracep->declBus(c+2822,"i_pc", false,-1, 4,0);
    tracep->declBit(c+2823,"o_valid", false,-1);
    tracep->declBit(c+2827,"o_illegal", false,-1);
    tracep->declBus(c+2825,"o_insn", false,-1, 7,0);
    tracep->declBus(c+2826,"o_pc", false,-1, 4,0);
    tracep->declBit(c+2804,"o_wb_cyc", false,-1);
    tracep->declBit(c+2805,"o_wb_stb", false,-1);
    tracep->declBit(c+4270,"o_wb_we", false,-1);
    tracep->declBus(c+2806,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4306,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4270,"i_wb_stall", false,-1);
    tracep->declBit(c+2808,"i_wb_ack", false,-1);
    tracep->declBit(c+4270,"i_wb_err", false,-1);
    tracep->declBus(c+2807,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+2879,"last_stb", false,-1);
    tracep->declBit(c+2880,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+2881,"cache_word", false,-1, 7,0);
    tracep->declBit(c+2882,"cache_valid", false,-1);
    tracep->declBus(c+2883,"inflight", false,-1, 1,0);
    tracep->declBit(c+2884,"cache_illegal", false,-1);
    tracep->declBit(c+4270,"r_valid", false,-1);
    tracep->declBus(c+4306,"r_insn", false,-1, 7,0);
    tracep->declBus(c+2807,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declBus(c+4257,"SW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+461,"i_wb_cyc", false,-1);
    tracep->declBit(c+462,"i_wb_stb", false,-1);
    tracep->declBit(c+463,"i_wb_we", false,-1);
    tracep->declBus(c+2885,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+465,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+466,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4270,"o_wb_stall", false,-1);
    tracep->declBit(c+467,"o_wb_ack", false,-1);
    tracep->declBus(c+468,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2886,"S_VALID", false,-1);
    tracep->declBit(c+150,"S_READY", false,-1);
    tracep->declBus(c+154,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+153,"S_LAST", false,-1);
    tracep->declBit(c+175,"o_dma_cyc", false,-1);
    tracep->declBit(c+176,"o_dma_stb", false,-1);
    tracep->declBit(c+4271,"o_dma_we", false,-1);
    tracep->declBus(c+177,"o_dma_addr", false,-1, 21,0);
    tracep->declArray(c+178,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"i_dma_stall", false,-1);
    tracep->declBit(c+197,"i_dma_ack", false,-1);
    tracep->declArray(c+199,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+198,"i_dma_err", false,-1);
    tracep->declBus(c+4269,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4346,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2887,"r_baseaddr", false,-1, 27,0);
    tracep->declBus(c+2888,"r_memlen", false,-1, 27,0);
    tracep->declBus(c+2889,"subaddr", false,-1, 5,0);
    tracep->declBus(c+2890,"current_addr", false,-1, 27,0);
    tracep->declBus(c+2891,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+2892,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+2893,"wb_last", false,-1);
    tracep->declBit(c+2894,"bus_err", false,-1);
    tracep->declBit(c+2895,"r_reset", false,-1);
    tracep->declBit(c+2896,"r_overflow", false,-1);
    tracep->declBit(c+2897,"skd_valid", false,-1);
    tracep->declBit(c+2898,"skd_ready", false,-1);
    tracep->declBit(c+2899,"skd_last", false,-1);
    tracep->declBus(c+2900,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4349,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+2886,"i_valid", false,-1);
    tracep->declBit(c+150,"o_ready", false,-1);
    tracep->declBus(c+2901,"i_data", false,-1, 8,0);
    tracep->declBit(c+2897,"o_valid", false,-1);
    tracep->declBit(c+2898,"i_ready", false,-1);
    tracep->declBus(c+2902,"o_data", false,-1, 8,0);
    tracep->declBus(c+2903,"w_data", false,-1, 8,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+2904,"r_valid", false,-1);
    tracep->declBus(c+2903,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+2897,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4322,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4308,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4327,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4324,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+358,"i_wcyc", false,-1);
    tracep->declBit(c+359,"i_wstb", false,-1);
    tracep->declBit(c+360,"i_wwe", false,-1);
    tracep->declBus(c+2905,"i_waddr", false,-1, 20,0);
    tracep->declArray(c+362,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+378,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+380,"o_wstall", false,-1);
    tracep->declBit(c+381,"o_wack", false,-1);
    tracep->declArray(c+383,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+382,"o_werr", false,-1);
    tracep->declBit(c+399,"o_scyc", false,-1);
    tracep->declBit(c+400,"o_sstb", false,-1);
    tracep->declBit(c+401,"o_swe", false,-1);
    tracep->declBus(c+402,"o_saddr", false,-1, 24,0);
    tracep->declBus(c+403,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+404,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+405,"i_sstall", false,-1);
    tracep->declBit(c+406,"i_sack", false,-1);
    tracep->declBus(c+408,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+407,"i_serr", false,-1);
    tracep->declBus(c+4259,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4347,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+399,"r_cyc", false,-1);
    tracep->declBit(c+2906,"r_stb", false,-1);
    tracep->declBit(c+401,"r_we", false,-1);
    tracep->declBit(c+381,"r_ack", false,-1);
    tracep->declBit(c+382,"r_err", false,-1);
    tracep->declBit(c+2907,"r_first", false,-1);
    tracep->declBus(c+402,"r_addr", false,-1, 24,0);
    tracep->declBit(c+2908,"s_null", false,-1);
    tracep->declBit(c+2909,"s_last", false,-1);
    tracep->declArray(c+2910,"s_data", false,-1, 511,0);
    tracep->declArray(c+383,"r_data", false,-1, 511,0);
    tracep->declArray(c+2926,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+2942,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+2944,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+2946,"r_shift", false,-1, 3,0);
    tracep->declBus(c+2947,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+2948,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+2949,"fifo_full", false,-1);
    tracep->declBit(c+2950,"fifo_empty", false,-1);
    tracep->declBit(c+2951,"fifo_ack", false,-1);
    tracep->declBus(c+2952,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4439,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+2953,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4347,"BW", false,-1, 31,0);
    tracep->declBus(c+4347,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+74,"i_reset", false,-1);
    tracep->declBit(c+2954,"i_wr", false,-1);
    tracep->declBus(c+2955,"i_data", false,-1, 4,0);
    tracep->declBit(c+2949,"o_full", false,-1);
    tracep->declBus(c+2952,"o_fill", false,-1, 5,0);
    tracep->declBit(c+406,"i_rd", false,-1);
    tracep->declBus(c+2956,"o_data", false,-1, 4,0);
    tracep->declBit(c+2950,"o_empty", false,-1);
    tracep->declBus(c+4308,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2957,"r_full", false,-1);
    tracep->declBit(c+2958,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2959+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+2991,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2992,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2993,"w_wr", false,-1);
    tracep->declBit(c+2994,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4258,"NM", false,-1, 31,0);
    tracep->declBus(c+4351,"NS", false,-1, 31,0);
    tracep->declBus(c+4324,"AW", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declArray(c+4440,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4450,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4346,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4269,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBus(c+399,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+400,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+401,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+402,"i_maddr", false,-1, 24,0);
    tracep->declBus(c+403,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+404,"i_msel", false,-1, 3,0);
    tracep->declBus(c+405,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+406,"o_mack", false,-1, 0,0);
    tracep->declBus(c+408,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+407,"o_merr", false,-1, 0,0);
    tracep->declBus(c+2995,"o_scyc", false,-1, 11,0);
    tracep->declBus(c+2996,"o_sstb", false,-1, 11,0);
    tracep->declBus(c+2997,"o_swe", false,-1, 11,0);
    tracep->declArray(c+2998,"o_saddr", false,-1, 299,0);
    tracep->declArray(c+3008,"o_sdata", false,-1, 383,0);
    tracep->declQuad(c+3020,"o_ssel", false,-1, 47,0);
    tracep->declBus(c+3022,"i_sstall", false,-1, 11,0);
    tracep->declBus(c+3023,"i_sack", false,-1, 11,0);
    tracep->declArray(c+3024,"i_sdata", false,-1, 383,0);
    tracep->declBus(c+4460,"i_serr", false,-1, 11,0);
    tracep->declBus(c+4269,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4258,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4259,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3036+i*1,"request", true,(i+0), 12,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3037+i*1,"grant", true,(i+0), 12,0);
    }
    tracep->declBus(c+3038,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3039,"sgrant", false,-1, 11,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3040+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3041,"mfull", false,-1, 0,0);
    tracep->declBus(c+3042,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3043,"mempty", false,-1, 0,0);
    tracep->declBus(c+4307,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4258,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4263,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4115+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+399,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3044,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3045,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3046+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3047+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3048+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4116,"m_stall", false,-1, 0,0);
    tracep->declBus(c+3049,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3050+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+3066,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4461,"s_err", false,-1, 15,0);
    tracep->declBus(c+3067,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3068,"iN", false,-1, 31,0);
    tracep->declBus(c+4234,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4117,"regrant", false,-1, 12,0);
    tracep->declBus(c+4235,"reindex", false,-1, 3,0);
    tracep->declBit(c+3069,"stay_on_channel", false,-1);
    tracep->declBit(c+3070,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4118,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4117,"r_regrant", false,-1, 12,0);
    tracep->declBus(c+4235,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3071,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+75,"skd_stb", false,-1);
    tracep->declBit(c+4119,"skd_stall", false,-1);
    tracep->declBit(c+3072,"skd_we", false,-1);
    tracep->declBus(c+3073,"skd_addr", false,-1, 24,0);
    tracep->declBus(c+3074,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3075,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3076,"decoded", false,-1, 12,0);
    tracep->declBit(c+3077,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4351,"NS", false,-1, 31,0);
    tracep->declBus(c+4324,"AW", false,-1, 31,0);
    tracep->declBus(c+4462,"DW", false,-1, 31,0);
    tracep->declArray(c+4440,"SLAVE_ADDR", false,-1, 299,0);
    tracep->declArray(c+4450,"SLAVE_MASK", false,-1, 299,0);
    tracep->declBus(c+4385,"ACCESS_ALLOWED", false,-1, 11,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+76,"i_valid", false,-1);
    tracep->declBit(c+4119,"o_stall", false,-1);
    tracep->declBus(c+3073,"i_addr", false,-1, 24,0);
    tracep->declQuad(c+3078,"i_data", false,-1, 36,0);
    tracep->declBit(c+3067,"o_valid", false,-1);
    tracep->declBit(c+4120,"i_stall", false,-1);
    tracep->declBus(c+3076,"o_decode", false,-1, 12,0);
    tracep->declBus(c+3080,"o_addr", false,-1, 24,0);
    tracep->declQuad(c+3081,"o_data", false,-1, 36,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+77,"request", false,-1, 12,0);
    tracep->declBus(c+3083,"prerequest", false,-1, 11,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+78,"r_request", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+79,"r_request_NS", false,-1);
    tracep->declBit(c+80,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4463,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+81,"i_reset", false,-1);
    tracep->declBit(c+400,"i_valid", false,-1);
    tracep->declBit(c+3077,"o_ready", false,-1);
    tracep->declQuad(c+3084,"i_data", false,-1, 61,0);
    tracep->declBit(c+75,"o_valid", false,-1);
    tracep->declBit(c+4121,"i_ready", false,-1);
    tracep->declQuad(c+3086,"o_data", false,-1, 61,0);
    tracep->declQuad(c+3088,"w_data", false,-1, 61,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+405,"r_valid", false,-1);
    tracep->declQuad(c+3088,"r_data", false,-1, 61,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+406,"r_mack", false,-1, 0,0);
    tracep->declBus(c+407,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+82,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+83,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[11] ");
    tracep->declBit(c+84,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+85,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+86,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+87,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+88,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+89,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+90,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+91,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+92,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+93,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4383,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4305,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4308,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+523,"i_scyc", false,-1);
    tracep->declBit(c+524,"i_sstb", false,-1);
    tracep->declBit(c+525,"i_swe", false,-1);
    tracep->declBus(c+3090,"i_saddr", false,-1, 25,0);
    tracep->declBus(c+527,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+528,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+529,"o_sstall", false,-1);
    tracep->declBit(c+530,"o_sack", false,-1);
    tracep->declBus(c+532,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+531,"o_serr", false,-1);
    tracep->declBit(c+278,"o_wcyc", false,-1);
    tracep->declBit(c+279,"o_wstb", false,-1);
    tracep->declBit(c+280,"o_wwe", false,-1);
    tracep->declBus(c+281,"o_waddr", false,-1, 21,0);
    tracep->declArray(c+282,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+298,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+300,"i_wstall", false,-1);
    tracep->declBit(c+301,"i_wack", false,-1);
    tracep->declArray(c+303,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+302,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4347,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+278,"r_cyc", false,-1);
    tracep->declBit(c+3091,"r_stb", false,-1);
    tracep->declBit(c+280,"r_we", false,-1);
    tracep->declBit(c+530,"r_ack", false,-1);
    tracep->declBit(c+531,"r_err", false,-1);
    tracep->declBus(c+281,"r_addr", false,-1, 21,0);
    tracep->declArray(c+282,"r_data", false,-1, 511,0);
    tracep->declArray(c+3092,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+298,"r_sel", false,-1, 63,0);
    tracep->declBus(c+3108,"r_shift", false,-1, 3,0);
    tracep->declBit(c+3109,"fifo_full", false,-1);
    tracep->declBit(c+3110,"ign_fifo_empty", false,-1);
    tracep->declBus(c+3111,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+3112,"w_shift", false,-1, 3,0);
    tracep->declBus(c+3113,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+3114,"w_data", false,-1, 511,0);
    tracep->declQuad(c+3130,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4259,"BW", false,-1, 31,0);
    tracep->declBus(c+4347,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+94,"i_reset", false,-1);
    tracep->declBit(c+3132,"i_wr", false,-1);
    tracep->declBus(c+3108,"i_data", false,-1, 3,0);
    tracep->declBit(c+3109,"o_full", false,-1);
    tracep->declBus(c+3111,"o_fill", false,-1, 5,0);
    tracep->declBit(c+301,"i_rd", false,-1);
    tracep->declBus(c+3113,"o_data", false,-1, 3,0);
    tracep->declBit(c+3110,"o_empty", false,-1);
    tracep->declBus(c+4308,"FLEN", false,-1, 31,0);
    tracep->declBit(c+3109,"r_full", false,-1);
    tracep->declBit(c+3110,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3133+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+3165,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+3166,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+3167,"w_wr", false,-1);
    tracep->declBit(c+3168,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4258,"NM", false,-1, 31,0);
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4322,"AW", false,-1, 31,0);
    tracep->declBus(c+4308,"DW", false,-1, 31,0);
    tracep->declQuad(c+4464,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4466,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4346,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4269,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBus(c+514,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+515,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+516,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+517,"i_maddr", false,-1, 26,0);
    tracep->declBus(c+518,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4302,"i_msel", false,-1, 3,0);
    tracep->declBus(c+519,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+520,"o_mack", false,-1, 0,0);
    tracep->declBus(c+522,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+521,"o_merr", false,-1, 0,0);
    tracep->declBus(c+3169,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+3170,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+3171,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+3172,"o_saddr", false,-1, 53,0);
    tracep->declQuad(c+3174,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+3176,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4236,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4237,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+3177,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+3179,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4269,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4258,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4268,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3180+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3181+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+3182,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3183,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3184+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3185,"mfull", false,-1, 0,0);
    tracep->declBus(c+3186,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3187,"mempty", false,-1, 0,0);
    tracep->declBus(c+4307,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4258,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4259,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4122+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+514,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3188,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3189,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3190+i*1,"m_addr", true,(i+0), 26,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3191+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3192+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4238,"m_stall", false,-1, 0,0);
    tracep->declBus(c+95,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3193+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4239,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3197,"s_err", false,-1, 3,0);
    tracep->declBus(c+3198,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3199,"iN", false,-1, 31,0);
    tracep->declBus(c+4240,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4123,"regrant", false,-1, 2,0);
    tracep->declBus(c+4241,"reindex", false,-1, 1,0);
    tracep->declBit(c+3200,"stay_on_channel", false,-1);
    tracep->declBit(c+3201,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4124,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4123,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4241,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3202,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+96,"skd_stb", false,-1);
    tracep->declBit(c+4242,"skd_stall", false,-1);
    tracep->declBit(c+3203,"skd_we", false,-1);
    tracep->declBus(c+3204,"skd_addr", false,-1, 26,0);
    tracep->declBus(c+3205,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3206,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3207,"decoded", false,-1, 2,0);
    tracep->declBit(c+3208,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4322,"AW", false,-1, 31,0);
    tracep->declBus(c+4462,"DW", false,-1, 31,0);
    tracep->declQuad(c+4464,"SLAVE_ADDR", false,-1, 53,0);
    tracep->declQuad(c+4466,"SLAVE_MASK", false,-1, 53,0);
    tracep->declBus(c+4313,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+97,"i_valid", false,-1);
    tracep->declBit(c+4242,"o_stall", false,-1);
    tracep->declBus(c+3204,"i_addr", false,-1, 26,0);
    tracep->declQuad(c+3209,"i_data", false,-1, 36,0);
    tracep->declBit(c+3198,"o_valid", false,-1);
    tracep->declBit(c+4243,"i_stall", false,-1);
    tracep->declBus(c+3207,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3211,"o_addr", false,-1, 26,0);
    tracep->declQuad(c+3212,"o_data", false,-1, 36,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+98,"request", false,-1, 2,0);
    tracep->declBus(c+3214,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+99,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+100,"r_request_NS", false,-1);
    tracep->declBit(c+101,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4314,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+102,"i_reset", false,-1);
    tracep->declBit(c+515,"i_valid", false,-1);
    tracep->declBit(c+3208,"o_ready", false,-1);
    tracep->declQuad(c+3215,"i_data", false,-1, 63,0);
    tracep->declBit(c+96,"o_valid", false,-1);
    tracep->declBit(c+4244,"i_ready", false,-1);
    tracep->declQuad(c+3217,"o_data", false,-1, 63,0);
    tracep->declQuad(c+3219,"w_data", false,-1, 63,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+519,"r_valid", false,-1);
    tracep->declQuad(c+3219,"r_data", false,-1, 63,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+520,"r_mack", false,-1, 0,0);
    tracep->declBus(c+521,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+103,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+104,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4259,"NM", false,-1, 31,0);
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4305,"DW", false,-1, 31,0);
    tracep->declQuad(c+4468,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4470,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4346,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4269,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4307,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4264,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBus(c+3221,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+3222,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+3223,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+3224,"i_maddr", false,-1, 87,0);
    tracep->declArray(c+3227,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+3291,"i_msel", false,-1, 255,0);
    tracep->declBus(c+3299,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+3300,"o_mack", false,-1, 3,0);
    tracep->declArray(c+3301,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+3365,"o_merr", false,-1, 3,0);
    tracep->declBus(c+3366,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+3367,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+3368,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+3369,"o_saddr", false,-1, 43,0);
    tracep->declArray(c+3371,"o_sdata", false,-1, 1023,0);
    tracep->declArray(c+3403,"o_ssel", false,-1, 127,0);
    tracep->declBus(c+3407,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+3408,"i_sack", false,-1, 1,0);
    tracep->declArray(c+3409,"i_sdata", false,-1, 1023,0);
    tracep->declBus(c+3441,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4269,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4268,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4268,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3442+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3446+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3450+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+3454,"mgrant", false,-1, 3,0);
    tracep->declBus(c+3455,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3456+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3460,"mfull", false,-1, 3,0);
    tracep->declBus(c+3461,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+3462,"mempty", false,-1, 3,0);
    tracep->declBus(c+4315,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4259,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4259,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4125+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3463+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+3221,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+3467,"m_stb", false,-1, 3,0);
    tracep->declBus(c+3468,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3469+i*1,"m_addr", true,(i+0), 21,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3473+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3537+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4129,"m_stall", false,-1, 3,0);
    tracep->declBus(c+3545,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3546+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+3610,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3611,"s_err", false,-1, 3,0);
    tracep->declBus(c+3612,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4264,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3613,"iN", false,-1, 31,0);
    tracep->declBus(c+4245,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4130,"regrant", false,-1, 2,0);
    tracep->declBus(c+4246,"reindex", false,-1, 1,0);
    tracep->declBit(c+3614,"stay_on_channel", false,-1);
    tracep->declBit(c+3615,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4131,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4130,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4246,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4132,"regrant", false,-1, 2,0);
    tracep->declBus(c+4247,"reindex", false,-1, 1,0);
    tracep->declBit(c+3616,"stay_on_channel", false,-1);
    tracep->declBit(c+3617,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4133,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4132,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4247,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4134,"regrant", false,-1, 2,0);
    tracep->declBus(c+4248,"reindex", false,-1, 1,0);
    tracep->declBit(c+3618,"stay_on_channel", false,-1);
    tracep->declBit(c+3619,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4135,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4134,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4248,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4136,"regrant", false,-1, 2,0);
    tracep->declBus(c+4249,"reindex", false,-1, 1,0);
    tracep->declBit(c+3620,"stay_on_channel", false,-1);
    tracep->declBit(c+3621,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4137,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4136,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4249,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3622,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+3623,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+3624,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+3625,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+105,"skd_stb", false,-1);
    tracep->declBit(c+4138,"skd_stall", false,-1);
    tracep->declBit(c+3626,"skd_we", false,-1);
    tracep->declBus(c+3627,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3628,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3644,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3646,"decoded", false,-1, 2,0);
    tracep->declBit(c+3647,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4472,"DW", false,-1, 31,0);
    tracep->declQuad(c+4468,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4470,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4313,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+106,"i_valid", false,-1);
    tracep->declBit(c+4138,"o_stall", false,-1);
    tracep->declBus(c+3627,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3648,"i_data", false,-1, 576,0);
    tracep->declBit(c+3667,"o_valid", false,-1);
    tracep->declBit(c+4139,"i_stall", false,-1);
    tracep->declBus(c+3646,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3668,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3669,"o_data", false,-1, 576,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+107,"request", false,-1, 2,0);
    tracep->declBus(c+3688,"prerequest", false,-1, 1,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+108,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+109,"r_request_NS", false,-1);
    tracep->declBit(c+110,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4473,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+111,"i_reset", false,-1);
    tracep->declBit(c+176,"i_valid", false,-1);
    tracep->declBit(c+3647,"o_ready", false,-1);
    tracep->declArray(c+3689,"i_data", false,-1, 598,0);
    tracep->declBit(c+105,"o_valid", false,-1);
    tracep->declBit(c+4140,"i_ready", false,-1);
    tracep->declArray(c+3708,"o_data", false,-1, 598,0);
    tracep->declArray(c+3727,"w_data", false,-1, 598,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3746,"r_valid", false,-1);
    tracep->declArray(c+3727,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+112,"skd_stb", false,-1);
    tracep->declBit(c+4141,"skd_stall", false,-1);
    tracep->declBit(c+3747,"skd_we", false,-1);
    tracep->declBus(c+3748,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3749,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3765,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3767,"decoded", false,-1, 2,0);
    tracep->declBit(c+3768,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4472,"DW", false,-1, 31,0);
    tracep->declQuad(c+4468,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4470,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4313,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+113,"i_valid", false,-1);
    tracep->declBit(c+4141,"o_stall", false,-1);
    tracep->declBus(c+3748,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3769,"i_data", false,-1, 576,0);
    tracep->declBit(c+3788,"o_valid", false,-1);
    tracep->declBit(c+4142,"i_stall", false,-1);
    tracep->declBus(c+3767,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3789,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3790,"o_data", false,-1, 576,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+114,"request", false,-1, 2,0);
    tracep->declBus(c+3809,"prerequest", false,-1, 1,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+115,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+116,"r_request_NS", false,-1);
    tracep->declBit(c+117,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4473,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+118,"i_reset", false,-1);
    tracep->declBit(c+216,"i_valid", false,-1);
    tracep->declBit(c+3768,"o_ready", false,-1);
    tracep->declArray(c+3810,"i_data", false,-1, 598,0);
    tracep->declBit(c+112,"o_valid", false,-1);
    tracep->declBit(c+4143,"i_ready", false,-1);
    tracep->declArray(c+3829,"o_data", false,-1, 598,0);
    tracep->declArray(c+3848,"w_data", false,-1, 598,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3867,"r_valid", false,-1);
    tracep->declArray(c+3848,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+119,"skd_stb", false,-1);
    tracep->declBit(c+4144,"skd_stall", false,-1);
    tracep->declBit(c+3868,"skd_we", false,-1);
    tracep->declBus(c+3869,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3870,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3886,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3888,"decoded", false,-1, 2,0);
    tracep->declBit(c+3889,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4472,"DW", false,-1, 31,0);
    tracep->declQuad(c+4468,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4470,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4313,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+120,"i_valid", false,-1);
    tracep->declBit(c+4144,"o_stall", false,-1);
    tracep->declBus(c+3869,"i_addr", false,-1, 21,0);
    tracep->declArray(c+3890,"i_data", false,-1, 576,0);
    tracep->declBit(c+3909,"o_valid", false,-1);
    tracep->declBit(c+4145,"i_stall", false,-1);
    tracep->declBus(c+3888,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3910,"o_addr", false,-1, 21,0);
    tracep->declArray(c+3911,"o_data", false,-1, 576,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+121,"request", false,-1, 2,0);
    tracep->declBus(c+3930,"prerequest", false,-1, 1,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+122,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+123,"r_request_NS", false,-1);
    tracep->declBit(c+124,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4473,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+125,"i_reset", false,-1);
    tracep->declBit(c+238,"i_valid", false,-1);
    tracep->declBit(c+3889,"o_ready", false,-1);
    tracep->declArray(c+3931,"i_data", false,-1, 598,0);
    tracep->declBit(c+119,"o_valid", false,-1);
    tracep->declBit(c+4146,"i_ready", false,-1);
    tracep->declArray(c+3950,"o_data", false,-1, 598,0);
    tracep->declArray(c+3969,"w_data", false,-1, 598,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3988,"r_valid", false,-1);
    tracep->declArray(c+3969,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+126,"skd_stb", false,-1);
    tracep->declBit(c+4147,"skd_stall", false,-1);
    tracep->declBit(c+3989,"skd_we", false,-1);
    tracep->declBus(c+3990,"skd_addr", false,-1, 21,0);
    tracep->declArray(c+3991,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4007,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4009,"decoded", false,-1, 2,0);
    tracep->declBit(c+4010,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4268,"NS", false,-1, 31,0);
    tracep->declBus(c+4262,"AW", false,-1, 31,0);
    tracep->declBus(c+4472,"DW", false,-1, 31,0);
    tracep->declQuad(c+4468,"SLAVE_ADDR", false,-1, 43,0);
    tracep->declQuad(c+4470,"SLAVE_MASK", false,-1, 43,0);
    tracep->declBus(c+4313,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4264,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+4151,"i_reset", false,-1);
    tracep->declBit(c+127,"i_valid", false,-1);
    tracep->declBit(c+4147,"o_stall", false,-1);
    tracep->declBus(c+3990,"i_addr", false,-1, 21,0);
    tracep->declArray(c+4011,"i_data", false,-1, 576,0);
    tracep->declBit(c+4030,"o_valid", false,-1);
    tracep->declBit(c+4148,"i_stall", false,-1);
    tracep->declBus(c+4009,"o_decode", false,-1, 2,0);
    tracep->declBus(c+4031,"o_addr", false,-1, 21,0);
    tracep->declArray(c+4032,"o_data", false,-1, 576,0);
    tracep->declBus(c+4264,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+128,"request", false,-1, 2,0);
    tracep->declBus(c+4051,"prerequest", false,-1, 1,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+129,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+130,"r_request_NS", false,-1);
    tracep->declBit(c+131,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4307,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4307,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4473,"DW", false,-1, 31,0);
    tracep->declBus(c+4264,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4150,"i_clk", false,-1);
    tracep->declBit(c+132,"i_reset", false,-1);
    tracep->declBit(c+279,"i_valid", false,-1);
    tracep->declBit(c+4010,"o_ready", false,-1);
    tracep->declArray(c+4052,"i_data", false,-1, 598,0);
    tracep->declBit(c+126,"o_valid", false,-1);
    tracep->declBit(c+4149,"i_ready", false,-1);
    tracep->declArray(c+4071,"o_data", false,-1, 598,0);
    tracep->declArray(c+4090,"w_data", false,-1, 598,0);
    tracep->declBit(c+4270,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+300,"r_valid", false,-1);
    tracep->declArray(c+4090,"r_data", false,-1, 598,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+3300,"r_mack", false,-1, 3,0);
    tracep->declBus(c+3365,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4109,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4110,"regrant", false,-1, 3,0);
    tracep->declBus(c+4111,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4112,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4113,"regrant", false,-1, 3,0);
    tracep->declBus(c+4114,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+133,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+134,"drop_sgrant", false,-1);
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
    bufp->fullIData(oldp+35,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                               [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+36,((((IData)(vlSelf->main__DOT__i2ci__DOT__r_aborted) 
                               << 0x1fU) | vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4)),32);
    bufp->fullIData(oldp+37,((((IData)(vlSelf->main__DOT__i2ci__DOT__half_insn) 
                               << 0x1cU) | (((IData)(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual) 
                                             << 0x18U) 
                                            | vlSelf->main__DOT__i2ci__DOT____VdfgTmp_h373818eb__0))),32);
    bufp->fullBit(oldp+38,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+39,(vlSelf->main__DOT__i2ci__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullIData(oldp+40,(vlSelf->main__DOT____Vcellinp__i2cscopei____pinNumber4),31);
    bufp->fullIData(oldp+41,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
    bufp->fullBit(oldp+42,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_cyc));
    bufp->fullBit(oldp+43,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_stb));
    bufp->fullBit(oldp+44,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_we));
    bufp->fullCData(oldp+45,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_addr),7);
    bufp->fullIData(oldp+46,(vlSelf->main__DOT____Vcellinp__swic__i_dbg_data),32);
    bufp->fullBit(oldp+47,(vlSelf->main__DOT__swic__DOT__cpu_op_stall));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_op_stall) 
                            & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                               >> 1U))));
    bufp->fullBit(oldp+49,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ready));
    bufp->fullBit(oldp+50,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ce));
    bufp->fullBit(oldp+51,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_advance));
    bufp->fullBit(oldp+52,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall));
    bufp->fullBit(oldp+53,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_stalled));
    bufp->fullBit(oldp+54,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ce));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA) 
                            & (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_h39e03a19__0) 
                                & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_he857573c__0) 
                                   & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                      >> 6U))) | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                                   >> 6U) 
                                                  & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd))))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB) 
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
    bufp->fullBit(oldp+57,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_stall));
    bufp->fullIData(oldp+58,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcB_v),32);
    bufp->fullIData(oldp+59,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_pcA_v),32);
    bufp->fullBit(oldp+60,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_ce));
    bufp->fullBit(oldp+61,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_stall) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy)) 
                             & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu)) 
                            | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0))));
    bufp->fullBit(oldp+62,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_ce));
    bufp->fullBit(oldp+63,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_stalled));
    bufp->fullBit(oldp+64,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_ce));
    bufp->fullBit(oldp+65,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__adf_ce_unconditional));
    bufp->fullBit(oldp+66,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcset));
    bufp->fullCData(oldp+67,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pfpcsrc),3);
    bufp->fullCData(oldp+68,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__avsrc),3);
    bufp->fullCData(oldp+69,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bvsrc),3);
    bufp->fullBit(oldp+70,(((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_reset)) 
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
    bufp->fullBit(oldp+71,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__this_is_a_multiply_op));
    bufp->fullBit(oldp+72,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_axisi2c__S_AXI_ARESETN));
    bufp->fullBit(oldp+73,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT____Vcellinp__u_fetch__i_reset));
    bufp->fullBit(oldp+74,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
    bufp->fullBit(oldp+75,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+76,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullSData(oldp+77,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 0xcU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),13);
    bufp->fullSData(oldp+78,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),12);
    bufp->fullBit(oldp+79,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+80,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+81,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+82,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+83,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+84,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__11__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+85,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+86,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+87,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+88,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+89,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+92,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+93,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+94,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
    bufp->fullCData(oldp+95,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
    bufp->fullBit(oldp+96,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+97,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+98,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+99,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+100,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+102,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+103,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+106,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+107,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+108,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+113,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+114,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+115,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+116,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+117,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+118,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+120,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+121,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+122,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+123,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+127,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+128,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                                          & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+129,(((- (IData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid))) 
                               & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+133,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+134,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+135,(vlSelf->main__DOT__scope1_ddr3_int));
    bufp->fullBit(oldp+136,(vlSelf->main__DOT__scope2_ddr3_int));
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+141,(vlSelf->main__DOT__i2cscope_int));
    bufp->fullBit(oldp+142,(vlSelf->main__DOT__scope3_ddr3_int));
    bufp->fullBit(oldp+143,(vlSelf->main__DOT__gpio_int));
    bufp->fullBit(oldp+144,(vlSelf->main__DOT__spio_int));
    bufp->fullBit(oldp+145,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                   [0U] >> 1U))));
    bufp->fullBit(oldp+146,(vlSelf->main__DOT__r_sirefclk_en));
    bufp->fullIData(oldp+147,(vlSelf->main__DOT__r_sirefclk_data),30);
    bufp->fullBit(oldp+148,(vlSelf->main__DOT__w_sirefclk_unused_stb));
    bufp->fullBit(oldp+149,(vlSelf->main__DOT__r_sirefclk_ack));
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullBit(oldp+151,(vlSelf->main__DOT__i2c_valid));
    bufp->fullBit(oldp+152,(vlSelf->main__DOT__i2c_ready));
    bufp->fullBit(oldp+153,(vlSelf->main__DOT__i2c_last));
    bufp->fullCData(oldp+154,(vlSelf->main__DOT__i2c_data),8);
    bufp->fullCData(oldp+155,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
    bufp->fullBit(oldp+156,(vlSelf->main__DOT__w_console_rx_stb));
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+158,(vlSelf->main__DOT__w_console_busy));
    bufp->fullCData(oldp+159,(vlSelf->main__DOT__w_console_rx_data),7);
    bufp->fullCData(oldp+160,(vlSelf->main__DOT__w_console_tx_data),7);
    bufp->fullIData(oldp+161,(vlSelf->main__DOT__uart_debug),32);
    bufp->fullBit(oldp+162,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
    bufp->fullBit(oldp+163,(vlSelf->main__DOT__raw_cpu_dbg_ack));
    bufp->fullSData(oldp+164,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+165,(vlSelf->main__DOT__zip_cpu_int));
    bufp->fullCData(oldp+166,(vlSelf->main__DOT__wbu_rx_data),8);
    bufp->fullCData(oldp+167,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
    bufp->fullBit(oldp+168,(vlSelf->main__DOT__wbu_rx_stb));
    bufp->fullBit(oldp+169,(vlSelf->main__DOT__genbus__DOT__ps_full));
    bufp->fullBit(oldp+170,(vlSelf->main__DOT__txv__DOT__r_busy));
    bufp->fullBit(oldp+171,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
    bufp->fullCData(oldp+172,(vlSelf->main__DOT__w_led),8);
    bufp->fullSData(oldp+173,((((IData)(vlSelf->main__DOT__spio_int) 
                                << 8U) | ((0x80U & 
                                           ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                            << 2U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                << 1U))))),15);
    bufp->fullSData(oldp+174,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+175,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    bufp->fullBit(oldp+176,(vlSelf->main__DOT__wbwide_i2cdma_stb));
    bufp->fullIData(oldp+177,(vlSelf->main__DOT__wbwide_i2cdma_addr),22);
    bufp->fullWData(oldp+178,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
    bufp->fullQData(oldp+194,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
    bufp->fullBit(oldp+196,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
    bufp->fullBit(oldp+197,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
    bufp->fullBit(oldp+198,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
    bufp->fullWData(oldp+199,(__Vtemp_h053daff0__0),512);
    bufp->fullBit(oldp+215,(vlSelf->main__DOT__wbwide_i2cm_cyc));
    bufp->fullBit(oldp+216,(vlSelf->main__DOT__wbwide_i2cm_stb));
    bufp->fullIData(oldp+217,(vlSelf->main__DOT__wbwide_i2cm_addr),22);
    bufp->fullBit(oldp+218,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+219,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 1U))));
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+221,(__Vtemp_h3711b190__0),512);
    bufp->fullBit(oldp+237,(vlSelf->main__DOT__wbwide_zip_cyc));
    bufp->fullBit(oldp+238,(vlSelf->main__DOT__wbwide_zip_stb));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                    : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
    bufp->fullIData(oldp+240,(vlSelf->main__DOT__wbwide_zip_addr),22);
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
    bufp->fullWData(oldp+241,(__Vtemp_h58eb921b__0),512);
    bufp->fullQData(oldp+257,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)
                                : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
    bufp->fullBit(oldp+259,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+260,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 2U))));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+262,(__Vtemp_hc1d82fb0__0),512);
    bufp->fullBit(oldp+278,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+279,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
    bufp->fullBit(oldp+280,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
    bufp->fullIData(oldp+281,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),22);
    bufp->fullWData(oldp+282,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
    bufp->fullQData(oldp+298,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
    bufp->fullBit(oldp+300,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 3U))));
    bufp->fullBit(oldp+302,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+303,(__Vtemp_hc1851150__0),512);
    bufp->fullBit(oldp+319,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
    bufp->fullBit(oldp+320,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
    bufp->fullBit(oldp+321,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    bufp->fullIData(oldp+322,((0x3fffffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),22);
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
    bufp->fullWData(oldp+323,(__Vtemp_h07963193__0),512);
    bufp->fullQData(oldp+339,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+341,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+342,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+358,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+359,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                   >> 1U))));
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
    bufp->fullBit(oldp+382,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullWData(oldp+383,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+399,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+400,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+401,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullIData(oldp+402,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),25);
    bufp->fullIData(oldp+403,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+404,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+405,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+406,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+407,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+408,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullBit(oldp+409,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 8U))));
    bufp->fullBit(oldp+410,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 8U) & (0U 
                                                == 
                                                (0x700U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+411,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 8U))));
    bufp->fullIData(oldp+412,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+413,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x20U)))),4);
    bufp->fullBit(oldp+414,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 8U) & (0x100U 
                                                == 
                                                (0x700U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+415,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullIData(oldp+416,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+417,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+418,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+419,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+420,((IData)((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                      >> 8U) & (0x400U 
                                                == 
                                                (0x700U 
                                                 & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U]))))));
    bufp->fullBit(oldp+421,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+422,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+423,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullIData(oldp+424,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),25);
    bufp->fullIData(oldp+425,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+426,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+427,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+428,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+429,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+430,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+431,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+432,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                              << 7U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                                >> 0x19U)))),25);
    bufp->fullIData(oldp+433,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+434,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 4U)))),4);
    bufp->fullBit(oldp+435,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+436,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+437,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 2U))));
    bufp->fullBit(oldp+438,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 2U))));
    bufp->fullBit(oldp+439,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 2U))));
    bufp->fullIData(oldp+440,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                              << 0xeU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                                >> 0x12U)))),25);
    bufp->fullIData(oldp+441,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+442,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 8U)))),4);
    bufp->fullBit(oldp+443,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+444,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+445,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 3U))));
    bufp->fullBit(oldp+446,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 3U))));
    bufp->fullBit(oldp+447,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 3U))));
    bufp->fullIData(oldp+448,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                              << 0x15U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                                >> 0xbU)))),25);
    bufp->fullIData(oldp+449,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+450,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0xcU)))),4);
    bufp->fullBit(oldp+451,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+452,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+453,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 4U))));
    bufp->fullBit(oldp+454,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 4U))));
    bufp->fullBit(oldp+455,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 4U))));
    bufp->fullIData(oldp+456,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                             >> 4U))),25);
    bufp->fullIData(oldp+457,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+458,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x10U)))),4);
    bufp->fullBit(oldp+459,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+460,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+461,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 5U))));
    bufp->fullBit(oldp+462,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 5U))));
    bufp->fullBit(oldp+463,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 5U))));
    bufp->fullIData(oldp+464,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                              << 3U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                                >> 0x1dU)))),25);
    bufp->fullIData(oldp+465,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+466,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x14U)))),4);
    bufp->fullBit(oldp+467,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+468,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+469,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 6U))));
    bufp->fullBit(oldp+470,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 6U))));
    bufp->fullBit(oldp+471,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 6U))));
    bufp->fullIData(oldp+472,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                              << 0xaU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                                >> 0x16U)))),25);
    bufp->fullIData(oldp+473,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+474,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x18U)))),4);
    bufp->fullBit(oldp+475,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+476,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 7U))));
    bufp->fullBit(oldp+478,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 7U))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 7U))));
    bufp->fullIData(oldp+480,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                              << 0x11U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                                >> 0xfU)))),25);
    bufp->fullIData(oldp+481,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+482,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x1cU)))),4);
    bufp->fullBit(oldp+483,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+484,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+485,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 8U))));
    bufp->fullIData(oldp+486,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                              << 0x18U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[6U] 
                                                >> 8U)))),25);
    bufp->fullBit(oldp+487,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+488,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+489,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 9U))));
    bufp->fullBit(oldp+490,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 9U))));
    bufp->fullBit(oldp+491,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 9U))));
    bufp->fullIData(oldp+492,((0x1ffffffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                             >> 1U))),25);
    bufp->fullIData(oldp+493,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+494,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x24U)))),4);
    bufp->fullBit(oldp+495,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+496,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+498,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 0xaU))));
    bufp->fullIData(oldp+499,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                              << 6U) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                >> 0x1aU)))),25);
    bufp->fullIData(oldp+500,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+501,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x28U)))),4);
    bufp->fullBit(oldp+502,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+503,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+504,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullBit(oldp+505,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+506,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+507,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 0xbU))));
    bufp->fullIData(oldp+508,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                              << 0xdU) 
                                             | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                >> 0x13U)))),25);
    bufp->fullIData(oldp+509,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]),32);
    bufp->fullCData(oldp+510,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x2cU)))),4);
    bufp->fullBit(oldp+511,(vlSelf->main__DOT__wb32_ddr3_controller_stall));
    bufp->fullBit(oldp+512,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                             [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->fullIData(oldp+513,((IData)(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data)),32);
    bufp->fullBit(oldp+514,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+515,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+516,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+517,((0x7ffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),27);
    bufp->fullIData(oldp+518,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+519,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+520,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+521,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+522,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+523,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+524,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+525,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+526,((0x7ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),27);
    bufp->fullIData(oldp+527,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+528,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+529,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+530,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+531,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+532,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+533,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+534,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+535,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+536,((0x7ffffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                     >> 0x1bU)))),27);
    bufp->fullIData(oldp+537,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+538,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+539,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullIData(oldp+540,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullSData(oldp+541,((0x3fffU & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr))),14);
    bufp->fullBit(oldp+542,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+543,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+544,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+560,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+561,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+563,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+564,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+565,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+566,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+567,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+568,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+569,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+570,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+571,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+572,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+573,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+574,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+575,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+576,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullCData(oldp+577,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[4U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+578,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+579,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+580,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+581,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+582,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+583,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+584,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+585,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+586,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+587,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+588,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+589,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+590,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+591,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+592,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+593,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+594,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+595,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+596,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+597,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+598,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+599,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+600,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+601,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+602,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+603,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+604,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+605,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+606,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+607,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+608,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+609,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+610,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+611,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+612,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+613,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+614,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+615,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+616,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+617,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+618,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+619,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+620,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+621,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullIData(oldp+622,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                             << 0xdU) 
                                            | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                               >> 0x13U)))),24);
    bufp->fullQData(oldp+623,(((0xffffffffULL & (QData)((IData)(
                                                                vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xbU]))) 
                               | ((QData)((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU])) 
                                  >> 0x20U))),64);
    bufp->fullCData(oldp+625,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x2cU)))),8);
    bufp->fullQData(oldp+626,(vlSelf->main__DOT____Vcellout__ddr3_controller_inst__o_wb_data),64);
    bufp->fullCData(oldp+628,((0x7fU & ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                         << 6U) | (
                                                   vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[7U] 
                                                   >> 0x1aU)))),7);
    bufp->fullIData(oldp+629,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+630,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+631,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullSData(oldp+632,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),16);
    bufp->fullBit(oldp+633,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+634,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+635,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+636,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                             & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+637,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullBit(oldp+638,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+639,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+640,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullCData(oldp+641,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+642,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+643,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+644,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+645,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+646,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+647,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+648,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+649,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullSData(oldp+650,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+651,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+652,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+653,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+654,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+655,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+656,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+657,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+659,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+660,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullQData(oldp+661,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),64);
    bufp->fullCData(oldp+663,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),8);
    bufp->fullSData(oldp+664,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullIData(oldp+669,((0xffffffU & ((IData)(5U) 
                                            + ((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[9U] 
                                                << 0xdU) 
                                               | (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[8U] 
                                                  >> 0x13U))))),24);
    bufp->fullBit(oldp+670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullCData(oldp+673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),8);
    bufp->fullCData(oldp+674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),8);
    bufp->fullCData(oldp+675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),8);
    bufp->fullCData(oldp+676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),8);
    bufp->fullQData(oldp+677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),64);
    bufp->fullQData(oldp+679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),64);
    bufp->fullQData(oldp+681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),64);
    bufp->fullQData(oldp+683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),64);
    bufp->fullQData(oldp+685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullCData(oldp+687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullSData(oldp+688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+709,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullCData(oldp+747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullBit(oldp+764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullCData(oldp+767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullBit(oldp+771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
    bufp->fullBit(oldp+772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+775,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+777,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+778,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+779,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+780,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+781,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+782,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0]),6);
    bufp->fullCData(oldp+783,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullBit(oldp+784,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat));
    bufp->fullCData(oldp+785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullBit(oldp+789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane));
    bufp->fullCData(oldp+790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),3);
    bufp->fullSData(oldp+791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+796,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+797,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullQData(oldp+808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),64);
    bufp->fullQData(oldp+810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),64);
    bufp->fullCData(oldp+812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+829,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+830,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullQData(oldp+832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),64);
    bufp->fullBit(oldp+834,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+835,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullQData(oldp+838,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),64);
    bufp->fullWData(oldp+840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat),6);
    bufp->fullBit(oldp+851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback));
    bufp->fullCData(oldp+852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check),6);
    bufp->fullQData(oldp+853,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data),64);
    bufp->fullBit(oldp+855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated));
    bufp->fullBit(oldp+856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+865,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullBit(oldp+866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld));
    bufp->fullBit(oldp+867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld));
    bufp->fullBit(oldp+868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld));
    bufp->fullBit(oldp+869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld));
    bufp->fullBit(oldp+870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail));
    bufp->fullBit(oldp+871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane));
    bufp->fullBit(oldp+872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst));
    bufp->fullIData(oldp+873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullBit(oldp+874,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                             [0U])));
    bufp->fullBit(oldp+875,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+876,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+877,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+878,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+879,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                             | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                  | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                 | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+880,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+882,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+883,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+884,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+885,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+888,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+890,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+891,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+893,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+894,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+895,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+896,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+897,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+898,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+899,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+900,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+901,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+902,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+903,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+904,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+905,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+906,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+907,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+908,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+909,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+910,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+911,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+912,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+913,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+914,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+915,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+916,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+917,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+918,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+919,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+920,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+921,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+922,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+923,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+924,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+925,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                             | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+926,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+928,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                             | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+930,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+931,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+933,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+934,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+935,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+936,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+937,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+938,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+939,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                  >> 0x21U))))));
    bufp->fullCData(oldp+940,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+941,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+942,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+943,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+944,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+946,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                         >> 0x1fU)) 
                                << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+947,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+948,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+949,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+950,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+951,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+952,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+953,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+954,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+955,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+956,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+957,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+958,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+959,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+960,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+961,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+962,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+963,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+964,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+966,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+968,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+970,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+971,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+972,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+973,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+974,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+976,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+977,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+978,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+979,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+980,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+982,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+983,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+984,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+985,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+986,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+987,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+988,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+989,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+990,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+991,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+992,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+993,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+994,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+995,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+996,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+997,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+998,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+999,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                   >> 9U))));
    bufp->fullBit(oldp+1000,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+1001,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+1002,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+1003,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                              & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                 >> 0x15U))));
    bufp->fullBit(oldp+1004,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+1005,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+1006,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+1007,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+1008,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+1009,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                 | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+1010,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+1011,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+1012,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+1013,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+1014,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+1015,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+1016,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+1017,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullCData(oldp+1018,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1019,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+1020,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+1021,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),28);
    bufp->fullBit(oldp+1022,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+1023,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+1024,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+1025,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),28);
    bufp->fullBit(oldp+1026,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+1027,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+1028,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+1029,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+1030,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+1031,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+1032,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+1033,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+1034,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+1035,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+1036,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+1037,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+1038,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+1039,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+1040,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+1041,(vlSelf->main__DOT__i2ci__DOT__abort_address),28);
    bufp->fullIData(oldp+1042,(vlSelf->main__DOT__i2ci__DOT__jump_target),28);
    bufp->fullBit(oldp+1043,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+1044,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+1045,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+1046,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+1047,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+1048,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+1049,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+1050,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+1051,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+1052,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+1053,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1054,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+1055,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+1056,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+1057,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+1058,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+1059,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+1060,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+1061,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+1062,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+1063,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+1064,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+1065,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+1066,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+1067,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+1068,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+1069,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+1070,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+1071,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+1072,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+1073,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+1074,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+1075,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+1076,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+1077,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+1078,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+1079,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+1080,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+1081,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+1082,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+1098,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+1099,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+1102,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+1118,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+1134,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+1135,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+1136,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+1137,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+1138,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+1139,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+1141,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+1142,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+1143,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1144,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1145,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+1146,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+1147,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1148,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1149,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+1150,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+1151,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+1152,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+1153,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1154,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1155,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+1156,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+1157,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+1158,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1159,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+1160,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1161,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+1162,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+1163,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+1164,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+1165,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+1166,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+1167,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1168,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+1169,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1170,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+1171,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+1172,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+1173,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+1174,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+1175,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+1176,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+1177,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+1178,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+1179,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+1180,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1181,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1182,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1183,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1184,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1185,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1186,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1187,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1188,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1189,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1190,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1191,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1192,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1193,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1194,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1195,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1196,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1197,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1198,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1199,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1200,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1201,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1202,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1203,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1204,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1205,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1206,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1207,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1208,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1209,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1210,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1211,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1212,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1213,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1214,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1215,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1216,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1217,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1218,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1219,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1220,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1221,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1222,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1223,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1224,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1225,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1226,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1227,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1228,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1229,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1230,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1231,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1232,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1233,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1234,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1235,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1236,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1237,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1238,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1239,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1240,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1241,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1242,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1243,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1244,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1245,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1246,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1247,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1248,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1249,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1250,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1251,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1252,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1253,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1254,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1255,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1256,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1257,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1258,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1259,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1260,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1261,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1262,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1263,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1264,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1265,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1266,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1267,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1268,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1269,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1270,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1271,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1272,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1273,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1274,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1275,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1276,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1277,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1278,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1279,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1280,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1281,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1282,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1283,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1284,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1285,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+1286,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+1287,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+1288,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+1289,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+1290,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+1291,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+1292,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullCData(oldp+1293,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+1294,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+1295,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullBit(oldp+1296,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullSData(oldp+1297,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+1298,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+1299,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+1300,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+1301,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+1302,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+1303,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1304,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1305,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1306,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1307,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1308,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1309,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1310,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+1311,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+1312,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+1313,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+1314,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+1315,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+1316,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+1317,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+1318,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+1319,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+1320,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+1321,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+1322,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+1323,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+1324,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+1325,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+1326,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+1327,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+1328,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+1329,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                 | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                        >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+1330,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+1331,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+1332,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+1333,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+1334,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+1335,(vlSelf->main__DOT__swic__DOT__cpu_addr),22);
    bufp->fullIData(oldp+1336,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+1337,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+1338,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+1339,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+1340,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+1341,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+1342,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+1343,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+1344,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                 >> 7U))));
    bufp->fullBit(oldp+1345,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+1346,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+1347,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+1348,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+1349,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+1350,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+1351,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+1352,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+1353,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+1354,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+1355,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+1356,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+1357,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+1358,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+1359,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+1360,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+1361,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+1362,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                              & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+1363,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+1364,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+1365,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+1366,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+1367,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+1368,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+1369,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+1370,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+1371,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+1372,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+1373,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+1374,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+1375,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+1376,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+1377,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+1378,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
    bufp->fullBit(oldp+1379,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+1380,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+1381,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+1382,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+1383,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),22);
    bufp->fullIData(oldp+1384,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+1385,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+1386,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                          >> 2U))))));
    bufp->fullBit(oldp+1387,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+1388,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+1389,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+1390,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+1391,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+1392,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+1393,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+1394,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+1395,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+1396,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+1397,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+1398,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+1399,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),22);
    bufp->fullWData(oldp+1400,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1416,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1418,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1419,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1420,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1421,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1422,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1423,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1424,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1425,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1426,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1427,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1428,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1429,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1430,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1431,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1432,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1433,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1434,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1435,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1451,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1453,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1469,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1470,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1471,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1472,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1473,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1474,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1475,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1476,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1477,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1478,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1479,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1480,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1481,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1482,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1483,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1484,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1485,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1486,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1487,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1488,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1489,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1490,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1491,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1492,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1493,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1494,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1495,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1496,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1497,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1498,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1499,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1500,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1501,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1502,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1503,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1504,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1505,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1506,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1507,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1508,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1509,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1510,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1511,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1512,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1513,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1514,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1515,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1516,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1517,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1518,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1519,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1520,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1521,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1522,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1523,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1524,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),28);
    bufp->fullIData(oldp+1525,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),28);
    bufp->fullIData(oldp+1526,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1527,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),28);
    bufp->fullIData(oldp+1528,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),28);
    bufp->fullIData(oldp+1529,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),28);
    bufp->fullSData(oldp+1530,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1531,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1532,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1533,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1534,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1535,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1536,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1537,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1538,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1539,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1540,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1541,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1542,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),28);
    bufp->fullIData(oldp+1543,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),28);
    bufp->fullSData(oldp+1544,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1545,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1546,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1547,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1548,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1549,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1550,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),22);
    bufp->fullQData(oldp+1551,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1553,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1554,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1555,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1556,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1572,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1573,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1574,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1575,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1576,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1592,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1593,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1594,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1595,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1596,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1612,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1613,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1614,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1615,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1616,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1617,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1618,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1619,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1635,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1636,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1637,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1638,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1639,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1640,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1641,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),22);
    bufp->fullQData(oldp+1642,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1644,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1645,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1646,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1647,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1648,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1649,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1650,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1651,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1652,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1653,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1654,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1655,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1656,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1657,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1658,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1659,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1660,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1661,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1662,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),28);
    bufp->fullIData(oldp+1663,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),28);
    bufp->fullCData(oldp+1664,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1665,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1666,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1668,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1670,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1672,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1674,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1675,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1676,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1677,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1678,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1679,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1680,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1696,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1697,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1698,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1730,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1731,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1732,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1733,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1734,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1735,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1736,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+1752,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+1753,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+1754,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),29);
    bufp->fullCData(oldp+1755,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+1756,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+1788,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+1804,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+1808,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+1812,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+1814,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+1815,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+1816,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+1817,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+1818,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+1835,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+1852,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+1869,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+1886,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+1903,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+1920,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+1937,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+1954,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+1971,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+1988,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+2005,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+2022,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+2039,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+2056,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+2073,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+2090,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+2107,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+2124,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+2125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+2126,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+2127,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+2128,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+2129,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+2130,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+2131,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+2132,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+2133,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2134,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+2135,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+2136,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+2137,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+2139,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+2140,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+2147,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),28);
    bufp->fullIData(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),28);
    bufp->fullBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),22);
    bufp->fullBit(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+2162,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+2163,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),28);
    bufp->fullIData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+2168,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+2169,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+2170,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+2171,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),22);
    bufp->fullBit(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),19);
    bufp->fullIData(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),19);
    bufp->fullIData(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),19);
    bufp->fullIData(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),19);
    bufp->fullIData(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),19);
    bufp->fullIData(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),19);
    bufp->fullIData(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),19);
    bufp->fullIData(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),19);
    bufp->fullBit(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+2206,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+2242,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),19);
    bufp->fullBit(oldp+2262,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+2263,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2264,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+2270,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+2272,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+2274,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),22);
    bufp->fullCData(oldp+2275,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+2276,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+2277,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                            >> 3U))),19);
    bufp->fullBit(oldp+2278,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+2279,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+2280,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+2281,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),19);
    bufp->fullSData(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+2283,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+2284,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+2300,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+2316,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+2317,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+2319,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+2320,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+2336,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+2352,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+2353,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+2354,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+2355,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+2356,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+2357,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+2358,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+2359,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+2360,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+2361,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+2362,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+2363,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+2364,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+2365,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+2366,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+2367,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+2368,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+2369,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+2370,((0xfffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),28);
    bufp->fullBit(oldp+2371,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+2372,(__Vtemp_he3c3974d__0),512);
    bufp->fullSData(oldp+2388,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),16);
    bufp->fullSData(oldp+2389,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),16);
    bufp->fullSData(oldp+2390,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),16);
    bufp->fullSData(oldp+2391,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),16);
    bufp->fullSData(oldp+2392,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),16);
    bufp->fullSData(oldp+2393,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),16);
    bufp->fullSData(oldp+2394,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),16);
    bufp->fullSData(oldp+2395,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),16);
    bufp->fullCData(oldp+2396,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+2399,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+2400,((((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U)) 
                               == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                               >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                  >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+2402,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),28);
    bufp->fullCData(oldp+2403,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+2404,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),19);
    bufp->fullIData(oldp+2405,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),19);
    bufp->fullIData(oldp+2406,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),19);
    bufp->fullIData(oldp+2407,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                            >> 9U))),19);
    bufp->fullIData(oldp+2408,((0x7ffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                            >> 9U))),19);
    bufp->fullBit(oldp+2409,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2410,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),19);
    bufp->fullWData(oldp+2411,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2427,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2443,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2444,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2445,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2447,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2448,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2450,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2451,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2452,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2453,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2454,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2470,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2471,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2472,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2473,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2474,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2475,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2476,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2477,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2478,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2479,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2480,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2481,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2482,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2483,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2484,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2485,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2486,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2487,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2488,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2489,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2490,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2491,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2492,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2493,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2494,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2495,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2496,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2497,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2498,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2499,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2500,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2501,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2502,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2503,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2504,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2505,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2506,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2507,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2508,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2509,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2510,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2511,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2512,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2513,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2514,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2515,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2516,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2517,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2518,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2519,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2520,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2521,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2522,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2523,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2524,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2525,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2526,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2527,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2528,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),28);
    bufp->fullBit(oldp+2529,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2530,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2531,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2532,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2533,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2534,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2535,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2536,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2537,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2538,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2539,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2540,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2541,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2542,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2543,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2544,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2545,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2546,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2547,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2548,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2549,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2550,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2551,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2552,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2553,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2554,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2555,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2556,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2557,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2558,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2559,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2560,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2561,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2562,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),28);
    bufp->fullBit(oldp+2563,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2564,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2565,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2566,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2567,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2568,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2569,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2570,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2571,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2572,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2573,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2574,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2575,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2576,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2577,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2578,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2579,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),28);
    bufp->fullIData(oldp+2580,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2581,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2582,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2583,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2584,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2585,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2586,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2587,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2588,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2589,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2590,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2591,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2592,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2593,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2594,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),28);
    bufp->fullCData(oldp+2595,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2596,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2597,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2598,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2599,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2600,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2601,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2602,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2603,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2604,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2605,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2606,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2607,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2608,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2609,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2610,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2611,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2612,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2613,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2614,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2615,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2616,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2617,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2618,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2619,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2620,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2621,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2622,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2623,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2624,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2625,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2626,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2627,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2628,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2629,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2630,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2631,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),28);
    bufp->fullIData(oldp+2632,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),28);
    bufp->fullBit(oldp+2633,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2634,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2635,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2636,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2637,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2638,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2639,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2640,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2641,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2642,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2643,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2644,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2645,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2646,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2647,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2649,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2651,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2652,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2653,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2654,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2655,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2656,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2657,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2658,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2659,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2660,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2661,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),28);
    bufp->fullIData(oldp+2662,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2663,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2664,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2665,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2666,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2667,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2668,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2669,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2670,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2671,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2672,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2673,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2674,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2675,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2677,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2679,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2681,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2683,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2684,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2685,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2686,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2688,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2690,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2691,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2693,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2695,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2696,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2697,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2698,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2699,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2701,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2703,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2705,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2707,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2708,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2709,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2710,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2711,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2712,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2713,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2714,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2715,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2716,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2717,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2718,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2719,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2720,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2721,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2722,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2723,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2724,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2725,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2726,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2727,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2728,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2729,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2730,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2731,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2732,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2733,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2734,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2735,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2736,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2737,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2738,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2739,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2740,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2743,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+2744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+2745,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+2746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+2747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+2748,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+2749,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+2750,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+2751,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+2752,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+2753,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+2754,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+2755,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+2756,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+2757,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+2758,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+2759,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+2760,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+2761,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+2762,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+2763,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+2764,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2765,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2766,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+2767,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+2768,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+2769,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+2770,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+2771,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2772,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2773,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+2774,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+2775,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+2776,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+2777,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+2778,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2779,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2780,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+2781,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+2782,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+2783,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+2784,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+2785,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+2786,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+2787,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+2788,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+2789,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+2790,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullCData(oldp+2791,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),3);
    bufp->fullSData(oldp+2792,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+2793,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+2794,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+2795,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+2796,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+2797,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+2798,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+2799,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+2800,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+2801,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+2802,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+2803,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+2804,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+2805,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+2806,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+2807,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+2808,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+2809,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+2810,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+2811,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+2812,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+2813,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+2814,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+2815,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+2816,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+2817,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+2818,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+2819,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[5U] 
                                      >> 0xfU))),2);
    bufp->fullBit(oldp+2820,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+2821,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+2822,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+2823,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+2824,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+2825,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+2826,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+2827,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2828,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+2829,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+2830,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+2831,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+2832,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+2833,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+2834,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+2835,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+2836,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+2837,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+2838,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+2839,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+2840,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+2841,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+2842,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+2843,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+2844,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+2845,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+2846,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+2847,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+2848,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+2849,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+2850,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+2851,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+2852,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+2853,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+2854,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+2855,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+2856,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+2857,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+2858,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+2859,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullBit(oldp+2860,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+2861,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+2862,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+2863,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+2864,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+2865,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+2866,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+2867,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+2868,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+2869,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+2870,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+2871,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+2872,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+2873,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+2874,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+2875,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+2876,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+2877,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+2878,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+2879,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+2880,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+2881,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+2882,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+2883,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+2884,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullCData(oldp+2885,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[3U] 
                                      >> 0x1dU))),2);
    bufp->fullBit(oldp+2886,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+2887,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),28);
    bufp->fullIData(oldp+2888,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),28);
    bufp->fullCData(oldp+2889,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+2890,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),28);
    bufp->fullIData(oldp+2891,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+2892,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullBit(oldp+2893,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+2894,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+2895,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+2896,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+2897,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+2898,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+2899,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+2900,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+2901,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+2902,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+2903,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+2904,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullIData(oldp+2905,((0x1fffffU & (IData)(
                                                    (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr 
                                                     >> 0x16U)))),21);
    bufp->fullBit(oldp+2906,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+2907,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+2908,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+2909,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+2910,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+2926,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+2942,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+2944,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+2946,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+2947,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullCData(oldp+2948,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullBit(oldp+2949,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+2950,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+2951,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+2952,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullIData(oldp+2953,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullBit(oldp+2954,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+2955,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+2956,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+2957,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2958,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2959,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+2960,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+2961,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+2962,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+2963,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+2964,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+2965,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+2966,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+2967,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+2968,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+2969,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+2970,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+2971,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+2972,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+2973,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+2974,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+2975,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+2976,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+2977,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+2978,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+2979,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+2980,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+2981,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+2982,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+2983,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+2984,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+2985,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+2986,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+2987,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+2988,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+2989,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+2990,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+2991,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2992,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2993,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2994,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+2995,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),12);
    bufp->fullSData(oldp+2996,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),12);
    bufp->fullSData(oldp+2997,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),12);
    bufp->fullWData(oldp+2998,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),300);
    bufp->fullWData(oldp+3008,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),384);
    bufp->fullQData(oldp+3020,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),48);
    bufp->fullSData(oldp+3022,((((IData)(vlSelf->main__DOT__wb32_ddr3_controller_stall) 
                                 << 0xbU) | ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                             << 0xaU))),12);
    bufp->fullSData(oldp+3023,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                  [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
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
    bufp->fullWData(oldp+3024,(__Vtemp_ha8cd40b0__0),384);
    bufp->fullSData(oldp+3036,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),13);
    bufp->fullSData(oldp+3037,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),13);
    bufp->fullBit(oldp+3038,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullSData(oldp+3039,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),12);
    bufp->fullCData(oldp+3040,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3041,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+3042,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3043,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullBit(oldp+3044,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3045,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+3046,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+3047,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3048,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullSData(oldp+3049,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullIData(oldp+3050,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3051,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3052,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3053,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3054,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3055,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3056,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3057,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3058,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3059,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3060,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3061,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3062,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3063,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3064,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3065,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullSData(oldp+3066,(((0xfffff800U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                & ((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                                    [0U] 
                                                    & (0x10U 
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
    bufp->fullBit(oldp+3067,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3068,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3069,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3070,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3071,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3072,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3dU)))));
    bufp->fullIData(oldp+3073,((0x1ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),25);
    bufp->fullIData(oldp+3074,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+3075,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullSData(oldp+3076,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),13);
    bufp->fullBit(oldp+3077,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3078,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3dU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullIData(oldp+3080,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullQData(oldp+3081,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+3083,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),12);
    bufp->fullQData(oldp+3084,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),62);
    bufp->fullQData(oldp+3086,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),62);
    bufp->fullQData(oldp+3088,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),62);
    bufp->fullIData(oldp+3090,((0x3ffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),26);
    bufp->fullBit(oldp+3091,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+3092,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+3108,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+3109,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+3110,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+3111,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+3112,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+3113,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+3114,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+3130,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+3132,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+3133,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+3134,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+3135,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+3136,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+3137,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+3138,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+3139,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+3140,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+3141,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+3142,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+3143,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+3144,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+3145,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+3146,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+3147,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+3148,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+3149,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+3150,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+3151,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+3152,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+3153,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+3154,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+3155,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+3156,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+3157,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+3158,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+3159,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+3160,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+3161,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+3162,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+3163,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+3164,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+3165,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+3166,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+3167,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+3168,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+3169,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+3170,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+3171,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+3172,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),54);
    bufp->fullQData(oldp+3174,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+3176,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+3177,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+3179,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+3180,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+3181,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+3182,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+3183,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+3184,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3185,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+3186,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3187,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+3188,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3189,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+3190,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),27);
    bufp->fullIData(oldp+3191,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3192,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+3193,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3194,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3195,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3196,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+3197,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+3198,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3199,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3200,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3201,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3202,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3203,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x3fU)))));
    bufp->fullIData(oldp+3204,((0x7ffffffU & (IData)(
                                                     (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                      >> 0x24U)))),27);
    bufp->fullIData(oldp+3205,((IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+3206,((0xfU & (IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullCData(oldp+3207,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3208,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3209,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x3fU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullIData(oldp+3211,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),27);
    bufp->fullQData(oldp+3212,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+3214,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullQData(oldp+3215,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),64);
    bufp->fullQData(oldp+3217,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),64);
    bufp->fullQData(oldp+3219,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),64);
    bufp->fullCData(oldp+3221,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+3222,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+3223,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
    bufp->fullWData(oldp+3224,(__Vtemp_h708d16f1__0),88);
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
    bufp->fullWData(oldp+3227,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+3291,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+3299,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+3300,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+3301,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+3365,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+3366,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),2);
    bufp->fullCData(oldp+3367,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),2);
    bufp->fullCData(oldp+3368,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),2);
    bufp->fullQData(oldp+3369,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),44);
    bufp->fullWData(oldp+3371,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1024);
    bufp->fullWData(oldp+3403,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),128);
    bufp->fullCData(oldp+3407,(((IData)(vlSelf->main__DOT__wbwide_wbdown_stall) 
                                << 1U)),2);
    bufp->fullCData(oldp+3408,((((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack) 
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
    bufp->fullWData(oldp+3409,(__Vtemp_h7899650d__0),1024);
    bufp->fullCData(oldp+3441,(((IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err) 
                                << 1U)),2);
    bufp->fullCData(oldp+3442,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+3443,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),3);
    bufp->fullCData(oldp+3444,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),3);
    bufp->fullCData(oldp+3445,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),3);
    bufp->fullCData(oldp+3446,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),2);
    bufp->fullCData(oldp+3447,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),2);
    bufp->fullCData(oldp+3448,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),2);
    bufp->fullCData(oldp+3449,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),2);
    bufp->fullCData(oldp+3450,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),3);
    bufp->fullCData(oldp+3451,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),3);
    bufp->fullCData(oldp+3452,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),3);
    bufp->fullCData(oldp+3453,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),3);
    bufp->fullCData(oldp+3454,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+3455,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+3456,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+3457,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+3458,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+3459,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+3460,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+3461,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+3462,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+3463,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+3464,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+3465,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+3466,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+3467,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+3468,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+3469,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),22);
    bufp->fullIData(oldp+3470,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),22);
    bufp->fullIData(oldp+3471,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),22);
    bufp->fullIData(oldp+3472,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),22);
    bufp->fullWData(oldp+3473,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+3489,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+3505,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+3521,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+3537,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+3539,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+3541,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+3543,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullCData(oldp+3545,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullWData(oldp+3546,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3562,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3578,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3594,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullCData(oldp+3610,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullCData(oldp+3611,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+3612,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullIData(oldp+3613,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3614,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3615,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3616,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3617,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3618,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3619,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3620,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3621,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3622,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3623,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3624,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3625,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3626,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3627,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3628,(__Vtemp_h53a5df10__0),512);
    bufp->fullQData(oldp+3644,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3646,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3647,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3648,(__Vtemp_hb52cb2db__0),577);
    bufp->fullBit(oldp+3667,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3668,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3669,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3688,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3689,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3708,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3727,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3746,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3747,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3748,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3749,(__Vtemp_hebded4b4__0),512);
    bufp->fullQData(oldp+3765,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3767,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3768,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3769,(__Vtemp_h0a2cdfa5__0),577);
    bufp->fullBit(oldp+3788,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3789,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3790,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3809,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),2);
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
    bufp->fullWData(oldp+3810,(__Vtemp_he57bd368__0),599);
    bufp->fullWData(oldp+3829,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3848,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3867,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3868,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3869,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3870,(__Vtemp_h0964a254__0),512);
    bufp->fullQData(oldp+3886,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3888,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3889,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3890,(__Vtemp_h925b4b87__0),577);
    bufp->fullBit(oldp+3909,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3910,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+3911,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3930,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3931,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+3950,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+3969,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullBit(oldp+3988,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3989,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+3990,((0x3fffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),22);
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
    bufp->fullWData(oldp+3991,(__Vtemp_h5b5f8605__0),512);
    bufp->fullQData(oldp+4007,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4009,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),3);
    bufp->fullBit(oldp+4010,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4011,(__Vtemp_hfe9179b2__0),577);
    bufp->fullBit(oldp+4030,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4031,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),22);
    bufp->fullWData(oldp+4032,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4051,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+4052,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),599);
    bufp->fullWData(oldp+4071,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),599);
    bufp->fullWData(oldp+4090,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),599);
    bufp->fullCData(oldp+4109,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4110,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4111,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4112,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4113,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4114,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4115,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4116,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4117,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),13);
    bufp->fullCData(oldp+4118,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4119,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4120,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4121,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4122,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4123,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4124,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4125,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4126,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4127,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4128,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4129,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4130,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4131,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4132,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4133,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4134,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4135,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4136,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4137,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullBit(oldp+4138,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4139,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4140,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4141,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4142,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4143,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4144,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4145,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4146,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4147,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4148,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4149,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4150,(vlSelf->i_clk));
    bufp->fullBit(oldp+4151,(vlSelf->i_reset));
    bufp->fullQData(oldp+4152,(vlSelf->i_ddr3_controller_iserdes_data),64);
    bufp->fullCData(oldp+4154,(vlSelf->i_ddr3_controller_iserdes_dqs),8);
    bufp->fullCData(oldp+4155,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),8);
    bufp->fullBit(oldp+4156,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4157,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4160,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4161,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4162,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullQData(oldp+4163,(vlSelf->o_ddr3_controller_data),64);
    bufp->fullCData(oldp+4165,(vlSelf->o_ddr3_controller_dm),8);
    bufp->fullCData(oldp+4166,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4167,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4168,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4169,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullBit(oldp+4170,(vlSelf->o_ddr3_controller_odelay_data_ld));
    bufp->fullBit(oldp+4171,(vlSelf->o_ddr3_controller_odelay_dqs_ld));
    bufp->fullBit(oldp+4172,(vlSelf->o_ddr3_controller_idelay_data_ld));
    bufp->fullBit(oldp+4173,(vlSelf->o_ddr3_controller_idelay_dqs_ld));
    bufp->fullBit(oldp+4174,(vlSelf->o_ddr3_controller_bitslip));
    bufp->fullBit(oldp+4175,(vlSelf->o_ddr3_controller_leveling_calib));
    bufp->fullCData(oldp+4176,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4177,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4178,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4179,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4180,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4181,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4182,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4183,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4184,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4185,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4186,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4187,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4188,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4189,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4190,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4191,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4192,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4193,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4194,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4195,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4196,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4197,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4198,(vlSelf->cpu_prof_addr),28);
    bufp->fullIData(oldp+4199,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4200,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4201,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4202,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4203,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4204,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4205,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4206,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4207,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4208,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4209,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4210,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & (IData)(
                                                             (vlSelf->i_ddr3_controller_iserdes_data 
                                                              >> 0x20U))))),32);
    bufp->fullIData(oldp+4211,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & (IData)(vlSelf->i_ddr3_controller_iserdes_data)))),32);
    bufp->fullIData(oldp+4212,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4213,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4214,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4215,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4216,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->fullBit(oldp+4217,((0ULL == vlSelf->i_ddr3_controller_iserdes_data)));
    bufp->fullSData(oldp+4218,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4219,((0x7fffffffU & (IData)(
                                                      (vlSelf->i_ddr3_controller_iserdes_data 
                                                       >> 0x20U)))),31);
    bufp->fullIData(oldp+4220,((0x7fffffffU & (IData)(vlSelf->i_ddr3_controller_iserdes_data))),31);
    bufp->fullBit(oldp+4221,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullCData(oldp+4222,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),28);
    bufp->fullBit(oldp+4224,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4233,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullIData(oldp+4234,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4235,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4236,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4237,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullBit(oldp+4238,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullCData(oldp+4239,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4240,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4241,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullBit(oldp+4242,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4243,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4244,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullIData(oldp+4245,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4246,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4247,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4248,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4249,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4250,(10.0));
    bufp->fullDouble(oldp+4252,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4254,(0xeU),32);
    bufp->fullIData(oldp+4255,(0xaU),32);
    bufp->fullIData(oldp+4256,(3U),32);
    bufp->fullIData(oldp+4257,(8U),32);
    bufp->fullIData(oldp+4258,(1U),32);
    bufp->fullIData(oldp+4259,(4U),32);
    bufp->fullIData(oldp+4260,(0x18U),32);
    bufp->fullIData(oldp+4261,(0x2000000U),32);
    bufp->fullIData(oldp+4262,(0x16U),32);
    bufp->fullIData(oldp+4263,(0x10U),32);
    bufp->fullBit(oldp+4264,(1U));
    bufp->fullIData(oldp+4265,(0x64U),24);
    bufp->fullIData(oldp+4266,(7U),32);
    bufp->fullIData(oldp+4267,(0x13U),32);
    bufp->fullIData(oldp+4268,(2U),32);
    bufp->fullIData(oldp+4269,(0U),32);
    bufp->fullBit(oldp+4270,(0U));
    bufp->fullBit(oldp+4271,(1U));
    bufp->fullWData(oldp+4272,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4288,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+4290,(vlSelf->main__DOT__wb32_buildtime_addr),25);
    bufp->fullBit(oldp+4291,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4292,(0x224208U),32);
    bufp->fullIData(oldp+4293,(vlSelf->main__DOT__wb32_gpio_addr),25);
    bufp->fullBit(oldp+4294,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullIData(oldp+4295,(vlSelf->main__DOT__wb32_sirefclk_addr),25);
    bufp->fullBit(oldp+4296,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullIData(oldp+4297,(vlSelf->main__DOT__wb32_spio_addr),25);
    bufp->fullBit(oldp+4298,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullIData(oldp+4299,(vlSelf->main__DOT__wb32_version_addr),25);
    bufp->fullBit(oldp+4300,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4301,(0x20230905U),32);
    bufp->fullCData(oldp+4302,(0xfU),4);
    bufp->fullCData(oldp+4303,(0x20U),8);
    bufp->fullIData(oldp+4304,(0x14U),32);
    bufp->fullIData(oldp+4305,(0x200U),32);
    bufp->fullCData(oldp+4306,(0U),8);
    bufp->fullBit(oldp+4307,(0U));
    bufp->fullIData(oldp+4308,(0x20U),32);
    bufp->fullCData(oldp+4309,(6U),4);
    bufp->fullCData(oldp+4310,(0U),2);
    bufp->fullCData(oldp+4311,(1U),2);
    bufp->fullCData(oldp+4312,(2U),2);
    bufp->fullCData(oldp+4313,(3U),2);
    bufp->fullIData(oldp+4314,(0x40U),32);
    bufp->fullCData(oldp+4315,(0U),4);
    bufp->fullCData(oldp+4316,(1U),4);
    bufp->fullCData(oldp+4317,(2U),4);
    bufp->fullCData(oldp+4318,(3U),4);
    bufp->fullCData(oldp+4319,(4U),4);
    bufp->fullCData(oldp+4320,(5U),4);
    bufp->fullCData(oldp+4321,(7U),4);
    bufp->fullIData(oldp+4322,(0x1bU),32);
    bufp->fullIData(oldp+4323,(0x1aU),32);
    bufp->fullIData(oldp+4324,(0x19U),32);
    bufp->fullIData(oldp+4325,(0x17U),32);
    bufp->fullIData(oldp+4326,(0x12U),32);
    bufp->fullIData(oldp+4327,(0x15U),32);
    bufp->fullIData(oldp+4328,(0x11U),32);
    bufp->fullIData(oldp+4329,(0xdU),32);
    bufp->fullIData(oldp+4330,(0x30d40U),32);
    bufp->fullIData(oldp+4331,(0x7a120U),32);
    bufp->fullDouble(oldp+4332,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4334,(0x23U),32);
    bufp->fullDouble(oldp+4335,(350.0));
    bufp->fullIData(oldp+4337,(0x1e78U),32);
    bufp->fullDouble(oldp+4338,(360.0));
    bufp->fullDouble(oldp+4340,(15.0));
    bufp->fullIData(oldp+4342,(0xaU),19);
    bufp->fullDouble(oldp+4343,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4345,(0x80U),32);
    bufp->fullIData(oldp+4346,(6U),32);
    bufp->fullIData(oldp+4347,(5U),32);
    bufp->fullIData(oldp+4348,(0xc350U),19);
    bufp->fullIData(oldp+4349,(9U),32);
    bufp->fullIData(oldp+4350,(0xbU),32);
    bufp->fullIData(oldp+4351,(0xcU),32);
    bufp->fullIData(oldp+4352,(0xfU),32);
    bufp->fullCData(oldp+4353,(0U),3);
    bufp->fullCData(oldp+4354,(2U),3);
    bufp->fullIData(oldp+4355,(0x20040U),19);
    bufp->fullCData(oldp+4356,(3U),3);
    bufp->fullIData(oldp+4357,(0x30004U),19);
    bufp->fullIData(oldp+4358,(0x30000U),19);
    bufp->fullCData(oldp+4359,(1U),3);
    bufp->fullIData(oldp+4360,(0x108c4U),19);
    bufp->fullIData(oldp+4361,(0x10844U),19);
    bufp->fullIData(oldp+4362,(0x720U),19);
    bufp->fullIData(oldp+4363,(0x4380005U),28);
    bufp->fullIData(oldp+4364,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4365,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4366,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4367,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4368,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4369,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4370,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4371,(0x1eU),32);
    bufp->fullIData(oldp+4372,(0x24U),32);
    bufp->fullIData(oldp+4373,(0x400U),32);
    bufp->fullCData(oldp+4374,(0U),5);
    bufp->fullQData(oldp+4375,(0x100000000ULL),36);
    bufp->fullQData(oldp+4377,(0x40000000ULL),36);
    bufp->fullQData(oldp+4379,(0ULL),36);
    bufp->fullCData(oldp+4381,(0x4fU),7);
    bufp->fullCData(oldp+4382,(0x49U),7);
    bufp->fullIData(oldp+4383,(0x1cU),32);
    bufp->fullIData(oldp+4384,(0U),28);
    bufp->fullSData(oldp+4385,(0xfffU),12);
    bufp->fullCData(oldp+4386,(8U),4);
    bufp->fullCData(oldp+4387,(9U),4);
    bufp->fullCData(oldp+4388,(0xaU),4);
    bufp->fullCData(oldp+4389,(0xbU),4);
    bufp->fullCData(oldp+4390,(0xcU),4);
    bufp->fullCData(oldp+4391,(0xdU),4);
    bufp->fullCData(oldp+4392,(4U),3);
    bufp->fullCData(oldp+4393,(5U),3);
    bufp->fullCData(oldp+4394,(6U),3);
    bufp->fullCData(oldp+4395,(7U),3);
    bufp->fullCData(oldp+4396,(0xaU),5);
    bufp->fullIData(oldp+4397,(0x1fU),32);
    bufp->fullIData(oldp+4398,(0x1fcU),20);
    bufp->fullIData(oldp+4399,(0x7fffffffU),31);
    bufp->fullCData(oldp+4400,(0x64U),7);
    bufp->fullCData(oldp+4401,(0x32U),7);
    bufp->fullIData(oldp+4402,(0xc0000000U),32);
    bufp->fullCData(oldp+4403,(1U),8);
    bufp->fullCData(oldp+4404,(2U),8);
    bufp->fullCData(oldp+4405,(3U),8);
    bufp->fullCData(oldp+4406,(4U),8);
    bufp->fullCData(oldp+4407,(5U),8);
    bufp->fullCData(oldp+4408,(6U),8);
    bufp->fullCData(oldp+4409,(7U),8);
    bufp->fullCData(oldp+4410,(8U),8);
    bufp->fullCData(oldp+4411,(9U),8);
    bufp->fullCData(oldp+4412,(0xaU),8);
    bufp->fullCData(oldp+4413,(0xbU),8);
    bufp->fullCData(oldp+4414,(0xcU),8);
    bufp->fullCData(oldp+4415,(0xdU),8);
    bufp->fullCData(oldp+4416,(0xeU),8);
    bufp->fullCData(oldp+4417,(0xfU),8);
    bufp->fullCData(oldp+4418,(0x80U),8);
    bufp->fullCData(oldp+4419,(0x10U),8);
    bufp->fullIData(oldp+4420,(0U),20);
    bufp->fullIData(oldp+4421,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4422,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4425,(0x41425254U),32);
    bufp->fullIData(oldp+4426,(0x40U),32);
    bufp->fullBit(oldp+4427,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4428,(0x800000U),26);
    bufp->fullCData(oldp+4429,(0xeU),4);
    bufp->fullSData(oldp+4430,(0x1d7U),9);
    bufp->fullSData(oldp+4431,(0x2000U),14);
    bufp->fullIData(oldp+4432,(0U),31);
    bufp->fullCData(oldp+4433,(7U),5);
    bufp->fullIData(oldp+4434,(0x5f5e100U),32);
    bufp->fullIData(oldp+4435,(0x186a0U),32);
    bufp->fullIData(oldp+4436,(0x4e20U),32);
    bufp->fullIData(oldp+4437,(0x1387U),32);
    bufp->fullSData(oldp+4438,(0xc8U),12);
    bufp->fullIData(oldp+4439,(0x10U),32);
    bufp->fullWData(oldp+4440,(Vmain__ConstPool__CONST_h3dd842ba_0),300);
    bufp->fullWData(oldp+4450,(Vmain__ConstPool__CONST_h21727c79_0),300);
    bufp->fullSData(oldp+4460,(0U),12);
    bufp->fullSData(oldp+4461,(0xf000U),16);
    bufp->fullIData(oldp+4462,(0x25U),32);
    bufp->fullIData(oldp+4463,(0x3eU),32);
    bufp->fullQData(oldp+4464,(0x20000000000000ULL),54);
    bufp->fullQData(oldp+4466,(0x20000004000000ULL),54);
    bufp->fullQData(oldp+4468,(0x80000080000ULL),44);
    bufp->fullQData(oldp+4470,(0x80000380000ULL),44);
    bufp->fullIData(oldp+4472,(0x241U),32);
    bufp->fullIData(oldp+4473,(0x257U),32);
}
