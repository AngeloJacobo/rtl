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
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declArray(c+4403,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4419,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4421,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4423,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4424,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4427,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4428,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4429,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4430,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4446,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4448,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4449,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4450,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4451,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4452,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4453,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4454,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4455,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4456,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBus(c+4457,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4458,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4459,"i_fan_sda", false,-1);
    tracep->declBit(c+4460,"i_fan_scl", false,-1);
    tracep->declBit(c+4461,"o_fan_sda", false,-1);
    tracep->declBit(c+4462,"o_fan_scl", false,-1);
    tracep->declBit(c+4463,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4464,"o_sys_pwm", false,-1);
    tracep->declBit(c+4465,"i_fan_tach", false,-1);
    tracep->declBit(c+4466,"i_i2c_sda", false,-1);
    tracep->declBit(c+4467,"i_i2c_scl", false,-1);
    tracep->declBit(c+4468,"o_i2c_sda", false,-1);
    tracep->declBit(c+4469,"o_i2c_scl", false,-1);
    tracep->declBit(c+4470,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4471,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4472,"cpu_sim_we", false,-1);
    tracep->declBus(c+4473,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4474,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4475,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4476,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4477,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4478,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4479,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4480,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4481,"i_cpu_reset", false,-1);
    tracep->declBit(c+4482,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4483,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4484,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4485,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4486,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4487,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4488,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4489,"o_led", false,-1, 7,0);
    tracep->declBit(c+4490,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4523,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4525,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4527,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4528,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4529,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4530,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4530,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4531,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4532,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4533,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4534,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4535,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4536,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4537,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4538,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4539,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4536,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4540,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4529,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declArray(c+4403,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4419,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4421,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4423,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4424,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4427,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4428,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4429,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4430,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4446,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4448,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4449,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4450,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4451,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4452,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4453,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4454,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4455,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4456,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBus(c+4457,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4458,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4459,"i_fan_sda", false,-1);
    tracep->declBit(c+4460,"i_fan_scl", false,-1);
    tracep->declBit(c+4461,"o_fan_sda", false,-1);
    tracep->declBit(c+4462,"o_fan_scl", false,-1);
    tracep->declBit(c+4463,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4464,"o_sys_pwm", false,-1);
    tracep->declBit(c+4465,"i_fan_tach", false,-1);
    tracep->declBit(c+4466,"i_i2c_sda", false,-1);
    tracep->declBit(c+4467,"i_i2c_scl", false,-1);
    tracep->declBit(c+4468,"o_i2c_sda", false,-1);
    tracep->declBit(c+4469,"o_i2c_scl", false,-1);
    tracep->declBit(c+4470,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4471,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4472,"cpu_sim_we", false,-1);
    tracep->declBus(c+4473,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4474,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4475,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4476,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4477,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4478,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4479,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4480,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4481,"i_cpu_reset", false,-1);
    tracep->declBit(c+4482,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4483,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4484,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4536,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4530,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4485,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4486,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4487,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4488,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4489,"o_led", false,-1, 7,0);
    tracep->declBit(c+145,"scope1_ddr3_int", false,-1);
    tracep->declBit(c+146,"scope2_ddr3_int", false,-1);
    tracep->declBit(c+147,"uartrxf_int", false,-1);
    tracep->declBit(c+148,"uarttx_int", false,-1);
    tracep->declBit(c+149,"uarttxf_int", false,-1);
    tracep->declBit(c+150,"uartrx_int", false,-1);
    tracep->declBit(c+151,"i2cscope_int", false,-1);
    tracep->declBit(c+152,"scope3_ddr3_int", false,-1);
    tracep->declBit(c+153,"gpio_int", false,-1);
    tracep->declBit(c+154,"spio_int", false,-1);
    tracep->declBus(c+3525,"ddr3_controller_aux_out", false,-1, 0,0);
    tracep->declBus(c+114,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+115,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+116,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+155,"r_sirefclk_en", false,-1);
    tracep->declBus(c+156,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+157,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+158,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+159,"i2cdma_ready", false,-1);
    tracep->declBus(c+4491,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4541,"I2C_ID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+160,"i2c_valid", false,-1);
    tracep->declBit(c+161,"i2c_ready", false,-1);
    tracep->declBit(c+162,"i2c_last", false,-1);
    tracep->declBus(c+163,"i2c_data", false,-1, 7,0);
    tracep->declBus(c+164,"i2c_id", false,-1, 1,0);
    tracep->declBus(c+38,"i2c_debug", false,-1, 31,0);
    tracep->declBit(c+165,"w_console_rx_stb", false,-1);
    tracep->declBit(c+166,"w_console_tx_stb", false,-1);
    tracep->declBit(c+167,"w_console_busy", false,-1);
    tracep->declBus(c+168,"w_console_rx_data", false,-1, 6,0);
    tracep->declBus(c+169,"w_console_tx_data", false,-1, 6,0);
    tracep->declBus(c+170,"uart_debug", false,-1, 31,0);
    tracep->declBit(c+171,"raw_cpu_dbg_stall", false,-1);
    tracep->declBit(c+172,"raw_cpu_dbg_ack", false,-1);
    tracep->declBus(c+4542,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4543,"zip_trigger", false,-1);
    tracep->declBus(c+173,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+174,"zip_cpu_int", false,-1);
    tracep->declBit(c+4490,"i_clk200", false,-1);
    tracep->declBus(c+175,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+176,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+177,"wbu_rx_stb", false,-1);
    tracep->declBit(c+178,"wbu_tx_stb", false,-1);
    tracep->declBit(c+179,"wbu_tx_busy", false,-1);
    tracep->declBus(c+180,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4542,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+181,"w_led", false,-1, 7,0);
    tracep->declBus(c+182,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+183,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+184,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+185,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4544,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+186,"wbwide_i2cdma_addr", false,-1, 24,0);
    tracep->declArray(c+187,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+203,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+205,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+206,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+207,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+208,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+224,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+225,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4543,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+226,"wbwide_i2cm_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4561,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+227,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+228,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+229,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+230,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+246,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+247,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+248,"wbwide_zip_we", false,-1);
    tracep->declBus(c+249,"wbwide_zip_addr", false,-1, 24,0);
    tracep->declArray(c+250,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+266,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+268,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+269,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+270,"wbwide_zip_err", false,-1);
    tracep->declArray(c+271,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+287,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+288,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+289,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+290,"wbwide_wbu_arbiter_addr", false,-1, 24,0);
    tracep->declArray(c+291,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+307,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+309,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+310,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+311,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+312,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+3925,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+3926,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+3927,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+3928,"wbwide_wbdown_addr", false,-1, 24,0);
    tracep->declArray(c+3929,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+3945,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+328,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+329,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+3947,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+330,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+3948,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+3949,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+3950,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+3951,"wbwide_bkram_addr", false,-1, 24,0);
    tracep->declArray(c+3952,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+3968,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4543,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+346,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4543,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+347,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+3970,"wbwide_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+3971,"wbwide_ddr3_controller_stb", false,-1);
    tracep->declBit(c+3972,"wbwide_ddr3_controller_we", false,-1);
    tracep->declBus(c+3973,"wbwide_ddr3_controller_addr", false,-1, 24,0);
    tracep->declArray(c+3974,"wbwide_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+3990,"wbwide_ddr3_controller_sel", false,-1, 63,0);
    tracep->declBit(c+3526,"wbwide_ddr3_controller_stall", false,-1);
    tracep->declBit(c+3527,"wbwide_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4543,"wbwide_ddr3_controller_err", false,-1);
    tracep->declArray(c+3528,"wbwide_ddr3_controller_idata", false,-1, 511,0);
    tracep->declBit(c+3992,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+363,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+364,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+365,"wb32_wbdown_addr", false,-1, 7,0);
    tracep->declBus(c+366,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+367,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+368,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+369,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+3993,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+370,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+3995,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+3996,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4563,"wb32_buildtime_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+3995,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4564,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4565,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+3999,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+3996,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4566,"wb32_gpio_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+3999,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4567,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4492,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+4000,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+3996,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4568,"wb32_sirefclk_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+158,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4569,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+371,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+4001,"wb32_spio_stb", false,-1);
    tracep->declBit(c+3996,"wb32_spio_we", false,-1);
    tracep->declBus(c+4570,"wb32_spio_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_spio_stall", false,-1);
    tracep->declBit(c+372,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4571,"wb32_spio_err", false,-1);
    tracep->declBus(c+373,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_version_cyc", false,-1);
    tracep->declBit(c+4002,"wb32_version_stb", false,-1);
    tracep->declBit(c+3996,"wb32_version_we", false,-1);
    tracep->declBus(c+4572,"wb32_version_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_version_stall", false,-1);
    tracep->declBit(c+4002,"wb32_version_ack", false,-1);
    tracep->declBit(c+4573,"wb32_version_err", false,-1);
    tracep->declBus(c+4574,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+4003,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+4004,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+4005,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+4006,"wb32_i2cscope_addr", false,-1, 7,0);
    tracep->declBus(c+4007,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+4008,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+374,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4543,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+375,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+4009,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+4010,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+4011,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+4012,"wb32_scope1_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+4013,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+4014,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+376,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4543,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+377,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+4015,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+4016,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+4017,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+4018,"wb32_scope2_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+4019,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+4020,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+378,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4543,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+379,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+4021,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+4022,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+4023,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+4024,"wb32_scope3_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+4025,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+4026,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+380,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4543,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+381,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+4027,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+4028,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+4029,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+4030,"wb32_i2cs_addr", false,-1, 7,0);
    tracep->declBus(c+4031,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+4032,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+382,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4543,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+383,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+4033,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+4034,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+4035,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+4036,"wb32_i2cdma_addr", false,-1, 7,0);
    tracep->declBus(c+4037,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+4038,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+384,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4543,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+385,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+4039,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+4040,"wb32_uart_stb", false,-1);
    tracep->declBit(c+4041,"wb32_uart_we", false,-1);
    tracep->declBus(c+4042,"wb32_uart_addr", false,-1, 7,0);
    tracep->declBus(c+4043,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+4044,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_uart_stall", false,-1);
    tracep->declBit(c+386,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4543,"wb32_uart_err", false,-1);
    tracep->declBus(c+387,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+4045,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+4046,"wb32_fan_stb", false,-1);
    tracep->declBit(c+4047,"wb32_fan_we", false,-1);
    tracep->declBus(c+4048,"wb32_fan_addr", false,-1, 7,0);
    tracep->declBus(c+4049,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+4050,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_fan_stall", false,-1);
    tracep->declBit(c+388,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4543,"wb32_fan_err", false,-1);
    tracep->declBus(c+389,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+3994,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+4051,"wb32_sio_stb", false,-1);
    tracep->declBit(c+3996,"wb32_sio_we", false,-1);
    tracep->declBus(c+4052,"wb32_sio_addr", false,-1, 7,0);
    tracep->declBus(c+3997,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+3998,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_sio_stall", false,-1);
    tracep->declBit(c+390,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4543,"wb32_sio_err", false,-1);
    tracep->declBus(c+391,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+4053,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+4054,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+4055,"wb32_cfg_we", false,-1);
    tracep->declBus(c+4056,"wb32_cfg_addr", false,-1, 7,0);
    tracep->declBus(c+4057,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+4058,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+392,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4543,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4542,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+4059,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+4060,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+4061,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+4062,"wb32_ddr3_phy_addr", false,-1, 7,0);
    tracep->declBus(c+4063,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+4064,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+3544,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+3545,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4543,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+3546,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+393,"wbu_cyc", false,-1);
    tracep->declBit(c+394,"wbu_stb", false,-1);
    tracep->declBit(c+395,"wbu_we", false,-1);
    tracep->declBus(c+396,"wbu_addr", false,-1, 29,0);
    tracep->declBus(c+397,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4575,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+398,"wbu_stall", false,-1);
    tracep->declBit(c+399,"wbu_ack", false,-1);
    tracep->declBit(c+400,"wbu_err", false,-1);
    tracep->declBus(c+401,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+402,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+403,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+404,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+405,"wbu_wbu_arbiter_addr", false,-1, 29,0);
    tracep->declBus(c+406,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+407,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+408,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+409,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+410,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+411,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+412,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+413,"wbu_zip_stb", false,-1);
    tracep->declBit(c+414,"wbu_zip_we", false,-1);
    tracep->declBus(c+415,"wbu_zip_addr", false,-1, 29,0);
    tracep->declBus(c+416,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+417,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4493,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4494,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4543,"wbu_zip_err", false,-1);
    tracep->declBus(c+418,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+390,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+391,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4543,"zip_unused", false,-1);
    tracep->declBit(c+174,"w_bus_int", false,-1);
    tracep->declBus(c+396,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+392,"r_cfg_ack", false,-1);
    tracep->declBit(c+4543,"cfg_unused", false,-1);
    tracep->declBus(c+4576,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4577,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4531,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4579,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4580,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4527,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+3948,"i_wb_cyc", false,-1);
    tracep->declBit(c+3949,"i_wb_stb", false,-1);
    tracep->declBit(c+3950,"i_wb_we", false,-1);
    tracep->declBus(c+4065,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+3952,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+3968,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+346,"o_wb_ack", false,-1);
    tracep->declArray(c+347,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+419,"w_wstb", false,-1);
    tracep->declBit(c+420,"w_stb", false,-1);
    tracep->declArray(c+421,"w_data", false,-1, 511,0);
    tracep->declBus(c+437,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+438,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+419,"last_wstb", false,-1);
    tracep->declBit(c+420,"last_stb", false,-1);
    tracep->declBus(c+437,"last_addr", false,-1, 13,0);
    tracep->declArray(c+421,"last_data", false,-1, 511,0);
    tracep->declQuad(c+438,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+440,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4530,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBus(c+441,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4457,"o_word", false,-1, 7,0);
    tracep->declBit(c+157,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+442+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+450,"r_delay", false,-1, 31,0);
    tracep->declBus(c+451,"times_three", false,-1, 31,0);
    tracep->declBus(c+452,"times_five", false,-1, 31,0);
    tracep->declBus(c+453,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4582,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+4039,"i_wb_cyc", false,-1);
    tracep->declBit(c+4040,"i_wb_stb", false,-1);
    tracep->declBit(c+4041,"i_wb_we", false,-1);
    tracep->declBus(c+4066,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4043,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4044,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+386,"o_wb_ack", false,-1);
    tracep->declBus(c+387,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+166,"o_uart_stb", false,-1);
    tracep->declBus(c+169,"o_uart_data", false,-1, 6,0);
    tracep->declBit(c+167,"i_uart_busy", false,-1);
    tracep->declBit(c+165,"i_uart_stb", false,-1);
    tracep->declBus(c+168,"i_uart_data", false,-1, 6,0);
    tracep->declBit(c+150,"o_uart_rx_int", false,-1);
    tracep->declBit(c+148,"o_uart_tx_int", false,-1);
    tracep->declBit(c+147,"o_uart_rxfifo_int", false,-1);
    tracep->declBit(c+149,"o_uart_txfifo_int", false,-1);
    tracep->declBus(c+170,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4582,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4583,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4584,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4585,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4586,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+454,"rx_uart_reset", false,-1);
    tracep->declBit(c+150,"rx_empty_n", false,-1);
    tracep->declBit(c+455,"rx_fifo_err", false,-1);
    tracep->declBus(c+456,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+457,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+458,"rxf_wb_read", false,-1);
    tracep->declBus(c+459,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+166,"tx_empty_n", false,-1);
    tracep->declBit(c+460,"txf_err", false,-1);
    tracep->declBus(c+461,"txf_status", false,-1, 15,0);
    tracep->declBit(c+462,"txf_wb_write", false,-1);
    tracep->declBit(c+463,"tx_uart_reset", false,-1);
    tracep->declBus(c+464,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+465,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+466,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+467,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+468,"r_wb_ack", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4539,"BW", false,-1, 31,0);
    tracep->declBus(c+4582,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4537,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4587,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+454,"i_reset", false,-1);
    tracep->declBit(c+165,"i_wr", false,-1);
    tracep->declBus(c+168,"i_data", false,-1, 6,0);
    tracep->declBit(c+150,"o_empty_n", false,-1);
    tracep->declBit(c+458,"i_rd", false,-1);
    tracep->declBus(c+456,"o_data", false,-1, 6,0);
    tracep->declBus(c+457,"o_status", false,-1, 15,0);
    tracep->declBit(c+455,"o_err", false,-1);
    tracep->declBus(c+469,"r_data", false,-1, 6,0);
    tracep->declBus(c+470,"last_write", false,-1, 6,0);
    tracep->declBus(c+471,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+472,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+473,"r_next", false,-1, 5,0);
    tracep->declBit(c+474,"will_overflow", false,-1);
    tracep->declBit(c+475,"will_underflow", false,-1);
    tracep->declBit(c+476,"osrc", false,-1);
    tracep->declBus(c+477,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+478,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+479,"w_write", false,-1);
    tracep->declBit(c+480,"w_read", false,-1);
    tracep->declBus(c+481,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4582,"lglen", false,-1, 3,0);
    tracep->declBit(c+147,"w_half_full", false,-1);
    tracep->declBus(c+482,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4539,"BW", false,-1, 31,0);
    tracep->declBus(c+4582,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4580,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4587,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+463,"i_reset", false,-1);
    tracep->declBit(c+462,"i_wr", false,-1);
    tracep->declBus(c+464,"i_data", false,-1, 6,0);
    tracep->declBit(c+166,"o_empty_n", false,-1);
    tracep->declBit(c+483,"i_rd", false,-1);
    tracep->declBus(c+169,"o_data", false,-1, 6,0);
    tracep->declBus(c+461,"o_status", false,-1, 15,0);
    tracep->declBit(c+460,"o_err", false,-1);
    tracep->declBus(c+484,"r_data", false,-1, 6,0);
    tracep->declBus(c+485,"last_write", false,-1, 6,0);
    tracep->declBus(c+486,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+487,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+488,"r_next", false,-1, 5,0);
    tracep->declBit(c+489,"will_overflow", false,-1);
    tracep->declBit(c+490,"will_underflow", false,-1);
    tracep->declBit(c+491,"osrc", false,-1);
    tracep->declBus(c+492,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+493,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+494,"w_write", false,-1);
    tracep->declBit(c+495,"w_read", false,-1);
    tracep->declBus(c+496,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4582,"lglen", false,-1, 3,0);
    tracep->declBit(c+149,"w_half_full", false,-1);
    tracep->declBus(c+497,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4523,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4525,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4527,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4528,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4529,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4530,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4530,"LANES", false,-1, 31,0);
    tracep->declBus(c+4531,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4539,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4581,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4580,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4537,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4532,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4578,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4533,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4587,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4532,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4533,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4529,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4401,"i_controller_clk", false,-1);
    tracep->declBit(c+35,"i_rst_n", false,-1);
    tracep->declBit(c+3970,"i_wb_cyc", false,-1);
    tracep->declBit(c+3971,"i_wb_stb", false,-1);
    tracep->declBit(c+3972,"i_wb_we", false,-1);
    tracep->declBus(c+4067,"i_wb_addr", false,-1, 23,0);
    tracep->declArray(c+3974,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+3990,"i_wb_sel", false,-1, 63,0);
    tracep->declBus(c+4543,"i_aux", false,-1, 0,0);
    tracep->declBit(c+3526,"o_wb_stall", false,-1);
    tracep->declBit(c+3527,"o_wb_ack", false,-1);
    tracep->declArray(c+3528,"o_wb_data", false,-1, 511,0);
    tracep->declBus(c+3525,"o_aux", false,-1, 0,0);
    tracep->declBit(c+4059,"i_wb2_cyc", false,-1);
    tracep->declBit(c+4060,"i_wb2_stb", false,-1);
    tracep->declBit(c+4061,"i_wb2_we", false,-1);
    tracep->declBus(c+4068,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+4064,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+4063,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+3544,"o_wb2_stall", false,-1);
    tracep->declBit(c+3545,"o_wb2_ack", false,-1);
    tracep->declBus(c+3546,"o_wb2_data", false,-1, 31,0);
    tracep->declArray(c+4403,"i_phy_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4419,"i_phy_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4421,"i_phy_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4423,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4424,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4427,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4428,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4429,"o_phy_toggle_dqs", false,-1);
    tracep->declArray(c+4430,"o_phy_data", false,-1, 511,0);
    tracep->declQuad(c+4446,"o_phy_dm", false,-1, 63,0);
    tracep->declBus(c+4448,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4449,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4450,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4451,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4452,"o_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4453,"o_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4454,"o_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4455,"o_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4456,"o_phy_bitslip", false,-1, 7,0);
    tracep->declBus(c+114,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+115,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+116,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4588,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4589,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4590,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4591,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4592,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4593,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4594,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4582,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4595,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4595,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4596,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4535,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4533,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4597,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4598,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4540,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4599,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4597,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4598,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4600,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4577,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4540,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4599,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4601,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4536,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4602,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4585,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4586,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4583,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4584,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4542,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4530,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4542,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4530,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4540,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4603,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4604,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4605,"tRCD", false,-1);
    tracep->declDouble(c+4605,"tRP", false,-1);
    tracep->declBus(c+4607,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4608,"tRFC", false,-1);
    tracep->declBus(c+4610,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4611,"tXPR", false,-1);
    tracep->declDouble(c+4613,"tWR", false,-1);
    tracep->declDouble(c+4523,"tWTR", false,-1);
    tracep->declBus(c+4615,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4616,"tWLO", false,-1);
    tracep->declBus(c+4541,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4523,"tRTP", false,-1);
    tracep->declBus(c+4532,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4529,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4618,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4619,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4620,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4621,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4599,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4541,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4589,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4591,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4588,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4588,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4589,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4588,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4589,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4588,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4591,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4592,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4620,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4593,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4541,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4542,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4620,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4536,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4602,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4542,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4531,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4541,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4529,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4532,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4620,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4619,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4539,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4530,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4622,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4528,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4623,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4624,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4602,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4527,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4620,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4529,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4625,"PASR", false,-1, 2,0);
    tracep->declBus(c+4625,"CWL", false,-1, 2,0);
    tracep->declBus(c+4537,"ASR", false,-1, 0,0);
    tracep->declBus(c+4580,"SRT", false,-1, 0,0);
    tracep->declBus(c+4583,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4626,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4627,"MR2", false,-1, 18,0);
    tracep->declBus(c+4583,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4537,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4580,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4628,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4629,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4630,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4580,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4584,"DIC", false,-1, 1,0);
    tracep->declBus(c+4628,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4537,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4580,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4583,"AL", false,-1, 1,0);
    tracep->declBus(c+4580,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4580,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4631,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4632,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4633,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4583,"BL", false,-1, 1,0);
    tracep->declBus(c+4592,"CL", false,-1, 3,0);
    tracep->declBus(c+4580,"RBT", false,-1, 0,0);
    tracep->declBus(c+4537,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4628,"WR", false,-1, 2,0);
    tracep->declBus(c+4580,"PPD", false,-1, 0,0);
    tracep->declBus(c+4625,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4634,"MR0", false,-1, 18,0);
    tracep->declBus(c+4635,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+3547,"index", false,-1, 31,0);
    tracep->declBus(c+3548,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+3549,"instruction", false,-1, 27,0);
    tracep->declBus(c+3550,"delay_counter", false,-1, 17,0);
    tracep->declBit(c+3551,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+3552,"reset_done", false,-1);
    tracep->declBit(c+3553,"pause_counter", false,-1);
    tracep->declBit(c+3554,"issue_read_command", false,-1);
    tracep->declBit(c+4543,"issue_write_command", false,-1);
    tracep->declBit(c+3555,"stage2_update", false,-1);
    tracep->declBit(c+4325,"stage2_stall", false,-1);
    tracep->declBit(c+4326,"stage1_stall", false,-1);
    tracep->declBus(c+3556,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+4327,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3557+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4328+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+3565,"stage1_pending", false,-1);
    tracep->declBus(c+3566,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+3567,"stage1_we", false,-1);
    tracep->declArray(c+3568,"stage1_data", false,-1, 511,0);
    tracep->declQuad(c+3584,"stage1_dm", false,-1, 63,0);
    tracep->declBus(c+3586,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+3587,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+3588,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+3589,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+3590,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+4069,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+3591,"stage2_pending", false,-1);
    tracep->declBus(c+3592,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+3593,"stage2_we", false,-1);
    tracep->declQuad(c+3594,"stage2_dm_unaligned", false,-1, 63,0);
    tracep->declQuad(c+3596,"stage2_dm_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+3598+i*2,"stage2_dm", true,(i+0), 63,0);
    }
    tracep->declArray(c+3602,"stage2_data_unaligned", false,-1, 511,0);
    tracep->declArray(c+3618,"stage2_data_unaligned_temp", false,-1, 511,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3634+i*16,"stage2_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+3666+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3682+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+3690,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+3691,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+3692,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3693+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4336+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3701+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4344+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3709+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4352+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3717+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4360+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4368+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+3725,"cmd_odt_q", false,-1);
    tracep->declBit(c+4372,"cmd_odt", false,-1);
    tracep->declBit(c+4373,"cmd_ck_en", false,-1);
    tracep->declBit(c+4374,"cmd_reset_n", false,-1);
    tracep->declBit(c+3726,"o_wb_stall_q", false,-1);
    tracep->declBit(c+4375,"o_wb_stall_d", false,-1);
    tracep->declBit(c+4376,"precharge_slot_busy", false,-1);
    tracep->declBit(c+4377,"activate_slot_busy", false,-1);
    tracep->declBus(c+3727,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+3728,"write_dqs_d", false,-1);
    tracep->declBus(c+3729,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+3730,"write_dqs_val", false,-1, 2,0);
    tracep->declBit(c+3731,"write_dq_q", false,-1);
    tracep->declBit(c+3732,"write_dq_d", false,-1);
    tracep->declBus(c+3733,"write_dq", false,-1, 3,0);
    tracep->declBus(c+3734,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+3735,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+3737,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+3738,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+3739,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+3740,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+3741,"dqs_target_index_orig", false,-1, 5,0);
    tracep->declBus(c+3742,"dq_target_index", false,-1, 5,0);
    tracep->declBus(c+3743,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+3744,"dqs_start_index_repeat", false,-1, 2,0);
    tracep->declBus(c+3745,"train_delay", false,-1, 1,0);
    tracep->declBus(c+3746,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+3747,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+3748,"initial_dqs", false,-1);
    tracep->declBus(c+3749,"lane", false,-1, 2,0);
    tracep->declBus(c+3750,"lane_times_8", false,-1, 5,0);
    tracep->declBus(c+3751,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+3752,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3753+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3761+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3766+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+3771,"index_read_pipe", false,-1);
    tracep->declBit(c+3772,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3773+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3775+i*16,"o_wb_data_q", true,(i+0), 511,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3807+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+3823,"write_calib_stb", false,-1);
    tracep->declBus(c+3824,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+3825,"write_calib_we", false,-1);
    tracep->declBus(c+3826,"write_calib_col", false,-1, 9,0);
    tracep->declArray(c+3827,"write_calib_data", false,-1, 511,0);
    tracep->declBit(c+3843,"write_calib_odt", false,-1);
    tracep->declBit(c+3844,"write_calib_dqs", false,-1);
    tracep->declBit(c+3845,"write_calib_dq", false,-1);
    tracep->declBit(c+3846,"prev_write_level_feedback", false,-1);
    tracep->declArray(c+3847,"read_data_store", false,-1, 511,0);
    tracep->declArray(c+3863,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3867+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3875+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3883+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3891+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+3899,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3900+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBit(c+3908,"wb2_stb", false,-1);
    tracep->declBit(c+3909,"wb2_update", false,-1);
    tracep->declBit(c+3910,"wb2_we", false,-1);
    tracep->declBus(c+3911,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3912,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+3913,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3914,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3915,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3916,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3917,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3918,"wb2_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+3919,"wb2_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+3920,"wb2_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+3921,"wb2_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+3922,"wb2_write_lane", false,-1, 2,0);
    tracep->declBit(c+3923,"debug_trigger", false,-1);
    tracep->declBit(c+4495,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4636,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4637,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4638,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4639,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4640,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4641,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4642,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4540,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4619,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4528,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4580,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4643,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+177,"i_rx_stb", false,-1);
    tracep->declBus(c+175,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+393,"o_wb_cyc", false,-1);
    tracep->declBit(c+394,"o_wb_stb", false,-1);
    tracep->declBit(c+395,"o_wb_we", false,-1);
    tracep->declBus(c+396,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+397,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+398,"i_wb_stall", false,-1);
    tracep->declBit(c+399,"i_wb_ack", false,-1);
    tracep->declBus(c+401,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+400,"i_wb_err", false,-1);
    tracep->declBit(c+174,"i_interrupt", false,-1);
    tracep->declBit(c+178,"o_tx_stb", false,-1);
    tracep->declBus(c+176,"o_tx_data", false,-1, 7,0);
    tracep->declBit(c+179,"i_tx_busy", false,-1);
    tracep->declBit(c+166,"i_console_stb", false,-1);
    tracep->declBus(c+169,"i_console_data", false,-1, 6,0);
    tracep->declBit(c+167,"o_console_busy", false,-1);
    tracep->declBit(c+165,"o_console_stb", false,-1);
    tracep->declBus(c+168,"o_console_data", false,-1, 6,0);
    tracep->declBit(c+180,"o_dbg", false,-1);
    tracep->declBit(c+498,"soft_reset", false,-1);
    tracep->declBit(c+180,"r_wdt_reset", false,-1);
    tracep->declBit(c+4544,"cmd_port_active", false,-1);
    tracep->declBit(c+499,"rx_valid", false,-1);
    tracep->declBus(c+500,"rx_data", false,-1, 7,0);
    tracep->declBit(c+501,"in_stb", false,-1);
    tracep->declBit(c+502,"in_active", false,-1);
    tracep->declQuad(c+503,"in_word", false,-1, 35,0);
    tracep->declBit(c+178,"ps_full", false,-1);
    tracep->declBus(c+176,"ps_data", false,-1, 7,0);
    tracep->declBit(c+505,"wbu_tx_stb", false,-1);
    tracep->declBus(c+506,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+507,"ififo_valid", false,-1);
    tracep->declQuad(c+508,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+510,"exec_stb", false,-1);
    tracep->declQuad(c+511,"exec_word", false,-1, 35,0);
    tracep->declBit(c+513,"ofifo_rd", false,-1);
    tracep->declQuad(c+514,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+516,"ofifo_err", false,-1);
    tracep->declBit(c+517,"ofifo_empty_n", false,-1);
    tracep->declBit(c+518,"w_bus_busy", false,-1);
    tracep->declBit(c+180,"w_bus_reset", false,-1);
    tracep->declBus(c+519,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+520,"ign_input_busy", false,-1);
    tracep->declBit(c+521,"output_busy", false,-1);
    tracep->declBit(c+522,"out_active", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4644,"BW", false,-1, 31,0);
    tracep->declBus(c+4528,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+180,"i_reset", false,-1);
    tracep->declBit(c+510,"i_wr", false,-1);
    tracep->declQuad(c+511,"i_data", false,-1, 35,0);
    tracep->declBit(c+513,"i_rd", false,-1);
    tracep->declQuad(c+514,"o_data", false,-1, 35,0);
    tracep->declBit(c+517,"o_empty_n", false,-1);
    tracep->declBit(c+516,"o_err", false,-1);
    tracep->declBus(c+4645,"FLEN", false,-1, 31,0);
    tracep->declBus(c+523,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+524,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+525,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+526,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+527,"will_overflow", false,-1);
    tracep->declBit(c+528,"will_underflow", false,-1);
    tracep->declBit(c+529,"r_empty_n", false,-1);
    tracep->declBit(c+530,"w_write", false,-1);
    tracep->declBit(c+531,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+507,"ififo_empty_n", false,-1);
    tracep->declBit(c+532,"ififo_err", false,-1);
    tracep->declBit(c+533,"ififo_rd", false,-1);
    tracep->declBit(c+4543,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4644,"BW", false,-1, 31,0);
    tracep->declBus(c+4619,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+180,"i_reset", false,-1);
    tracep->declBit(c+501,"i_wr", false,-1);
    tracep->declQuad(c+503,"i_data", false,-1, 35,0);
    tracep->declBit(c+533,"i_rd", false,-1);
    tracep->declQuad(c+508,"o_data", false,-1, 35,0);
    tracep->declBit(c+507,"o_empty_n", false,-1);
    tracep->declBit(c+532,"o_err", false,-1);
    tracep->declBus(c+4587,"FLEN", false,-1, 31,0);
    tracep->declBus(c+534,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+535,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+536,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+537,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+538,"will_overflow", false,-1);
    tracep->declBit(c+539,"will_underflow", false,-1);
    tracep->declBit(c+540,"r_empty_n", false,-1);
    tracep->declBit(c+541,"w_write", false,-1);
    tracep->declBit(c+542,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4537,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+499,"i_stb", false,-1);
    tracep->declBit(c+520,"o_busy", false,-1);
    tracep->declBus(c+500,"i_byte", false,-1, 7,0);
    tracep->declBit(c+498,"o_soft_reset", false,-1);
    tracep->declBit(c+501,"o_stb", false,-1);
    tracep->declBit(c+4543,"i_busy", false,-1);
    tracep->declQuad(c+503,"o_codword", false,-1, 35,0);
    tracep->declBit(c+502,"o_active", false,-1);
    tracep->declBit(c+543,"hx_stb", false,-1);
    tracep->declBit(c+544,"hx_valid", false,-1);
    tracep->declBus(c+545,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+546,"cw_stb", false,-1);
    tracep->declBit(c+547,"cw_busy", false,-1);
    tracep->declBit(c+548,"cw_active", false,-1);
    tracep->declQuad(c+549,"cw_word", false,-1, 35,0);
    tracep->declBit(c+551,"cod_busy", false,-1);
    tracep->declBit(c+552,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+546,"i_stb", false,-1);
    tracep->declBit(c+551,"o_busy", false,-1);
    tracep->declQuad(c+549,"i_word", false,-1, 35,0);
    tracep->declBit(c+501,"o_stb", false,-1);
    tracep->declBit(c+4543,"i_busy", false,-1);
    tracep->declQuad(c+503,"o_word", false,-1, 35,0);
    tracep->declBit(c+552,"o_active", false,-1);
    tracep->declBus(c+553,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+554,"r_word", false,-1, 35,0);
    tracep->declBus(c+556,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+557,"r_addr", false,-1, 24,0);
    tracep->declBus(c+558,"w_addr", false,-1, 31,0);
    tracep->declBus(c+559,"rd_len", false,-1, 9,0);
    tracep->declBus(c+560,"cword", false,-1, 31,0);
    tracep->declBus(c+561,"r_stb", false,-1, 2,0);
    tracep->declBit(c+562,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4580,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+543,"i_stb", false,-1);
    tracep->declBit(c+547,"o_busy", false,-1);
    tracep->declBit(c+544,"i_valid", false,-1);
    tracep->declBus(c+545,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+546,"o_stb", false,-1);
    tracep->declBit(c+551,"i_busy", false,-1);
    tracep->declQuad(c+549,"o_codword", false,-1, 35,0);
    tracep->declBit(c+548,"o_active", false,-1);
    tracep->declBus(c+563,"r_len", false,-1, 2,0);
    tracep->declBus(c+564,"cw_len", false,-1, 2,0);
    tracep->declBus(c+565,"lastcw", false,-1, 1,0);
    tracep->declBit(c+566,"w_stb", false,-1);
    tracep->declQuad(c+567,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+543,"skd_stb", false,-1);
    tracep->declBit(c+544,"skd_valid", false,-1);
    tracep->declBus(c+545,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+547,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+499,"i_stb", false,-1);
    tracep->declBit(c+520,"o_busy", false,-1);
    tracep->declBus(c+500,"i_byte", false,-1, 7,0);
    tracep->declBit(c+498,"o_soft_reset", false,-1);
    tracep->declBit(c+543,"o_stb", false,-1);
    tracep->declBit(c+544,"o_valid", false,-1);
    tracep->declBit(c+547,"i_busy", false,-1);
    tracep->declBus(c+545,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4580,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4532,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4643,"AW", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+180,"i_reset", false,-1);
    tracep->declBit(c+507,"i_valid", false,-1);
    tracep->declQuad(c+508,"i_codword", false,-1, 35,0);
    tracep->declBit(c+518,"o_busy", false,-1);
    tracep->declBit(c+393,"o_wb_cyc", false,-1);
    tracep->declBit(c+394,"o_wb_stb", false,-1);
    tracep->declBit(c+395,"o_wb_we", false,-1);
    tracep->declBus(c+396,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+397,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+398,"i_wb_stall", false,-1);
    tracep->declBit(c+399,"i_wb_ack", false,-1);
    tracep->declBus(c+401,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+400,"i_wb_err", false,-1);
    tracep->declBit(c+510,"o_stb", false,-1);
    tracep->declQuad(c+511,"o_codword", false,-1, 35,0);
    tracep->declBit(c+513,"i_fifo_rd", false,-1);
    tracep->declBus(c+4583,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4584,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4585,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4586,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4584,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+569,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+570,"wb_state", false,-1, 1,0);
    tracep->declBus(c+571,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+572,"r_len", false,-1, 9,0);
    tracep->declBit(c+573,"r_inc", false,-1);
    tracep->declBit(c+574,"r_new_addr", false,-1);
    tracep->declBit(c+575,"last_read_request", false,-1);
    tracep->declBit(c+576,"last_ack", false,-1);
    tracep->declBit(c+577,"zero_acks", false,-1);
    tracep->declBit(c+518,"r_busy", false,-1);
    tracep->declBus(c+578,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4646,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4544,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4543,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4537,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+180,"i_soft_reset", false,-1);
    tracep->declBit(c+513,"i_stb", false,-1);
    tracep->declBit(c+521,"o_busy", false,-1);
    tracep->declQuad(c+514,"i_codword", false,-1, 35,0);
    tracep->declBit(c+393,"i_wb_cyc", false,-1);
    tracep->declBit(c+174,"i_int", false,-1);
    tracep->declBit(c+579,"i_bus_busy", false,-1);
    tracep->declBit(c+505,"o_stb", false,-1);
    tracep->declBit(c+522,"o_active", false,-1);
    tracep->declBus(c+506,"o_char", false,-1, 7,0);
    tracep->declBit(c+178,"i_tx_busy", false,-1);
    tracep->declBit(c+580,"dw_busy", false,-1);
    tracep->declBit(c+521,"cw_stb", false,-1);
    tracep->declBit(c+521,"cw_busy", false,-1);
    tracep->declBit(c+581,"cp_stb", false,-1);
    tracep->declBit(c+580,"dw_stb", false,-1);
    tracep->declBit(c+582,"ln_stb", false,-1);
    tracep->declBit(c+583,"ln_busy", false,-1);
    tracep->declBit(c+584,"cp_busy", false,-1);
    tracep->declBit(c+585,"byte_busy", false,-1);
    tracep->declBit(c+586,"cp_active", false,-1);
    tracep->declBit(c+587,"dw_active", false,-1);
    tracep->declBit(c+588,"ln_active", false,-1);
    tracep->declQuad(c+589,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+591,"cp_word", false,-1, 35,0);
    tracep->declBus(c+593,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+594,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+595,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declBus(c+4644,"CW", false,-1, 31,0);
    tracep->declBus(c+4528,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+180,"i_reset", false,-1);
    tracep->declBit(c+521,"i_stb", false,-1);
    tracep->declQuad(c+589,"i_codword", false,-1, 35,0);
    tracep->declBit(c+580,"i_busy", false,-1);
    tracep->declBit(c+581,"o_stb", false,-1);
    tracep->declQuad(c+591,"o_cword", false,-1, 35,0);
    tracep->declBit(c+584,"o_busy", false,-1);
    tracep->declBit(c+586,"o_active", false,-1);
    tracep->declBit(c+596,"aword_valid", false,-1);
    tracep->declQuad(c+597,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+599,"w_addr", false,-1, 31,0);
    tracep->declBus(c+600,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+601,"tbl_busy", false,-1);
    tracep->declBit(c+602,"w_accepted", false,-1);
    tracep->declQuad(c+603,"r_word", false,-1, 35,0);
    tracep->declBus(c+605,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+606,"tbl_filled", false,-1);
    tracep->declBus(c+607,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+608,"pmatch", false,-1);
    tracep->declBit(c+609,"dmatch", false,-1);
    tracep->declBit(c+610,"vaddr", false,-1);
    tracep->declBus(c+611,"cword", false,-1, 31,0);
    tracep->declBus(c+612,"maddr", false,-1, 9,0);
    tracep->declBit(c+613,"matched", false,-1);
    tracep->declBit(c+614,"zmatch", false,-1);
    tracep->declBit(c+615,"hmatch", false,-1);
    tracep->declBus(c+616,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+617,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+591,"r_cword", false,-1, 35,0);
    tracep->declBus(c+618,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+619,"clear_table", false,-1);
    tracep->declBit(c+620,"addr_within_table", false,-1);
    tracep->declBit(c+621,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+622,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+180,"i_reset", false,-1);
    tracep->declBit(c+513,"i_stb", false,-1);
    tracep->declQuad(c+514,"i_codword", false,-1, 35,0);
    tracep->declBit(c+393,"i_cyc", false,-1);
    tracep->declBit(c+579,"i_busy", false,-1);
    tracep->declBit(c+174,"i_int", false,-1);
    tracep->declBit(c+521,"o_stb", false,-1);
    tracep->declQuad(c+589,"o_codword", false,-1, 35,0);
    tracep->declBit(c+521,"o_busy", false,-1);
    tracep->declBit(c+623,"i_tx_busy", false,-1);
    tracep->declQuad(c+4647,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4649,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4651,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4598,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+624,"int_request", false,-1);
    tracep->declBit(c+625,"int_sent", false,-1);
    tracep->declBit(c+626,"idle_expired", false,-1);
    tracep->declBit(c+627,"idle_state", false,-1);
    tracep->declBus(c+628,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+581,"i_stb", false,-1);
    tracep->declQuad(c+591,"i_word", false,-1, 35,0);
    tracep->declBit(c+583,"i_tx_busy", false,-1);
    tracep->declBit(c+580,"o_stb", false,-1);
    tracep->declBus(c+593,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+580,"o_busy", false,-1);
    tracep->declBit(c+587,"o_active", false,-1);
    tracep->declBus(c+629,"w_len", false,-1, 2,0);
    tracep->declBus(c+630,"r_len", false,-1, 2,0);
    tracep->declBus(c+631,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+580,"i_stb", false,-1);
    tracep->declBus(c+593,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+582,"o_stb", false,-1);
    tracep->declBus(c+594,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+632,"i_bus_busy", false,-1);
    tracep->declBit(c+585,"i_tx_busy", false,-1);
    tracep->declBit(c+583,"o_busy", false,-1);
    tracep->declBit(c+588,"o_active", false,-1);
    tracep->declBus(c+4653,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4654,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+633,"last_out_nl", false,-1);
    tracep->declBit(c+634,"last_in_nl", false,-1);
    tracep->declBit(c+635,"full_line", false,-1);
    tracep->declBit(c+636,"r_busy", false,-1);
    tracep->declBus(c+637,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+582,"i_stb", false,-1);
    tracep->declBus(c+594,"i_bits", false,-1, 6,0);
    tracep->declBit(c+505,"o_stb", false,-1);
    tracep->declBus(c+506,"o_char", false,-1, 7,0);
    tracep->declBit(c+585,"o_busy", false,-1);
    tracep->declBit(c+178,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4536,"NIN", false,-1, 31,0);
    tracep->declBus(c+4530,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4576,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+3994,"i_wb_cyc", false,-1);
    tracep->declBit(c+3999,"i_wb_stb", false,-1);
    tracep->declBit(c+3996,"i_wb_we", false,-1);
    tracep->declBus(c+3997,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3998,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+3999,"o_wb_ack", false,-1);
    tracep->declBus(c+4492,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4485,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4486,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+153,"o_int", false,-1);
    tracep->declBus(c+638,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+639,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+640,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+638,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4496,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4535,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4541,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4583,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4530,"RW", false,-1, 31,0);
    tracep->declBus(c+4655,"BAW", false,-1, 31,0);
    tracep->declBus(c+4656,"RESET_ADDRESS", false,-1, 30,0);
    tracep->declBus(c+4537,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4542,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4657,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+4027,"i_wb_cyc", false,-1);
    tracep->declBit(c+4028,"i_wb_stb", false,-1);
    tracep->declBit(c+4029,"i_wb_we", false,-1);
    tracep->declBus(c+4070,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4031,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4032,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+382,"o_wb_ack", false,-1);
    tracep->declBus(c+383,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+224,"o_pf_cyc", false,-1);
    tracep->declBit(c+225,"o_pf_stb", false,-1);
    tracep->declBit(c+4543,"o_pf_we", false,-1);
    tracep->declBus(c+226,"o_pf_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4561,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+227,"i_pf_stall", false,-1);
    tracep->declBit(c+228,"i_pf_ack", false,-1);
    tracep->declBit(c+229,"i_pf_err", false,-1);
    tracep->declArray(c+230,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4466,"i_i2c_sda", false,-1);
    tracep->declBit(c+4467,"i_i2c_scl", false,-1);
    tracep->declBit(c+4468,"o_i2c_sda", false,-1);
    tracep->declBit(c+4469,"o_i2c_scl", false,-1);
    tracep->declBit(c+160,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+161,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+163,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+162,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+164,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4543,"i_sync_signal", false,-1);
    tracep->declBus(c+38,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4583,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4584,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4585,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4586,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4540,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4577,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4600,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4598,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4622,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4623,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4588,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4590,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4591,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4592,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4593,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4582,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4594,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4658,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4659,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4660,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4661,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4662,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4663,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+641,"cpu_reset", false,-1);
    tracep->declBit(c+4543,"cpu_clear_cache", false,-1);
    tracep->declBit(c+642,"cpu_new_pc", false,-1);
    tracep->declBus(c+643,"pf_jump_addr", false,-1, 30,0);
    tracep->declBit(c+644,"pf_valid", false,-1);
    tracep->declBit(c+645,"pf_ready", false,-1);
    tracep->declBus(c+646,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+647,"pf_insn_addr", false,-1, 30,0);
    tracep->declBit(c+648,"pf_illegal", false,-1);
    tracep->declBit(c+649,"half_valid", false,-1);
    tracep->declBit(c+650,"imm_cycle", false,-1);
    tracep->declBit(c+4071,"next_valid", false,-1);
    tracep->declBus(c+4072,"next_insn", false,-1, 7,0);
    tracep->declBit(c+651,"insn_ready", false,-1);
    tracep->declBit(c+652,"half_ready", false,-1);
    tracep->declBit(c+653,"i2c_abort", false,-1);
    tracep->declBit(c+654,"insn_valid", false,-1);
    tracep->declBus(c+655,"insn", false,-1, 11,0);
    tracep->declBus(c+656,"half_insn", false,-1, 3,0);
    tracep->declBit(c+657,"i2c_ckedge", false,-1);
    tracep->declBit(c+658,"i2c_stretch", false,-1);
    tracep->declBus(c+659,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+660,"ckcount", false,-1, 11,0);
    tracep->declBus(c+661,"abort_address", false,-1, 30,0);
    tracep->declBus(c+662,"jump_target", false,-1, 30,0);
    tracep->declBit(c+663,"r_wait", false,-1);
    tracep->declBit(c+664,"soft_halt_request", false,-1);
    tracep->declBit(c+641,"r_halted", false,-1);
    tracep->declBit(c+665,"r_err", false,-1);
    tracep->declBit(c+666,"r_aborted", false,-1);
    tracep->declBit(c+667,"r_manual", false,-1);
    tracep->declBit(c+668,"r_sda", false,-1);
    tracep->declBit(c+669,"r_scl", false,-1);
    tracep->declBit(c+670,"w_stopped", false,-1);
    tracep->declBit(c+671,"w_sda", false,-1);
    tracep->declBit(c+672,"w_scl", false,-1);
    tracep->declBit(c+4073,"bus_read", false,-1);
    tracep->declBit(c+4074,"bus_write", false,-1);
    tracep->declBit(c+4075,"bus_override", false,-1);
    tracep->declBit(c+4076,"bus_manual", false,-1);
    tracep->declBit(c+673,"ovw_ready", false,-1);
    tracep->declBit(c+4077,"bus_jump", false,-1);
    tracep->declBus(c+4070,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4070,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+4031,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+4032,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+383,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+674,"s_tvalid", false,-1);
    tracep->declBit(c+652,"s_tready", false,-1);
    tracep->declBus(c+675,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+39,"w_control", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+667,"manual", false,-1);
    tracep->declBit(c+669,"scl", false,-1);
    tracep->declBit(c+668,"sda", false,-1);
    tracep->declBit(c+676,"o_scl", false,-1);
    tracep->declBit(c+677,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+678,"mid_axis_pkt", false,-1);
    tracep->declBus(c+679,"r_channel", false,-1, 1,0);
    tracep->declBus(c+164,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4542,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+40,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+674,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+651,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+680,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+160,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+161,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+163,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+162,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+657,"i_ckedge", false,-1);
    tracep->declBit(c+658,"o_stretch", false,-1);
    tracep->declBit(c+4467,"i_scl", false,-1);
    tracep->declBit(c+4466,"i_sda", false,-1);
    tracep->declBit(c+672,"o_scl", false,-1);
    tracep->declBit(c+671,"o_sda", false,-1);
    tracep->declBit(c+653,"o_abort", false,-1);
    tracep->declBus(c+4588,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4589,"START", false,-1, 3,0);
    tracep->declBus(c+4590,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4591,"STOP", false,-1, 3,0);
    tracep->declBus(c+4592,"DATA", false,-1, 3,0);
    tracep->declBus(c+4593,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4582,"ACK", false,-1, 3,0);
    tracep->declBus(c+4594,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4658,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4659,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4660,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4661,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4662,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4580,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4537,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4625,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4631,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4626,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4628,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4664,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4665,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4666,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4667,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4580,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+681,"last_byte", false,-1);
    tracep->declBit(c+682,"dir", false,-1);
    tracep->declBit(c+683,"will_ack", false,-1);
    tracep->declBus(c+684,"state", false,-1, 3,0);
    tracep->declBus(c+685,"nbits", false,-1, 2,0);
    tracep->declBus(c+686,"sreg", false,-1, 7,0);
    tracep->declBit(c+687,"q_scl", false,-1);
    tracep->declBit(c+688,"q_sda", false,-1);
    tracep->declBit(c+689,"ck_scl", false,-1);
    tracep->declBit(c+690,"ck_sda", false,-1);
    tracep->declBit(c+691,"lst_scl", false,-1);
    tracep->declBit(c+692,"lst_sda", false,-1);
    tracep->declBit(c+693,"stop_bit", false,-1);
    tracep->declBit(c+694,"channel_busy", false,-1);
    tracep->declBit(c+4543,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4655,"AW", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+41,"i_reset", false,-1);
    tracep->declBit(c+642,"i_new_pc", false,-1);
    tracep->declBit(c+4543,"i_clear_cache", false,-1);
    tracep->declBit(c+645,"i_ready", false,-1);
    tracep->declBus(c+643,"i_pc", false,-1, 30,0);
    tracep->declBit(c+644,"o_valid", false,-1);
    tracep->declBit(c+648,"o_illegal", false,-1);
    tracep->declBus(c+646,"o_insn", false,-1, 7,0);
    tracep->declBus(c+647,"o_pc", false,-1, 30,0);
    tracep->declBit(c+224,"o_wb_cyc", false,-1);
    tracep->declBit(c+225,"o_wb_stb", false,-1);
    tracep->declBit(c+4543,"o_wb_we", false,-1);
    tracep->declBus(c+226,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+227,"i_wb_stall", false,-1);
    tracep->declBit(c+228,"i_wb_ack", false,-1);
    tracep->declBit(c+229,"i_wb_err", false,-1);
    tracep->declArray(c+230,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+695,"last_stb", false,-1);
    tracep->declBit(c+696,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+697,"cache_word", false,-1, 511,0);
    tracep->declBit(c+713,"cache_valid", false,-1);
    tracep->declBus(c+714,"inflight", false,-1, 1,0);
    tracep->declBit(c+715,"cache_illegal", false,-1);
    tracep->declBit(c+716,"r_valid", false,-1);
    tracep->declArray(c+717,"r_insn", false,-1, 511,0);
    tracep->declArray(c+733,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4619,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+716,"rg_valid", false,-1);
    tracep->declArray(c+717,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+749,"r_count", false,-1, 6,0);
    tracep->declBus(c+750,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4543,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4668,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4581,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4655,"NELM", false,-1, 31,0);
    tracep->declBus(c+4537,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4577,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4669,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4655,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4670,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4401,"i_data_clk", false,-1);
    tracep->declBit(c+4544,"i_ce", false,-1);
    tracep->declBit(c+666,"i_trigger", false,-1);
    tracep->declBus(c+42,"i_data", false,-1, 30,0);
    tracep->declBit(c+4401,"i_wb_clk", false,-1);
    tracep->declBit(c+4003,"i_wb_cyc", false,-1);
    tracep->declBit(c+4004,"i_wb_stb", false,-1);
    tracep->declBit(c+4005,"i_wb_we", false,-1);
    tracep->declBit(c+4078,"i_wb_addr", false,-1);
    tracep->declBus(c+4007,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4008,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+374,"o_wb_ack", false,-1);
    tracep->declBus(c+375,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+151,"o_interrupt", false,-1);
    tracep->declBit(c+4079,"write_stb", false,-1);
    tracep->declBit(c+4080,"read_from_data", false,-1);
    tracep->declBit(c+4081,"write_to_control", false,-1);
    tracep->declBus(c+375,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4401,"bus_clock", false,-1);
    tracep->declBit(c+751,"read_address", false,-1);
    tracep->declBus(c+4007,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+752,"raddr", false,-1, 9,0);
    tracep->declBus(c+753,"waddr", false,-1, 9,0);
    tracep->declBit(c+754,"bw_reset_request", false,-1);
    tracep->declBit(c+755,"bw_manual_trigger", false,-1);
    tracep->declBit(c+756,"bw_disable_trigger", false,-1);
    tracep->declBit(c+754,"bw_reset_complete", false,-1);
    tracep->declBus(c+757,"br_config", false,-1, 2,0);
    tracep->declBus(c+758,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+759,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+754,"dw_reset", false,-1);
    tracep->declBit(c+755,"dw_manual_trigger", false,-1);
    tracep->declBit(c+756,"dw_disable_trigger", false,-1);
    tracep->declBit(c+760,"dr_triggered", false,-1);
    tracep->declBit(c+761,"dr_primed", false,-1);
    tracep->declBit(c+762,"dw_trigger", false,-1);
    tracep->declBit(c+763,"dr_stopped", false,-1);
    tracep->declBus(c+4620,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+764,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+765,"dw_final_stop", false,-1);
    tracep->declBus(c+766,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+767,"qd_data", false,-1, 30,0);
    tracep->declBit(c+768,"dr_force_write", false,-1);
    tracep->declBit(c+769,"dr_run_timeout", false,-1);
    tracep->declBit(c+770,"new_data", false,-1);
    tracep->declBit(c+771,"dr_force_inhibit", false,-1);
    tracep->declBus(c+767,"w_data", false,-1, 30,0);
    tracep->declBit(c+772,"imm_adr", false,-1);
    tracep->declBit(c+773,"lst_adr", false,-1);
    tracep->declBus(c+774,"lst_val", false,-1, 30,0);
    tracep->declBus(c+775,"imm_val", false,-1, 30,0);
    tracep->declBit(c+776,"record_ce", false,-1);
    tracep->declBus(c+777,"r_data", false,-1, 31,0);
    tracep->declBit(c+765,"bw_stopped", false,-1);
    tracep->declBit(c+760,"bw_triggered", false,-1);
    tracep->declBit(c+761,"bw_primed", false,-1);
    tracep->declBit(c+374,"br_wb_ack", false,-1);
    tracep->declBit(c+778,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+4004,"bw_cyc_stb", false,-1);
    tracep->declBus(c+779,"this_addr", false,-1, 9,0);
    tracep->declBus(c+780,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+758,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4668,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+781,"br_level_interrupt", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4539,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4671,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4539,"TB", false,-1, 31,0);
    tracep->declBus(c+4588,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4589,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4590,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4591,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4592,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4593,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4582,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4594,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4658,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4659,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4575,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4482,"i_uart_rx", false,-1);
    tracep->declBit(c+177,"o_wr", false,-1);
    tracep->declBus(c+175,"o_data", false,-1, 7,0);
    tracep->declBus(c+4672,"half_baud", false,-1, 6,0);
    tracep->declBus(c+782,"state", false,-1, 3,0);
    tracep->declBus(c+783,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+784,"zero_baud_counter", false,-1);
    tracep->declBit(c+785,"q_uart", false,-1);
    tracep->declBit(c+786,"qq_uart", false,-1);
    tracep->declBit(c+787,"ck_uart", false,-1);
    tracep->declBus(c+788,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+789,"half_baud_time", false,-1);
    tracep->declBus(c+790,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4668,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4581,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4655,"NELM", false,-1, 31,0);
    tracep->declBus(c+4537,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4577,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4669,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4655,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4670,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4401,"i_data_clk", false,-1);
    tracep->declBit(c+4544,"i_ce", false,-1);
    tracep->declBit(c+3923,"i_trigger", false,-1);
    tracep->declBus(c+117,"i_data", false,-1, 30,0);
    tracep->declBit(c+4401,"i_wb_clk", false,-1);
    tracep->declBit(c+4009,"i_wb_cyc", false,-1);
    tracep->declBit(c+4010,"i_wb_stb", false,-1);
    tracep->declBit(c+4011,"i_wb_we", false,-1);
    tracep->declBit(c+4082,"i_wb_addr", false,-1);
    tracep->declBus(c+4013,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4014,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+376,"o_wb_ack", false,-1);
    tracep->declBus(c+377,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+145,"o_interrupt", false,-1);
    tracep->declBit(c+4083,"write_stb", false,-1);
    tracep->declBit(c+4084,"read_from_data", false,-1);
    tracep->declBit(c+4085,"write_to_control", false,-1);
    tracep->declBus(c+377,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4401,"bus_clock", false,-1);
    tracep->declBit(c+791,"read_address", false,-1);
    tracep->declBus(c+4013,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+792,"raddr", false,-1, 9,0);
    tracep->declBus(c+793,"waddr", false,-1, 9,0);
    tracep->declBit(c+794,"bw_reset_request", false,-1);
    tracep->declBit(c+795,"bw_manual_trigger", false,-1);
    tracep->declBit(c+796,"bw_disable_trigger", false,-1);
    tracep->declBit(c+794,"bw_reset_complete", false,-1);
    tracep->declBus(c+797,"br_config", false,-1, 2,0);
    tracep->declBus(c+798,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+799,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+794,"dw_reset", false,-1);
    tracep->declBit(c+795,"dw_manual_trigger", false,-1);
    tracep->declBit(c+796,"dw_disable_trigger", false,-1);
    tracep->declBit(c+800,"dr_triggered", false,-1);
    tracep->declBit(c+801,"dr_primed", false,-1);
    tracep->declBit(c+4378,"dw_trigger", false,-1);
    tracep->declBit(c+802,"dr_stopped", false,-1);
    tracep->declBus(c+4620,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+803,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+804,"dw_final_stop", false,-1);
    tracep->declBus(c+805,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+806,"qd_data", false,-1, 30,0);
    tracep->declBit(c+807,"dr_force_write", false,-1);
    tracep->declBit(c+808,"dr_run_timeout", false,-1);
    tracep->declBit(c+809,"new_data", false,-1);
    tracep->declBit(c+810,"dr_force_inhibit", false,-1);
    tracep->declBus(c+806,"w_data", false,-1, 30,0);
    tracep->declBit(c+811,"imm_adr", false,-1);
    tracep->declBit(c+812,"lst_adr", false,-1);
    tracep->declBus(c+813,"lst_val", false,-1, 30,0);
    tracep->declBus(c+814,"imm_val", false,-1, 30,0);
    tracep->declBit(c+815,"record_ce", false,-1);
    tracep->declBus(c+816,"r_data", false,-1, 31,0);
    tracep->declBit(c+804,"bw_stopped", false,-1);
    tracep->declBit(c+800,"bw_triggered", false,-1);
    tracep->declBit(c+801,"bw_primed", false,-1);
    tracep->declBit(c+376,"br_wb_ack", false,-1);
    tracep->declBit(c+817,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+4010,"bw_cyc_stb", false,-1);
    tracep->declBus(c+818,"this_addr", false,-1, 9,0);
    tracep->declBus(c+819,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+798,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4668,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+820,"br_level_interrupt", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4668,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4581,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4655,"NELM", false,-1, 31,0);
    tracep->declBus(c+4537,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4577,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4669,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4655,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4670,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4401,"i_data_clk", false,-1);
    tracep->declBit(c+4544,"i_ce", false,-1);
    tracep->declBit(c+3923,"i_trigger", false,-1);
    tracep->declBus(c+118,"i_data", false,-1, 30,0);
    tracep->declBit(c+4401,"i_wb_clk", false,-1);
    tracep->declBit(c+4015,"i_wb_cyc", false,-1);
    tracep->declBit(c+4016,"i_wb_stb", false,-1);
    tracep->declBit(c+4017,"i_wb_we", false,-1);
    tracep->declBit(c+4086,"i_wb_addr", false,-1);
    tracep->declBus(c+4019,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4020,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+378,"o_wb_ack", false,-1);
    tracep->declBus(c+379,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+146,"o_interrupt", false,-1);
    tracep->declBit(c+4087,"write_stb", false,-1);
    tracep->declBit(c+4088,"read_from_data", false,-1);
    tracep->declBit(c+4089,"write_to_control", false,-1);
    tracep->declBus(c+379,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4401,"bus_clock", false,-1);
    tracep->declBit(c+821,"read_address", false,-1);
    tracep->declBus(c+4019,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+822,"raddr", false,-1, 9,0);
    tracep->declBus(c+823,"waddr", false,-1, 9,0);
    tracep->declBit(c+824,"bw_reset_request", false,-1);
    tracep->declBit(c+825,"bw_manual_trigger", false,-1);
    tracep->declBit(c+826,"bw_disable_trigger", false,-1);
    tracep->declBit(c+824,"bw_reset_complete", false,-1);
    tracep->declBus(c+827,"br_config", false,-1, 2,0);
    tracep->declBus(c+828,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+829,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+824,"dw_reset", false,-1);
    tracep->declBit(c+825,"dw_manual_trigger", false,-1);
    tracep->declBit(c+826,"dw_disable_trigger", false,-1);
    tracep->declBit(c+830,"dr_triggered", false,-1);
    tracep->declBit(c+831,"dr_primed", false,-1);
    tracep->declBit(c+4379,"dw_trigger", false,-1);
    tracep->declBit(c+832,"dr_stopped", false,-1);
    tracep->declBus(c+4620,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+833,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+834,"dw_final_stop", false,-1);
    tracep->declBus(c+835,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+836,"qd_data", false,-1, 30,0);
    tracep->declBit(c+837,"dr_force_write", false,-1);
    tracep->declBit(c+838,"dr_run_timeout", false,-1);
    tracep->declBit(c+839,"new_data", false,-1);
    tracep->declBit(c+840,"dr_force_inhibit", false,-1);
    tracep->declBus(c+836,"w_data", false,-1, 30,0);
    tracep->declBit(c+841,"imm_adr", false,-1);
    tracep->declBit(c+842,"lst_adr", false,-1);
    tracep->declBus(c+843,"lst_val", false,-1, 30,0);
    tracep->declBus(c+844,"imm_val", false,-1, 30,0);
    tracep->declBit(c+845,"record_ce", false,-1);
    tracep->declBus(c+846,"r_data", false,-1, 31,0);
    tracep->declBit(c+834,"bw_stopped", false,-1);
    tracep->declBit(c+830,"bw_triggered", false,-1);
    tracep->declBit(c+831,"bw_primed", false,-1);
    tracep->declBit(c+378,"br_wb_ack", false,-1);
    tracep->declBit(c+847,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+4016,"bw_cyc_stb", false,-1);
    tracep->declBus(c+848,"this_addr", false,-1, 9,0);
    tracep->declBus(c+849,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+828,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4668,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+850,"br_level_interrupt", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4668,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4581,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4655,"NELM", false,-1, 31,0);
    tracep->declBus(c+4537,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4577,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4669,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4655,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4670,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4401,"i_data_clk", false,-1);
    tracep->declBit(c+4544,"i_ce", false,-1);
    tracep->declBit(c+3923,"i_trigger", false,-1);
    tracep->declBus(c+36,"i_data", false,-1, 30,0);
    tracep->declBit(c+4401,"i_wb_clk", false,-1);
    tracep->declBit(c+4021,"i_wb_cyc", false,-1);
    tracep->declBit(c+4022,"i_wb_stb", false,-1);
    tracep->declBit(c+4023,"i_wb_we", false,-1);
    tracep->declBit(c+4090,"i_wb_addr", false,-1);
    tracep->declBus(c+4025,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4026,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+380,"o_wb_ack", false,-1);
    tracep->declBus(c+381,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+152,"o_interrupt", false,-1);
    tracep->declBit(c+4091,"write_stb", false,-1);
    tracep->declBit(c+4092,"read_from_data", false,-1);
    tracep->declBit(c+4093,"write_to_control", false,-1);
    tracep->declBus(c+381,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4401,"bus_clock", false,-1);
    tracep->declBit(c+851,"read_address", false,-1);
    tracep->declBus(c+4025,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+852,"raddr", false,-1, 9,0);
    tracep->declBus(c+853,"waddr", false,-1, 9,0);
    tracep->declBit(c+854,"bw_reset_request", false,-1);
    tracep->declBit(c+855,"bw_manual_trigger", false,-1);
    tracep->declBit(c+856,"bw_disable_trigger", false,-1);
    tracep->declBit(c+854,"bw_reset_complete", false,-1);
    tracep->declBus(c+857,"br_config", false,-1, 2,0);
    tracep->declBus(c+858,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+859,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+854,"dw_reset", false,-1);
    tracep->declBit(c+855,"dw_manual_trigger", false,-1);
    tracep->declBit(c+856,"dw_disable_trigger", false,-1);
    tracep->declBit(c+860,"dr_triggered", false,-1);
    tracep->declBit(c+861,"dr_primed", false,-1);
    tracep->declBit(c+4380,"dw_trigger", false,-1);
    tracep->declBit(c+862,"dr_stopped", false,-1);
    tracep->declBus(c+4620,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+863,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+864,"dw_final_stop", false,-1);
    tracep->declBus(c+865,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+866,"qd_data", false,-1, 30,0);
    tracep->declBit(c+867,"dr_force_write", false,-1);
    tracep->declBit(c+868,"dr_run_timeout", false,-1);
    tracep->declBit(c+869,"new_data", false,-1);
    tracep->declBit(c+870,"dr_force_inhibit", false,-1);
    tracep->declBus(c+866,"w_data", false,-1, 30,0);
    tracep->declBit(c+871,"imm_adr", false,-1);
    tracep->declBit(c+872,"lst_adr", false,-1);
    tracep->declBus(c+873,"lst_val", false,-1, 30,0);
    tracep->declBus(c+874,"imm_val", false,-1, 30,0);
    tracep->declBit(c+875,"record_ce", false,-1);
    tracep->declBus(c+876,"r_data", false,-1, 31,0);
    tracep->declBit(c+864,"bw_stopped", false,-1);
    tracep->declBit(c+860,"bw_triggered", false,-1);
    tracep->declBit(c+861,"bw_primed", false,-1);
    tracep->declBit(c+380,"br_wb_ack", false,-1);
    tracep->declBit(c+877,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+4022,"bw_cyc_stb", false,-1);
    tracep->declBus(c+878,"this_addr", false,-1, 9,0);
    tracep->declBus(c+879,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+858,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4668,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+880,"br_level_interrupt", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4530,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4620,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4530,"NSW", false,-1, 31,0);
    tracep->declBus(c+4541,"NFF", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+3994,"i_wb_cyc", false,-1);
    tracep->declBit(c+4001,"i_wb_stb", false,-1);
    tracep->declBit(c+3996,"i_wb_we", false,-1);
    tracep->declBus(c+3997,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3998,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+372,"o_wb_ack", false,-1);
    tracep->declBus(c+373,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4487,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4488,"i_btn", false,-1, 4,0);
    tracep->declBus(c+181,"o_led", false,-1, 7,0);
    tracep->declBit(c+154,"o_int", false,-1);
    tracep->declBit(c+881,"led_demo", false,-1);
    tracep->declBus(c+882,"r_led", false,-1, 7,0);
    tracep->declBus(c+883,"w_btn", false,-1, 7,0);
    tracep->declBus(c+884,"bounced", false,-1, 7,0);
    tracep->declBus(c+885,"r_sw", false,-1, 7,0);
    tracep->declBit(c+886,"sw_int", false,-1);
    tracep->declBit(c+887,"btn_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+4094,"next_btn", false,-1, 4,0);
    tracep->declBus(c+888,"s_btn", false,-1, 4,0);
    tracep->declBus(c+889,"r_btn", false,-1, 4,0);
    tracep->declBus(c+890,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+887,"r_btn_int", false,-1);
    tracep->declBit(c+4095,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+891,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+885,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4530,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4535,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBus(c+884,"o_leds", false,-1, 7,0);
    tracep->declBus(c+892,"led_owner", false,-1, 7,0);
    tracep->declBit(c+893,"led_dir", false,-1);
    tracep->declBus(c+894,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+895,"led_clk", false,-1);
    tracep->declBus(c+896,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+897,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+898,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+899,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+900,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+901,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+902,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+903,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+904,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4534,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4581,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4624,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4624,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4537,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4536,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4529,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4528,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4537,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4580,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4577,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4535,"PAW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+37,"i_reset", false,-1);
    tracep->declBit(c+246,"o_wb_cyc", false,-1);
    tracep->declBit(c+247,"o_wb_stb", false,-1);
    tracep->declBit(c+248,"o_wb_we", false,-1);
    tracep->declBus(c+249,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+250,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+266,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+268,"i_wb_stall", false,-1);
    tracep->declBit(c+269,"i_wb_ack", false,-1);
    tracep->declArray(c+271,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+270,"i_wb_err", false,-1);
    tracep->declBus(c+173,"i_ext_int", false,-1, 15,0);
    tracep->declBit(c+174,"o_ext_int", false,-1);
    tracep->declBit(c+43,"i_dbg_cyc", false,-1);
    tracep->declBit(c+44,"i_dbg_stb", false,-1);
    tracep->declBit(c+45,"i_dbg_we", false,-1);
    tracep->declBus(c+46,"i_dbg_addr", false,-1, 6,0);
    tracep->declBus(c+47,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4497,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+171,"o_dbg_stall", false,-1);
    tracep->declBit(c+172,"o_dbg_ack", false,-1);
    tracep->declBus(c+418,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4542,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4478,"o_prof_stb", false,-1);
    tracep->declBus(c+4479,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4480,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4673,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4579,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4674,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4675,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4676,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4677,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4678,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4679,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4680,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4681,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4682,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4683,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4684,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4685,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4686,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4687,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4688,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4689,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4690,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4542,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4541,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4529,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4532,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4620,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4535,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4583,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4584,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4585,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+905,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+906,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+907,"ctri_int", false,-1);
    tracep->declBit(c+908,"tma_int", false,-1);
    tracep->declBit(c+909,"tmb_int", false,-1);
    tracep->declBit(c+910,"tmc_int", false,-1);
    tracep->declBit(c+911,"jif_int", false,-1);
    tracep->declBit(c+912,"dmac_int", false,-1);
    tracep->declBit(c+913,"mtc_int", false,-1);
    tracep->declBit(c+914,"moc_int", false,-1);
    tracep->declBit(c+915,"mpc_int", false,-1);
    tracep->declBit(c+916,"mic_int", false,-1);
    tracep->declBit(c+917,"utc_int", false,-1);
    tracep->declBit(c+918,"uoc_int", false,-1);
    tracep->declBit(c+919,"upc_int", false,-1);
    tracep->declBit(c+920,"uic_int", false,-1);
    tracep->declBus(c+921,"actr_data", false,-1, 31,0);
    tracep->declBit(c+922,"actr_ack", false,-1);
    tracep->declBit(c+4543,"actr_stall", false,-1);
    tracep->declBit(c+923,"cpu_clken", false,-1);
    tracep->declBit(c+924,"sys_cyc", false,-1);
    tracep->declBit(c+925,"sys_stb", false,-1);
    tracep->declBit(c+926,"sys_we", false,-1);
    tracep->declBus(c+927,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+928,"sys_data", false,-1, 31,0);
    tracep->declBus(c+929,"cpu_addr", false,-1, 24,0);
    tracep->declBus(c+930,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+931,"sys_ack", false,-1);
    tracep->declBit(c+4543,"sys_stall", false,-1);
    tracep->declBit(c+922,"sel_counter", false,-1);
    tracep->declBit(c+932,"sel_timer", false,-1);
    tracep->declBit(c+933,"sel_pic", false,-1);
    tracep->declBit(c+934,"sel_apic", false,-1);
    tracep->declBit(c+935,"sel_watchdog", false,-1);
    tracep->declBit(c+936,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+937,"sel_dmac", false,-1);
    tracep->declBit(c+938,"sel_mmus", false,-1);
    tracep->declBit(c+939,"dbg_cyc", false,-1);
    tracep->declBit(c+940,"dbg_stb", false,-1);
    tracep->declBit(c+941,"dbg_we", false,-1);
    tracep->declBus(c+942,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+943,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+944,"dbg_ack", false,-1);
    tracep->declBit(c+945,"dbg_stall", false,-1);
    tracep->declBus(c+946,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+947,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+948,"no_dbg_err", false,-1);
    tracep->declBit(c+949,"cpu_break", false,-1);
    tracep->declBit(c+950,"dbg_cmd_write", false,-1);
    tracep->declBit(c+951,"dbg_cpu_write", false,-1);
    tracep->declBit(c+952,"dbg_cpu_read", false,-1);
    tracep->declBus(c+943,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+947,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+953,"reset_hold", false,-1);
    tracep->declBit(c+954,"halt_on_fault", false,-1);
    tracep->declBit(c+954,"dbg_catch", false,-1);
    tracep->declBit(c+955,"reset_request", false,-1);
    tracep->declBit(c+956,"release_request", false,-1);
    tracep->declBit(c+957,"halt_request", false,-1);
    tracep->declBit(c+958,"step_request", false,-1);
    tracep->declBit(c+959,"clear_cache_request", false,-1);
    tracep->declBit(c+960,"cmd_reset", false,-1);
    tracep->declBit(c+961,"cmd_halt", false,-1);
    tracep->declBit(c+962,"cmd_step", false,-1);
    tracep->declBit(c+963,"cmd_clear_cache", false,-1);
    tracep->declBit(c+964,"cmd_write", false,-1);
    tracep->declBit(c+965,"cmd_read", false,-1);
    tracep->declBus(c+966,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+967,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+968,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+960,"cpu_reset", false,-1);
    tracep->declBit(c+961,"cpu_halt", false,-1);
    tracep->declBit(c+969,"cpu_has_halted", false,-1);
    tracep->declBit(c+970,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+971,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+972,"cpu_gie", false,-1);
    tracep->declBit(c+4543,"wdt_stall", false,-1);
    tracep->declBit(c+973,"wdt_ack", false,-1);
    tracep->declBit(c+974,"wdt_reset", false,-1);
    tracep->declBus(c+975,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+976,"wdbus_ack", false,-1);
    tracep->declBus(c+977,"r_wdbus_data", false,-1, 24,0);
    tracep->declBus(c+978,"pic_data", false,-1, 31,0);
    tracep->declBus(c+979,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+980,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+981,"wdbus_int", false,-1);
    tracep->declBit(c+48,"cpu_op_stall", false,-1);
    tracep->declBit(c+982,"cpu_pf_stall", false,-1);
    tracep->declBit(c+983,"cpu_i_count", false,-1);
    tracep->declBit(c+984,"dmac_stb", false,-1);
    tracep->declBit(c+985,"dc_err", false,-1);
    tracep->declBus(c+986,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4543,"dmac_stall", false,-1);
    tracep->declBit(c+987,"dmac_ack", false,-1);
    tracep->declBit(c+988,"dc_cyc", false,-1);
    tracep->declBit(c+989,"dc_stb", false,-1);
    tracep->declBit(c+990,"dc_we", false,-1);
    tracep->declBit(c+991,"dc_stall", false,-1);
    tracep->declBit(c+992,"dc_ack", false,-1);
    tracep->declBus(c+993,"dc_addr", false,-1, 24,0);
    tracep->declArray(c+994,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1010,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1012,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1013,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1014,"ctri_sel", false,-1);
    tracep->declBit(c+4543,"ctri_stall", false,-1);
    tracep->declBit(c+1014,"ctri_ack", false,-1);
    tracep->declBus(c+1015,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4543,"tma_stall", false,-1);
    tracep->declBit(c+1016,"tma_ack", false,-1);
    tracep->declBit(c+4543,"tmb_stall", false,-1);
    tracep->declBit(c+1017,"tmb_ack", false,-1);
    tracep->declBit(c+4543,"tmc_stall", false,-1);
    tracep->declBit(c+1018,"tmc_ack", false,-1);
    tracep->declBit(c+4543,"jif_stall", false,-1);
    tracep->declBit(c+1019,"jif_ack", false,-1);
    tracep->declBus(c+1020,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1021,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1022,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1023,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4543,"pic_stall", false,-1);
    tracep->declBit(c+1024,"pic_ack", false,-1);
    tracep->declBit(c+1025,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1026,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1027,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1028,"cpu_we", false,-1);
    tracep->declArray(c+1029,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1045,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1045,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1047,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1063,"cpu_stall", false,-1);
    tracep->declBit(c+1064,"pic_interrupt", false,-1);
    tracep->declBit(c+1065,"cpu_ack", false,-1);
    tracep->declBit(c+1066,"cpu_err", false,-1);
    tracep->declBus(c+1067,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+268,"ext_stall", false,-1);
    tracep->declBit(c+269,"ext_ack", false,-1);
    tracep->declBit(c+1012,"mmu_cyc", false,-1);
    tracep->declBit(c+1025,"mmu_stb", false,-1);
    tracep->declBit(c+1028,"mmu_we", false,-1);
    tracep->declBit(c+1068,"mmu_stall", false,-1);
    tracep->declBit(c+1069,"mmu_ack", false,-1);
    tracep->declBit(c+1070,"mmu_err", false,-1);
    tracep->declBit(c+4543,"mmus_stall", false,-1);
    tracep->declBit(c+1071,"mmus_ack", false,-1);
    tracep->declBus(c+929,"mmu_addr", false,-1, 24,0);
    tracep->declArray(c+1029,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+271,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4542,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4543,"cpu_miss", false,-1);
    tracep->declBit(c+1068,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1069,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+271,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4543,"pf_return_stb", false,-1);
    tracep->declBit(c+4543,"pf_return_we", false,-1);
    tracep->declBit(c+4543,"pf_return_cachable", false,-1);
    tracep->declBus(c+4691,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4691,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+246,"ext_cyc", false,-1);
    tracep->declBit(c+247,"ext_stb", false,-1);
    tracep->declBit(c+248,"ext_we", false,-1);
    tracep->declBit(c+1072,"ext_err", false,-1);
    tracep->declBus(c+249,"ext_addr", false,-1, 24,0);
    tracep->declArray(c+250,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+266,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+271,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1073,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1074,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1075,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1076,"last_sys_stb", false,-1);
    tracep->declBit(c+1077,"cmd_read_ack", false,-1);
    tracep->declBit(c+1071,"r_mmus_ack", false,-1);
    tracep->declBit(c+1078,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1079,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1080,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4543,"mtc_stall", false,-1);
    tracep->declBit(c+1081,"mtc_ack", false,-1);
    tracep->declBit(c+4543,"moc_stall", false,-1);
    tracep->declBit(c+1082,"moc_ack", false,-1);
    tracep->declBit(c+4543,"mpc_stall", false,-1);
    tracep->declBit(c+1083,"mpc_ack", false,-1);
    tracep->declBit(c+4543,"mic_stall", false,-1);
    tracep->declBit(c+1084,"mic_ack", false,-1);
    tracep->declBit(c+4543,"utc_stall", false,-1);
    tracep->declBit(c+1085,"utc_ack", false,-1);
    tracep->declBit(c+4543,"uoc_stall", false,-1);
    tracep->declBit(c+1086,"uoc_ack", false,-1);
    tracep->declBit(c+4543,"upc_stall", false,-1);
    tracep->declBit(c+1087,"upc_ack", false,-1);
    tracep->declBit(c+4543,"uic_stall", false,-1);
    tracep->declBit(c+1088,"uic_ack", false,-1);
    tracep->declBus(c+1089,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1090,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1091,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1092,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1093,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1094,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1095,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1096,"uic_data", false,-1, 31,0);
    tracep->declBus(c+921,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+983,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1097,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1084,"o_wb_ack", false,-1);
    tracep->declBus(c+1092,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+916,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+48,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1098,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1082,"o_wb_ack", false,-1);
    tracep->declBus(c+1090,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+914,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+982,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1099,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1083,"o_wb_ack", false,-1);
    tracep->declBus(c+1091,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+915,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1101,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1081,"o_wb_ack", false,-1);
    tracep->declBus(c+1089,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+913,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+1102,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1103,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1088,"o_wb_ack", false,-1);
    tracep->declBus(c+1096,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+920,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+49,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1104,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1086,"o_wb_ack", false,-1);
    tracep->declBus(c+1094,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+918,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+1105,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1106,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1087,"o_wb_ack", false,-1);
    tracep->declBus(c+1095,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+919,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4543,"i_reset", false,-1);
    tracep->declBit(c+1107,"i_event", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1108,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1085,"o_wb_ack", false,-1);
    tracep->declBus(c+1093,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+917,"o_int", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4543,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4539,"AW", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+37,"i_reset", false,-1);
    tracep->declBit(c+43,"i_wb_cyc", false,-1);
    tracep->declBit(c+44,"i_wb_stb", false,-1);
    tracep->declBit(c+45,"i_wb_we", false,-1);
    tracep->declBus(c+46,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+47,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+171,"o_wb_stall", false,-1);
    tracep->declBit(c+172,"o_wb_ack", false,-1);
    tracep->declBus(c+418,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+948,"o_wb_err", false,-1);
    tracep->declBit(c+939,"o_dly_cyc", false,-1);
    tracep->declBit(c+940,"o_dly_stb", false,-1);
    tracep->declBit(c+941,"o_dly_we", false,-1);
    tracep->declBus(c+942,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+943,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+947,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+945,"i_dly_stall", false,-1);
    tracep->declBit(c+944,"i_dly_ack", false,-1);
    tracep->declBus(c+946,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4543,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+171,"r_stb", false,-1);
    tracep->declBit(c+1109,"r_we", false,-1);
    tracep->declBus(c+1110,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1111,"r_data", false,-1, 31,0);
    tracep->declBus(c+1112,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4528,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4655,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4581,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+924,"i_swb_cyc", false,-1);
    tracep->declBit(c+984,"i_swb_stb", false,-1);
    tracep->declBit(c+926,"i_swb_we", false,-1);
    tracep->declBus(c+1113,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+928,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_swb_stall", false,-1);
    tracep->declBit(c+987,"o_swb_ack", false,-1);
    tracep->declBus(c+986,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+988,"o_mwb_cyc", false,-1);
    tracep->declBit(c+989,"o_mwb_stb", false,-1);
    tracep->declBit(c+990,"o_mwb_we", false,-1);
    tracep->declBus(c+993,"o_mwb_addr", false,-1, 24,0);
    tracep->declArray(c+994,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1010,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+991,"i_mwb_stall", false,-1);
    tracep->declBit(c+992,"i_mwb_ack", false,-1);
    tracep->declArray(c+271,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+985,"i_mwb_err", false,-1);
    tracep->declBus(c+1013,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+912,"o_interrupt", false,-1);
    tracep->declBus(c+4692,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4532,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1114,"dma_request", false,-1);
    tracep->declBit(c+1115,"dma_abort", false,-1);
    tracep->declBit(c+1116,"dma_busy", false,-1);
    tracep->declBit(c+1117,"dma_err", false,-1);
    tracep->declBus(c+1118,"dma_src", false,-1, 30,0);
    tracep->declBus(c+1119,"dma_dst", false,-1, 30,0);
    tracep->declBus(c+1120,"read_addr", false,-1, 30,0);
    tracep->declBus(c+1121,"write_addr", false,-1, 30,0);
    tracep->declBus(c+1122,"dma_length", false,-1, 30,0);
    tracep->declBus(c+1123,"remaining_len", false,-1, 30,0);
    tracep->declBus(c+1124,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1125,"dma_trigger", false,-1);
    tracep->declBit(c+1126,"mm2s_request", false,-1);
    tracep->declBit(c+1127,"s2mm_request", false,-1);
    tracep->declBit(c+1128,"mm2s_busy", false,-1);
    tracep->declBit(c+1129,"s2mm_busy", false,-1);
    tracep->declBit(c+1130,"mm2s_err", false,-1);
    tracep->declBit(c+1131,"s2mm_err", false,-1);
    tracep->declBit(c+1132,"mm2s_inc", false,-1);
    tracep->declBit(c+1133,"s2mm_inc", false,-1);
    tracep->declBus(c+1134,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1135,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1136,"mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1137,"s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1138,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1138,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1139,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1140,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4543,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1141,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1142,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1143,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1144,"mm2s_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1145,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1147,"mm2s_valid", false,-1);
    tracep->declBit(c+1148,"mm2s_ready", false,-1);
    tracep->declBit(c+1149,"mm2s_last", false,-1);
    tracep->declArray(c+1150,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1166,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1167,"rx_valid", false,-1);
    tracep->declBit(c+1168,"rx_ready", false,-1);
    tracep->declBit(c+1169,"rx_last", false,-1);
    tracep->declArray(c+1170,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1186,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1187,"tx_valid", false,-1);
    tracep->declBit(c+1188,"tx_ready", false,-1);
    tracep->declBit(c+1189,"tx_last", false,-1);
    tracep->declArray(c+1190,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1206,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1207,"sfifo_full", false,-1);
    tracep->declBit(c+1208,"sfifo_empty", false,-1);
    tracep->declBus(c+1209,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1210,"s2mm_valid", false,-1);
    tracep->declBit(c+1211,"s2mm_ready", false,-1);
    tracep->declBit(c+1212,"s2mm_last", false,-1);
    tracep->declArray(c+1213,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1229,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1230,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1231,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4544,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1232,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1233,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1234,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1235,"s2mm_wr_addr", false,-1, 24,0);
    tracep->declArray(c+994,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1236,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+988,"wb_cyc", false,-1);
    tracep->declBit(c+989,"wb_stb", false,-1);
    tracep->declBit(c+990,"wb_we", false,-1);
    tracep->declBit(c+991,"wb_stall", false,-1);
    tracep->declBit(c+992,"wb_ack", false,-1);
    tracep->declBit(c+985,"wb_err", false,-1);
    tracep->declBus(c+993,"wb_addr", false,-1, 24,0);
    tracep->declArray(c+994,"wb_data", false,-1, 511,0);
    tracep->declArray(c+271,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1010,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declArray(c+4693,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4580,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1139,"i_a_cyc", false,-1);
    tracep->declBit(c+1140,"i_a_stb", false,-1);
    tracep->declBit(c+4543,"i_a_we", false,-1);
    tracep->declBus(c+1144,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+994,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1145,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1141,"o_a_stall", false,-1);
    tracep->declBit(c+1142,"o_a_ack", false,-1);
    tracep->declBit(c+1143,"o_a_err", false,-1);
    tracep->declBit(c+1230,"i_b_cyc", false,-1);
    tracep->declBit(c+1231,"i_b_stb", false,-1);
    tracep->declBit(c+4544,"i_b_we", false,-1);
    tracep->declBus(c+1235,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+994,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1236,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1232,"o_b_stall", false,-1);
    tracep->declBit(c+1233,"o_b_ack", false,-1);
    tracep->declBit(c+1234,"o_b_err", false,-1);
    tracep->declBit(c+988,"o_cyc", false,-1);
    tracep->declBit(c+989,"o_stb", false,-1);
    tracep->declBit(c+990,"o_we", false,-1);
    tracep->declBus(c+993,"o_adr", false,-1, 24,0);
    tracep->declArray(c+994,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1010,"o_sel", false,-1, 63,0);
    tracep->declBit(c+991,"i_stall", false,-1);
    tracep->declBit(c+992,"i_ack", false,-1);
    tracep->declBit(c+985,"i_err", false,-1);
    tracep->declBit(c+1238,"r_a_owner", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1239,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4528,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4581,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4655,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4696,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4655,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+924,"i_cyc", false,-1);
    tracep->declBit(c+984,"i_stb", false,-1);
    tracep->declBit(c+926,"i_we", false,-1);
    tracep->declBus(c+1113,"i_addr", false,-1, 1,0);
    tracep->declBus(c+928,"i_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_stall", false,-1);
    tracep->declBit(c+987,"o_ack", false,-1);
    tracep->declBus(c+986,"o_data", false,-1, 31,0);
    tracep->declBit(c+1114,"o_dma_request", false,-1);
    tracep->declBit(c+1115,"o_dma_abort", false,-1);
    tracep->declBit(c+1116,"i_dma_busy", false,-1);
    tracep->declBit(c+1117,"i_dma_err", false,-1);
    tracep->declBus(c+1118,"o_src_addr", false,-1, 30,0);
    tracep->declBus(c+1119,"o_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1122,"o_length", false,-1, 30,0);
    tracep->declBus(c+1124,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1132,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1133,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1134,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1135,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1125,"o_trigger", false,-1);
    tracep->declBus(c+1120,"i_current_src", false,-1, 30,0);
    tracep->declBus(c+1121,"i_current_dst", false,-1, 30,0);
    tracep->declBus(c+1123,"i_remaining_len", false,-1, 30,0);
    tracep->declBus(c+1013,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+912,"o_interrupt", false,-1);
    tracep->declBit(c+1240,"int_trigger", false,-1);
    tracep->declBit(c+1241,"r_err", false,-1);
    tracep->declBit(c+1242,"r_zero_len", false,-1);
    tracep->declBit(c+1243,"r_busy", false,-1);
    tracep->declBus(c+1244,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1245,"next_src", false,-1, 31,0);
    tracep->declBus(c+1246,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1247,"next_len", false,-1, 31,0);
    tracep->declBus(c+1248,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1249,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4543,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4543,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4655,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4528,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1115,"i_soft_reset", false,-1);
    tracep->declBit(c+1114,"i_dma_request", false,-1);
    tracep->declBit(c+1116,"o_dma_busy", false,-1);
    tracep->declBit(c+1117,"o_dma_err", false,-1);
    tracep->declBus(c+1118,"i_src_addr", false,-1, 30,0);
    tracep->declBus(c+1119,"i_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1122,"i_length", false,-1, 30,0);
    tracep->declBus(c+1124,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1123,"o_remaining_len", false,-1, 30,0);
    tracep->declBit(c+1125,"i_trigger", false,-1);
    tracep->declBit(c+1126,"o_mm2s_request", false,-1);
    tracep->declBit(c+1128,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1130,"i_mm2s_err", false,-1);
    tracep->declBit(c+1132,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1136,"o_mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1138,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1127,"o_s2mm_request", false,-1);
    tracep->declBit(c+1129,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1131,"i_s2mm_err", false,-1);
    tracep->declBit(c+1133,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1137,"o_s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1138,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4583,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4584,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4585,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4586,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1123,"r_length", false,-1, 30,0);
    tracep->declBus(c+1138,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1250,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4528,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+1251,"i_reset", false,-1);
    tracep->declBit(c+1126,"i_request", false,-1);
    tracep->declBit(c+1128,"o_busy", false,-1);
    tracep->declBit(c+1130,"o_err", false,-1);
    tracep->declBit(c+1132,"i_inc", false,-1);
    tracep->declBus(c+1134,"i_size", false,-1, 1,0);
    tracep->declBus(c+1138,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1136,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1139,"o_rd_cyc", false,-1);
    tracep->declBit(c+1140,"o_rd_stb", false,-1);
    tracep->declBit(c+4543,"o_rd_we", false,-1);
    tracep->declBus(c+1144,"o_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1145,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1141,"i_rd_stall", false,-1);
    tracep->declBit(c+1142,"i_rd_ack", false,-1);
    tracep->declArray(c+271,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1143,"i_rd_err", false,-1);
    tracep->declBit(c+1147,"M_VALID", false,-1);
    tracep->declBit(c+1148,"M_READY", false,-1);
    tracep->declArray(c+1150,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1166,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1149,"M_LAST", false,-1);
    tracep->declBus(c+4586,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4585,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4584,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4583,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1252,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1253,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1254,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1255,"first_size", false,-1, 6,0);
    tracep->declBus(c+1256,"next_addr", false,-1, 30,0);
    tracep->declBus(c+1257,"last_request_addr", false,-1, 30,0);
    tracep->declBus(c+1258,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1259,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1260,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1262,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1264,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1266,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1268,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1269,"fill", false,-1, 7,0);
    tracep->declBus(c+1270,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1147,"m_valid", false,-1);
    tracep->declBit(c+1149,"m_last", false,-1);
    tracep->declArray(c+1150,"sreg", false,-1, 511,0);
    tracep->declBus(c+1166,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1271,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1272,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1273,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1274,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1290,"r_inc", false,-1);
    tracep->declBus(c+1291,"r_size", false,-1, 1,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1115,"i_soft_reset", false,-1);
    tracep->declBit(c+1147,"S_VALID", false,-1);
    tracep->declBit(c+1148,"S_READY", false,-1);
    tracep->declArray(c+1150,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1166,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1149,"S_LAST", false,-1);
    tracep->declBit(c+1167,"M_VALID", false,-1);
    tracep->declBit(c+1168,"M_READY", false,-1);
    tracep->declArray(c+1170,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1186,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1169,"M_LAST", false,-1);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1292,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1324,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1325,"fill", false,-1, 7,0);
    tracep->declBit(c+1167,"m_valid", false,-1);
    tracep->declBit(c+1169,"m_last", false,-1);
    tracep->declBit(c+1326,"next_last", false,-1);
    tracep->declBit(c+1327,"r_last", false,-1);
    tracep->declBit(c+1328,"r_full", false,-1);
    tracep->declBus(c+1186,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1329,"shift", false,-1, 5,0);
    tracep->declArray(c+1330,"s_data", false,-1, 511,0);
    tracep->declBus(c+4697,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4528,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+1251,"i_reset", false,-1);
    tracep->declBit(c+1127,"i_request", false,-1);
    tracep->declBit(c+1129,"o_busy", false,-1);
    tracep->declBit(c+1131,"o_err", false,-1);
    tracep->declBit(c+1133,"i_inc", false,-1);
    tracep->declBus(c+1135,"i_size", false,-1, 1,0);
    tracep->declBus(c+1137,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1210,"S_VALID", false,-1);
    tracep->declBit(c+1211,"S_READY", false,-1);
    tracep->declArray(c+1213,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1229,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1212,"S_LAST", false,-1);
    tracep->declBit(c+1230,"o_wr_cyc", false,-1);
    tracep->declBit(c+1231,"o_wr_stb", false,-1);
    tracep->declBit(c+4544,"o_wr_we", false,-1);
    tracep->declBus(c+1235,"o_wr_addr", false,-1, 24,0);
    tracep->declArray(c+994,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1236,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1232,"i_wr_stall", false,-1);
    tracep->declBit(c+1233,"i_wr_ack", false,-1);
    tracep->declArray(c+271,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1234,"i_wr_err", false,-1);
    tracep->declBus(c+4586,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4585,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4584,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4583,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+1346,"r_inc", false,-1);
    tracep->declBus(c+1347,"r_size", false,-1, 1,0);
    tracep->declBus(c+1348,"next_addr", false,-1, 31,0);
    tracep->declBus(c+1349,"subaddr", false,-1, 5,0);
    tracep->declArray(c+1350,"next_data", false,-1, 1023,0);
    tracep->declArray(c+1382,"r_data", false,-1, 511,0);
    tracep->declArray(c+1398,"next_sel", false,-1, 127,0);
    tracep->declArray(c+1402,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+1406,"r_sel", false,-1, 63,0);
    tracep->declBit(c+1408,"r_last", false,-1);
    tracep->declBus(c+1409,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+1410,"wb_pipeline_full", false,-1);
    tracep->declBit(c+1411,"addr_overflow", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4692,"BW", false,-1, 31,0);
    tracep->declBus(c+4532,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+1251,"i_reset", false,-1);
    tracep->declBit(c+1167,"i_wr", false,-1);
    tracep->declArray(c+1412,"i_data", false,-1, 519,0);
    tracep->declBit(c+1207,"o_full", false,-1);
    tracep->declBus(c+1209,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1188,"i_rd", false,-1);
    tracep->declArray(c+1429,"o_data", false,-1, 519,0);
    tracep->declBit(c+1208,"o_empty", false,-1);
    tracep->declBus(c+4536,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1207,"r_full", false,-1);
    tracep->declBit(c+1208,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1446+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+1718,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+1719,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1720,"w_wr", false,-1);
    tracep->declBit(c+1721,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1115,"i_soft_reset", false,-1);
    tracep->declBus(c+1135,"i_size", false,-1, 1,0);
    tracep->declBit(c+1187,"S_VALID", false,-1);
    tracep->declBit(c+1188,"S_READY", false,-1);
    tracep->declArray(c+1190,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1206,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1189,"S_LAST", false,-1);
    tracep->declBit(c+1210,"M_VALID", false,-1);
    tracep->declBit(c+1211,"M_READY", false,-1);
    tracep->declArray(c+1213,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1229,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1212,"M_LAST", false,-1);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4586,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4585,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4584,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4583,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1210,"m_valid", false,-1);
    tracep->declBit(c+1212,"m_last", false,-1);
    tracep->declBit(c+1722,"r_last", false,-1);
    tracep->declBit(c+1723,"r_next", false,-1);
    tracep->declArray(c+1213,"sreg", false,-1, 511,0);
    tracep->declBus(c+1229,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1724,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+954,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+1725,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+953,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4698,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1024,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1024,"o_wb_ack", false,-1);
    tracep->declBus(c+978,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+905,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1064,"o_interrupt", false,-1);
    tracep->declBus(c+1726,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1727,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1728,"r_mie", false,-1);
    tracep->declBit(c+1729,"w_any", false,-1);
    tracep->declBit(c+1730,"wb_write", false,-1);
    tracep->declBit(c+1731,"enable_ints", false,-1);
    tracep->declBit(c+1732,"disable_ints", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4698,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+1014,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1014,"o_wb_ack", false,-1);
    tracep->declBus(c+1015,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+906,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+907,"o_interrupt", false,-1);
    tracep->declBus(c+1733,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1734,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1735,"r_mie", false,-1);
    tracep->declBit(c+1736,"w_any", false,-1);
    tracep->declBit(c+1737,"wb_write", false,-1);
    tracep->declBit(c+1738,"enable_ints", false,-1);
    tracep->declBit(c+1739,"disable_ints", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+1012,"i_a_cyc", false,-1);
    tracep->declBit(c+1025,"i_a_stb", false,-1);
    tracep->declBit(c+1028,"i_a_we", false,-1);
    tracep->declBus(c+929,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1029,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1045,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1068,"o_a_stall", false,-1);
    tracep->declBit(c+1069,"o_a_ack", false,-1);
    tracep->declBit(c+1070,"o_a_err", false,-1);
    tracep->declBit(c+988,"i_b_cyc", false,-1);
    tracep->declBit(c+989,"i_b_stb", false,-1);
    tracep->declBit(c+990,"i_b_we", false,-1);
    tracep->declBus(c+993,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+994,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1010,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+991,"o_b_stall", false,-1);
    tracep->declBit(c+992,"o_b_ack", false,-1);
    tracep->declBit(c+985,"o_b_err", false,-1);
    tracep->declBit(c+246,"o_cyc", false,-1);
    tracep->declBit(c+247,"o_stb", false,-1);
    tracep->declBit(c+248,"o_we", false,-1);
    tracep->declBus(c+249,"o_adr", false,-1, 24,0);
    tracep->declArray(c+250,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+266,"o_sel", false,-1, 63,0);
    tracep->declBit(c+268,"i_stall", false,-1);
    tracep->declBit(c+269,"i_ack", false,-1);
    tracep->declBit(c+1072,"i_err", false,-1);
    tracep->declBit(c+1740,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4534,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4535,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4624,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4581,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4529,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4580,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4624,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4537,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1064,"i_interrupt", false,-1);
    tracep->declBit(c+923,"i_cpu_clken", false,-1);
    tracep->declBit(c+961,"i_halt", false,-1);
    tracep->declBit(c+963,"i_clear_cache", false,-1);
    tracep->declBus(c+966,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+964,"i_dbg_we", false,-1);
    tracep->declBus(c+967,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1741,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+970,"o_dbg_stall", false,-1);
    tracep->declBit(c+969,"o_halted", false,-1);
    tracep->declBus(c+1067,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+968,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+949,"o_break", false,-1);
    tracep->declBit(c+1012,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1025,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1026,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1027,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1028,"o_wb_we", false,-1);
    tracep->declBus(c+929,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1029,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1045,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1063,"i_wb_stall", false,-1);
    tracep->declBit(c+1065,"i_wb_ack", false,-1);
    tracep->declArray(c+1047,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1066,"i_wb_err", false,-1);
    tracep->declBit(c+48,"o_op_stall", false,-1);
    tracep->declBit(c+982,"o_pf_stall", false,-1);
    tracep->declBit(c+983,"o_i_count", false,-1);
    tracep->declBus(c+4542,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4478,"o_prof_stb", false,-1);
    tracep->declBus(c+4479,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4480,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4581,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4544,"cpu_clken", false,-1);
    tracep->declBit(c+4401,"cpu_clock", false,-1);
    tracep->declBit(c+4544,"clk_gate", false,-1);
    tracep->declBus(c+4542,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+1742,"pf_new_pc", false,-1);
    tracep->declBit(c+1743,"clear_icache", false,-1);
    tracep->declBit(c+50,"pf_ready", false,-1);
    tracep->declBus(c+1744,"pf_request_address", false,-1, 30,0);
    tracep->declBus(c+1745,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1746,"pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+1747,"pf_valid", false,-1);
    tracep->declBit(c+1748,"pf_illegal", false,-1);
    tracep->declBit(c+1749,"pf_cyc", false,-1);
    tracep->declBit(c+1750,"pf_stb", false,-1);
    tracep->declBit(c+1751,"pf_stall", false,-1);
    tracep->declBit(c+1752,"pf_ack", false,-1);
    tracep->declBit(c+1753,"pf_err", false,-1);
    tracep->declBus(c+1754,"pf_addr", false,-1, 24,0);
    tracep->declBit(c+4543,"pf_we", false,-1);
    tracep->declArray(c+4545,"pf_data", false,-1, 511,0);
    tracep->declBit(c+1755,"clear_dcache", false,-1);
    tracep->declBit(c+51,"mem_ce", false,-1);
    tracep->declBit(c+1756,"bus_lock", false,-1);
    tracep->declBus(c+1757,"mem_op", false,-1, 2,0);
    tracep->declBus(c+1758,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+1759,"mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+1760,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1029,"mem_data", false,-1, 511,0);
    tracep->declBus(c+1761,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+1762,"mem_busy", false,-1);
    tracep->declBit(c+1763,"mem_rdbusy", false,-1);
    tracep->declBit(c+1764,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+1765,"mem_valid", false,-1);
    tracep->declBit(c+1766,"mem_bus_err", false,-1);
    tracep->declBus(c+1767,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1768,"mem_result", false,-1, 31,0);
    tracep->declBit(c+1769,"mem_stb_lcl", false,-1);
    tracep->declBit(c+1770,"mem_stb_gbl", false,-1);
    tracep->declBit(c+1771,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+1772,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+1773,"mem_bus_addr", false,-1, 24,0);
    tracep->declBit(c+1774,"mem_we", false,-1);
    tracep->declBit(c+1775,"mem_stall", false,-1);
    tracep->declBit(c+1776,"mem_ack", false,-1);
    tracep->declBit(c+1777,"mem_err", false,-1);
    tracep->declQuad(c+1778,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+970,"w_dbg_stall", false,-1);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4619,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4535,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4529,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4620,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4581,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4532,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4619,"CS", false,-1, 31,0);
    tracep->declBus(c+4529,"LS", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4532,"DP", false,-1, 31,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4583,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4584,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4585,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4586,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1755,"i_clear", false,-1);
    tracep->declBit(c+51,"i_pipe_stb", false,-1);
    tracep->declBit(c+1756,"i_lock", false,-1);
    tracep->declBus(c+1757,"i_op", false,-1, 2,0);
    tracep->declBus(c+1758,"i_addr", false,-1, 31,0);
    tracep->declBus(c+1760,"i_data", false,-1, 31,0);
    tracep->declBus(c+1761,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+1762,"o_busy", false,-1);
    tracep->declBit(c+1763,"o_rdbusy", false,-1);
    tracep->declBit(c+1764,"o_pipe_stalled", false,-1);
    tracep->declBit(c+1765,"o_valid", false,-1);
    tracep->declBit(c+1766,"o_err", false,-1);
    tracep->declBus(c+1767,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+1768,"o_data", false,-1, 31,0);
    tracep->declBit(c+1772,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1771,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+1770,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+1769,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+1774,"o_wb_we", false,-1);
    tracep->declBus(c+1773,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1029,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1778,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1775,"i_wb_stall", false,-1);
    tracep->declBit(c+1776,"i_wb_ack", false,-1);
    tracep->declBit(c+1777,"i_wb_err", false,-1);
    tracep->declArray(c+1047,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4624,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1780,"ik", false,-1, 31,0);
    tracep->declBit(c+1781,"cyc", false,-1);
    tracep->declBit(c+1782,"stb", false,-1);
    tracep->declBit(c+1783,"last_ack", false,-1);
    tracep->declBit(c+1784,"end_of_line", false,-1);
    tracep->declBit(c+1785,"last_line_stb", false,-1);
    tracep->declBit(c+1786,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1787,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+1788,"npending", false,-1, 4,0);
    tracep->declBus(c+1789,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1790+i*1,"c_vtags", true,(i+0), 21,0);
    }
    tracep->declBit(c+1798,"set_vflag", false,-1);
    tracep->declBus(c+1799,"state", false,-1, 1,0);
    tracep->declBus(c+1800,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+1801,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+1817,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+1833,"lock_gbl", false,-1);
    tracep->declBit(c+1834,"lock_lcl", false,-1);
    tracep->declBit(c+1835,"c_wr", false,-1);
    tracep->declArray(c+1836,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+1852,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+1854,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+1855,"last_tag", false,-1, 21,0);
    tracep->declBit(c+1856,"last_tag_valid", false,-1);
    tracep->declBus(c+1857,"i_cline", false,-1, 2,0);
    tracep->declBus(c+1858,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+1859,"cache_miss_inow", false,-1);
    tracep->declBit(c+1860,"w_cachable", false,-1);
    tracep->declBit(c+1861,"raw_cachable_address", false,-1);
    tracep->declBit(c+1862,"r_cachable", false,-1);
    tracep->declBit(c+1863,"r_svalid", false,-1);
    tracep->declBit(c+1864,"r_dvalid", false,-1);
    tracep->declBit(c+1865,"r_rd", false,-1);
    tracep->declBit(c+1866,"r_cache_miss", false,-1);
    tracep->declBit(c+1867,"r_rd_pending", false,-1);
    tracep->declBus(c+1868,"r_addr", false,-1, 24,0);
    tracep->declBus(c+1869,"r_cline", false,-1, 2,0);
    tracep->declBus(c+1870,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+1871,"r_ctag", false,-1, 21,0);
    tracep->declBit(c+1872,"wr_cstb", false,-1);
    tracep->declBit(c+1873,"r_iv", false,-1);
    tracep->declBit(c+1874,"in_cache", false,-1);
    tracep->declBus(c+1875,"r_itag", false,-1, 21,0);
    tracep->declBus(c+1876,"req_data", false,-1, 12,0);
    tracep->declBit(c+1877,"gie", false,-1);
    tracep->declArray(c+1878,"pre_data", false,-1, 511,0);
    tracep->declArray(c+1894,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+1910,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+1911,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+1778,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+1913,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+1914,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+1930,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1946+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+1962,"wraddr", false,-1, 4,0);
    tracep->declBus(c+1963,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4699,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+1964,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1861,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4543,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4619,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4535,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4529,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4578,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4587,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4619,"CW", false,-1, 31,0);
    tracep->declBus(c+4529,"LS", false,-1, 31,0);
    tracep->declBus(c+4578,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4581,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1742,"i_new_pc", false,-1);
    tracep->declBit(c+1743,"i_clear_cache", false,-1);
    tracep->declBit(c+50,"i_ready", false,-1);
    tracep->declBus(c+1744,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1747,"o_valid", false,-1);
    tracep->declBit(c+1748,"o_illegal", false,-1);
    tracep->declBus(c+1745,"o_insn", false,-1, 31,0);
    tracep->declBus(c+1746,"o_pc", false,-1, 30,0);
    tracep->declBit(c+1749,"o_wb_cyc", false,-1);
    tracep->declBit(c+1750,"o_wb_stb", false,-1);
    tracep->declBit(c+4543,"o_wb_we", false,-1);
    tracep->declBus(c+1754,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4545,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+1751,"i_wb_stall", false,-1);
    tracep->declBit(c+1752,"i_wb_ack", false,-1);
    tracep->declBit(c+1753,"i_wb_err", false,-1);
    tracep->declArray(c+1047,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4541,"INLSB", false,-1, 31,0);
    tracep->declBit(c+1965,"r_v", false,-1);
    tracep->declArray(c+1966,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1982+i*1,"cache_tags", true,(i+0), 18,0);
    }
    tracep->declBus(c+1990,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+1991,"r_v_from_pc", false,-1);
    tracep->declBit(c+1992,"r_v_from_last", false,-1);
    tracep->declBit(c+1993,"rvsrc", false,-1);
    tracep->declBit(c+1994,"w_v_from_pc", false,-1);
    tracep->declBit(c+1995,"w_v_from_last", false,-1);
    tracep->declBus(c+1996,"lastpc", false,-1, 30,0);
    tracep->declBus(c+1997,"wraddr", false,-1, 5,0);
    tracep->declBus(c+1998,"pc_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+1999,"last_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2000,"tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2001,"pc_tag", false,-1, 24,3);
    tracep->declBus(c+2002,"lasttag", false,-1, 24,3);
    tracep->declBit(c+2003,"illegal_valid", false,-1);
    tracep->declBus(c+2004,"illegal_cache", false,-1, 24,3);
    tracep->declArray(c+2005,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2021,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+1746,"r_pc", false,-1, 30,0);
    tracep->declBit(c+2037,"isrc", false,-1);
    tracep->declBus(c+2038,"delay", false,-1, 1,0);
    tracep->declBit(c+2039,"svmask", false,-1);
    tracep->declBit(c+2040,"last_ack", false,-1);
    tracep->declBit(c+2041,"needload", false,-1);
    tracep->declBit(c+2042,"last_addr", false,-1);
    tracep->declBit(c+2043,"bus_abort", false,-1);
    tracep->declBus(c+2044,"saddr", false,-1, 2,0);
    tracep->declBit(c+52,"w_advance", false,-1);
    tracep->declBit(c+2045,"w_invalidate_result", false,-1);
    tracep->declBus(c+2046,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2047,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2048,"shifted", false,-1, 511,0);
    tracep->declBus(c+2064,"shift", false,-1, 3,0);
    tracep->declBit(c+4543,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1772,"i_a_cyc_a", false,-1);
    tracep->declBit(c+1771,"i_a_cyc_b", false,-1);
    tracep->declBit(c+1770,"i_a_stb_a", false,-1);
    tracep->declBit(c+1769,"i_a_stb_b", false,-1);
    tracep->declBit(c+1774,"i_a_we", false,-1);
    tracep->declBus(c+1773,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1029,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1778,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1775,"o_a_stall", false,-1);
    tracep->declBit(c+1776,"o_a_ack", false,-1);
    tracep->declBit(c+1777,"o_a_err", false,-1);
    tracep->declBit(c+1749,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4543,"i_b_cyc_b", false,-1);
    tracep->declBit(c+1750,"i_b_stb_a", false,-1);
    tracep->declBit(c+4543,"i_b_stb_b", false,-1);
    tracep->declBit(c+4543,"i_b_we", false,-1);
    tracep->declBus(c+1754,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1029,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4561,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1751,"o_b_stall", false,-1);
    tracep->declBit(c+1752,"o_b_ack", false,-1);
    tracep->declBit(c+1753,"o_b_err", false,-1);
    tracep->declBit(c+1012,"o_cyc_a", false,-1);
    tracep->declBit(c+1026,"o_cyc_b", false,-1);
    tracep->declBit(c+1025,"o_stb_a", false,-1);
    tracep->declBit(c+1027,"o_stb_b", false,-1);
    tracep->declBit(c+1028,"o_we", false,-1);
    tracep->declBus(c+929,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1029,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1045,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1063,"i_stall", false,-1);
    tracep->declBit(c+1065,"i_ack", false,-1);
    tracep->declBit(c+1066,"i_err", false,-1);
    tracep->declBit(c+2065,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4700,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4534,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4529,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4580,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4700,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1064,"i_interrupt", false,-1);
    tracep->declBit(c+4544,"o_clken", false,-1);
    tracep->declBit(c+961,"i_halt", false,-1);
    tracep->declBit(c+963,"i_clear_cache", false,-1);
    tracep->declBus(c+966,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+964,"i_dbg_we", false,-1);
    tracep->declBus(c+967,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1741,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+970,"o_dbg_stall", false,-1);
    tracep->declBus(c+1067,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+968,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+949,"o_break", false,-1);
    tracep->declBit(c+1742,"o_pf_new_pc", false,-1);
    tracep->declBit(c+1743,"o_clear_icache", false,-1);
    tracep->declBit(c+50,"o_pf_ready", false,-1);
    tracep->declBus(c+1744,"o_pf_request_address", false,-1, 30,0);
    tracep->declBit(c+1747,"i_pf_valid", false,-1);
    tracep->declBit(c+1748,"i_pf_illegal", false,-1);
    tracep->declBus(c+1745,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1746,"i_pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+1755,"o_clear_dcache", false,-1);
    tracep->declBit(c+51,"o_mem_ce", false,-1);
    tracep->declBit(c+1756,"o_bus_lock", false,-1);
    tracep->declBus(c+1757,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+1758,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+1760,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+1759,"o_mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+1761,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+1762,"i_mem_busy", false,-1);
    tracep->declBit(c+1763,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+1764,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+1765,"i_mem_valid", false,-1);
    tracep->declBit(c+1766,"i_bus_err", false,-1);
    tracep->declBus(c+1767,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1768,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+48,"o_op_stall", false,-1);
    tracep->declBit(c+982,"o_pf_stall", false,-1);
    tracep->declBit(c+983,"o_i_count", false,-1);
    tracep->declBus(c+4542,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4478,"o_prof_stb", false,-1);
    tracep->declBus(c+4479,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4480,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4701,"RESET_BUS_ADDRESS", false,-1, 28,0);
    tracep->declBus(c+4702,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4575,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4588,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4589,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4658,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4663,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4698,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4527,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4602,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4624,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4623,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4528,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4622,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4530,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4539,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4619,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4620,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4532,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2066+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2098,"flags", false,-1, 3,0);
    tracep->declBus(c+2099,"iflags", false,-1, 3,0);
    tracep->declBus(c+2100,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2101,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2102,"break_en", false,-1);
    tracep->declBit(c+2103,"user_step", false,-1);
    tracep->declBit(c+2104,"sleep", false,-1);
    tracep->declBit(c+2105,"r_halted", false,-1);
    tracep->declBit(c+2106,"break_pending", false,-1);
    tracep->declBit(c+2107,"trap", false,-1);
    tracep->declBit(c+2108,"gie", false,-1);
    tracep->declBit(c+2109,"ubreak", false,-1);
    tracep->declBit(c+2110,"pending_interrupt", false,-1);
    tracep->declBit(c+2111,"stepped", false,-1);
    tracep->declBit(c+2112,"step", false,-1);
    tracep->declBit(c+2113,"ill_err_u", false,-1);
    tracep->declBit(c+2114,"ill_err_i", false,-1);
    tracep->declBit(c+2115,"ibus_err_flag", false,-1);
    tracep->declBit(c+2116,"ubus_err_flag", false,-1);
    tracep->declBit(c+2117,"idiv_err_flag", false,-1);
    tracep->declBit(c+2118,"udiv_err_flag", false,-1);
    tracep->declBit(c+4543,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4543,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2119,"ihalt_phase", false,-1);
    tracep->declBit(c+2120,"uhalt_phase", false,-1);
    tracep->declBit(c+2121,"master_ce", false,-1);
    tracep->declBit(c+53,"master_stall", false,-1);
    tracep->declBus(c+2122,"pf_pc", false,-1, 30,0);
    tracep->declBit(c+2123,"new_pc", false,-1);
    tracep->declBit(c+2123,"clear_pipeline", false,-1);
    tracep->declBit(c+54,"dcd_stalled", false,-1);
    tracep->declBit(c+2108,"pf_gie", false,-1);
    tracep->declBus(c+2124,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+55,"dcd_ce", false,-1);
    tracep->declBit(c+2125,"dcd_phase", false,-1);
    tracep->declBus(c+2126,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2127,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2128,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2129,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2130,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2131,"dcd_Acc", false,-1);
    tracep->declBit(c+2132,"dcd_Bcc", false,-1);
    tracep->declBit(c+2133,"dcd_Apc", false,-1);
    tracep->declBit(c+2134,"dcd_Bpc", false,-1);
    tracep->declBit(c+2135,"dcd_Rcc", false,-1);
    tracep->declBit(c+2136,"dcd_Rpc", false,-1);
    tracep->declBus(c+2137,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2138,"dcd_wR", false,-1);
    tracep->declBit(c+2139,"dcd_rA", false,-1);
    tracep->declBit(c+2140,"dcd_rB", false,-1);
    tracep->declBit(c+2141,"dcd_ALU", false,-1);
    tracep->declBit(c+2142,"dcd_M", false,-1);
    tracep->declBit(c+2143,"dcd_DIV", false,-1);
    tracep->declBit(c+2144,"dcd_FP", false,-1);
    tracep->declBit(c+2145,"dcd_wF", false,-1);
    tracep->declBit(c+2108,"dcd_gie", false,-1);
    tracep->declBit(c+2146,"dcd_break", false,-1);
    tracep->declBit(c+2147,"dcd_lock", false,-1);
    tracep->declBit(c+2148,"dcd_pipe", false,-1);
    tracep->declBit(c+2149,"dcd_ljmp", false,-1);
    tracep->declBit(c+2150,"dcd_valid", false,-1);
    tracep->declBus(c+4498,"dcd_pc", false,-1, 30,0);
    tracep->declBus(c+2151,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2152,"dcd_zI", false,-1);
    tracep->declBit(c+56,"dcd_A_stall", false,-1);
    tracep->declBit(c+57,"dcd_B_stall", false,-1);
    tracep->declBit(c+4499,"dcd_F_stall", false,-1);
    tracep->declBit(c+2153,"dcd_illegal", false,-1);
    tracep->declBit(c+2154,"dcd_early_branch", false,-1);
    tracep->declBit(c+2155,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2156,"dcd_branch_pc", false,-1, 30,0);
    tracep->declBit(c+4500,"dcd_sim", false,-1);
    tracep->declBus(c+4501,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2157,"prelock_stall", false,-1);
    tracep->declBit(c+2158,"last_lock_insn", false,-1);
    tracep->declBit(c+2159,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2160,"pending_sreg_write", false,-1);
    tracep->declBit(c+4502,"op_valid", false,-1);
    tracep->declBit(c+2161,"op_valid_mem", false,-1);
    tracep->declBit(c+2162,"op_valid_alu", false,-1);
    tracep->declBit(c+2163,"op_valid_div", false,-1);
    tracep->declBit(c+2164,"op_valid_fpu", false,-1);
    tracep->declBit(c+58,"op_stall", false,-1);
    tracep->declBus(c+2165,"op_opn", false,-1, 3,0);
    tracep->declBus(c+1761,"op_R", false,-1, 4,0);
    tracep->declBit(c+2166,"op_Rcc", false,-1);
    tracep->declBus(c+2167,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2168,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2169,"op_rA", false,-1);
    tracep->declBit(c+2170,"op_rB", false,-1);
    tracep->declBus(c+2171,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2172,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2173,"op_pc", false,-1, 30,0);
    tracep->declBus(c+2174,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2175,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+1760,"op_Av", false,-1, 31,0);
    tracep->declBus(c+1758,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+59,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+60,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2176,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2177,"op_wR", false,-1);
    tracep->declBit(c+2178,"op_wF", false,-1);
    tracep->declBit(c+2108,"op_gie", false,-1);
    tracep->declBus(c+2179,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2180,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2181,"op_F", false,-1, 7,0);
    tracep->declBit(c+61,"op_ce", false,-1);
    tracep->declBit(c+2182,"op_phase", false,-1);
    tracep->declBit(c+2183,"op_pipe", false,-1);
    tracep->declBit(c+2184,"r_op_break", false,-1);
    tracep->declBit(c+2185,"w_op_valid", false,-1);
    tracep->declBit(c+4543,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4703,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2186,"op_illegal", false,-1);
    tracep->declBit(c+2184,"op_break", false,-1);
    tracep->declBit(c+2187,"op_lock", false,-1);
    tracep->declBit(c+4503,"op_sim", false,-1);
    tracep->declBus(c+4504,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4505,"alu_sim", false,-1);
    tracep->declBus(c+4506,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2188,"alu_pc", false,-1, 30,0);
    tracep->declBus(c+2189,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2190,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2191,"mem_pc_valid", false,-1);
    tracep->declBit(c+2192,"alu_pc_valid", false,-1);
    tracep->declBit(c+2193,"alu_phase", false,-1);
    tracep->declBit(c+4507,"alu_ce", false,-1);
    tracep->declBit(c+62,"alu_stall", false,-1);
    tracep->declBus(c+2194,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2195,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2196,"alu_valid", false,-1);
    tracep->declBit(c+2197,"alu_busy", false,-1);
    tracep->declBit(c+2198,"set_cond", false,-1);
    tracep->declBit(c+2199,"alu_wR", false,-1);
    tracep->declBit(c+2200,"alu_wF", false,-1);
    tracep->declBit(c+2108,"alu_gie", false,-1);
    tracep->declBit(c+2201,"alu_illegal", false,-1);
    tracep->declBit(c+63,"mem_ce", false,-1);
    tracep->declBit(c+64,"mem_stalled", false,-1);
    tracep->declBit(c+65,"div_ce", false,-1);
    tracep->declBit(c+2202,"div_error", false,-1);
    tracep->declBit(c+2203,"div_busy", false,-1);
    tracep->declBit(c+2204,"div_valid", false,-1);
    tracep->declBus(c+2205,"div_result", false,-1, 31,0);
    tracep->declBus(c+2206,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4543,"fpu_ce", false,-1);
    tracep->declBit(c+4543,"fpu_error", false,-1);
    tracep->declBit(c+4543,"fpu_busy", false,-1);
    tracep->declBit(c+4543,"fpu_valid", false,-1);
    tracep->declBus(c+4542,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4588,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+66,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2207,"dbgv", false,-1);
    tracep->declBit(c+2208,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2209,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2210,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2211,"r_dbg_stall", false,-1);
    tracep->declBit(c+2212,"wr_write_pc", false,-1);
    tracep->declBit(c+2213,"wr_write_cc", false,-1);
    tracep->declBit(c+2214,"wr_write_scc", false,-1);
    tracep->declBit(c+2215,"wr_write_ucc", false,-1);
    tracep->declBit(c+2216,"wr_reg_ce", false,-1);
    tracep->declBit(c+2217,"wr_flags_ce", false,-1);
    tracep->declBus(c+2218,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2219,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2220,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2221,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2222,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2223,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2224,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2225,"ipc", false,-1, 30,0);
    tracep->declBus(c+2226,"upc", false,-1, 30,0);
    tracep->declBit(c+2227,"last_write_to_cc", false,-1);
    tracep->declBit(c+2228,"cc_write_hold", false,-1);
    tracep->declBit(c+1743,"r_clear_icache", false,-1);
    tracep->declBit(c+67,"pfpcset", false,-1);
    tracep->declBus(c+68,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4544,"w_clken", false,-1);
    tracep->declBus(c+2229,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2230,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2231,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+69,"avsrc", false,-1, 2,0);
    tracep->declBus(c+70,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2232,"bisrc", false,-1, 1,0);
    tracep->declBit(c+71,"cpu_sim", false,-1);
    tracep->declBus(c+4580,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2233,"r_alu_sim", false,-1);
    tracep->declBus(c+2234,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2235,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2157,"r_prelock_stall", false,-1);
    tracep->declBus(c+2236,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+1759,"r_lock_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+1755,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2117,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2118,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4620,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+2237,"i_reset", false,-1);
    tracep->declBit(c+65,"i_wr", false,-1);
    tracep->declBit(c+2238,"i_signed", false,-1);
    tracep->declBus(c+1760,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+1758,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2203,"o_busy", false,-1);
    tracep->declBit(c+2204,"o_valid", false,-1);
    tracep->declBit(c+2202,"o_err", false,-1);
    tracep->declBus(c+2205,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2206,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2239,"r_busy", false,-1);
    tracep->declBus(c+2240,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2241,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2243,"diff", false,-1, 32,0);
    tracep->declBit(c+2245,"r_sign", false,-1);
    tracep->declBit(c+2246,"pre_sign", false,-1);
    tracep->declBit(c+2247,"r_z", false,-1);
    tracep->declBit(c+2248,"r_c", false,-1);
    tracep->declBit(c+2249,"last_bit", false,-1);
    tracep->declBus(c+2250,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2251,"zero_divisor", false,-1);
    tracep->declBit(c+2252,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2165,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2188,"r_alu_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2193,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4543,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4543,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2119,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2187,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2183,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2159,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2160,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2177,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2106,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2253,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2111,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2254,"prof_stb", false,-1);
    tracep->declBus(c+2255,"prof_addr", false,-1, 30,0);
    tracep->declBus(c+2256,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2120,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2182,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+1761,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2167,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2168,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2169,"r_op_rA", false,-1);
    tracep->declBit(c+2170,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2257,"r_op_sim", false,-1);
    tracep->declBus(c+2258,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2259,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1067,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2201,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2108,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2173,"r_op_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2107,"r_trap", false,-1);
    tracep->declBit(c+2109,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2116,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2113,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2226,"r_upc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4543,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4529,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+2237,"i_reset", false,-1);
    tracep->declBit(c+4507,"i_stb", false,-1);
    tracep->declBus(c+2165,"i_op", false,-1, 3,0);
    tracep->declBus(c+1760,"i_a", false,-1, 31,0);
    tracep->declBus(c+1758,"i_b", false,-1, 31,0);
    tracep->declBus(c+2194,"o_c", false,-1, 31,0);
    tracep->declBus(c+2195,"o_f", false,-1, 3,0);
    tracep->declBit(c+2196,"o_valid", false,-1);
    tracep->declBit(c+2197,"o_busy", false,-1);
    tracep->declBus(c+2260,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2261,"z", false,-1);
    tracep->declBit(c+2262,"n", false,-1);
    tracep->declBit(c+2263,"v", false,-1);
    tracep->declBit(c+2264,"vx", false,-1);
    tracep->declBit(c+2265,"c", false,-1);
    tracep->declBit(c+2266,"pre_sign", false,-1);
    tracep->declBit(c+2267,"set_ovfl", false,-1);
    tracep->declBit(c+2268,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2269,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2271,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2273,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2275,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2277,"mpyhi", false,-1);
    tracep->declBit(c+2278,"mpybusy", false,-1);
    tracep->declBit(c+2279,"mpydone", false,-1);
    tracep->declBit(c+72,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2197,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2280,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2282,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4529,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+2237,"i_reset", false,-1);
    tracep->declBit(c+72,"i_stb", false,-1);
    tracep->declBus(c+2284,"i_op", false,-1, 1,0);
    tracep->declBus(c+1760,"i_a", false,-1, 31,0);
    tracep->declBus(c+1758,"i_b", false,-1, 31,0);
    tracep->declBit(c+2279,"o_valid", false,-1);
    tracep->declBit(c+2278,"o_busy", false,-1);
    tracep->declQuad(c+2275,"o_result", false,-1, 63,0);
    tracep->declBit(c+2277,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2285,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2287,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2289,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2290,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2291,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2292,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2277,"r_hi", false,-1);
    tracep->declQuad(c+2293,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2295,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2297,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2299,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4700,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4700,"AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+2301,"i_reset", false,-1);
    tracep->declBit(c+55,"i_ce", false,-1);
    tracep->declBit(c+54,"i_stalled", false,-1);
    tracep->declBus(c+1745,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2108,"i_gie", false,-1);
    tracep->declBus(c+1746,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1747,"i_pf_valid", false,-1);
    tracep->declBit(c+1748,"i_illegal", false,-1);
    tracep->declBit(c+2150,"o_valid", false,-1);
    tracep->declBit(c+2125,"o_phase", false,-1);
    tracep->declBit(c+2153,"o_illegal", false,-1);
    tracep->declBus(c+4498,"o_pc", false,-1, 30,0);
    tracep->declBus(c+2229,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2230,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2231,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2129,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2130,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2151,"o_I", false,-1, 31,0);
    tracep->declBit(c+2152,"o_zI", false,-1);
    tracep->declBus(c+2137,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2145,"o_wF", false,-1);
    tracep->declBus(c+2124,"o_op", false,-1, 3,0);
    tracep->declBit(c+2141,"o_ALU", false,-1);
    tracep->declBit(c+2142,"o_M", false,-1);
    tracep->declBit(c+2143,"o_DV", false,-1);
    tracep->declBit(c+2144,"o_FP", false,-1);
    tracep->declBit(c+2146,"o_break", false,-1);
    tracep->declBit(c+2147,"o_lock", false,-1);
    tracep->declBit(c+2138,"o_wR", false,-1);
    tracep->declBit(c+2139,"o_rA", false,-1);
    tracep->declBit(c+2140,"o_rB", false,-1);
    tracep->declBit(c+2154,"o_early_branch", false,-1);
    tracep->declBit(c+2155,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2156,"o_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2149,"o_ljmp", false,-1);
    tracep->declBit(c+2148,"o_pipe", false,-1);
    tracep->declBit(c+4500,"o_sim", false,-1);
    tracep->declBus(c+4501,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4663,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4702,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4575,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4655,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4597,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4599,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2302,"w_op", false,-1, 4,0);
    tracep->declBit(c+2303,"w_ldi", false,-1);
    tracep->declBit(c+2304,"w_mov", false,-1);
    tracep->declBit(c+2305,"w_cmptst", false,-1);
    tracep->declBit(c+2306,"w_ldilo", false,-1);
    tracep->declBit(c+2307,"w_ALU", false,-1);
    tracep->declBit(c+2308,"w_brev", false,-1);
    tracep->declBit(c+2309,"w_noop", false,-1);
    tracep->declBit(c+2310,"w_lock", false,-1);
    tracep->declBit(c+2311,"w_sim", false,-1);
    tracep->declBit(c+2312,"w_break", false,-1);
    tracep->declBit(c+2313,"w_special", false,-1);
    tracep->declBit(c+2314,"w_add", false,-1);
    tracep->declBit(c+2315,"w_mpy", false,-1);
    tracep->declBus(c+2129,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2130,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2129,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2316,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2317,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2316,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2317,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2318,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2319,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2320,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2321,"w_wF", false,-1);
    tracep->declBit(c+2322,"w_mem", false,-1);
    tracep->declBit(c+2323,"w_sto", false,-1);
    tracep->declBit(c+2324,"w_div", false,-1);
    tracep->declBit(c+2325,"w_fpu", false,-1);
    tracep->declBit(c+2326,"w_wR", false,-1);
    tracep->declBit(c+2327,"w_rA", false,-1);
    tracep->declBit(c+2328,"w_rB", false,-1);
    tracep->declBit(c+2329,"w_wR_n", false,-1);
    tracep->declBit(c+2330,"w_ljmp", false,-1);
    tracep->declBit(c+2149,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2331,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2332,"iword", false,-1, 31,0);
    tracep->declBit(c+2333,"pf_valid", false,-1);
    tracep->declBus(c+2334,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2335,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2336,"r_I", false,-1, 22,0);
    tracep->declBus(c+2337,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+2338,"w_I", false,-1, 22,0);
    tracep->declBit(c+2339,"w_Iz", false,-1);
    tracep->declBus(c+2340,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2150,"r_valid", false,-1);
    tracep->declBit(c+2341,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4543,"illegal_shift", false,-1);
    tracep->declBit(c+4543,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+2342,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+2343,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2125,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2154,"r_early_branch", false,-1);
    tracep->declBit(c+2155,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2149,"r_ljmp", false,-1);
    tracep->declBus(c+2156,"r_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2344,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2148,"r_pipe", false,-1);
    tracep->declBit(c+2341,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_ce", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+2345,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1019,"o_wb_ack", false,-1);
    tracep->declBus(c+1023,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+911,"o_int", false,-1);
    tracep->declBus(c+1023,"r_counter", false,-1, 31,0);
    tracep->declBit(c+2346,"int_set", false,-1);
    tracep->declBit(c+2347,"new_set", false,-1);
    tracep->declBit(c+2348,"int_now", false,-1);
    tracep->declBus(c+2349,"int_when", false,-1, 31,0);
    tracep->declBus(c+2350,"new_when", false,-1, 31,0);
    tracep->declBus(c+2351,"till_wb", false,-1, 31,0);
    tracep->declBus(c+2352,"till_when", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4655,"VW", false,-1, 31,0);
    tracep->declBus(c+4537,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_ce", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+2353,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1016,"o_wb_ack", false,-1);
    tracep->declBus(c+1020,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+908,"o_int", false,-1);
    tracep->declBit(c+2354,"r_running", false,-1);
    tracep->declBit(c+2355,"r_zero", false,-1);
    tracep->declBus(c+2356,"r_value", false,-1, 30,0);
    tracep->declBit(c+2357,"wb_write", false,-1);
    tracep->declBit(c+2358,"auto_reload", false,-1);
    tracep->declBus(c+2359,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2358,"r_auto_reload", false,-1);
    tracep->declBus(c+2359,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4655,"VW", false,-1, 31,0);
    tracep->declBus(c+4537,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_ce", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+2360,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1017,"o_wb_ack", false,-1);
    tracep->declBus(c+1021,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+909,"o_int", false,-1);
    tracep->declBit(c+2361,"r_running", false,-1);
    tracep->declBit(c+2362,"r_zero", false,-1);
    tracep->declBus(c+2363,"r_value", false,-1, 30,0);
    tracep->declBit(c+2364,"wb_write", false,-1);
    tracep->declBit(c+2365,"auto_reload", false,-1);
    tracep->declBus(c+2366,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2365,"r_auto_reload", false,-1);
    tracep->declBus(c+2366,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4655,"VW", false,-1, 31,0);
    tracep->declBus(c+4537,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_ce", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+2367,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+1018,"o_wb_ack", false,-1);
    tracep->declBus(c+1022,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+910,"o_int", false,-1);
    tracep->declBit(c+2368,"r_running", false,-1);
    tracep->declBit(c+2369,"r_zero", false,-1);
    tracep->declBus(c+2370,"r_value", false,-1, 30,0);
    tracep->declBit(c+2371,"wb_write", false,-1);
    tracep->declBit(c+2372,"auto_reload", false,-1);
    tracep->declBus(c+2373,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2372,"r_auto_reload", false,-1);
    tracep->declBus(c+2373,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4527,"BW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+2374,"i_reset", false,-1);
    tracep->declBus(c+4704,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+981,"o_int", false,-1);
    tracep->declBus(c+2375,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4581,"BW", false,-1, 31,0);
    tracep->declBus(c+4655,"VW", false,-1, 31,0);
    tracep->declBus(c+4580,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+960,"i_reset", false,-1);
    tracep->declBit(c+1100,"i_ce", false,-1);
    tracep->declBit(c+924,"i_wb_cyc", false,-1);
    tracep->declBit(c+2376,"i_wb_stb", false,-1);
    tracep->declBit(c+926,"i_wb_we", false,-1);
    tracep->declBus(c+928,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4575,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+973,"o_wb_ack", false,-1);
    tracep->declBus(c+975,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+974,"o_int", false,-1);
    tracep->declBit(c+2377,"r_running", false,-1);
    tracep->declBit(c+2378,"r_zero", false,-1);
    tracep->declBus(c+2379,"r_value", false,-1, 30,0);
    tracep->declBit(c+2380,"wb_write", false,-1);
    tracep->declBit(c+4543,"auto_reload", false,-1);
    tracep->declBus(c+4656,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4705,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4705,"TB", false,-1, 4,0);
    tracep->declBus(c+4671,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+178,"i_wr", false,-1);
    tracep->declBus(c+176,"i_data", false,-1, 7,0);
    tracep->declBit(c+4483,"o_uart_tx", false,-1);
    tracep->declBit(c+179,"o_busy", false,-1);
    tracep->declBus(c+4588,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4658,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4575,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+2381,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+2382,"state", false,-1, 3,0);
    tracep->declBus(c+2383,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+179,"r_busy", false,-1);
    tracep->declBit(c+2384,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+4045,"i_wb_cyc", false,-1);
    tracep->declBit(c+4046,"i_wb_stb", false,-1);
    tracep->declBit(c+4047,"i_wb_we", false,-1);
    tracep->declBus(c+4096,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+4049,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4050,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+388,"o_wb_ack", false,-1);
    tracep->declBus(c+389,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4459,"i_temp_sda", false,-1);
    tracep->declBit(c+4460,"i_temp_scl", false,-1);
    tracep->declBit(c+4461,"o_temp_sda", false,-1);
    tracep->declBit(c+4462,"o_temp_scl", false,-1);
    tracep->declBit(c+4463,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4464,"o_sys_pwm", false,-1);
    tracep->declBit(c+4465,"i_fan_tach", false,-1);
    tracep->declBus(c+4491,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4706,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4707,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4708,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4709,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4602,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+2385,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+2386,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+2387,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+2388,"ck_tach", false,-1);
    tracep->declBit(c+2389,"last_tach", false,-1);
    tracep->declBus(c+2390,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+2391,"tach_reset", false,-1);
    tracep->declBus(c+2392,"tach_count", false,-1, 26,0);
    tracep->declBus(c+2393,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+2394,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4543,"i2c_wb_stall", false,-1);
    tracep->declBit(c+2395,"i2c_wb_ack", false,-1);
    tracep->declBus(c+2396,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+2397,"ign_mem_cyc", false,-1);
    tracep->declBit(c+2398,"mem_stb", false,-1);
    tracep->declBit(c+4543,"ign_mem_we", false,-1);
    tracep->declBit(c+4537,"ign_mem_sel", false,-1);
    tracep->declBus(c+2399,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4579,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+2400,"mem_data", false,-1, 7,0);
    tracep->declBit(c+2401,"mem_ack", false,-1);
    tracep->declBit(c+2402,"i2cd_valid", false,-1);
    tracep->declBit(c+2403,"i2cd_last", false,-1);
    tracep->declBit(c+4543,"ign_i2cd_id", false,-1);
    tracep->declBus(c+2404,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+2405,"pp_ms", false,-1);
    tracep->declBus(c+2406,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+2407,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+2408,"temp_data", false,-1, 31,0);
    tracep->declBit(c+2409,"pre_ack", false,-1);
    tracep->declBus(c+2410,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4620,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4542,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4580,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4620,"AW", false,-1, 31,0);
    tracep->declBus(c+4530,"DW", false,-1, 31,0);
    tracep->declBus(c+4530,"RW", false,-1, 31,0);
    tracep->declBus(c+4620,"BAW", false,-1, 31,0);
    tracep->declBus(c+4646,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4580,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4542,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4710,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+4045,"i_wb_cyc", false,-1);
    tracep->declBit(c+4097,"i_wb_stb", false,-1);
    tracep->declBit(c+4047,"i_wb_we", false,-1);
    tracep->declBus(c+4098,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4049,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4050,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+2395,"o_wb_ack", false,-1);
    tracep->declBus(c+2396,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2397,"o_pf_cyc", false,-1);
    tracep->declBit(c+2398,"o_pf_stb", false,-1);
    tracep->declBit(c+4543,"o_pf_we", false,-1);
    tracep->declBus(c+2399,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4579,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4537,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4543,"i_pf_stall", false,-1);
    tracep->declBit(c+2401,"i_pf_ack", false,-1);
    tracep->declBit(c+4543,"i_pf_err", false,-1);
    tracep->declBus(c+2400,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4459,"i_i2c_sda", false,-1);
    tracep->declBit(c+4460,"i_i2c_scl", false,-1);
    tracep->declBit(c+4461,"o_i2c_sda", false,-1);
    tracep->declBit(c+4462,"o_i2c_scl", false,-1);
    tracep->declBit(c+2402,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4544,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2404,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2403,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4543,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+2405,"i_sync_signal", false,-1);
    tracep->declBus(c+4491,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4583,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4584,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4585,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4586,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4540,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4577,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4600,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4598,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4622,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4623,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4588,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4590,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4591,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4592,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4593,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4582,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4594,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4658,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4659,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4660,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4661,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4662,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4663,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+2411,"cpu_reset", false,-1);
    tracep->declBit(c+4543,"cpu_clear_cache", false,-1);
    tracep->declBit(c+2412,"cpu_new_pc", false,-1);
    tracep->declBus(c+2413,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+2414,"pf_valid", false,-1);
    tracep->declBit(c+2415,"pf_ready", false,-1);
    tracep->declBus(c+2416,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+2417,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+2418,"pf_illegal", false,-1);
    tracep->declBit(c+2419,"half_valid", false,-1);
    tracep->declBit(c+2420,"imm_cycle", false,-1);
    tracep->declBit(c+4099,"next_valid", false,-1);
    tracep->declBus(c+4100,"next_insn", false,-1, 7,0);
    tracep->declBit(c+2421,"insn_ready", false,-1);
    tracep->declBit(c+2422,"half_ready", false,-1);
    tracep->declBit(c+2423,"i2c_abort", false,-1);
    tracep->declBit(c+2424,"insn_valid", false,-1);
    tracep->declBus(c+2425,"insn", false,-1, 11,0);
    tracep->declBus(c+2426,"half_insn", false,-1, 3,0);
    tracep->declBit(c+2427,"i2c_ckedge", false,-1);
    tracep->declBit(c+2428,"i2c_stretch", false,-1);
    tracep->declBus(c+2429,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+2430,"ckcount", false,-1, 11,0);
    tracep->declBus(c+2431,"abort_address", false,-1, 4,0);
    tracep->declBus(c+2432,"jump_target", false,-1, 4,0);
    tracep->declBit(c+2433,"r_wait", false,-1);
    tracep->declBit(c+2434,"soft_halt_request", false,-1);
    tracep->declBit(c+2411,"r_halted", false,-1);
    tracep->declBit(c+2435,"r_err", false,-1);
    tracep->declBit(c+2436,"r_aborted", false,-1);
    tracep->declBit(c+2437,"r_manual", false,-1);
    tracep->declBit(c+2438,"r_sda", false,-1);
    tracep->declBit(c+2439,"r_scl", false,-1);
    tracep->declBit(c+2440,"w_stopped", false,-1);
    tracep->declBit(c+2441,"w_sda", false,-1);
    tracep->declBit(c+2442,"w_scl", false,-1);
    tracep->declBit(c+4101,"bus_read", false,-1);
    tracep->declBit(c+4102,"bus_write", false,-1);
    tracep->declBit(c+4103,"bus_override", false,-1);
    tracep->declBit(c+4104,"bus_manual", false,-1);
    tracep->declBit(c+2443,"ovw_ready", false,-1);
    tracep->declBit(c+4105,"bus_jump", false,-1);
    tracep->declBus(c+4098,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4098,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+4049,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+4050,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+2396,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+2444,"s_tvalid", false,-1);
    tracep->declBit(c+2422,"s_tready", false,-1);
    tracep->declBus(c+2445,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4508,"w_control", false,-1, 31,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+2437,"manual", false,-1);
    tracep->declBit(c+2439,"scl", false,-1);
    tracep->declBit(c+2438,"sda", false,-1);
    tracep->declBit(c+2446,"o_scl", false,-1);
    tracep->declBit(c+2447,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4542,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+73,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+2444,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+2421,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+2448,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+2402,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4544,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2404,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2403,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+2427,"i_ckedge", false,-1);
    tracep->declBit(c+2428,"o_stretch", false,-1);
    tracep->declBit(c+4460,"i_scl", false,-1);
    tracep->declBit(c+4459,"i_sda", false,-1);
    tracep->declBit(c+2442,"o_scl", false,-1);
    tracep->declBit(c+2441,"o_sda", false,-1);
    tracep->declBit(c+2423,"o_abort", false,-1);
    tracep->declBus(c+4588,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4589,"START", false,-1, 3,0);
    tracep->declBus(c+4590,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4591,"STOP", false,-1, 3,0);
    tracep->declBus(c+4592,"DATA", false,-1, 3,0);
    tracep->declBus(c+4593,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4582,"ACK", false,-1, 3,0);
    tracep->declBus(c+4594,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4658,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4659,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4660,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4661,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4662,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4580,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4537,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4625,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4631,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4626,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4628,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4664,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4665,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4666,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4667,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4580,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+2449,"last_byte", false,-1);
    tracep->declBit(c+2450,"dir", false,-1);
    tracep->declBit(c+2451,"will_ack", false,-1);
    tracep->declBus(c+2452,"state", false,-1, 3,0);
    tracep->declBus(c+2453,"nbits", false,-1, 2,0);
    tracep->declBus(c+2454,"sreg", false,-1, 7,0);
    tracep->declBit(c+2455,"q_scl", false,-1);
    tracep->declBit(c+2456,"q_sda", false,-1);
    tracep->declBit(c+2457,"ck_scl", false,-1);
    tracep->declBit(c+2458,"ck_sda", false,-1);
    tracep->declBit(c+2459,"lst_scl", false,-1);
    tracep->declBit(c+2460,"lst_sda", false,-1);
    tracep->declBit(c+2461,"stop_bit", false,-1);
    tracep->declBit(c+2462,"channel_busy", false,-1);
    tracep->declBit(c+4543,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4620,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4530,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4620,"AW", false,-1, 31,0);
    tracep->declBus(c+4530,"DW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+74,"i_reset", false,-1);
    tracep->declBit(c+2412,"i_new_pc", false,-1);
    tracep->declBit(c+4543,"i_clear_cache", false,-1);
    tracep->declBit(c+2415,"i_ready", false,-1);
    tracep->declBus(c+2413,"i_pc", false,-1, 4,0);
    tracep->declBit(c+2414,"o_valid", false,-1);
    tracep->declBit(c+2418,"o_illegal", false,-1);
    tracep->declBus(c+2416,"o_insn", false,-1, 7,0);
    tracep->declBus(c+2417,"o_pc", false,-1, 4,0);
    tracep->declBit(c+2397,"o_wb_cyc", false,-1);
    tracep->declBit(c+2398,"o_wb_stb", false,-1);
    tracep->declBit(c+4543,"o_wb_we", false,-1);
    tracep->declBus(c+2399,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4579,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4543,"i_wb_stall", false,-1);
    tracep->declBit(c+2401,"i_wb_ack", false,-1);
    tracep->declBit(c+4543,"i_wb_err", false,-1);
    tracep->declBus(c+2400,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+2463,"last_stb", false,-1);
    tracep->declBit(c+2464,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+2465,"cache_word", false,-1, 7,0);
    tracep->declBit(c+2466,"cache_valid", false,-1);
    tracep->declBus(c+2467,"inflight", false,-1, 1,0);
    tracep->declBit(c+2468,"cache_illegal", false,-1);
    tracep->declBit(c+4543,"r_valid", false,-1);
    tracep->declBus(c+4579,"r_insn", false,-1, 7,0);
    tracep->declBus(c+2400,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declBus(c+4530,"SW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+4033,"i_wb_cyc", false,-1);
    tracep->declBit(c+4034,"i_wb_stb", false,-1);
    tracep->declBit(c+4035,"i_wb_we", false,-1);
    tracep->declBus(c+4106,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4037,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4038,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4543,"o_wb_stall", false,-1);
    tracep->declBit(c+384,"o_wb_ack", false,-1);
    tracep->declBus(c+385,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2469,"S_VALID", false,-1);
    tracep->declBit(c+159,"S_READY", false,-1);
    tracep->declBus(c+163,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+162,"S_LAST", false,-1);
    tracep->declBit(c+184,"o_dma_cyc", false,-1);
    tracep->declBit(c+185,"o_dma_stb", false,-1);
    tracep->declBit(c+4544,"o_dma_we", false,-1);
    tracep->declBus(c+186,"o_dma_addr", false,-1, 24,0);
    tracep->declArray(c+187,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+203,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+205,"i_dma_stall", false,-1);
    tracep->declBit(c+206,"i_dma_ack", false,-1);
    tracep->declArray(c+208,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+207,"i_dma_err", false,-1);
    tracep->declBus(c+4542,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4619,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2470,"r_baseaddr", false,-1, 30,0);
    tracep->declBus(c+2471,"r_memlen", false,-1, 30,0);
    tracep->declBus(c+2472,"subaddr", false,-1, 5,0);
    tracep->declBus(c+2473,"current_addr", false,-1, 30,0);
    tracep->declBus(c+4107,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+4108,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+2474,"wb_last", false,-1);
    tracep->declBit(c+2475,"bus_err", false,-1);
    tracep->declBit(c+2476,"r_reset", false,-1);
    tracep->declBit(c+2477,"r_overflow", false,-1);
    tracep->declBit(c+2478,"skd_valid", false,-1);
    tracep->declBit(c+2479,"skd_ready", false,-1);
    tracep->declBit(c+2480,"skd_last", false,-1);
    tracep->declBus(c+2481,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4622,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+2469,"i_valid", false,-1);
    tracep->declBit(c+159,"o_ready", false,-1);
    tracep->declBus(c+2482,"i_data", false,-1, 8,0);
    tracep->declBit(c+2478,"o_valid", false,-1);
    tracep->declBit(c+2479,"i_ready", false,-1);
    tracep->declBus(c+2483,"o_data", false,-1, 8,0);
    tracep->declBus(c+2484,"w_data", false,-1, 8,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+2485,"r_valid", false,-1);
    tracep->declBus(c+2484,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+2478,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4528,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4581,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4532,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4530,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+3925,"i_wcyc", false,-1);
    tracep->declBit(c+3926,"i_wstb", false,-1);
    tracep->declBit(c+3927,"i_wwe", false,-1);
    tracep->declBus(c+4109,"i_waddr", false,-1, 3,0);
    tracep->declArray(c+3929,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+3945,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+328,"o_wstall", false,-1);
    tracep->declBit(c+329,"o_wack", false,-1);
    tracep->declArray(c+330,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+3947,"o_werr", false,-1);
    tracep->declBit(c+3992,"o_scyc", false,-1);
    tracep->declBit(c+363,"o_sstb", false,-1);
    tracep->declBit(c+364,"o_swe", false,-1);
    tracep->declBus(c+365,"o_saddr", false,-1, 7,0);
    tracep->declBus(c+366,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+367,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+368,"i_sstall", false,-1);
    tracep->declBit(c+369,"i_sack", false,-1);
    tracep->declBus(c+370,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+3993,"i_serr", false,-1);
    tracep->declBus(c+4532,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4620,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+3992,"r_cyc", false,-1);
    tracep->declBit(c+2486,"r_stb", false,-1);
    tracep->declBit(c+364,"r_we", false,-1);
    tracep->declBit(c+329,"r_ack", false,-1);
    tracep->declBit(c+3947,"r_err", false,-1);
    tracep->declBit(c+2487,"r_first", false,-1);
    tracep->declBus(c+365,"r_addr", false,-1, 7,0);
    tracep->declBit(c+2488,"s_null", false,-1);
    tracep->declBit(c+2489,"s_last", false,-1);
    tracep->declArray(c+2490,"s_data", false,-1, 511,0);
    tracep->declArray(c+330,"r_data", false,-1, 511,0);
    tracep->declArray(c+2506,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+2522,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+2524,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+2526,"r_shift", false,-1, 3,0);
    tracep->declBus(c+2527,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+4110,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+2528,"fifo_full", false,-1);
    tracep->declBit(c+2529,"fifo_empty", false,-1);
    tracep->declBit(c+2530,"fifo_ack", false,-1);
    tracep->declBus(c+2531,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4711,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+4111,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4620,"BW", false,-1, 31,0);
    tracep->declBus(c+4620,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+119,"i_reset", false,-1);
    tracep->declBit(c+2532,"i_wr", false,-1);
    tracep->declBus(c+2533,"i_data", false,-1, 4,0);
    tracep->declBit(c+2528,"o_full", false,-1);
    tracep->declBus(c+2531,"o_fill", false,-1, 5,0);
    tracep->declBit(c+369,"i_rd", false,-1);
    tracep->declBus(c+2534,"o_data", false,-1, 4,0);
    tracep->declBit(c+2529,"o_empty", false,-1);
    tracep->declBus(c+4581,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2535,"r_full", false,-1);
    tracep->declBit(c+2536,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2537+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+2569,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2570,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2571,"w_wr", false,-1);
    tracep->declBit(c+2572,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4531,"NM", false,-1, 31,0);
    tracep->declBus(c+4623,"NS", false,-1, 31,0);
    tracep->declBus(c+4530,"AW", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declArray(c+4712,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4715,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4619,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4542,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBus(c+3992,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+363,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+364,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+365,"i_maddr", false,-1, 7,0);
    tracep->declBus(c+366,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+367,"i_msel", false,-1, 3,0);
    tracep->declBus(c+368,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+369,"o_mack", false,-1, 0,0);
    tracep->declBus(c+370,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+3993,"o_merr", false,-1, 0,0);
    tracep->declBus(c+4112,"o_scyc", false,-1, 10,0);
    tracep->declBus(c+4113,"o_sstb", false,-1, 10,0);
    tracep->declBus(c+4114,"o_swe", false,-1, 10,0);
    tracep->declArray(c+4115,"o_saddr", false,-1, 87,0);
    tracep->declArray(c+4118,"o_sdata", false,-1, 351,0);
    tracep->declQuad(c+4129,"o_ssel", false,-1, 43,0);
    tracep->declBus(c+3924,"i_sstall", false,-1, 10,0);
    tracep->declBus(c+3383,"i_sack", false,-1, 10,0);
    tracep->declArray(c+3384,"i_sdata", false,-1, 351,0);
    tracep->declBus(c+4718,"i_serr", false,-1, 10,0);
    tracep->declBus(c+4542,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4531,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4532,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4131+i*1,"request", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 10,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2573+i*1,"grant", true,(i+0), 11,0);
    }
    tracep->declBus(c+2574,"mgrant", false,-1, 0,0);
    tracep->declBus(c+4132,"sgrant", false,-1, 10,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2575+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2576,"mfull", false,-1, 0,0);
    tracep->declBus(c+2577,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2578,"mempty", false,-1, 0,0);
    tracep->declBus(c+4580,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4531,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4536,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4133+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+3992,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+4134,"m_stb", false,-1, 0,0);
    tracep->declBus(c+4135,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4136+i*1,"m_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4137+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4138+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4381,"m_stall", false,-1, 0,0);
    tracep->declBus(c+4382,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3395+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4509,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4719,"s_err", false,-1, 15,0);
    tracep->declBus(c+4139,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2579,"iN", false,-1, 31,0);
    tracep->declBus(c+4510,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4140,"regrant", false,-1, 11,0);
    tracep->declBus(c+4511,"reindex", false,-1, 3,0);
    tracep->declBit(c+4141,"stay_on_channel", false,-1);
    tracep->declBit(c+4142,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4143,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4140,"r_regrant", false,-1, 11,0);
    tracep->declBus(c+4511,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2580,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+120,"skd_stb", false,-1);
    tracep->declBit(c+4383,"skd_stall", false,-1);
    tracep->declBit(c+4144,"skd_we", false,-1);
    tracep->declBus(c+4145,"skd_addr", false,-1, 7,0);
    tracep->declBus(c+4146,"skd_data", false,-1, 31,0);
    tracep->declBus(c+4147,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2581,"decoded", false,-1, 11,0);
    tracep->declBit(c+2582,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4623,"NS", false,-1, 31,0);
    tracep->declBus(c+4530,"AW", false,-1, 31,0);
    tracep->declBus(c+4720,"DW", false,-1, 31,0);
    tracep->declArray(c+4712,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4715,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4721,"ACCESS_ALLOWED", false,-1, 10,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+121,"i_valid", false,-1);
    tracep->declBit(c+4383,"o_stall", false,-1);
    tracep->declBus(c+4145,"i_addr", false,-1, 7,0);
    tracep->declQuad(c+4148,"i_data", false,-1, 36,0);
    tracep->declBit(c+4139,"o_valid", false,-1);
    tracep->declBit(c+4384,"i_stall", false,-1);
    tracep->declBus(c+2581,"o_decode", false,-1, 11,0);
    tracep->declBus(c+2583,"o_addr", false,-1, 7,0);
    tracep->declQuad(c+4150,"o_data", false,-1, 36,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+122,"request", false,-1, 11,0);
    tracep->declBus(c+4152,"prerequest", false,-1, 10,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+123,"r_request", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+124,"r_request_NS", false,-1);
    tracep->declBit(c+125,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4722,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+126,"i_reset", false,-1);
    tracep->declBit(c+363,"i_valid", false,-1);
    tracep->declBit(c+2582,"o_ready", false,-1);
    tracep->declQuad(c+2584,"i_data", false,-1, 44,0);
    tracep->declBit(c+120,"o_valid", false,-1);
    tracep->declBit(c+4385,"i_ready", false,-1);
    tracep->declQuad(c+4153,"o_data", false,-1, 44,0);
    tracep->declQuad(c+2586,"w_data", false,-1, 44,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+368,"r_valid", false,-1);
    tracep->declQuad(c+2586,"r_data", false,-1, 44,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+369,"r_mack", false,-1, 0,0);
    tracep->declBus(c+3993,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+127,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+128,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+129,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+130,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+131,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+132,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+133,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+134,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+135,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+136,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+137,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4655,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4581,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+402,"i_scyc", false,-1);
    tracep->declBit(c+403,"i_sstb", false,-1);
    tracep->declBit(c+404,"i_swe", false,-1);
    tracep->declBus(c+2588,"i_saddr", false,-1, 28,0);
    tracep->declBus(c+406,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+407,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+408,"o_sstall", false,-1);
    tracep->declBit(c+409,"o_sack", false,-1);
    tracep->declBus(c+411,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+410,"o_serr", false,-1);
    tracep->declBit(c+287,"o_wcyc", false,-1);
    tracep->declBit(c+288,"o_wstb", false,-1);
    tracep->declBit(c+289,"o_wwe", false,-1);
    tracep->declBus(c+290,"o_waddr", false,-1, 24,0);
    tracep->declArray(c+291,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+307,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+309,"i_wstall", false,-1);
    tracep->declBit(c+310,"i_wack", false,-1);
    tracep->declArray(c+312,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+311,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4620,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+287,"r_cyc", false,-1);
    tracep->declBit(c+2589,"r_stb", false,-1);
    tracep->declBit(c+289,"r_we", false,-1);
    tracep->declBit(c+409,"r_ack", false,-1);
    tracep->declBit(c+410,"r_err", false,-1);
    tracep->declBus(c+290,"r_addr", false,-1, 24,0);
    tracep->declArray(c+291,"r_data", false,-1, 511,0);
    tracep->declArray(c+2590,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+307,"r_sel", false,-1, 63,0);
    tracep->declBus(c+2606,"r_shift", false,-1, 3,0);
    tracep->declBit(c+2607,"fifo_full", false,-1);
    tracep->declBit(c+2608,"ign_fifo_empty", false,-1);
    tracep->declBus(c+2609,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+2610,"w_shift", false,-1, 3,0);
    tracep->declBus(c+2611,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+2612,"w_data", false,-1, 511,0);
    tracep->declQuad(c+2628,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4532,"BW", false,-1, 31,0);
    tracep->declBus(c+4620,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+75,"i_reset", false,-1);
    tracep->declBit(c+2630,"i_wr", false,-1);
    tracep->declBus(c+2606,"i_data", false,-1, 3,0);
    tracep->declBit(c+2607,"o_full", false,-1);
    tracep->declBus(c+2609,"o_fill", false,-1, 5,0);
    tracep->declBit(c+310,"i_rd", false,-1);
    tracep->declBus(c+2611,"o_data", false,-1, 3,0);
    tracep->declBit(c+2608,"o_empty", false,-1);
    tracep->declBus(c+4581,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2607,"r_full", false,-1);
    tracep->declBit(c+2608,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2631+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+2663,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2664,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2665,"w_wr", false,-1);
    tracep->declBit(c+2666,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4531,"NM", false,-1, 31,0);
    tracep->declBus(c+4541,"NS", false,-1, 31,0);
    tracep->declBus(c+4643,"AW", false,-1, 31,0);
    tracep->declBus(c+4581,"DW", false,-1, 31,0);
    tracep->declQuad(c+4723,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4725,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4619,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4542,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBus(c+393,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+394,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+395,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+396,"i_maddr", false,-1, 29,0);
    tracep->declBus(c+397,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4575,"i_msel", false,-1, 3,0);
    tracep->declBus(c+398,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+399,"o_mack", false,-1, 0,0);
    tracep->declBus(c+401,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+400,"o_merr", false,-1, 0,0);
    tracep->declBus(c+2667,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+2668,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2669,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2670,"o_saddr", false,-1, 59,0);
    tracep->declQuad(c+2672,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+2674,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4512,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4513,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+2675,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+2677,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4542,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4531,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4541,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2678+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2679+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2680,"mgrant", false,-1, 0,0);
    tracep->declBus(c+2681,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2682+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2683,"mfull", false,-1, 0,0);
    tracep->declBus(c+2684,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2685,"mempty", false,-1, 0,0);
    tracep->declBus(c+4580,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4531,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4532,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4155+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+393,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+2686,"m_stb", false,-1, 0,0);
    tracep->declBus(c+2687,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2688+i*1,"m_addr", true,(i+0), 29,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2689+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2690+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+138,"m_stall", false,-1, 0,0);
    tracep->declBus(c+76,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2691+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4514,"s_ack", false,-1, 3,0);
    tracep->declBus(c+2695,"s_err", false,-1, 3,0);
    tracep->declBus(c+2696,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2697,"iN", false,-1, 31,0);
    tracep->declBus(c+4515,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4156,"regrant", false,-1, 2,0);
    tracep->declBus(c+4516,"reindex", false,-1, 1,0);
    tracep->declBit(c+2698,"stay_on_channel", false,-1);
    tracep->declBit(c+2699,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4157,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4156,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4516,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2700,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+77,"skd_stb", false,-1);
    tracep->declBit(c+139,"skd_stall", false,-1);
    tracep->declBit(c+2701,"skd_we", false,-1);
    tracep->declBus(c+2702,"skd_addr", false,-1, 29,0);
    tracep->declBus(c+2703,"skd_data", false,-1, 31,0);
    tracep->declBus(c+2704,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2705,"decoded", false,-1, 2,0);
    tracep->declBit(c+2706,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4541,"NS", false,-1, 31,0);
    tracep->declBus(c+4643,"AW", false,-1, 31,0);
    tracep->declBus(c+4720,"DW", false,-1, 31,0);
    tracep->declQuad(c+4723,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4725,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4586,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+78,"i_valid", false,-1);
    tracep->declBit(c+139,"o_stall", false,-1);
    tracep->declBus(c+2702,"i_addr", false,-1, 29,0);
    tracep->declQuad(c+2707,"i_data", false,-1, 36,0);
    tracep->declBit(c+2696,"o_valid", false,-1);
    tracep->declBit(c+140,"i_stall", false,-1);
    tracep->declBus(c+2705,"o_decode", false,-1, 2,0);
    tracep->declBus(c+2709,"o_addr", false,-1, 29,0);
    tracep->declQuad(c+2710,"o_data", false,-1, 36,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+79,"request", false,-1, 2,0);
    tracep->declBus(c+2712,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+80,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+81,"r_request_NS", false,-1);
    tracep->declBit(c+82,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4727,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset", false,-1);
    tracep->declBit(c+394,"i_valid", false,-1);
    tracep->declBit(c+2706,"o_ready", false,-1);
    tracep->declArray(c+2713,"i_data", false,-1, 66,0);
    tracep->declBit(c+77,"o_valid", false,-1);
    tracep->declBit(c+141,"i_ready", false,-1);
    tracep->declArray(c+2716,"o_data", false,-1, 66,0);
    tracep->declArray(c+2719,"w_data", false,-1, 66,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+398,"r_valid", false,-1);
    tracep->declArray(c+2719,"r_data", false,-1, 66,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+399,"r_mack", false,-1, 0,0);
    tracep->declBus(c+400,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+84,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+85,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4532,"NM", false,-1, 31,0);
    tracep->declBus(c+4529,"NS", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4578,"DW", false,-1, 31,0);
    tracep->declArray(c+4728,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4731,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4619,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4542,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4580,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4537,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBus(c+4158,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+2722,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+2723,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+2724,"i_maddr", false,-1, 99,0);
    tracep->declArray(c+2728,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+2792,"i_msel", false,-1, 255,0);
    tracep->declBus(c+2800,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+2801,"o_mack", false,-1, 3,0);
    tracep->declArray(c+2802,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+2866,"o_merr", false,-1, 3,0);
    tracep->declBus(c+4159,"o_scyc", false,-1, 2,0);
    tracep->declBus(c+4160,"o_sstb", false,-1, 2,0);
    tracep->declBus(c+4161,"o_swe", false,-1, 2,0);
    tracep->declArray(c+4162,"o_saddr", false,-1, 74,0);
    tracep->declArray(c+4165,"o_sdata", false,-1, 1535,0);
    tracep->declArray(c+4213,"o_ssel", false,-1, 191,0);
    tracep->declBus(c+3411,"i_sstall", false,-1, 2,0);
    tracep->declBus(c+3412,"i_sack", false,-1, 2,0);
    tracep->declArray(c+3413,"i_sdata", false,-1, 1535,0);
    tracep->declBus(c+4219,"i_serr", false,-1, 2,0);
    tracep->declBus(c+4542,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4541,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4541,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2867+i*1,"request", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2871+i*1,"requested", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2875+i*1,"grant", true,(i+0), 3,0);
    }
    tracep->declBus(c+2879,"mgrant", false,-1, 3,0);
    tracep->declBus(c+4220,"sgrant", false,-1, 2,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2880+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2884,"mfull", false,-1, 3,0);
    tracep->declBus(c+2885,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+2886,"mempty", false,-1, 3,0);
    tracep->declBus(c+4588,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4532,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4532,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4221+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4225+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+4158,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+2887,"m_stb", false,-1, 3,0);
    tracep->declBus(c+4229,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4230+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+4234+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+4298+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4386,"m_stall", false,-1, 3,0);
    tracep->declBus(c+4387,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3461+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+4388,"s_ack", false,-1, 3,0);
    tracep->declBus(c+4306,"s_err", false,-1, 3,0);
    tracep->declBus(c+2888,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4537,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+4517,"iN", false,-1, 31,0);
    tracep->declBus(c+4518,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4307,"regrant", false,-1, 3,0);
    tracep->declBus(c+4519,"reindex", false,-1, 1,0);
    tracep->declBit(c+2889,"stay_on_channel", false,-1);
    tracep->declBit(c+4308,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4309,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4307,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4519,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4310,"regrant", false,-1, 3,0);
    tracep->declBus(c+4520,"reindex", false,-1, 1,0);
    tracep->declBit(c+2890,"stay_on_channel", false,-1);
    tracep->declBit(c+4311,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4312,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4310,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4520,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4313,"regrant", false,-1, 3,0);
    tracep->declBus(c+4521,"reindex", false,-1, 1,0);
    tracep->declBit(c+2891,"stay_on_channel", false,-1);
    tracep->declBit(c+4314,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4315,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4313,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4521,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4316,"regrant", false,-1, 3,0);
    tracep->declBus(c+4522,"reindex", false,-1, 1,0);
    tracep->declBit(c+2892,"stay_on_channel", false,-1);
    tracep->declBit(c+4317,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4318,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4316,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4522,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2893,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+2894,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+2895,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+2896,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+86,"skd_stb", false,-1);
    tracep->declBit(c+4389,"skd_stall", false,-1);
    tracep->declBit(c+2897,"skd_we", false,-1);
    tracep->declBus(c+2898,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+2899,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+2915,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+2917,"decoded", false,-1, 3,0);
    tracep->declBit(c+2918,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4529,"NS", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declArray(c+4728,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4731,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4667,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+87,"i_valid", false,-1);
    tracep->declBit(c+4389,"o_stall", false,-1);
    tracep->declBus(c+2898,"i_addr", false,-1, 24,0);
    tracep->declArray(c+2919,"i_data", false,-1, 576,0);
    tracep->declBit(c+2938,"o_valid", false,-1);
    tracep->declBit(c+4390,"i_stall", false,-1);
    tracep->declBus(c+2917,"o_decode", false,-1, 3,0);
    tracep->declBus(c+2939,"o_addr", false,-1, 24,0);
    tracep->declArray(c+2940,"o_data", false,-1, 576,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+88,"request", false,-1, 3,0);
    tracep->declBus(c+2959,"prerequest", false,-1, 2,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+89,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+90,"r_request_NS", false,-1);
    tracep->declBit(c+91,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4735,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+92,"i_reset", false,-1);
    tracep->declBit(c+185,"i_valid", false,-1);
    tracep->declBit(c+2918,"o_ready", false,-1);
    tracep->declArray(c+2960,"i_data", false,-1, 601,0);
    tracep->declBit(c+86,"o_valid", false,-1);
    tracep->declBit(c+4391,"i_ready", false,-1);
    tracep->declArray(c+2979,"o_data", false,-1, 601,0);
    tracep->declArray(c+2998,"w_data", false,-1, 601,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3017,"r_valid", false,-1);
    tracep->declArray(c+2998,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+93,"skd_stb", false,-1);
    tracep->declBit(c+4392,"skd_stall", false,-1);
    tracep->declBit(c+3018,"skd_we", false,-1);
    tracep->declBus(c+3019,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3020,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3036,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3038,"decoded", false,-1, 3,0);
    tracep->declBit(c+3039,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4529,"NS", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declArray(c+4728,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4731,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4667,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+94,"i_valid", false,-1);
    tracep->declBit(c+4392,"o_stall", false,-1);
    tracep->declBus(c+3019,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3040,"i_data", false,-1, 576,0);
    tracep->declBit(c+3059,"o_valid", false,-1);
    tracep->declBit(c+4393,"i_stall", false,-1);
    tracep->declBus(c+3038,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3060,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3061,"o_data", false,-1, 576,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+95,"request", false,-1, 3,0);
    tracep->declBus(c+3080,"prerequest", false,-1, 2,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+96,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+97,"r_request_NS", false,-1);
    tracep->declBit(c+98,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4735,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+99,"i_reset", false,-1);
    tracep->declBit(c+225,"i_valid", false,-1);
    tracep->declBit(c+3039,"o_ready", false,-1);
    tracep->declArray(c+3081,"i_data", false,-1, 601,0);
    tracep->declBit(c+93,"o_valid", false,-1);
    tracep->declBit(c+4394,"i_ready", false,-1);
    tracep->declArray(c+3100,"o_data", false,-1, 601,0);
    tracep->declArray(c+3119,"w_data", false,-1, 601,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3138,"r_valid", false,-1);
    tracep->declArray(c+3119,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+100,"skd_stb", false,-1);
    tracep->declBit(c+4395,"skd_stall", false,-1);
    tracep->declBit(c+3139,"skd_we", false,-1);
    tracep->declBus(c+3140,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3141,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3157,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3159,"decoded", false,-1, 3,0);
    tracep->declBit(c+3160,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4529,"NS", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declArray(c+4728,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4731,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4667,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+101,"i_valid", false,-1);
    tracep->declBit(c+4395,"o_stall", false,-1);
    tracep->declBus(c+3140,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3161,"i_data", false,-1, 576,0);
    tracep->declBit(c+3180,"o_valid", false,-1);
    tracep->declBit(c+4396,"i_stall", false,-1);
    tracep->declBus(c+3159,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3181,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3182,"o_data", false,-1, 576,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+102,"request", false,-1, 3,0);
    tracep->declBus(c+3201,"prerequest", false,-1, 2,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+103,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+104,"r_request_NS", false,-1);
    tracep->declBit(c+105,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4735,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+106,"i_reset", false,-1);
    tracep->declBit(c+247,"i_valid", false,-1);
    tracep->declBit(c+3160,"o_ready", false,-1);
    tracep->declArray(c+3202,"i_data", false,-1, 601,0);
    tracep->declBit(c+100,"o_valid", false,-1);
    tracep->declBit(c+4397,"i_ready", false,-1);
    tracep->declArray(c+3221,"o_data", false,-1, 601,0);
    tracep->declArray(c+3240,"w_data", false,-1, 601,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3259,"r_valid", false,-1);
    tracep->declArray(c+3240,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+107,"skd_stb", false,-1);
    tracep->declBit(c+4398,"skd_stall", false,-1);
    tracep->declBit(c+3260,"skd_we", false,-1);
    tracep->declBus(c+3261,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3262,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3278,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3280,"decoded", false,-1, 3,0);
    tracep->declBit(c+3281,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4529,"NS", false,-1, 31,0);
    tracep->declBus(c+4535,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declArray(c+4728,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4731,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4667,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4537,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+4402,"i_reset", false,-1);
    tracep->declBit(c+108,"i_valid", false,-1);
    tracep->declBit(c+4398,"o_stall", false,-1);
    tracep->declBus(c+3261,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3282,"i_data", false,-1, 576,0);
    tracep->declBit(c+3301,"o_valid", false,-1);
    tracep->declBit(c+4399,"i_stall", false,-1);
    tracep->declBus(c+3280,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3302,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3303,"o_data", false,-1, 576,0);
    tracep->declBus(c+4537,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+109,"request", false,-1, 3,0);
    tracep->declBus(c+3322,"prerequest", false,-1, 2,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+110,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+111,"r_request_NS", false,-1);
    tracep->declBit(c+112,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4580,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4580,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4735,"DW", false,-1, 31,0);
    tracep->declBus(c+4537,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4401,"i_clk", false,-1);
    tracep->declBit(c+113,"i_reset", false,-1);
    tracep->declBit(c+288,"i_valid", false,-1);
    tracep->declBit(c+3281,"o_ready", false,-1);
    tracep->declArray(c+3323,"i_data", false,-1, 601,0);
    tracep->declBit(c+107,"o_valid", false,-1);
    tracep->declBit(c+4400,"i_ready", false,-1);
    tracep->declArray(c+3342,"o_data", false,-1, 601,0);
    tracep->declArray(c+3361,"w_data", false,-1, 601,0);
    tracep->declBit(c+4543,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+309,"r_valid", false,-1);
    tracep->declArray(c+3361,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+2801,"r_mack", false,-1, 3,0);
    tracep->declBus(c+2866,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3380,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4319,"regrant", false,-1, 3,0);
    tracep->declBus(c+4320,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3381,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4321,"regrant", false,-1, 3,0);
    tracep->declBus(c+4322,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[2] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3382,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4323,"regrant", false,-1, 3,0);
    tracep->declBus(c+4324,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+142,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+143,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+144,"drop_sgrant", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_hf465e4c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h2308cdb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h382813b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h5259539f__0;
    VlWide<3>/*95:0*/ __Vtemp_ha5e9189f__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__k),32);
    bufp->fullCData(oldp+2,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__tobits__DOT__newv),7);
    bufp->fullIData(oldp+3,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__k),32);
    bufp->fullCData(oldp+4,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__newv),7);
    bufp->fullIData(oldp+5,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__mkbytes__DOT__k),32);
    bufp->fullIData(oldp+6,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__ik),32);
    bufp->fullSData(oldp+7,(vlSelf->main__DOT__wb32_xbar__DOT__requested[0]),11);
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
                               << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+89,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+92,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+93,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+94,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+95,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+96,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+99,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+100,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+102,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+103,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+106,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+109,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+113,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullIData(oldp+114,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+115,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+116,((((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                                << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope3_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+117,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
    bufp->fullIData(oldp+118,(vlSelf->main__DOT____Vcellinp__scope2_ddr3i____pinNumber4),31);
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
    bufp->fullBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+121,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullSData(oldp+122,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 0xbU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),12);
    bufp->fullSData(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),11);
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+133,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+134,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+135,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+136,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+137,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+138,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullBit(oldp+139,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+140,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+141,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+142,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+143,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+144,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+145,(vlSelf->main__DOT__scope1_ddr3_int));
    bufp->fullBit(oldp+146,(vlSelf->main__DOT__scope2_ddr3_int));
    bufp->fullBit(oldp+147,((1U & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow)))));
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                   >> 5U))));
    bufp->fullBit(oldp+150,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+151,(vlSelf->main__DOT__i2cscope_int));
    bufp->fullBit(oldp+152,(vlSelf->main__DOT__scope3_ddr3_int));
    bufp->fullBit(oldp+153,(vlSelf->main__DOT__gpio_int));
    bufp->fullBit(oldp+154,(vlSelf->main__DOT__spio_int));
    bufp->fullBit(oldp+155,(vlSelf->main__DOT__r_sirefclk_en));
    bufp->fullIData(oldp+156,(vlSelf->main__DOT__r_sirefclk_data),30);
    bufp->fullBit(oldp+157,(vlSelf->main__DOT__w_sirefclk_unused_stb));
    bufp->fullBit(oldp+158,(vlSelf->main__DOT__r_sirefclk_ack));
    bufp->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullBit(oldp+160,(vlSelf->main__DOT__i2c_valid));
    bufp->fullBit(oldp+161,(vlSelf->main__DOT__i2c_ready));
    bufp->fullBit(oldp+162,(vlSelf->main__DOT__i2c_last));
    bufp->fullCData(oldp+163,(vlSelf->main__DOT__i2c_data),8);
    bufp->fullCData(oldp+164,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__axis_tid),2);
    bufp->fullBit(oldp+165,(vlSelf->main__DOT__w_console_rx_stb));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+167,(vlSelf->main__DOT__w_console_busy));
    bufp->fullCData(oldp+168,(vlSelf->main__DOT__w_console_rx_data),7);
    bufp->fullCData(oldp+169,(vlSelf->main__DOT__w_console_tx_data),7);
    bufp->fullIData(oldp+170,(vlSelf->main__DOT__uart_debug),32);
    bufp->fullBit(oldp+171,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb));
    bufp->fullBit(oldp+172,(vlSelf->main__DOT__raw_cpu_dbg_ack));
    bufp->fullSData(oldp+173,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+174,(vlSelf->main__DOT__zip_cpu_int));
    bufp->fullCData(oldp+175,(vlSelf->main__DOT__wbu_rx_data),8);
    bufp->fullCData(oldp+176,(vlSelf->main__DOT__genbus__DOT__ps_data),8);
    bufp->fullBit(oldp+177,(vlSelf->main__DOT__wbu_rx_stb));
    bufp->fullBit(oldp+178,(vlSelf->main__DOT__genbus__DOT__ps_full));
    bufp->fullBit(oldp+179,(vlSelf->main__DOT__txv__DOT__r_busy));
    bufp->fullBit(oldp+180,(vlSelf->main__DOT__genbus__DOT__r_wdt_reset));
    bufp->fullCData(oldp+181,(vlSelf->main__DOT__w_led),8);
    bufp->fullSData(oldp+182,((((IData)(vlSelf->main__DOT__spio_int) 
                                << 8U) | ((0x80U & 
                                           ((IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill) 
                                            << 2U)) 
                                          | (0x40U 
                                             & ((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill) 
                                                << 1U))))),15);
    bufp->fullSData(oldp+183,((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+184,(vlSelf->main__DOT__wbwide_i2cdma_cyc));
    bufp->fullBit(oldp+185,(vlSelf->main__DOT__wbwide_i2cdma_stb));
    bufp->fullIData(oldp+186,(vlSelf->main__DOT__wbwide_i2cdma_addr),25);
    bufp->fullWData(oldp+187,(vlSelf->main__DOT__wbwide_i2cdma_data),512);
    bufp->fullQData(oldp+203,(vlSelf->main__DOT__wbwide_i2cdma_sel),64);
    bufp->fullBit(oldp+205,((1U & (IData)(vlSelf->__VdfgTmp_h503d14d1__0))));
    bufp->fullBit(oldp+206,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack))));
    bufp->fullBit(oldp+207,((1U & (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr))));
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
    bufp->fullWData(oldp+208,(__Vtemp_h053daff0__0),512);
    bufp->fullBit(oldp+224,(vlSelf->main__DOT__wbwide_i2cm_cyc));
    bufp->fullBit(oldp+225,(vlSelf->main__DOT__wbwide_i2cm_stb));
    bufp->fullIData(oldp+226,(vlSelf->main__DOT__wbwide_i2cm_addr),25);
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+228,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 1U))));
    bufp->fullBit(oldp+229,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+230,(__Vtemp_h3711b190__0),512);
    bufp->fullBit(oldp+246,(vlSelf->main__DOT__wbwide_zip_cyc));
    bufp->fullBit(oldp+247,(vlSelf->main__DOT__wbwide_zip_stb));
    bufp->fullBit(oldp+248,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                    ? (IData)(vlSelf->main__DOT__swic__DOT__cpu_we)
                                    : (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner))))));
    bufp->fullIData(oldp+249,(vlSelf->main__DOT__wbwide_zip_addr),25);
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
    bufp->fullWData(oldp+250,(__Vtemp_h58eb921b__0),512);
    bufp->fullQData(oldp+266,(((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
                                ? ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                    : 0xffffffffffffffffULL)
                                : ((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                    ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                    : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel))),64);
    bufp->fullBit(oldp+268,((1U & ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+269,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 2U))));
    bufp->fullBit(oldp+270,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+271,(__Vtemp_hc1d82fb0__0),512);
    bufp->fullBit(oldp+287,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+288,(vlSelf->main__DOT__wbwide_wbu_arbiter_stb));
    bufp->fullBit(oldp+289,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we));
    bufp->fullIData(oldp+290,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),25);
    bufp->fullWData(oldp+291,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_data),512);
    bufp->fullQData(oldp+307,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_sel),64);
    bufp->fullBit(oldp+309,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+310,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                   >> 3U))));
    bufp->fullBit(oldp+311,((1U & ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr) 
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
    bufp->fullWData(oldp+312,(__Vtemp_hc1851150__0),512);
    bufp->fullBit(oldp+328,(vlSelf->main__DOT__wbwide_wbdown_stall));
    bufp->fullBit(oldp+329,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
    bufp->fullWData(oldp+330,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+346,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+347,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+363,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+364,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullCData(oldp+365,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),8);
    bufp->fullIData(oldp+366,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+367,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+368,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+369,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullIData(oldp+370,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullIData(oldp+371,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+372,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+373,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+374,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+375,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+376,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+377,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+378,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+379,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+380,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+381,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+382,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+383,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+384,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+385,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+386,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+387,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+388,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+389,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+390,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+391,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+392,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+393,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+394,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+395,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+396,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullIData(oldp+397,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+398,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+399,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+400,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+401,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+402,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+403,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+404,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+405,((0x3fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),30);
    bufp->fullIData(oldp+406,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+407,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+408,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+409,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+410,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+411,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+412,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+413,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+414,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+415,((0x3fffffffU & (IData)(
                                                     (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                      >> 0x1eU)))),30);
    bufp->fullIData(oldp+416,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+417,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+418,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullBit(oldp+419,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+420,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+421,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+437,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+438,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+440,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+441,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+442,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+443,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+444,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+445,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+446,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+447,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+448,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+449,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+450,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+451,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+452,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+453,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullBit(oldp+454,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+455,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+456,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+457,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+458,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+459,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+460,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+461,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+462,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+463,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+464,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+465,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+466,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+467,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+468,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+469,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+470,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+471,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+472,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+473,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+474,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+475,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+476,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+477,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+478,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+479,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+480,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+481,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+482,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+483,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+484,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+485,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+486,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+487,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+488,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+489,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+490,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+491,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+492,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+493,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+494,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+495,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+496,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+497,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+498,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+499,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+500,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+501,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+502,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                             | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                  | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                 | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+503,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+505,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+506,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+507,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+508,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+510,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+511,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+513,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+514,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+516,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+517,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+518,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+519,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+520,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+521,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+522,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+523,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+524,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+525,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+526,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+527,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+528,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+530,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+531,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+532,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+533,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+534,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+535,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+536,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+537,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+538,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+539,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+541,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+542,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+543,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+544,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+545,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+546,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+547,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                             | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+549,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+551,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                             | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+553,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+554,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+556,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+557,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+558,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+559,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+560,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+561,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+562,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                  >> 0x21U))))));
    bufp->fullCData(oldp+563,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+564,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+565,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+566,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+567,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+569,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                         >> 0x1fU)) 
                                << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+570,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+571,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+572,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+573,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+574,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+576,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+577,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+578,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+579,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+580,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+581,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+582,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+583,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+584,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+585,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+586,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+587,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+588,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+589,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+591,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+593,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+594,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+595,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+596,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+597,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+599,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+600,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+601,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+602,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+603,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+605,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+606,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+607,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+608,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+609,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+610,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+611,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+612,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+613,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+614,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+615,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+616,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+618,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+620,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+621,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+622,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                   >> 9U))));
    bufp->fullBit(oldp+623,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+624,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+625,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+626,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                             & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                >> 0x15U))));
    bufp->fullBit(oldp+627,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+628,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+629,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+630,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+631,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+632,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+633,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+634,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+635,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+636,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+637,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+638,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+639,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+640,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullBit(oldp+641,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+642,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+643,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),31);
    bufp->fullBit(oldp+644,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+645,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+646,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+647,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),31);
    bufp->fullBit(oldp+648,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+649,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+650,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+651,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+652,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+653,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+654,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+655,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+656,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+657,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+659,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+660,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+661,(vlSelf->main__DOT__i2ci__DOT__abort_address),31);
    bufp->fullIData(oldp+662,(vlSelf->main__DOT__i2ci__DOT__jump_target),31);
    bufp->fullBit(oldp+663,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+664,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+665,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+666,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+667,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+668,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+669,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+670,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                             | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+671,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+672,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+673,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+674,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+675,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+676,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+677,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+678,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+679,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+680,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+681,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+682,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+683,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+684,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+685,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+686,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+689,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+690,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+691,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+692,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+693,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+694,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+695,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+696,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+697,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+713,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+714,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+715,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+716,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+717,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+733,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+749,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+750,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+751,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+752,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+753,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+754,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+755,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+756,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+757,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+758,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+759,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+760,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+761,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+762,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+763,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+764,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+765,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+766,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+767,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+768,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+769,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+770,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+771,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+772,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+773,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+774,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+775,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+776,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+777,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+778,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+779,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+780,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+781,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+782,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+783,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+784,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+785,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+786,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+787,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+788,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+789,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+790,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+791,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+792,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+793,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+794,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+795,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+796,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+797,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+798,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+799,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+800,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+801,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+802,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+803,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+805,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+806,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+807,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+808,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+809,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+810,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+811,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+812,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+813,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+814,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+815,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+816,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+817,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+818,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+819,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+820,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+821,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+822,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+823,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+824,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+826,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+827,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+828,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+829,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+830,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+831,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+832,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+833,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+834,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+835,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+836,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+837,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+838,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+839,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+840,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+841,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+842,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+843,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+844,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+845,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+846,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+847,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+848,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+849,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+850,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+851,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+852,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+853,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+854,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+855,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+856,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+857,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+858,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+859,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+860,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+861,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+862,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+863,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+864,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+865,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+866,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+867,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+868,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+869,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+870,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+871,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+872,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+873,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+874,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+875,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+876,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+877,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+878,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+879,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+880,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+881,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+882,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+883,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+884,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+885,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+886,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+888,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+889,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+890,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullSData(oldp+891,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+892,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+893,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+894,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+895,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+896,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+897,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+898,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+899,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+900,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+901,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+902,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+903,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+904,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+905,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+906,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+907,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+908,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+909,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+910,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+911,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+912,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+913,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+914,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+915,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+916,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+917,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+918,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+919,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+920,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+921,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+922,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+923,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                             | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                       >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+924,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+925,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+926,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+927,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+928,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+929,(vlSelf->main__DOT__swic__DOT__cpu_addr),25);
    bufp->fullIData(oldp+930,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+931,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+932,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+933,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+934,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+935,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+936,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+937,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                             & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                >> 7U))));
    bufp->fullBit(oldp+939,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+940,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+941,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+942,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+943,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+944,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+945,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+946,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+947,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+948,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+949,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+950,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+951,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+952,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+953,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+954,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+955,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+956,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                             & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+957,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+958,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+959,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+960,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+961,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+962,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+963,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+964,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+965,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+966,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+967,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+968,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+969,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+970,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+971,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                   >> 1U))));
    bufp->fullBit(oldp+973,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+974,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+975,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+976,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+977,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),25);
    bufp->fullIData(oldp+978,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+979,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+980,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                   | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                      | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                         >> 2U))))));
    bufp->fullBit(oldp+981,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+982,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+983,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+984,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+985,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+986,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+987,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+988,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+989,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+990,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+991,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+992,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+993,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),25);
    bufp->fullWData(oldp+994,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1010,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1012,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1013,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1014,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1015,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1016,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1017,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1019,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1020,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1021,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1022,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1023,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1024,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1025,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1026,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1027,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1028,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1029,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1045,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1047,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1063,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1064,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1065,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1066,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1067,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1068,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1069,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1070,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1071,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1072,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1073,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1074,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1075,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1076,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1077,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1078,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1079,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1080,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1081,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1082,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1083,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1084,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1085,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1086,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1087,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1088,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1089,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1090,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1091,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1092,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1093,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1094,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1095,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1096,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1097,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1098,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1099,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1100,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1102,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1103,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1104,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1106,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1107,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1108,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1109,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1110,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1111,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1112,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1113,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1114,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1115,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1116,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1117,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1118,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),31);
    bufp->fullIData(oldp+1119,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),31);
    bufp->fullIData(oldp+1120,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1121,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1122,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),31);
    bufp->fullIData(oldp+1123,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),31);
    bufp->fullSData(oldp+1124,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1126,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1127,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1128,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1129,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1130,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1131,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1132,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1133,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1134,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1135,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1136,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),31);
    bufp->fullIData(oldp+1137,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),31);
    bufp->fullSData(oldp+1138,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1139,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1141,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1142,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1143,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1144,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),25);
    bufp->fullQData(oldp+1145,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1147,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1148,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1149,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1150,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1166,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1167,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1168,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1169,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1170,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1186,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1187,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1188,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1189,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1190,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1206,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1207,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1208,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1209,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1210,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1211,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1212,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1213,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1229,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1230,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1231,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1232,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1233,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1234,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1235,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),25);
    bufp->fullQData(oldp+1236,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1238,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1239,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1240,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1241,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1242,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1243,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1248,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1249,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1250,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1251,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1252,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1253,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1254,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1255,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1256,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),31);
    bufp->fullIData(oldp+1257,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),31);
    bufp->fullCData(oldp+1258,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1259,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1260,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1262,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1264,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1266,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1268,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1269,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1270,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1271,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1272,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1273,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1274,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1290,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1292,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1324,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1325,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1326,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1327,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1328,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1329,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1330,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+1346,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+1347,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+1348,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),32);
    bufp->fullCData(oldp+1349,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+1350,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+1382,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+1398,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+1402,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+1406,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+1408,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+1409,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+1410,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+1411,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+1412,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+1429,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+1446,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+1463,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+1480,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+1497,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+1514,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+1531,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+1548,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+1565,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+1582,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+1599,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+1616,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+1633,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+1650,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+1667,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+1684,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+1701,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+1718,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+1719,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+1720,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+1721,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+1722,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+1723,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+1724,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+1725,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+1726,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+1727,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1728,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+1729,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+1730,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+1731,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+1732,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+1733,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+1734,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1735,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+1736,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+1737,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+1738,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+1739,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+1740,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+1741,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+1742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+1743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+1744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),31);
    bufp->fullIData(oldp+1745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+1746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),31);
    bufp->fullBit(oldp+1747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+1748,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+1749,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+1750,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+1751,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+1752,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+1753,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+1754,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),25);
    bufp->fullBit(oldp+1755,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+1756,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+1757,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+1758,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+1759,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),31);
    bufp->fullIData(oldp+1760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+1761,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+1762,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+1763,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+1764,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+1765,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+1766,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+1767,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+1768,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+1769,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+1770,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+1771,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+1772,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+1773,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),25);
    bufp->fullBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+1775,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+1777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+1778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+1790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),22);
    bufp->fullIData(oldp+1791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),22);
    bufp->fullIData(oldp+1792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),22);
    bufp->fullIData(oldp+1793,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),22);
    bufp->fullIData(oldp+1794,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),22);
    bufp->fullIData(oldp+1795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),22);
    bufp->fullIData(oldp+1796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),22);
    bufp->fullIData(oldp+1797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),22);
    bufp->fullBit(oldp+1798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+1799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+1800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+1801,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+1817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+1833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+1834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+1835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+1836,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+1852,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+1854,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+1855,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),22);
    bufp->fullBit(oldp+1856,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+1857,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1858,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+1859,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+1860,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+1861,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+1862,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+1863,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+1864,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+1865,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+1866,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+1867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+1868,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),25);
    bufp->fullCData(oldp+1869,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1870,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+1871,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                             >> 3U))),22);
    bufp->fullBit(oldp+1872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+1873,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+1874,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+1875,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),22);
    bufp->fullSData(oldp+1876,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+1877,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+1878,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+1894,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+1910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+1911,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+1913,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+1914,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+1930,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+1946,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+1947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+1948,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+1949,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+1950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+1951,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+1952,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+1953,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+1954,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+1955,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+1956,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+1957,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+1958,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+1959,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+1960,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+1961,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+1962,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+1963,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+1964,((0x7fffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),31);
    bufp->fullBit(oldp+1965,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+1966,(__Vtemp_he3c3974d__0),512);
    bufp->fullIData(oldp+1982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),19);
    bufp->fullIData(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),19);
    bufp->fullIData(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),19);
    bufp->fullIData(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),19);
    bufp->fullIData(oldp+1986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),19);
    bufp->fullIData(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),19);
    bufp->fullIData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),19);
    bufp->fullIData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),19);
    bufp->fullCData(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+1993,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+1994,((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U)) 
                               == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                   >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),31);
    bufp->fullCData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+1998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),22);
    bufp->fullIData(oldp+1999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),22);
    bufp->fullIData(oldp+2000,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),22);
    bufp->fullIData(oldp+2001,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U))),22);
    bufp->fullIData(oldp+2002,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U))),22);
    bufp->fullBit(oldp+2003,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2004,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),22);
    bufp->fullWData(oldp+2005,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2021,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2037,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2038,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2039,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2040,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2041,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2042,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2043,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2044,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2045,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2046,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2047,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2048,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2064,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2065,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2066,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2067,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2068,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2069,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2070,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2071,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2072,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2073,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2080,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2081,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2082,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2083,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2084,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2085,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2086,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2087,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2088,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2089,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2090,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2091,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2092,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2093,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2094,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2095,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2096,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2097,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2098,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2099,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2100,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2118,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2119,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2120,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),31);
    bufp->fullBit(oldp+2123,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2124,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2125,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2126,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2127,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2128,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2130,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2131,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2132,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2133,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2134,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2135,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2136,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2150,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),31);
    bufp->fullBit(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2158,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2162,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2163,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2168,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2169,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2170,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2171,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2173,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),31);
    bufp->fullIData(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2176,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2179,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2181,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2187,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),31);
    bufp->fullCData(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2195,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2198,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2204,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2205,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2206,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2207,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2210,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2211,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2212,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2213,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2214,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2215,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2217,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2220,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),31);
    bufp->fullIData(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),31);
    bufp->fullBit(oldp+2227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2228,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2230,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2234,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2236,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2237,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2238,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2243,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2246,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2247,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2248,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2249,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2250,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2251,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2252,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2253,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2254,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2255,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),31);
    bufp->fullIData(oldp+2256,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2261,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2262,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2263,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2264,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2266,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2268,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2271,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2273,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2275,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2278,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2279,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2280,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2282,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2284,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2285,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2287,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2289,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2290,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2291,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2292,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2293,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2295,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2297,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2299,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2301,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2302,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2303,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2304,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2305,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2306,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2307,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2308,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2309,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2310,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2311,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2312,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2313,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2314,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2315,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2316,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2317,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2318,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2319,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2320,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2321,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2322,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2325,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2326,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2327,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2328,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2329,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2330,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2331,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2332,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2333,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2334,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2335,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2336,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2337,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+2338,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+2339,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+2340,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+2341,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+2342,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+2343,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+2344,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+2345,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+2346,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+2347,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+2348,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+2349,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+2350,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+2351,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+2352,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+2353,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+2354,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+2355,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+2356,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+2357,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+2358,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2359,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2360,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+2361,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+2362,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+2363,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+2364,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+2365,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2366,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2367,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+2368,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+2369,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+2370,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+2371,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+2372,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2373,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2374,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+2375,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+2376,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+2377,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+2378,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+2379,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+2380,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+2381,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+2382,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+2383,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+2384,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullSData(oldp+2385,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+2386,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+2387,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+2388,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+2389,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+2390,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+2391,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+2392,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+2393,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+2394,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+2395,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+2396,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+2399,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+2400,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+2402,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+2403,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+2404,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+2405,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+2406,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+2407,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+2408,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+2409,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+2410,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+2412,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+2413,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+2415,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+2416,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+2417,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+2418,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2419,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+2420,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+2421,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+2432,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+2440,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+2447,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+2448,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+2461,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+2462,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+2463,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+2464,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+2465,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+2466,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+2467,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+2468,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+2469,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+2470,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),31);
    bufp->fullIData(oldp+2471,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),31);
    bufp->fullCData(oldp+2472,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+2473,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),31);
    bufp->fullBit(oldp+2474,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+2475,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+2476,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+2477,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+2478,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+2479,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+2480,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+2481,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+2482,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+2483,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+2484,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+2485,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+2486,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+2487,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+2488,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+2489,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+2490,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+2506,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+2522,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+2524,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+2526,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+2527,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullBit(oldp+2528,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+2529,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+2530,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+2531,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullBit(oldp+2532,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+2533,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+2534,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+2535,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2536,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2537,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+2538,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+2539,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+2540,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+2541,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+2542,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+2543,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+2544,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+2545,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+2546,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+2547,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+2548,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+2549,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+2550,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+2551,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+2552,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+2553,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+2554,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+2555,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+2556,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+2557,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+2558,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+2559,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+2560,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+2561,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+2562,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+2563,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+2564,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+2565,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+2566,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+2567,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+2568,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+2569,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2570,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2571,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2572,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+2573,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),12);
    bufp->fullBit(oldp+2574,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2575,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2576,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+2577,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2578,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullIData(oldp+2579,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullCData(oldp+2580,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullSData(oldp+2581,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),12);
    bufp->fullBit(oldp+2582,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullCData(oldp+2583,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),8);
    bufp->fullQData(oldp+2584,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),45);
    bufp->fullQData(oldp+2586,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),45);
    bufp->fullIData(oldp+2588,((0x1fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),29);
    bufp->fullBit(oldp+2589,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+2590,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+2606,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+2607,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2608,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2609,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+2610,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+2611,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+2612,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+2628,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+2630,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+2631,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+2632,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+2633,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+2634,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+2635,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+2636,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+2637,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+2638,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+2639,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+2640,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+2641,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+2642,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+2643,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+2644,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+2645,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+2647,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+2649,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+2650,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+2651,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+2652,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+2653,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+2654,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+2655,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+2656,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+2657,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+2658,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+2659,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+2660,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+2661,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+2662,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+2663,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2664,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2665,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2666,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+2667,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+2668,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+2669,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+2670,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),60);
    bufp->fullQData(oldp+2672,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+2674,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+2675,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+2677,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+2678,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2679,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+2680,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2681,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+2682,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2683,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+2684,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2685,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+2686,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+2687,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+2688,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),30);
    bufp->fullIData(oldp+2689,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+2690,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+2691,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+2692,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+2693,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+2694,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+2695,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+2696,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+2697,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+2698,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2699,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+2700,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2701,((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                    >> 2U))));
    bufp->fullIData(oldp+2702,((0x3fffffffU & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                << 0x1cU) 
                                               | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                  >> 4U)))),30);
    bufp->fullIData(oldp+2703,(((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                 << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+2704,((0xfU & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])),4);
    bufp->fullCData(oldp+2705,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+2706,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+2707,((((QData)((IData)((1U 
                                                  & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                     >> 2U)))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))))),37);
    bufp->fullIData(oldp+2709,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),30);
    bufp->fullQData(oldp+2710,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+2712,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+2713,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),67);
    bufp->fullWData(oldp+2716,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),67);
    bufp->fullWData(oldp+2719,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),67);
    bufp->fullCData(oldp+2722,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+2723,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
                                       << 3U) | (4U 
                                                 & (((IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)
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
    bufp->fullWData(oldp+2724,(__Vtemp_h2146f57f__0),100);
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
    bufp->fullWData(oldp+2728,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+2792,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+2800,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+2801,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+2802,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+2866,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+2867,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),4);
    bufp->fullCData(oldp+2868,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),4);
    bufp->fullCData(oldp+2869,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),4);
    bufp->fullCData(oldp+2870,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),4);
    bufp->fullCData(oldp+2871,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),3);
    bufp->fullCData(oldp+2872,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),3);
    bufp->fullCData(oldp+2873,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),3);
    bufp->fullCData(oldp+2874,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),3);
    bufp->fullCData(oldp+2875,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),4);
    bufp->fullCData(oldp+2876,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),4);
    bufp->fullCData(oldp+2877,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),4);
    bufp->fullCData(oldp+2878,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),4);
    bufp->fullCData(oldp+2879,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+2880,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+2881,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+2882,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+2883,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+2884,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+2885,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+2886,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+2887,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+2888,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullBit(oldp+2889,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2890,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2891,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2892,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullCData(oldp+2893,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2894,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2895,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2896,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2897,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+2898,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+2899,(__Vtemp_h0fd98bf7__0),512);
    bufp->fullQData(oldp+2915,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+2917,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),4);
    bufp->fullBit(oldp+2918,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+2919,(__Vtemp_h3b245e0e__0),577);
    bufp->fullBit(oldp+2938,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+2939,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+2940,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+2959,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+2960,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+2979,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+2998,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3017,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3018,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3019,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3020,(__Vtemp_hcb138391__0),512);
    bufp->fullQData(oldp+3036,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3038,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3039,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3040,(__Vtemp_hf41d9735__0),577);
    bufp->fullBit(oldp+3059,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3060,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3061,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3080,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),3);
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
    bufp->fullWData(oldp+3081,(__Vtemp_h6283f4ea__0),602);
    bufp->fullWData(oldp+3100,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3119,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3138,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3139,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3140,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3141,(__Vtemp_hb4195529__0),512);
    bufp->fullQData(oldp+3157,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3159,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3160,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3161,(__Vtemp_hb863f640__0),577);
    bufp->fullBit(oldp+3180,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3181,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3182,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3201,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3202,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+3221,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3240,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3259,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3260,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3261,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3262,(__Vtemp_h61e633ab__0),512);
    bufp->fullQData(oldp+3278,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3280,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3281,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3282,(__Vtemp_h43fd6509__0),577);
    bufp->fullBit(oldp+3301,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3302,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3303,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3322,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3323,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+3342,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3361,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullCData(oldp+3380,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3381,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3382,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullSData(oldp+3383,((((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
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
    bufp->fullWData(oldp+3384,(__Vtemp_h33b103d1__0),352);
    bufp->fullIData(oldp+3395,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3396,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3397,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3398,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3399,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3400,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3401,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3402,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3403,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3404,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3405,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3406,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3407,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3408,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3409,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3410,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullCData(oldp+3411,((((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                 << 2U) | (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))),3);
    bufp->fullCData(oldp+3412,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
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
    bufp->fullWData(oldp+3413,(__Vtemp_h8a06d21b__0),1536);
    bufp->fullWData(oldp+3461,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3477,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3493,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3509,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullBit(oldp+3525,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                    [0U] >> 1U))));
    bufp->fullBit(oldp+3526,(vlSelf->main__DOT__wbwide_ddr3_controller_stall));
    bufp->fullBit(oldp+3527,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
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
    bufp->fullWData(oldp+3528,(__Vtemp_hc035b709__1),512);
    bufp->fullBit(oldp+3544,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+3545,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+3546,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullIData(oldp+3547,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+3548,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+3549,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullIData(oldp+3550,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),18);
    bufp->fullBit(oldp+3551,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+3552,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+3553,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+3554,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                              & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+3555,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullCData(oldp+3556,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullSData(oldp+3557,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+3558,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+3559,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+3560,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+3561,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+3562,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+3563,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+3564,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullBit(oldp+3565,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+3566,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+3567,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullWData(oldp+3568,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),512);
    bufp->fullQData(oldp+3584,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),64);
    bufp->fullSData(oldp+3586,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+3587,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+3588,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+3589,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+3590,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullBit(oldp+3591,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+3592,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+3593,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullQData(oldp+3594,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),64);
    bufp->fullQData(oldp+3596,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),64);
    bufp->fullQData(oldp+3598,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),64);
    bufp->fullQData(oldp+3600,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),64);
    bufp->fullWData(oldp+3602,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),512);
    bufp->fullWData(oldp+3618,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),512);
    bufp->fullWData(oldp+3634,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),512);
    bufp->fullWData(oldp+3650,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),512);
    bufp->fullQData(oldp+3666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullQData(oldp+3668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
    bufp->fullQData(oldp+3670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
    bufp->fullQData(oldp+3672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
    bufp->fullQData(oldp+3674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4]),64);
    bufp->fullQData(oldp+3676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5]),64);
    bufp->fullQData(oldp+3678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6]),64);
    bufp->fullQData(oldp+3680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7]),64);
    bufp->fullCData(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullCData(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
    bufp->fullCData(oldp+3684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
    bufp->fullCData(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
    bufp->fullCData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4]),8);
    bufp->fullCData(oldp+3687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5]),8);
    bufp->fullCData(oldp+3688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6]),8);
    bufp->fullCData(oldp+3689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7]),8);
    bufp->fullSData(oldp+3690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+3691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+3692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+3693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+3699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+3701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+3703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+3705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+3707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+3708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+3709,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+3710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+3711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+3712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+3713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+3714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+3716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+3717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+3718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+3719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+3720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+3721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+3722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+3724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullBit(oldp+3725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+3726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullCData(oldp+3727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+3728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+3729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+3730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullBit(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
    bufp->fullBit(oldp+3732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+3733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+3734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+3735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+3737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+3738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+3740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+3742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index),6);
    bufp->fullCData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullCData(oldp+3744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat),3);
    bufp->fullCData(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+3746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),3);
    bufp->fullCData(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),6);
    bufp->fullSData(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
    bufp->fullCData(oldp+3755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
    bufp->fullCData(oldp+3756,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
    bufp->fullCData(oldp+3757,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4]),4);
    bufp->fullCData(oldp+3758,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5]),4);
    bufp->fullCData(oldp+3759,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6]),4);
    bufp->fullCData(oldp+3760,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7]),4);
    bufp->fullCData(oldp+3761,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+3762,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+3763,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+3764,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+3765,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+3766,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+3767,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+3768,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+3769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+3770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+3772,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+3773,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+3774,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullWData(oldp+3775,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),512);
    bufp->fullWData(oldp+3791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),512);
    bufp->fullCData(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+3809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+3810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+3811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+3812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+3813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+3814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+3815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+3816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+3817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+3818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+3819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+3820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+3821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+3822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+3823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+3824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+3825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+3826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullWData(oldp+3827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),512);
    bufp->fullBit(oldp+3843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+3844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+3845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+3846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullWData(oldp+3847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),512);
    bufp->fullWData(oldp+3863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+3867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+3868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
    bufp->fullCData(oldp+3869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
    bufp->fullCData(oldp+3870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
    bufp->fullCData(oldp+3871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4]),7);
    bufp->fullCData(oldp+3872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5]),7);
    bufp->fullCData(oldp+3873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6]),7);
    bufp->fullCData(oldp+3874,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7]),7);
    bufp->fullCData(oldp+3875,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3877,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+3880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+3881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+3882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+3883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+3887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+3888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+3889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+3890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+3891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3893,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3894,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3895,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+3896,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+3897,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+3898,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+3899,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+3900,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3901,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3902,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3903,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+3904,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+3905,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+3906,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+3907,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7]),5);
    bufp->fullBit(oldp+3908,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+3909,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+3910,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+3911,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+3912,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+3913,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+3914,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3915,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3916,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3917,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3918,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),8);
    bufp->fullCData(oldp+3919,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),8);
    bufp->fullCData(oldp+3920,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),8);
    bufp->fullCData(oldp+3921,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),8);
    bufp->fullCData(oldp+3922,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),3);
    bufp->fullBit(oldp+3923,((7U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))));
    bufp->fullSData(oldp+3924,(((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                << 0xaU)),11);
    bufp->fullBit(oldp+3925,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
    bufp->fullBit(oldp+3926,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
    bufp->fullBit(oldp+3927,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    bufp->fullIData(oldp+3928,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),25);
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
    bufp->fullWData(oldp+3929,(__Vtemp_hf82de6ac__0),512);
    bufp->fullQData(oldp+3945,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+3947,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullBit(oldp+3948,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3949,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3950,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullIData(oldp+3951,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
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
    bufp->fullWData(oldp+3952,(__Vtemp_hf74e670c__0),512);
    bufp->fullQData(oldp+3968,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
    bufp->fullBit(oldp+3970,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+3971,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+3972,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullIData(oldp+3973,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
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
    bufp->fullWData(oldp+3974,(__Vtemp_h21e563ec__0),512);
    bufp->fullQData(oldp+3990,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U])))),64);
    bufp->fullBit(oldp+3992,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+3993,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullBit(oldp+3994,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 8U))));
    bufp->fullBit(oldp+3995,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (0U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+3996,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 8U))));
    bufp->fullIData(oldp+3997,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+3998,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x20U)))),4);
    bufp->fullBit(oldp+3999,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (1U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+4000,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullBit(oldp+4001,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+4002,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (4U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+4003,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+4004,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+4005,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullCData(oldp+4006,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),8);
    bufp->fullIData(oldp+4007,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+4008,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+4009,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+4010,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+4011,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullCData(oldp+4012,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+4013,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+4014,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 4U)))),4);
    bufp->fullBit(oldp+4015,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+4016,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+4017,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullCData(oldp+4018,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+4019,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+4020,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 8U)))),4);
    bufp->fullBit(oldp+4021,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 3U))));
    bufp->fullBit(oldp+4022,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 3U))));
    bufp->fullBit(oldp+4023,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 3U))));
    bufp->fullCData(oldp+4024,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+4025,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+4026,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0xcU)))),4);
    bufp->fullBit(oldp+4027,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 4U))));
    bufp->fullBit(oldp+4028,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 4U))));
    bufp->fullBit(oldp+4029,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 4U))));
    bufp->fullCData(oldp+4030,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),8);
    bufp->fullIData(oldp+4031,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+4032,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x10U)))),4);
    bufp->fullBit(oldp+4033,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 5U))));
    bufp->fullBit(oldp+4034,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 5U))));
    bufp->fullBit(oldp+4035,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 5U))));
    bufp->fullCData(oldp+4036,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+4037,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+4038,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x14U)))),4);
    bufp->fullBit(oldp+4039,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 6U))));
    bufp->fullBit(oldp+4040,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 6U))));
    bufp->fullBit(oldp+4041,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 6U))));
    bufp->fullCData(oldp+4042,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+4043,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+4044,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x18U)))),4);
    bufp->fullBit(oldp+4045,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 7U))));
    bufp->fullBit(oldp+4046,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 7U))));
    bufp->fullBit(oldp+4047,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U))));
    bufp->fullCData(oldp+4048,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+4049,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+4050,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x1cU)))),4);
    bufp->fullBit(oldp+4051,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 8U))));
    bufp->fullCData(oldp+4052,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])),8);
    bufp->fullBit(oldp+4053,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 9U))));
    bufp->fullBit(oldp+4054,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 9U))));
    bufp->fullBit(oldp+4055,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 9U))));
    bufp->fullCData(oldp+4056,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+4057,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+4058,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x24U)))),4);
    bufp->fullBit(oldp+4059,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+4060,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+4061,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+4062,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+4063,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+4064,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x28U)))),4);
    bufp->fullSData(oldp+4065,((0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                            << 7U) 
                                           | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                              >> 0x19U)))),14);
    bufp->fullCData(oldp+4066,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x10U))),2);
    bufp->fullIData(oldp+4067,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                              << 0xeU) 
                                             | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                >> 0x12U)))),24);
    bufp->fullCData(oldp+4068,((0x7fU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 0x10U))),7);
    bufp->fullIData(oldp+4069,((0xffffffU & ((IData)(5U) 
                                             + ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                   >> 0x12U))))),24);
    bufp->fullCData(oldp+4070,((3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),2);
    bufp->fullBit(oldp+4071,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+4072,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+4073,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+4074,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+4075,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+4076,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+4077,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+4078,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+4079,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+4080,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+4081,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+4082,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 8U))));
    bufp->fullBit(oldp+4083,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+4084,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4085,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4086,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4087,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+4088,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4089,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4090,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+4091,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+4092,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4093,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullCData(oldp+4094,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullBit(oldp+4095,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullCData(oldp+4096,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),3);
    bufp->fullBit(oldp+4097,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+4098,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),2);
    bufp->fullBit(oldp+4099,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+4100,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+4101,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+4102,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+4103,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+4104,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+4105,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullCData(oldp+4106,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 8U))),2);
    bufp->fullIData(oldp+4107,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+4108,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullCData(oldp+4109,((0xfU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),4);
    bufp->fullCData(oldp+4110,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullIData(oldp+4111,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullSData(oldp+4112,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),11);
    bufp->fullSData(oldp+4113,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),11);
    bufp->fullSData(oldp+4114,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),11);
    bufp->fullWData(oldp+4115,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),88);
    bufp->fullWData(oldp+4118,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),352);
    bufp->fullQData(oldp+4129,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),44);
    bufp->fullSData(oldp+4131,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),12);
    bufp->fullSData(oldp+4132,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),11);
    bufp->fullCData(oldp+4133,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4134,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+4135,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullCData(oldp+4136,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),8);
    bufp->fullIData(oldp+4137,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+4138,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullBit(oldp+4139,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullSData(oldp+4140,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),12);
    bufp->fullBit(oldp+4141,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+4142,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4143,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4144,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x2cU)))));
    bufp->fullCData(oldp+4145,((0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                 >> 0x24U)))),8);
    bufp->fullIData(oldp+4146,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+4147,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullQData(oldp+4148,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x2cU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullQData(oldp+4150,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+4152,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),11);
    bufp->fullQData(oldp+4153,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),45);
    bufp->fullCData(oldp+4155,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4156,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4157,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4158,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+4159,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),3);
    bufp->fullCData(oldp+4160,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),3);
    bufp->fullCData(oldp+4161,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),3);
    bufp->fullWData(oldp+4162,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),75);
    bufp->fullWData(oldp+4165,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1536);
    bufp->fullWData(oldp+4213,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),192);
    bufp->fullCData(oldp+4219,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err),3);
    bufp->fullCData(oldp+4220,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),3);
    bufp->fullCData(oldp+4221,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4222,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4223,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4224,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4225,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+4226,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+4227,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+4228,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+4229,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+4230,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+4231,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),25);
    bufp->fullIData(oldp+4232,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),25);
    bufp->fullIData(oldp+4233,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),25);
    bufp->fullWData(oldp+4234,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+4250,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+4266,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+4282,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+4298,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+4300,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+4302,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+4304,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullCData(oldp+4306,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+4307,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4308,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4309,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4310,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4311,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4312,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4313,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4314,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4315,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4316,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4317,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4318,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4319,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4320,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4321,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4322,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4323,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4324,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullBit(oldp+4325,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+4326,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+4327,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+4328,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+4329,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+4330,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+4331,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+4332,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+4333,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+4334,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+4335,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullCData(oldp+4336,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+4337,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+4338,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+4339,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+4340,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+4341,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+4342,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+4343,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+4344,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+4345,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+4346,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+4347,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+4348,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+4349,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+4350,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+4351,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+4352,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+4353,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+4354,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+4355,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+4356,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+4357,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+4358,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+4359,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+4360,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+4361,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+4362,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+4363,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+4364,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+4365,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+4366,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+4367,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+4368,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+4369,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+4370,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+4371,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+4372,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+4373,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+4374,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+4375,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+4376,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+4377,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullBit(oldp+4378,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4379,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4380,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4381,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4382,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullBit(oldp+4383,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4384,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4385,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4386,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4387,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullCData(oldp+4388,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullBit(oldp+4389,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4390,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4391,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4392,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4393,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4394,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4395,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4396,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4397,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4398,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4399,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4400,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4401,(vlSelf->i_clk));
    bufp->fullBit(oldp+4402,(vlSelf->i_reset));
    bufp->fullWData(oldp+4403,(vlSelf->i_ddr3_controller_iserdes_data),512);
    bufp->fullQData(oldp+4419,(vlSelf->i_ddr3_controller_iserdes_dqs),64);
    bufp->fullQData(oldp+4421,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),64);
    bufp->fullBit(oldp+4423,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4424,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4427,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4428,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4429,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullWData(oldp+4430,(vlSelf->o_ddr3_controller_data),512);
    bufp->fullQData(oldp+4446,(vlSelf->o_ddr3_controller_dm),64);
    bufp->fullCData(oldp+4448,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4449,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4450,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4451,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4452,(vlSelf->o_ddr3_controller_odelay_data_ld),8);
    bufp->fullCData(oldp+4453,(vlSelf->o_ddr3_controller_odelay_dqs_ld),8);
    bufp->fullCData(oldp+4454,(vlSelf->o_ddr3_controller_idelay_data_ld),8);
    bufp->fullCData(oldp+4455,(vlSelf->o_ddr3_controller_idelay_dqs_ld),8);
    bufp->fullCData(oldp+4456,(vlSelf->o_ddr3_controller_bitslip),8);
    bufp->fullCData(oldp+4457,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4458,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4459,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4460,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4461,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4462,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4463,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4464,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4465,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4466,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4467,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4468,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4469,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4470,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4471,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4472,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4473,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4474,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4475,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4476,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4477,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4478,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4479,(vlSelf->cpu_prof_addr),31);
    bufp->fullIData(oldp+4480,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4481,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4482,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4483,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4484,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4485,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4486,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4487,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4488,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4489,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4490,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4491,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4492,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4493,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4494,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4495,((0U == (((((((((((((((
                                                   (Vmain__ConstPool__CONST_h93e1b771_0[0U] 
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
                                                 ^ 
                                                 vlSelf->i_ddr3_controller_iserdes_data[6U])) 
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
    bufp->fullSData(oldp+4496,(vlSelf->o_gpio),16);
    bufp->fullCData(oldp+4497,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4498,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),31);
    bufp->fullBit(oldp+4499,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4500,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4501,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4502,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4503,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4504,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4505,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4506,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4507,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4508,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullSData(oldp+4509,(((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                                & ((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
                                                   << 0xaU))) 
                                | ((0xfffffe00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
                                                              & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack))))))))))))),16);
    bufp->fullIData(oldp+4510,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4511,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4512,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4513,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullCData(oldp+4514,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4515,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4516,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullIData(oldp+4517,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullIData(oldp+4518,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4519,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4520,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4521,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4522,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4523,(10.0));
    bufp->fullDouble(oldp+4525,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4527,(0xeU),32);
    bufp->fullIData(oldp+4528,(0xaU),32);
    bufp->fullIData(oldp+4529,(3U),32);
    bufp->fullIData(oldp+4530,(8U),32);
    bufp->fullIData(oldp+4531,(1U),32);
    bufp->fullIData(oldp+4532,(4U),32);
    bufp->fullIData(oldp+4533,(0x18U),32);
    bufp->fullIData(oldp+4534,(0x4000000U),32);
    bufp->fullIData(oldp+4535,(0x19U),32);
    bufp->fullIData(oldp+4536,(0x10U),32);
    bufp->fullBit(oldp+4537,(1U));
    bufp->fullIData(oldp+4538,(0x64U),24);
    bufp->fullIData(oldp+4539,(7U),32);
    bufp->fullIData(oldp+4540,(0x13U),32);
    bufp->fullIData(oldp+4541,(2U),32);
    bufp->fullIData(oldp+4542,(0U),32);
    bufp->fullBit(oldp+4543,(0U));
    bufp->fullBit(oldp+4544,(1U));
    bufp->fullWData(oldp+4545,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4561,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+4563,(vlSelf->main__DOT__wb32_buildtime_addr),8);
    bufp->fullBit(oldp+4564,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4565,(0x74911U),32);
    bufp->fullCData(oldp+4566,(vlSelf->main__DOT__wb32_gpio_addr),8);
    bufp->fullBit(oldp+4567,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullCData(oldp+4568,(vlSelf->main__DOT__wb32_sirefclk_addr),8);
    bufp->fullBit(oldp+4569,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullCData(oldp+4570,(vlSelf->main__DOT__wb32_spio_addr),8);
    bufp->fullBit(oldp+4571,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullCData(oldp+4572,(vlSelf->main__DOT__wb32_version_addr),8);
    bufp->fullBit(oldp+4573,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4574,(0x20230826U),32);
    bufp->fullCData(oldp+4575,(0xfU),4);
    bufp->fullCData(oldp+4576,(0x20U),8);
    bufp->fullIData(oldp+4577,(0x14U),32);
    bufp->fullIData(oldp+4578,(0x200U),32);
    bufp->fullCData(oldp+4579,(0U),8);
    bufp->fullBit(oldp+4580,(0U));
    bufp->fullIData(oldp+4581,(0x20U),32);
    bufp->fullCData(oldp+4582,(6U),4);
    bufp->fullCData(oldp+4583,(0U),2);
    bufp->fullCData(oldp+4584,(1U),2);
    bufp->fullCData(oldp+4585,(2U),2);
    bufp->fullCData(oldp+4586,(3U),2);
    bufp->fullIData(oldp+4587,(0x40U),32);
    bufp->fullCData(oldp+4588,(0U),4);
    bufp->fullCData(oldp+4589,(1U),4);
    bufp->fullCData(oldp+4590,(2U),4);
    bufp->fullCData(oldp+4591,(3U),4);
    bufp->fullCData(oldp+4592,(4U),4);
    bufp->fullCData(oldp+4593,(5U),4);
    bufp->fullCData(oldp+4594,(7U),4);
    bufp->fullIData(oldp+4595,(0x1bU),32);
    bufp->fullIData(oldp+4596,(0x1aU),32);
    bufp->fullIData(oldp+4597,(0x17U),32);
    bufp->fullIData(oldp+4598,(0x16U),32);
    bufp->fullIData(oldp+4599,(0x12U),32);
    bufp->fullIData(oldp+4600,(0x15U),32);
    bufp->fullIData(oldp+4601,(0x11U),32);
    bufp->fullIData(oldp+4602,(0xdU),32);
    bufp->fullIData(oldp+4603,(0xbebc200U),32);
    bufp->fullIData(oldp+4604,(0x1dcd6500U),32);
    bufp->fullDouble(oldp+4605,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4607,(0x23U),32);
    bufp->fullDouble(oldp+4608,(350.0));
    bufp->fullIData(oldp+4610,(0x1e78U),32);
    bufp->fullDouble(oldp+4611,(360.0));
    bufp->fullDouble(oldp+4613,(15.0));
    bufp->fullIData(oldp+4615,(0xaU),19);
    bufp->fullDouble(oldp+4616,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4618,(0x80U),32);
    bufp->fullIData(oldp+4619,(6U),32);
    bufp->fullIData(oldp+4620,(5U),32);
    bufp->fullIData(oldp+4621,(0x2f080U),19);
    bufp->fullIData(oldp+4622,(9U),32);
    bufp->fullIData(oldp+4623,(0xbU),32);
    bufp->fullIData(oldp+4624,(0xcU),32);
    bufp->fullCData(oldp+4625,(0U),3);
    bufp->fullCData(oldp+4626,(2U),3);
    bufp->fullIData(oldp+4627,(0x20040U),19);
    bufp->fullCData(oldp+4628,(3U),3);
    bufp->fullIData(oldp+4629,(0x30004U),19);
    bufp->fullIData(oldp+4630,(0x30000U),19);
    bufp->fullCData(oldp+4631,(1U),3);
    bufp->fullIData(oldp+4632,(0x100c6U),19);
    bufp->fullIData(oldp+4633,(0x10046U),19);
    bufp->fullIData(oldp+4634,(0x720U),19);
    bufp->fullIData(oldp+4635,(0x4380005U),28);
    bufp->fullIData(oldp+4636,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4637,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4638,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4639,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4640,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4641,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4642,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4643,(0x1eU),32);
    bufp->fullIData(oldp+4644,(0x24U),32);
    bufp->fullIData(oldp+4645,(0x400U),32);
    bufp->fullCData(oldp+4646,(0U),5);
    bufp->fullQData(oldp+4647,(0x100000000ULL),36);
    bufp->fullQData(oldp+4649,(0x40000000ULL),36);
    bufp->fullQData(oldp+4651,(0ULL),36);
    bufp->fullCData(oldp+4653,(0x4fU),7);
    bufp->fullCData(oldp+4654,(0x49U),7);
    bufp->fullIData(oldp+4655,(0x1fU),32);
    bufp->fullIData(oldp+4656,(0U),31);
    bufp->fullSData(oldp+4657,(0xfffU),12);
    bufp->fullCData(oldp+4658,(8U),4);
    bufp->fullCData(oldp+4659,(9U),4);
    bufp->fullCData(oldp+4660,(0xaU),4);
    bufp->fullCData(oldp+4661,(0xbU),4);
    bufp->fullCData(oldp+4662,(0xcU),4);
    bufp->fullCData(oldp+4663,(0xdU),4);
    bufp->fullCData(oldp+4664,(4U),3);
    bufp->fullCData(oldp+4665,(5U),3);
    bufp->fullCData(oldp+4666,(6U),3);
    bufp->fullCData(oldp+4667,(7U),3);
    bufp->fullCData(oldp+4668,(0xaU),5);
    bufp->fullIData(oldp+4669,(0x1fcU),20);
    bufp->fullIData(oldp+4670,(0x7fffffffU),31);
    bufp->fullCData(oldp+4671,(0x64U),7);
    bufp->fullCData(oldp+4672,(0x32U),7);
    bufp->fullIData(oldp+4673,(0xc0000000U),32);
    bufp->fullCData(oldp+4674,(1U),8);
    bufp->fullCData(oldp+4675,(2U),8);
    bufp->fullCData(oldp+4676,(3U),8);
    bufp->fullCData(oldp+4677,(4U),8);
    bufp->fullCData(oldp+4678,(5U),8);
    bufp->fullCData(oldp+4679,(6U),8);
    bufp->fullCData(oldp+4680,(7U),8);
    bufp->fullCData(oldp+4681,(8U),8);
    bufp->fullCData(oldp+4682,(9U),8);
    bufp->fullCData(oldp+4683,(0xaU),8);
    bufp->fullCData(oldp+4684,(0xbU),8);
    bufp->fullCData(oldp+4685,(0xcU),8);
    bufp->fullCData(oldp+4686,(0xdU),8);
    bufp->fullCData(oldp+4687,(0xeU),8);
    bufp->fullCData(oldp+4688,(0xfU),8);
    bufp->fullCData(oldp+4689,(0x80U),8);
    bufp->fullCData(oldp+4690,(0x10U),8);
    bufp->fullIData(oldp+4691,(0U),20);
    bufp->fullIData(oldp+4692,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4693,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4696,(0x41425254U),32);
    bufp->fullIData(oldp+4697,(0x40U),32);
    bufp->fullIData(oldp+4698,(0xfU),32);
    bufp->fullBit(oldp+4699,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4700,(0x1dU),32);
    bufp->fullIData(oldp+4701,(0x1000000U),29);
    bufp->fullCData(oldp+4702,(0xeU),4);
    bufp->fullSData(oldp+4703,(0x1d7U),9);
    bufp->fullSData(oldp+4704,(0x2000U),14);
    bufp->fullCData(oldp+4705,(7U),5);
    bufp->fullIData(oldp+4706,(0x5f5e100U),32);
    bufp->fullIData(oldp+4707,(0x186a0U),32);
    bufp->fullIData(oldp+4708,(0x4e20U),32);
    bufp->fullIData(oldp+4709,(0x1387U),32);
    bufp->fullSData(oldp+4710,(0xc8U),12);
    bufp->fullIData(oldp+4711,(0x10U),32);
    __Vtemp_h2308cdb3__0[0U] = 0x18100800U;
    __Vtemp_h2308cdb3__0[1U] = 0x38302820U;
    __Vtemp_h2308cdb3__0[2U] = 0x806040U;
    bufp->fullWData(oldp+4712,(__Vtemp_h2308cdb3__0),88);
    __Vtemp_h382813b1__0[0U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[1U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[2U] = 0x80e0f8U;
    bufp->fullWData(oldp+4715,(__Vtemp_h382813b1__0),88);
    bufp->fullSData(oldp+4718,(0U),11);
    bufp->fullSData(oldp+4719,(0xf800U),16);
    bufp->fullIData(oldp+4720,(0x25U),32);
    bufp->fullSData(oldp+4721,(0x7ffU),11);
    bufp->fullIData(oldp+4722,(0x2dU),32);
    bufp->fullQData(oldp+4723,(0x800000000000000ULL),60);
    bufp->fullQData(oldp+4725,(0xe00000020000000ULL),60);
    bufp->fullIData(oldp+4727,(0x43U),32);
    __Vtemp_h5259539f__0[0U] = 0x80000U;
    __Vtemp_h5259539f__0[1U] = 0x2000U;
    __Vtemp_h5259539f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4728,(__Vtemp_h5259539f__0),75);
    __Vtemp_ha5e9189f__0[0U] = 0x1f80000U;
    __Vtemp_ha5e9189f__0[1U] = 0x3f000U;
    __Vtemp_ha5e9189f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4731,(__Vtemp_ha5e9189f__0),75);
    bufp->fullIData(oldp+4734,(0x241U),32);
    bufp->fullIData(oldp+4735,(0x25aU),32);
}
