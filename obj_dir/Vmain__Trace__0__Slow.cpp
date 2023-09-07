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
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declArray(c+4441,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4457,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4459,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4461,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4462,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4465,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4466,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4467,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4468,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4484,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4486,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4487,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4488,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4489,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4490,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4491,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4492,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4493,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4494,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBit(c+4495,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBus(c+4496,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4497,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4498,"i_fan_sda", false,-1);
    tracep->declBit(c+4499,"i_fan_scl", false,-1);
    tracep->declBit(c+4500,"o_fan_sda", false,-1);
    tracep->declBit(c+4501,"o_fan_scl", false,-1);
    tracep->declBit(c+4502,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4503,"o_sys_pwm", false,-1);
    tracep->declBit(c+4504,"i_fan_tach", false,-1);
    tracep->declBit(c+4505,"i_i2c_sda", false,-1);
    tracep->declBit(c+4506,"i_i2c_scl", false,-1);
    tracep->declBit(c+4507,"o_i2c_sda", false,-1);
    tracep->declBit(c+4508,"o_i2c_scl", false,-1);
    tracep->declBit(c+4509,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4510,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4511,"cpu_sim_we", false,-1);
    tracep->declBus(c+4512,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4513,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4514,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4515,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4516,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4517,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4518,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4519,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4520,"i_cpu_reset", false,-1);
    tracep->declBit(c+4521,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4522,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4523,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4524,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4525,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4526,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4527,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4528,"o_led", false,-1, 7,0);
    tracep->declBit(c+4529,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4570,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4572,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4574,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4575,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4576,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4577,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4577,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4578,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4579,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4580,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4581,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4582,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4583,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4584,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4585,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4586,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4583,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4587,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4576,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declArray(c+4441,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4457,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4459,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4461,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4462,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4465,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4466,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4467,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4468,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4484,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4486,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4487,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4488,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4489,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4490,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4491,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4492,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4493,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4494,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBit(c+4495,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBus(c+4496,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4497,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4498,"i_fan_sda", false,-1);
    tracep->declBit(c+4499,"i_fan_scl", false,-1);
    tracep->declBit(c+4500,"o_fan_sda", false,-1);
    tracep->declBit(c+4501,"o_fan_scl", false,-1);
    tracep->declBit(c+4502,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4503,"o_sys_pwm", false,-1);
    tracep->declBit(c+4504,"i_fan_tach", false,-1);
    tracep->declBit(c+4505,"i_i2c_sda", false,-1);
    tracep->declBit(c+4506,"i_i2c_scl", false,-1);
    tracep->declBit(c+4507,"o_i2c_sda", false,-1);
    tracep->declBit(c+4508,"o_i2c_scl", false,-1);
    tracep->declBit(c+4509,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4510,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4511,"cpu_sim_we", false,-1);
    tracep->declBus(c+4512,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4513,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4514,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4515,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4516,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4517,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4518,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4519,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4520,"i_cpu_reset", false,-1);
    tracep->declBit(c+4521,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4522,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4523,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4583,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4577,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4524,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4525,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4526,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4527,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4528,"o_led", false,-1, 7,0);
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
    tracep->declBus(c+4530,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4531,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+146,"r_sirefclk_en", false,-1);
    tracep->declBus(c+147,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+148,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+149,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+150,"i2cdma_ready", false,-1);
    tracep->declBus(c+4532,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4588,"I2C_ID_WIDTH", false,-1, 31,0);
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
    tracep->declBus(c+4589,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4590,"zip_trigger", false,-1);
    tracep->declBus(c+164,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+165,"zip_cpu_int", false,-1);
    tracep->declBit(c+4529,"i_clk200", false,-1);
    tracep->declBus(c+166,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+167,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+168,"wbu_rx_stb", false,-1);
    tracep->declBit(c+169,"wbu_tx_stb", false,-1);
    tracep->declBit(c+170,"wbu_tx_busy", false,-1);
    tracep->declBus(c+171,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4589,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+172,"w_led", false,-1, 7,0);
    tracep->declBus(c+173,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+174,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+175,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+176,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4591,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+177,"wbwide_i2cdma_addr", false,-1, 24,0);
    tracep->declArray(c+178,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+197,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+198,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+199,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+215,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+216,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4590,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+217,"wbwide_i2cm_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4608,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+218,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+219,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+220,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+221,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+237,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+238,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+239,"wbwide_zip_we", false,-1);
    tracep->declBus(c+240,"wbwide_zip_addr", false,-1, 24,0);
    tracep->declArray(c+241,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+257,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+259,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+260,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+261,"wbwide_zip_err", false,-1);
    tracep->declArray(c+262,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+278,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+279,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+280,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+281,"wbwide_wbu_arbiter_addr", false,-1, 24,0);
    tracep->declArray(c+282,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+298,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+300,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+301,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+302,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+303,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+319,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+320,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+321,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+322,"wbwide_wbdown_addr", false,-1, 24,0);
    tracep->declArray(c+323,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+339,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+341,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+342,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+343,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+344,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+360,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+361,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+362,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+363,"wbwide_bkram_addr", false,-1, 24,0);
    tracep->declArray(c+364,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+380,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4590,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+382,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4590,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+383,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+399,"wbwide_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+400,"wbwide_ddr3_controller_stb", false,-1);
    tracep->declBit(c+401,"wbwide_ddr3_controller_we", false,-1);
    tracep->declBus(c+402,"wbwide_ddr3_controller_addr", false,-1, 24,0);
    tracep->declArray(c+403,"wbwide_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+419,"wbwide_ddr3_controller_sel", false,-1, 63,0);
    tracep->declBit(c+421,"wbwide_ddr3_controller_stall", false,-1);
    tracep->declBit(c+422,"wbwide_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4590,"wbwide_ddr3_controller_err", false,-1);
    tracep->declArray(c+423,"wbwide_ddr3_controller_idata", false,-1, 511,0);
    tracep->declBit(c+439,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+440,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+441,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+442,"wb32_wbdown_addr", false,-1, 7,0);
    tracep->declBus(c+443,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+444,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+445,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+446,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+447,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+448,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+450,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+451,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4610,"wb32_buildtime_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+450,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4611,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4612,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+454,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+451,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4613,"wb32_gpio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+454,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4614,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4533,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+455,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+451,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4615,"wb32_sirefclk_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+149,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4616,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+456,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+457,"wb32_spio_stb", false,-1);
    tracep->declBit(c+451,"wb32_spio_we", false,-1);
    tracep->declBus(c+4617,"wb32_spio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_spio_stall", false,-1);
    tracep->declBit(c+458,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4618,"wb32_spio_err", false,-1);
    tracep->declBus(c+459,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_version_cyc", false,-1);
    tracep->declBit(c+460,"wb32_version_stb", false,-1);
    tracep->declBit(c+451,"wb32_version_we", false,-1);
    tracep->declBus(c+4619,"wb32_version_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_version_stall", false,-1);
    tracep->declBit(c+460,"wb32_version_ack", false,-1);
    tracep->declBit(c+4620,"wb32_version_err", false,-1);
    tracep->declBus(c+4621,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+461,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+462,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+463,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+464,"wb32_i2cscope_addr", false,-1, 7,0);
    tracep->declBus(c+465,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+466,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+467,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4590,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+468,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+469,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+470,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+471,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+472,"wb32_scope1_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+473,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+474,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+475,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4590,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+476,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+477,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+478,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+479,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+480,"wb32_scope2_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+481,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+482,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+483,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4590,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+484,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+485,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+486,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+487,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+488,"wb32_scope3_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+489,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+490,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+491,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4590,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+492,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+493,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+494,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+495,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+496,"wb32_i2cs_addr", false,-1, 7,0);
    tracep->declBus(c+497,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+498,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+499,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4590,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+500,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+501,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+502,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+503,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+504,"wb32_i2cdma_addr", false,-1, 7,0);
    tracep->declBus(c+505,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+506,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+507,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4590,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+508,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+509,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+510,"wb32_uart_stb", false,-1);
    tracep->declBit(c+511,"wb32_uart_we", false,-1);
    tracep->declBus(c+512,"wb32_uart_addr", false,-1, 7,0);
    tracep->declBus(c+513,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+514,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_uart_stall", false,-1);
    tracep->declBit(c+515,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4590,"wb32_uart_err", false,-1);
    tracep->declBus(c+516,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+517,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+518,"wb32_fan_stb", false,-1);
    tracep->declBit(c+519,"wb32_fan_we", false,-1);
    tracep->declBus(c+520,"wb32_fan_addr", false,-1, 7,0);
    tracep->declBus(c+521,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+522,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_fan_stall", false,-1);
    tracep->declBit(c+523,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4590,"wb32_fan_err", false,-1);
    tracep->declBus(c+524,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+525,"wb32_sio_stb", false,-1);
    tracep->declBit(c+451,"wb32_sio_we", false,-1);
    tracep->declBus(c+526,"wb32_sio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_sio_stall", false,-1);
    tracep->declBit(c+527,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4590,"wb32_sio_err", false,-1);
    tracep->declBus(c+528,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+529,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+530,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+531,"wb32_cfg_we", false,-1);
    tracep->declBus(c+532,"wb32_cfg_addr", false,-1, 7,0);
    tracep->declBus(c+533,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+534,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+535,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4590,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4589,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+536,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+537,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+538,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+539,"wb32_ddr3_phy_addr", false,-1, 7,0);
    tracep->declBus(c+540,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+541,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+542,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+543,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4590,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+544,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+545,"wbu_cyc", false,-1);
    tracep->declBit(c+546,"wbu_stb", false,-1);
    tracep->declBit(c+547,"wbu_we", false,-1);
    tracep->declBus(c+548,"wbu_addr", false,-1, 29,0);
    tracep->declBus(c+549,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4622,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+550,"wbu_stall", false,-1);
    tracep->declBit(c+551,"wbu_ack", false,-1);
    tracep->declBit(c+552,"wbu_err", false,-1);
    tracep->declBus(c+553,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+554,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+555,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+556,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+557,"wbu_wbu_arbiter_addr", false,-1, 29,0);
    tracep->declBus(c+558,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+559,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+560,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+561,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+562,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+563,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+564,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+565,"wbu_zip_stb", false,-1);
    tracep->declBit(c+566,"wbu_zip_we", false,-1);
    tracep->declBus(c+567,"wbu_zip_addr", false,-1, 29,0);
    tracep->declBus(c+568,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+569,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4534,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4535,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4590,"wbu_zip_err", false,-1);
    tracep->declBus(c+570,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+527,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+528,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4590,"zip_unused", false,-1);
    tracep->declBit(c+165,"w_bus_int", false,-1);
    tracep->declBus(c+548,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+535,"r_cfg_ack", false,-1);
    tracep->declBit(c+4590,"cfg_unused", false,-1);
    tracep->declBus(c+4623,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4624,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4578,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4626,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4627,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4574,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+360,"i_wb_cyc", false,-1);
    tracep->declBit(c+361,"i_wb_stb", false,-1);
    tracep->declBit(c+362,"i_wb_we", false,-1);
    tracep->declBus(c+571,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+364,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+380,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+382,"o_wb_ack", false,-1);
    tracep->declArray(c+383,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+572,"w_wstb", false,-1);
    tracep->declBit(c+573,"w_stb", false,-1);
    tracep->declArray(c+574,"w_data", false,-1, 511,0);
    tracep->declBus(c+590,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+591,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+572,"last_wstb", false,-1);
    tracep->declBit(c+573,"last_stb", false,-1);
    tracep->declBus(c+590,"last_addr", false,-1, 13,0);
    tracep->declArray(c+574,"last_data", false,-1, 511,0);
    tracep->declQuad(c+591,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+593,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4577,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBus(c+594,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4496,"o_word", false,-1, 7,0);
    tracep->declBit(c+148,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+595+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+603,"r_delay", false,-1, 31,0);
    tracep->declBus(c+604,"times_three", false,-1, 31,0);
    tracep->declBus(c+605,"times_five", false,-1, 31,0);
    tracep->declBus(c+606,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4629,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+509,"i_wb_cyc", false,-1);
    tracep->declBit(c+510,"i_wb_stb", false,-1);
    tracep->declBit(c+511,"i_wb_we", false,-1);
    tracep->declBus(c+607,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+513,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+514,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+515,"o_wb_ack", false,-1);
    tracep->declBus(c+516,"o_wb_data", false,-1, 31,0);
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
    tracep->declBus(c+4629,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4630,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4631,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4632,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4633,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+608,"rx_uart_reset", false,-1);
    tracep->declBit(c+140,"rx_empty_n", false,-1);
    tracep->declBit(c+609,"rx_fifo_err", false,-1);
    tracep->declBus(c+610,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+611,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+612,"rxf_wb_read", false,-1);
    tracep->declBus(c+613,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+157,"tx_empty_n", false,-1);
    tracep->declBit(c+614,"txf_err", false,-1);
    tracep->declBus(c+615,"txf_status", false,-1, 15,0);
    tracep->declBit(c+616,"txf_wb_write", false,-1);
    tracep->declBit(c+617,"tx_uart_reset", false,-1);
    tracep->declBus(c+618,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+619,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+620,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+621,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+622,"r_wb_ack", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4586,"BW", false,-1, 31,0);
    tracep->declBus(c+4629,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4584,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4634,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+608,"i_reset", false,-1);
    tracep->declBit(c+156,"i_wr", false,-1);
    tracep->declBus(c+159,"i_data", false,-1, 6,0);
    tracep->declBit(c+140,"o_empty_n", false,-1);
    tracep->declBit(c+612,"i_rd", false,-1);
    tracep->declBus(c+610,"o_data", false,-1, 6,0);
    tracep->declBus(c+611,"o_status", false,-1, 15,0);
    tracep->declBit(c+609,"o_err", false,-1);
    tracep->declBus(c+623,"r_data", false,-1, 6,0);
    tracep->declBus(c+624,"last_write", false,-1, 6,0);
    tracep->declBus(c+625,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+626,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+627,"r_next", false,-1, 5,0);
    tracep->declBit(c+628,"will_overflow", false,-1);
    tracep->declBit(c+629,"will_underflow", false,-1);
    tracep->declBit(c+630,"osrc", false,-1);
    tracep->declBus(c+631,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+632,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+633,"w_write", false,-1);
    tracep->declBit(c+634,"w_read", false,-1);
    tracep->declBus(c+635,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4629,"lglen", false,-1, 3,0);
    tracep->declBit(c+137,"w_half_full", false,-1);
    tracep->declBus(c+636,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4586,"BW", false,-1, 31,0);
    tracep->declBus(c+4629,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4627,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4634,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+617,"i_reset", false,-1);
    tracep->declBit(c+616,"i_wr", false,-1);
    tracep->declBus(c+618,"i_data", false,-1, 6,0);
    tracep->declBit(c+157,"o_empty_n", false,-1);
    tracep->declBit(c+637,"i_rd", false,-1);
    tracep->declBus(c+160,"o_data", false,-1, 6,0);
    tracep->declBus(c+615,"o_status", false,-1, 15,0);
    tracep->declBit(c+614,"o_err", false,-1);
    tracep->declBus(c+638,"r_data", false,-1, 6,0);
    tracep->declBus(c+639,"last_write", false,-1, 6,0);
    tracep->declBus(c+640,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+641,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+642,"r_next", false,-1, 5,0);
    tracep->declBit(c+643,"will_overflow", false,-1);
    tracep->declBit(c+644,"will_underflow", false,-1);
    tracep->declBit(c+645,"osrc", false,-1);
    tracep->declBus(c+646,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+647,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+648,"w_write", false,-1);
    tracep->declBit(c+649,"w_read", false,-1);
    tracep->declBus(c+650,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4629,"lglen", false,-1, 3,0);
    tracep->declBit(c+139,"w_half_full", false,-1);
    tracep->declBus(c+651,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4570,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4572,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4574,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4575,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4576,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4577,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4577,"LANES", false,-1, 31,0);
    tracep->declBus(c+4578,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4586,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4628,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4627,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4584,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4579,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4625,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4580,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4634,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4579,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4580,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4576,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4439,"i_controller_clk", false,-1);
    tracep->declBit(c+4536,"i_rst_n", false,-1);
    tracep->declBit(c+399,"i_wb_cyc", false,-1);
    tracep->declBit(c+400,"i_wb_stb", false,-1);
    tracep->declBit(c+401,"i_wb_we", false,-1);
    tracep->declBus(c+652,"i_wb_addr", false,-1, 23,0);
    tracep->declArray(c+403,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+419,"i_wb_sel", false,-1, 63,0);
    tracep->declBus(c+4590,"i_aux", false,-1, 0,0);
    tracep->declBit(c+421,"o_wb_stall", false,-1);
    tracep->declBit(c+422,"o_wb_ack", false,-1);
    tracep->declArray(c+423,"o_wb_data", false,-1, 511,0);
    tracep->declBus(c+145,"o_aux", false,-1, 0,0);
    tracep->declBit(c+536,"i_wb2_cyc", false,-1);
    tracep->declBit(c+537,"i_wb2_stb", false,-1);
    tracep->declBit(c+538,"i_wb2_we", false,-1);
    tracep->declBus(c+653,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+541,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+540,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+542,"o_wb2_stall", false,-1);
    tracep->declBit(c+543,"o_wb2_ack", false,-1);
    tracep->declBus(c+544,"o_wb2_data", false,-1, 31,0);
    tracep->declArray(c+4441,"i_phy_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4457,"i_phy_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4459,"i_phy_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4461,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4462,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4465,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4466,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4467,"o_phy_toggle_dqs", false,-1);
    tracep->declArray(c+4468,"o_phy_data", false,-1, 511,0);
    tracep->declQuad(c+4484,"o_phy_dm", false,-1, 63,0);
    tracep->declBus(c+4486,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4487,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4488,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4489,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4490,"o_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4491,"o_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4492,"o_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4493,"o_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4494,"o_phy_bitslip", false,-1, 7,0);
    tracep->declBit(c+4495,"o_phy_write_leveling_calib", false,-1);
    tracep->declBus(c+35,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4530,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4531,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4635,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4636,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4637,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4638,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4639,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4640,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4641,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4629,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4642,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4642,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4643,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4582,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4580,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4644,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4645,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4587,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4646,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4644,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4645,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4647,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4624,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4587,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4646,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4648,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4583,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4649,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4632,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4633,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4630,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4631,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4589,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4577,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4589,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4577,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4587,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4650,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4651,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4652,"tRCD", false,-1);
    tracep->declDouble(c+4652,"tRP", false,-1);
    tracep->declBus(c+4654,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4655,"tRFC", false,-1);
    tracep->declBus(c+4657,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4658,"tXPR", false,-1);
    tracep->declDouble(c+4660,"tWR", false,-1);
    tracep->declDouble(c+4570,"tWTR", false,-1);
    tracep->declBus(c+4662,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4663,"tWLO", false,-1);
    tracep->declBus(c+4588,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4570,"tRTP", false,-1);
    tracep->declBus(c+4579,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4576,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4665,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4666,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4667,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4668,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4583,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4588,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4636,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4638,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4635,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4635,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4636,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4635,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4636,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4635,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4638,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4639,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4667,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4640,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4588,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4589,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4667,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4583,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4649,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4589,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4578,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4588,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4576,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4579,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4667,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4666,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4586,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4577,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4669,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4575,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4670,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4671,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4649,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4574,"CHECK_STARTING_DATA", false,-1, 31,0);
    tracep->declBus(c+4672,"BITSLIP_DQS_TRAIN_3", false,-1, 31,0);
    tracep->declBus(c+4583,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4667,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4578,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4624,"REPEAT_CLK_SAMPLING", false,-1, 31,0);
    tracep->declBus(c+4673,"PASR", false,-1, 2,0);
    tracep->declBus(c+4673,"CWL", false,-1, 2,0);
    tracep->declBus(c+4584,"ASR", false,-1, 0,0);
    tracep->declBus(c+4627,"SRT", false,-1, 0,0);
    tracep->declBus(c+4630,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4674,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4675,"MR2", false,-1, 18,0);
    tracep->declBus(c+4630,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4584,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4627,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4676,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4677,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4678,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4627,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4630,"DIC", false,-1, 1,0);
    tracep->declBus(c+4676,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4584,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4627,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4630,"AL", false,-1, 1,0);
    tracep->declBus(c+4627,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4627,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4679,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4680,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4681,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4630,"BL", false,-1, 1,0);
    tracep->declBus(c+4639,"CL", false,-1, 3,0);
    tracep->declBus(c+4627,"RBT", false,-1, 0,0);
    tracep->declBus(c+4584,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4676,"WR", false,-1, 2,0);
    tracep->declBus(c+4627,"PPD", false,-1, 0,0);
    tracep->declBus(c+4673,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4682,"MR0", false,-1, 18,0);
    tracep->declBus(c+4683,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+654,"index", false,-1, 31,0);
    tracep->declBus(c+655,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+656,"instruction", false,-1, 27,0);
    tracep->declBus(c+657,"delay_counter", false,-1, 15,0);
    tracep->declBit(c+658,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+659,"reset_done", false,-1);
    tracep->declBit(c+660,"pause_counter", false,-1);
    tracep->declBit(c+661,"issue_read_command", false,-1);
    tracep->declBit(c+4590,"issue_write_command", false,-1);
    tracep->declBit(c+662,"stage2_update", false,-1);
    tracep->declBit(c+663,"stage2_stall", false,-1);
    tracep->declBit(c+664,"stage1_stall", false,-1);
    tracep->declBus(c+665,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+666,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+667+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+675+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+683,"stage1_pending", false,-1);
    tracep->declBus(c+684,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+685,"stage1_we", false,-1);
    tracep->declArray(c+686,"stage1_data", false,-1, 511,0);
    tracep->declQuad(c+702,"stage1_dm", false,-1, 63,0);
    tracep->declBus(c+704,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+705,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+706,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+707,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+708,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+709,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+710,"stage2_pending", false,-1);
    tracep->declBus(c+711,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+712,"stage2_we", false,-1);
    tracep->declQuad(c+713,"stage2_dm_unaligned", false,-1, 63,0);
    tracep->declQuad(c+715,"stage2_dm_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+717+i*2,"stage2_dm", true,(i+0), 63,0);
    }
    tracep->declArray(c+721,"stage2_data_unaligned", false,-1, 511,0);
    tracep->declArray(c+737,"stage2_data_unaligned_temp", false,-1, 511,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+753+i*16,"stage2_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+785+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+801+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+809,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+810,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+811,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+812+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+820+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+828+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+836+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+844+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+852+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+860+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+868+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+876+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+880,"cmd_odt_q", false,-1);
    tracep->declBit(c+881,"cmd_odt", false,-1);
    tracep->declBit(c+882,"cmd_ck_en", false,-1);
    tracep->declBit(c+883,"cmd_reset_n", false,-1);
    tracep->declBit(c+884,"o_wb_stall_q", false,-1);
    tracep->declBit(c+885,"o_wb_stall_d", false,-1);
    tracep->declBit(c+886,"precharge_slot_busy", false,-1);
    tracep->declBit(c+887,"activate_slot_busy", false,-1);
    tracep->declBus(c+888,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+889,"write_dqs_d", false,-1);
    tracep->declBus(c+890,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+891,"write_dqs_val", false,-1, 2,0);
    tracep->declBus(c+892,"write_dq_q", false,-1, 1,0);
    tracep->declBit(c+893,"write_dq_d", false,-1);
    tracep->declBus(c+894,"write_dq", false,-1, 3,0);
    tracep->declBus(c+895,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+896,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+898,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+899,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+900,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+901,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+902,"dqs_target_index_orig", false,-1, 5,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+903+i*1,"dq_target_index", true,(i+0), 5,0);
    }
    tracep->declBus(c+911,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+912,"dqs_start_index_repeat", false,-1, 0,0);
    tracep->declBus(c+913,"train_delay", false,-1, 1,0);
    tracep->declBus(c+914,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+915,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+916,"initial_dqs", false,-1);
    tracep->declBus(c+917,"lane", false,-1, 2,0);
    tracep->declBus(c+918,"lane_times_8", false,-1, 5,0);
    tracep->declBus(c+919,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+920,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+921+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+929+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+934+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+939,"index_read_pipe", false,-1);
    tracep->declBit(c+940,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+941+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+943+i*16,"o_wb_data_q", true,(i+0), 511,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+975+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+991,"write_calib_stb", false,-1);
    tracep->declBus(c+992,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+993,"write_calib_we", false,-1);
    tracep->declBus(c+994,"write_calib_col", false,-1, 9,0);
    tracep->declArray(c+995,"write_calib_data", false,-1, 511,0);
    tracep->declBit(c+1011,"write_calib_odt", false,-1);
    tracep->declBit(c+1012,"write_calib_dqs", false,-1);
    tracep->declBit(c+1013,"write_calib_dq", false,-1);
    tracep->declBit(c+1014,"prev_write_level_feedback", false,-1);
    tracep->declArray(c+1015,"read_data_store", false,-1, 511,0);
    tracep->declArray(c+1031,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1035+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1043+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1051+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1059+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+1067,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1068+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+1076,"sample_clk_repeat", false,-1, 5,0);
    tracep->declBit(c+1077,"stored_write_level_feedback", false,-1);
    tracep->declBus(c+1078,"start_index_check", false,-1, 5,0);
    tracep->declQuad(c+1079,"read_lane_data", false,-1, 63,0);
    tracep->declBit(c+1081,"odelay_cntvalue_repeated", false,-1);
    tracep->declBit(c+1082,"wb2_stb", false,-1);
    tracep->declBit(c+1083,"wb2_update", false,-1);
    tracep->declBit(c+1084,"wb2_we", false,-1);
    tracep->declBus(c+1085,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+1086,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+1087,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+1088,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1089,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1090,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1091,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1092,"wb2_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+1093,"wb2_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+1094,"wb2_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+1095,"wb2_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+1096,"write_level_fail", false,-1, 7,0);
    tracep->declBus(c+1097,"wb2_write_lane", false,-1, 2,0);
    tracep->declBit(c+1098,"sync_rst", false,-1);
    tracep->declBit(c+1099,"test_stb", false,-1);
    tracep->declBit(c+1100,"test_we", false,-1);
    tracep->declBit(c+1101,"test_aux", false,-1);
    tracep->declBus(c+1102,"test_addr", false,-1, 23,0);
    tracep->declArray(c+1103,"test_data", false,-1, 511,0);
    tracep->declQuad(c+1119,"test_sel", false,-1, 63,0);
    tracep->declBus(c+1121,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declBus(c+1122,"test_state", false,-1, 3,0);
    tracep->declBus(c+1123,"read_test_address_counter", false,-1, 23,0);
    tracep->declBus(c+1124,"write_test_address_counter", false,-1, 23,0);
    tracep->declBus(c+1125,"check_test_address_counter", false,-1, 23,0);
    tracep->declBus(c+1126,"read_counter", false,-1, 31,0);
    tracep->declBus(c+1127,"write_counter", false,-1, 31,0);
    tracep->declBus(c+1128,"correct_read_data", false,-1, 31,0);
    tracep->declBus(c+1129,"wrong_read_data", false,-1, 31,0);
    tracep->declBit(c+1130,"debug_trigger", false,-1);
    tracep->declBit(c+4537,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4684,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4685,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4686,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4687,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4688,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4689,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4690,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4587,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4666,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4575,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4627,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4691,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+168,"i_rx_stb", false,-1);
    tracep->declBus(c+166,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+545,"o_wb_cyc", false,-1);
    tracep->declBit(c+546,"o_wb_stb", false,-1);
    tracep->declBit(c+547,"o_wb_we", false,-1);
    tracep->declBus(c+548,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+549,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+550,"i_wb_stall", false,-1);
    tracep->declBit(c+551,"i_wb_ack", false,-1);
    tracep->declBus(c+553,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+552,"i_wb_err", false,-1);
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
    tracep->declBit(c+1131,"soft_reset", false,-1);
    tracep->declBit(c+171,"r_wdt_reset", false,-1);
    tracep->declBit(c+4591,"cmd_port_active", false,-1);
    tracep->declBit(c+1132,"rx_valid", false,-1);
    tracep->declBus(c+1133,"rx_data", false,-1, 7,0);
    tracep->declBit(c+1134,"in_stb", false,-1);
    tracep->declBit(c+1135,"in_active", false,-1);
    tracep->declQuad(c+1136,"in_word", false,-1, 35,0);
    tracep->declBit(c+169,"ps_full", false,-1);
    tracep->declBus(c+167,"ps_data", false,-1, 7,0);
    tracep->declBit(c+1138,"wbu_tx_stb", false,-1);
    tracep->declBus(c+1139,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+1140,"ififo_valid", false,-1);
    tracep->declQuad(c+1141,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+1143,"exec_stb", false,-1);
    tracep->declQuad(c+1144,"exec_word", false,-1, 35,0);
    tracep->declBit(c+1146,"ofifo_rd", false,-1);
    tracep->declQuad(c+1147,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+1149,"ofifo_err", false,-1);
    tracep->declBit(c+1150,"ofifo_empty_n", false,-1);
    tracep->declBit(c+1151,"w_bus_busy", false,-1);
    tracep->declBit(c+171,"w_bus_reset", false,-1);
    tracep->declBus(c+1152,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+1153,"ign_input_busy", false,-1);
    tracep->declBit(c+1154,"output_busy", false,-1);
    tracep->declBit(c+1155,"out_active", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4692,"BW", false,-1, 31,0);
    tracep->declBus(c+4575,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1143,"i_wr", false,-1);
    tracep->declQuad(c+1144,"i_data", false,-1, 35,0);
    tracep->declBit(c+1146,"i_rd", false,-1);
    tracep->declQuad(c+1147,"o_data", false,-1, 35,0);
    tracep->declBit(c+1150,"o_empty_n", false,-1);
    tracep->declBit(c+1149,"o_err", false,-1);
    tracep->declBus(c+4693,"FLEN", false,-1, 31,0);
    tracep->declBus(c+1156,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+1157,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+1158,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+1159,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+1160,"will_overflow", false,-1);
    tracep->declBit(c+1161,"will_underflow", false,-1);
    tracep->declBit(c+1162,"r_empty_n", false,-1);
    tracep->declBit(c+1163,"w_write", false,-1);
    tracep->declBit(c+1164,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+1140,"ififo_empty_n", false,-1);
    tracep->declBit(c+1165,"ififo_err", false,-1);
    tracep->declBit(c+1166,"ififo_rd", false,-1);
    tracep->declBit(c+4590,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4692,"BW", false,-1, 31,0);
    tracep->declBus(c+4666,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1134,"i_wr", false,-1);
    tracep->declQuad(c+1136,"i_data", false,-1, 35,0);
    tracep->declBit(c+1166,"i_rd", false,-1);
    tracep->declQuad(c+1141,"o_data", false,-1, 35,0);
    tracep->declBit(c+1140,"o_empty_n", false,-1);
    tracep->declBit(c+1165,"o_err", false,-1);
    tracep->declBus(c+4634,"FLEN", false,-1, 31,0);
    tracep->declBus(c+1167,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+1168,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+1169,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+1170,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+1171,"will_overflow", false,-1);
    tracep->declBit(c+1172,"will_underflow", false,-1);
    tracep->declBit(c+1173,"r_empty_n", false,-1);
    tracep->declBit(c+1174,"w_write", false,-1);
    tracep->declBit(c+1175,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4584,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1132,"i_stb", false,-1);
    tracep->declBit(c+1153,"o_busy", false,-1);
    tracep->declBus(c+1133,"i_byte", false,-1, 7,0);
    tracep->declBit(c+1131,"o_soft_reset", false,-1);
    tracep->declBit(c+1134,"o_stb", false,-1);
    tracep->declBit(c+4590,"i_busy", false,-1);
    tracep->declQuad(c+1136,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1135,"o_active", false,-1);
    tracep->declBit(c+1176,"hx_stb", false,-1);
    tracep->declBit(c+1177,"hx_valid", false,-1);
    tracep->declBus(c+1178,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+1179,"cw_stb", false,-1);
    tracep->declBit(c+1180,"cw_busy", false,-1);
    tracep->declBit(c+1181,"cw_active", false,-1);
    tracep->declQuad(c+1182,"cw_word", false,-1, 35,0);
    tracep->declBit(c+1184,"cod_busy", false,-1);
    tracep->declBit(c+1185,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1179,"i_stb", false,-1);
    tracep->declBit(c+1184,"o_busy", false,-1);
    tracep->declQuad(c+1182,"i_word", false,-1, 35,0);
    tracep->declBit(c+1134,"o_stb", false,-1);
    tracep->declBit(c+4590,"i_busy", false,-1);
    tracep->declQuad(c+1136,"o_word", false,-1, 35,0);
    tracep->declBit(c+1185,"o_active", false,-1);
    tracep->declBus(c+1186,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+1187,"r_word", false,-1, 35,0);
    tracep->declBus(c+1189,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+1190,"r_addr", false,-1, 24,0);
    tracep->declBus(c+1191,"w_addr", false,-1, 31,0);
    tracep->declBus(c+1192,"rd_len", false,-1, 9,0);
    tracep->declBus(c+1193,"cword", false,-1, 31,0);
    tracep->declBus(c+1194,"r_stb", false,-1, 2,0);
    tracep->declBit(c+1195,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4627,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1176,"i_stb", false,-1);
    tracep->declBit(c+1180,"o_busy", false,-1);
    tracep->declBit(c+1177,"i_valid", false,-1);
    tracep->declBus(c+1178,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+1179,"o_stb", false,-1);
    tracep->declBit(c+1184,"i_busy", false,-1);
    tracep->declQuad(c+1182,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1181,"o_active", false,-1);
    tracep->declBus(c+1196,"r_len", false,-1, 2,0);
    tracep->declBus(c+1197,"cw_len", false,-1, 2,0);
    tracep->declBus(c+1198,"lastcw", false,-1, 1,0);
    tracep->declBit(c+1199,"w_stb", false,-1);
    tracep->declQuad(c+1200,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+1176,"skd_stb", false,-1);
    tracep->declBit(c+1177,"skd_valid", false,-1);
    tracep->declBus(c+1178,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+1180,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1132,"i_stb", false,-1);
    tracep->declBit(c+1153,"o_busy", false,-1);
    tracep->declBus(c+1133,"i_byte", false,-1, 7,0);
    tracep->declBit(c+1131,"o_soft_reset", false,-1);
    tracep->declBit(c+1176,"o_stb", false,-1);
    tracep->declBit(c+1177,"o_valid", false,-1);
    tracep->declBit(c+1180,"i_busy", false,-1);
    tracep->declBus(c+1178,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4627,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4579,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4691,"AW", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1140,"i_valid", false,-1);
    tracep->declQuad(c+1141,"i_codword", false,-1, 35,0);
    tracep->declBit(c+1151,"o_busy", false,-1);
    tracep->declBit(c+545,"o_wb_cyc", false,-1);
    tracep->declBit(c+546,"o_wb_stb", false,-1);
    tracep->declBit(c+547,"o_wb_we", false,-1);
    tracep->declBus(c+548,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+549,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+550,"i_wb_stall", false,-1);
    tracep->declBit(c+551,"i_wb_ack", false,-1);
    tracep->declBus(c+553,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+552,"i_wb_err", false,-1);
    tracep->declBit(c+1143,"o_stb", false,-1);
    tracep->declQuad(c+1144,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1146,"i_fifo_rd", false,-1);
    tracep->declBus(c+4630,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4631,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4632,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4633,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4631,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+1202,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+1203,"wb_state", false,-1, 1,0);
    tracep->declBus(c+1204,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+1205,"r_len", false,-1, 9,0);
    tracep->declBit(c+1206,"r_inc", false,-1);
    tracep->declBit(c+1207,"r_new_addr", false,-1);
    tracep->declBit(c+1208,"last_read_request", false,-1);
    tracep->declBit(c+1209,"last_ack", false,-1);
    tracep->declBit(c+1210,"zero_acks", false,-1);
    tracep->declBit(c+1151,"r_busy", false,-1);
    tracep->declBus(c+1211,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4694,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4591,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4590,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4584,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+171,"i_soft_reset", false,-1);
    tracep->declBit(c+1146,"i_stb", false,-1);
    tracep->declBit(c+1154,"o_busy", false,-1);
    tracep->declQuad(c+1147,"i_codword", false,-1, 35,0);
    tracep->declBit(c+545,"i_wb_cyc", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+1212,"i_bus_busy", false,-1);
    tracep->declBit(c+1138,"o_stb", false,-1);
    tracep->declBit(c+1155,"o_active", false,-1);
    tracep->declBus(c+1139,"o_char", false,-1, 7,0);
    tracep->declBit(c+169,"i_tx_busy", false,-1);
    tracep->declBit(c+1213,"dw_busy", false,-1);
    tracep->declBit(c+1154,"cw_stb", false,-1);
    tracep->declBit(c+1154,"cw_busy", false,-1);
    tracep->declBit(c+1214,"cp_stb", false,-1);
    tracep->declBit(c+1213,"dw_stb", false,-1);
    tracep->declBit(c+1215,"ln_stb", false,-1);
    tracep->declBit(c+1216,"ln_busy", false,-1);
    tracep->declBit(c+1217,"cp_busy", false,-1);
    tracep->declBit(c+1218,"byte_busy", false,-1);
    tracep->declBit(c+1219,"cp_active", false,-1);
    tracep->declBit(c+1220,"dw_active", false,-1);
    tracep->declBit(c+1221,"ln_active", false,-1);
    tracep->declQuad(c+1222,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+1224,"cp_word", false,-1, 35,0);
    tracep->declBus(c+1226,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+1227,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+1228,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declBus(c+4692,"CW", false,-1, 31,0);
    tracep->declBus(c+4575,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1154,"i_stb", false,-1);
    tracep->declQuad(c+1222,"i_codword", false,-1, 35,0);
    tracep->declBit(c+1213,"i_busy", false,-1);
    tracep->declBit(c+1214,"o_stb", false,-1);
    tracep->declQuad(c+1224,"o_cword", false,-1, 35,0);
    tracep->declBit(c+1217,"o_busy", false,-1);
    tracep->declBit(c+1219,"o_active", false,-1);
    tracep->declBit(c+1229,"aword_valid", false,-1);
    tracep->declQuad(c+1230,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+1232,"w_addr", false,-1, 31,0);
    tracep->declBus(c+1233,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+1234,"tbl_busy", false,-1);
    tracep->declBit(c+1235,"w_accepted", false,-1);
    tracep->declQuad(c+1236,"r_word", false,-1, 35,0);
    tracep->declBus(c+1238,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+1239,"tbl_filled", false,-1);
    tracep->declBus(c+1240,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+1241,"pmatch", false,-1);
    tracep->declBit(c+1242,"dmatch", false,-1);
    tracep->declBit(c+1243,"vaddr", false,-1);
    tracep->declBus(c+1244,"cword", false,-1, 31,0);
    tracep->declBus(c+1245,"maddr", false,-1, 9,0);
    tracep->declBit(c+1246,"matched", false,-1);
    tracep->declBit(c+1247,"zmatch", false,-1);
    tracep->declBit(c+1248,"hmatch", false,-1);
    tracep->declBus(c+1249,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+1250,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+1224,"r_cword", false,-1, 35,0);
    tracep->declBus(c+1251,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+1252,"clear_table", false,-1);
    tracep->declBit(c+1253,"addr_within_table", false,-1);
    tracep->declBit(c+1254,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+1255,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1146,"i_stb", false,-1);
    tracep->declQuad(c+1147,"i_codword", false,-1, 35,0);
    tracep->declBit(c+545,"i_cyc", false,-1);
    tracep->declBit(c+1212,"i_busy", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+1154,"o_stb", false,-1);
    tracep->declQuad(c+1222,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1154,"o_busy", false,-1);
    tracep->declBit(c+1256,"i_tx_busy", false,-1);
    tracep->declQuad(c+4695,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4697,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4699,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4645,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+1257,"int_request", false,-1);
    tracep->declBit(c+1258,"int_sent", false,-1);
    tracep->declBit(c+1259,"idle_expired", false,-1);
    tracep->declBit(c+1260,"idle_state", false,-1);
    tracep->declBus(c+1261,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1214,"i_stb", false,-1);
    tracep->declQuad(c+1224,"i_word", false,-1, 35,0);
    tracep->declBit(c+1216,"i_tx_busy", false,-1);
    tracep->declBit(c+1213,"o_stb", false,-1);
    tracep->declBus(c+1226,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1213,"o_busy", false,-1);
    tracep->declBit(c+1220,"o_active", false,-1);
    tracep->declBus(c+1262,"w_len", false,-1, 2,0);
    tracep->declBus(c+1263,"r_len", false,-1, 2,0);
    tracep->declBus(c+1264,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1213,"i_stb", false,-1);
    tracep->declBus(c+1226,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1215,"o_stb", false,-1);
    tracep->declBus(c+1227,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1265,"i_bus_busy", false,-1);
    tracep->declBit(c+1218,"i_tx_busy", false,-1);
    tracep->declBit(c+1216,"o_busy", false,-1);
    tracep->declBit(c+1221,"o_active", false,-1);
    tracep->declBus(c+4701,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4702,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+1266,"last_out_nl", false,-1);
    tracep->declBit(c+1267,"last_in_nl", false,-1);
    tracep->declBit(c+1268,"full_line", false,-1);
    tracep->declBit(c+1269,"r_busy", false,-1);
    tracep->declBus(c+1270,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+1215,"i_stb", false,-1);
    tracep->declBus(c+1227,"i_bits", false,-1, 6,0);
    tracep->declBit(c+1138,"o_stb", false,-1);
    tracep->declBus(c+1139,"o_char", false,-1, 7,0);
    tracep->declBit(c+1218,"o_busy", false,-1);
    tracep->declBit(c+169,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4583,"NIN", false,-1, 31,0);
    tracep->declBus(c+4577,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4623,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+449,"i_wb_cyc", false,-1);
    tracep->declBit(c+454,"i_wb_stb", false,-1);
    tracep->declBit(c+451,"i_wb_we", false,-1);
    tracep->declBus(c+452,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+453,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+454,"o_wb_ack", false,-1);
    tracep->declBus(c+4533,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4524,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4525,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+143,"o_int", false,-1);
    tracep->declBus(c+1271,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+1272,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+1273,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+1271,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4538,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4582,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4588,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4630,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4577,"RW", false,-1, 31,0);
    tracep->declBus(c+4703,"BAW", false,-1, 31,0);
    tracep->declBus(c+4704,"RESET_ADDRESS", false,-1, 30,0);
    tracep->declBus(c+4584,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4589,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4705,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+493,"i_wb_cyc", false,-1);
    tracep->declBit(c+494,"i_wb_stb", false,-1);
    tracep->declBit(c+495,"i_wb_we", false,-1);
    tracep->declBus(c+1274,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+497,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+498,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+499,"o_wb_ack", false,-1);
    tracep->declBus(c+500,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+215,"o_pf_cyc", false,-1);
    tracep->declBit(c+216,"o_pf_stb", false,-1);
    tracep->declBit(c+4590,"o_pf_we", false,-1);
    tracep->declBus(c+217,"o_pf_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4608,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+218,"i_pf_stall", false,-1);
    tracep->declBit(c+219,"i_pf_ack", false,-1);
    tracep->declBit(c+220,"i_pf_err", false,-1);
    tracep->declArray(c+221,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4505,"i_i2c_sda", false,-1);
    tracep->declBit(c+4506,"i_i2c_scl", false,-1);
    tracep->declBit(c+4507,"o_i2c_sda", false,-1);
    tracep->declBit(c+4508,"o_i2c_scl", false,-1);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+155,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4590,"i_sync_signal", false,-1);
    tracep->declBus(c+36,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4630,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4631,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4632,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4633,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4587,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4624,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4647,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4645,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4669,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4670,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4635,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4637,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4638,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4639,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4640,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4629,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4641,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4706,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4707,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4708,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4709,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4710,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4711,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+1275,"cpu_reset", false,-1);
    tracep->declBit(c+4590,"cpu_clear_cache", false,-1);
    tracep->declBit(c+1276,"cpu_new_pc", false,-1);
    tracep->declBus(c+1277,"pf_jump_addr", false,-1, 30,0);
    tracep->declBit(c+1278,"pf_valid", false,-1);
    tracep->declBit(c+1279,"pf_ready", false,-1);
    tracep->declBus(c+1280,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+1281,"pf_insn_addr", false,-1, 30,0);
    tracep->declBit(c+1282,"pf_illegal", false,-1);
    tracep->declBit(c+1283,"half_valid", false,-1);
    tracep->declBit(c+1284,"imm_cycle", false,-1);
    tracep->declBit(c+1285,"next_valid", false,-1);
    tracep->declBus(c+1286,"next_insn", false,-1, 7,0);
    tracep->declBit(c+1287,"insn_ready", false,-1);
    tracep->declBit(c+1288,"half_ready", false,-1);
    tracep->declBit(c+1289,"i2c_abort", false,-1);
    tracep->declBit(c+1290,"insn_valid", false,-1);
    tracep->declBus(c+1291,"insn", false,-1, 11,0);
    tracep->declBus(c+1292,"half_insn", false,-1, 3,0);
    tracep->declBit(c+1293,"i2c_ckedge", false,-1);
    tracep->declBit(c+1294,"i2c_stretch", false,-1);
    tracep->declBus(c+1295,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+1296,"ckcount", false,-1, 11,0);
    tracep->declBus(c+1297,"abort_address", false,-1, 30,0);
    tracep->declBus(c+1298,"jump_target", false,-1, 30,0);
    tracep->declBit(c+1299,"r_wait", false,-1);
    tracep->declBit(c+1300,"soft_halt_request", false,-1);
    tracep->declBit(c+1275,"r_halted", false,-1);
    tracep->declBit(c+1301,"r_err", false,-1);
    tracep->declBit(c+1302,"r_aborted", false,-1);
    tracep->declBit(c+1303,"r_manual", false,-1);
    tracep->declBit(c+1304,"r_sda", false,-1);
    tracep->declBit(c+1305,"r_scl", false,-1);
    tracep->declBit(c+1306,"w_stopped", false,-1);
    tracep->declBit(c+1307,"w_sda", false,-1);
    tracep->declBit(c+1308,"w_scl", false,-1);
    tracep->declBit(c+1309,"bus_read", false,-1);
    tracep->declBit(c+1310,"bus_write", false,-1);
    tracep->declBit(c+1311,"bus_override", false,-1);
    tracep->declBit(c+1312,"bus_manual", false,-1);
    tracep->declBit(c+1313,"ovw_ready", false,-1);
    tracep->declBit(c+1314,"bus_jump", false,-1);
    tracep->declBus(c+1274,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+1274,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+497,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+498,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+500,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+1315,"s_tvalid", false,-1);
    tracep->declBit(c+1288,"s_tready", false,-1);
    tracep->declBus(c+1316,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+37,"w_control", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+1303,"manual", false,-1);
    tracep->declBit(c+1305,"scl", false,-1);
    tracep->declBit(c+1304,"sda", false,-1);
    tracep->declBit(c+1317,"o_scl", false,-1);
    tracep->declBit(c+1318,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+1319,"mid_axis_pkt", false,-1);
    tracep->declBus(c+1320,"r_channel", false,-1, 1,0);
    tracep->declBus(c+155,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4589,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+38,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+1315,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+1287,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+1321,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+1293,"i_ckedge", false,-1);
    tracep->declBit(c+1294,"o_stretch", false,-1);
    tracep->declBit(c+4506,"i_scl", false,-1);
    tracep->declBit(c+4505,"i_sda", false,-1);
    tracep->declBit(c+1308,"o_scl", false,-1);
    tracep->declBit(c+1307,"o_sda", false,-1);
    tracep->declBit(c+1289,"o_abort", false,-1);
    tracep->declBus(c+4635,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4636,"START", false,-1, 3,0);
    tracep->declBus(c+4637,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4638,"STOP", false,-1, 3,0);
    tracep->declBus(c+4639,"DATA", false,-1, 3,0);
    tracep->declBus(c+4640,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4629,"ACK", false,-1, 3,0);
    tracep->declBus(c+4641,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4706,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4707,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4708,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4709,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4710,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4627,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4584,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4673,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4679,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4674,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4676,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4712,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4713,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4714,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4715,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4627,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+1322,"last_byte", false,-1);
    tracep->declBit(c+1323,"dir", false,-1);
    tracep->declBit(c+1324,"will_ack", false,-1);
    tracep->declBus(c+1325,"state", false,-1, 3,0);
    tracep->declBus(c+1326,"nbits", false,-1, 2,0);
    tracep->declBus(c+1327,"sreg", false,-1, 7,0);
    tracep->declBit(c+1328,"q_scl", false,-1);
    tracep->declBit(c+1329,"q_sda", false,-1);
    tracep->declBit(c+1330,"ck_scl", false,-1);
    tracep->declBit(c+1331,"ck_sda", false,-1);
    tracep->declBit(c+1332,"lst_scl", false,-1);
    tracep->declBit(c+1333,"lst_sda", false,-1);
    tracep->declBit(c+1334,"stop_bit", false,-1);
    tracep->declBit(c+1335,"channel_busy", false,-1);
    tracep->declBit(c+4590,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4703,"AW", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+39,"i_reset", false,-1);
    tracep->declBit(c+1276,"i_new_pc", false,-1);
    tracep->declBit(c+4590,"i_clear_cache", false,-1);
    tracep->declBit(c+1279,"i_ready", false,-1);
    tracep->declBus(c+1277,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1278,"o_valid", false,-1);
    tracep->declBit(c+1282,"o_illegal", false,-1);
    tracep->declBus(c+1280,"o_insn", false,-1, 7,0);
    tracep->declBus(c+1281,"o_pc", false,-1, 30,0);
    tracep->declBit(c+215,"o_wb_cyc", false,-1);
    tracep->declBit(c+216,"o_wb_stb", false,-1);
    tracep->declBit(c+4590,"o_wb_we", false,-1);
    tracep->declBus(c+217,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+218,"i_wb_stall", false,-1);
    tracep->declBit(c+219,"i_wb_ack", false,-1);
    tracep->declBit(c+220,"i_wb_err", false,-1);
    tracep->declArray(c+221,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1336,"last_stb", false,-1);
    tracep->declBit(c+1337,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+1338,"cache_word", false,-1, 511,0);
    tracep->declBit(c+1354,"cache_valid", false,-1);
    tracep->declBus(c+1355,"inflight", false,-1, 1,0);
    tracep->declBit(c+1356,"cache_illegal", false,-1);
    tracep->declBit(c+1357,"r_valid", false,-1);
    tracep->declArray(c+1358,"r_insn", false,-1, 511,0);
    tracep->declArray(c+1374,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4666,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+1357,"rg_valid", false,-1);
    tracep->declArray(c+1358,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+1390,"r_count", false,-1, 6,0);
    tracep->declBus(c+1391,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4590,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4716,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4628,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4703,"NELM", false,-1, 31,0);
    tracep->declBus(c+4584,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4624,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4717,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4703,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4718,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4439,"i_data_clk", false,-1);
    tracep->declBit(c+4591,"i_ce", false,-1);
    tracep->declBit(c+1302,"i_trigger", false,-1);
    tracep->declBus(c+40,"i_data", false,-1, 30,0);
    tracep->declBit(c+4439,"i_wb_clk", false,-1);
    tracep->declBit(c+461,"i_wb_cyc", false,-1);
    tracep->declBit(c+462,"i_wb_stb", false,-1);
    tracep->declBit(c+463,"i_wb_we", false,-1);
    tracep->declBit(c+1392,"i_wb_addr", false,-1);
    tracep->declBus(c+465,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+466,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+467,"o_wb_ack", false,-1);
    tracep->declBus(c+468,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+141,"o_interrupt", false,-1);
    tracep->declBit(c+1393,"write_stb", false,-1);
    tracep->declBit(c+1394,"read_from_data", false,-1);
    tracep->declBit(c+1395,"write_to_control", false,-1);
    tracep->declBus(c+468,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4439,"bus_clock", false,-1);
    tracep->declBit(c+1396,"read_address", false,-1);
    tracep->declBus(c+465,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1397,"raddr", false,-1, 9,0);
    tracep->declBus(c+1398,"waddr", false,-1, 9,0);
    tracep->declBit(c+1399,"bw_reset_request", false,-1);
    tracep->declBit(c+1400,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1401,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1399,"bw_reset_complete", false,-1);
    tracep->declBus(c+1402,"br_config", false,-1, 2,0);
    tracep->declBus(c+1403,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1404,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1399,"dw_reset", false,-1);
    tracep->declBit(c+1400,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1401,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1405,"dr_triggered", false,-1);
    tracep->declBit(c+1406,"dr_primed", false,-1);
    tracep->declBit(c+1407,"dw_trigger", false,-1);
    tracep->declBit(c+1408,"dr_stopped", false,-1);
    tracep->declBus(c+4667,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1409,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1410,"dw_final_stop", false,-1);
    tracep->declBus(c+1411,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1412,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1413,"dr_force_write", false,-1);
    tracep->declBit(c+1414,"dr_run_timeout", false,-1);
    tracep->declBit(c+1415,"new_data", false,-1);
    tracep->declBit(c+1416,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1412,"w_data", false,-1, 30,0);
    tracep->declBit(c+1417,"imm_adr", false,-1);
    tracep->declBit(c+1418,"lst_adr", false,-1);
    tracep->declBus(c+1419,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1420,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1421,"record_ce", false,-1);
    tracep->declBus(c+1422,"r_data", false,-1, 31,0);
    tracep->declBit(c+1410,"bw_stopped", false,-1);
    tracep->declBit(c+1405,"bw_triggered", false,-1);
    tracep->declBit(c+1406,"bw_primed", false,-1);
    tracep->declBit(c+467,"br_wb_ack", false,-1);
    tracep->declBit(c+1423,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+462,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1424,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1425,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1403,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4716,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1426,"br_level_interrupt", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4586,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4719,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4586,"TB", false,-1, 31,0);
    tracep->declBus(c+4635,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4636,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4637,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4638,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4639,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4640,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4629,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4641,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4706,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4707,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4622,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4521,"i_uart_rx", false,-1);
    tracep->declBit(c+168,"o_wr", false,-1);
    tracep->declBus(c+166,"o_data", false,-1, 7,0);
    tracep->declBus(c+4720,"half_baud", false,-1, 6,0);
    tracep->declBus(c+1427,"state", false,-1, 3,0);
    tracep->declBus(c+1428,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+1429,"zero_baud_counter", false,-1);
    tracep->declBit(c+1430,"q_uart", false,-1);
    tracep->declBit(c+1431,"qq_uart", false,-1);
    tracep->declBit(c+1432,"ck_uart", false,-1);
    tracep->declBus(c+1433,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+1434,"half_baud_time", false,-1);
    tracep->declBus(c+1435,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4716,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4628,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4703,"NELM", false,-1, 31,0);
    tracep->declBus(c+4584,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4624,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4717,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4703,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4718,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4439,"i_data_clk", false,-1);
    tracep->declBit(c+4591,"i_ce", false,-1);
    tracep->declBit(c+1130,"i_trigger", false,-1);
    tracep->declBus(c+41,"i_data", false,-1, 30,0);
    tracep->declBit(c+4439,"i_wb_clk", false,-1);
    tracep->declBit(c+469,"i_wb_cyc", false,-1);
    tracep->declBit(c+470,"i_wb_stb", false,-1);
    tracep->declBit(c+471,"i_wb_we", false,-1);
    tracep->declBit(c+1436,"i_wb_addr", false,-1);
    tracep->declBus(c+473,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+474,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+475,"o_wb_ack", false,-1);
    tracep->declBus(c+476,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+135,"o_interrupt", false,-1);
    tracep->declBit(c+1437,"write_stb", false,-1);
    tracep->declBit(c+1438,"read_from_data", false,-1);
    tracep->declBit(c+1439,"write_to_control", false,-1);
    tracep->declBus(c+476,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4439,"bus_clock", false,-1);
    tracep->declBit(c+1440,"read_address", false,-1);
    tracep->declBus(c+473,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1441,"raddr", false,-1, 9,0);
    tracep->declBus(c+1442,"waddr", false,-1, 9,0);
    tracep->declBit(c+1443,"bw_reset_request", false,-1);
    tracep->declBit(c+1444,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1445,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1443,"bw_reset_complete", false,-1);
    tracep->declBus(c+1446,"br_config", false,-1, 2,0);
    tracep->declBus(c+1447,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1448,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1443,"dw_reset", false,-1);
    tracep->declBit(c+1444,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1445,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1449,"dr_triggered", false,-1);
    tracep->declBit(c+1450,"dr_primed", false,-1);
    tracep->declBit(c+1451,"dw_trigger", false,-1);
    tracep->declBit(c+1452,"dr_stopped", false,-1);
    tracep->declBus(c+4667,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1453,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1454,"dw_final_stop", false,-1);
    tracep->declBus(c+1455,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1456,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1457,"dr_force_write", false,-1);
    tracep->declBit(c+1458,"dr_run_timeout", false,-1);
    tracep->declBit(c+1459,"new_data", false,-1);
    tracep->declBit(c+1460,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1456,"w_data", false,-1, 30,0);
    tracep->declBit(c+1461,"imm_adr", false,-1);
    tracep->declBit(c+1462,"lst_adr", false,-1);
    tracep->declBus(c+1463,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1464,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1465,"record_ce", false,-1);
    tracep->declBus(c+1466,"r_data", false,-1, 31,0);
    tracep->declBit(c+1454,"bw_stopped", false,-1);
    tracep->declBit(c+1449,"bw_triggered", false,-1);
    tracep->declBit(c+1450,"bw_primed", false,-1);
    tracep->declBit(c+475,"br_wb_ack", false,-1);
    tracep->declBit(c+1467,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+470,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1468,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1469,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1447,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4716,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1470,"br_level_interrupt", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4716,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4628,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4703,"NELM", false,-1, 31,0);
    tracep->declBus(c+4584,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4624,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4717,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4703,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4718,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4439,"i_data_clk", false,-1);
    tracep->declBit(c+4591,"i_ce", false,-1);
    tracep->declBit(c+1130,"i_trigger", false,-1);
    tracep->declBus(c+4539,"i_data", false,-1, 30,0);
    tracep->declBit(c+4439,"i_wb_clk", false,-1);
    tracep->declBit(c+477,"i_wb_cyc", false,-1);
    tracep->declBit(c+478,"i_wb_stb", false,-1);
    tracep->declBit(c+479,"i_wb_we", false,-1);
    tracep->declBit(c+1471,"i_wb_addr", false,-1);
    tracep->declBus(c+481,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+482,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+483,"o_wb_ack", false,-1);
    tracep->declBus(c+484,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+136,"o_interrupt", false,-1);
    tracep->declBit(c+1472,"write_stb", false,-1);
    tracep->declBit(c+1473,"read_from_data", false,-1);
    tracep->declBit(c+1474,"write_to_control", false,-1);
    tracep->declBus(c+484,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4439,"bus_clock", false,-1);
    tracep->declBit(c+1475,"read_address", false,-1);
    tracep->declBus(c+481,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1476,"raddr", false,-1, 9,0);
    tracep->declBus(c+1477,"waddr", false,-1, 9,0);
    tracep->declBit(c+1478,"bw_reset_request", false,-1);
    tracep->declBit(c+1479,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1480,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1478,"bw_reset_complete", false,-1);
    tracep->declBus(c+1481,"br_config", false,-1, 2,0);
    tracep->declBus(c+1482,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1483,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1478,"dw_reset", false,-1);
    tracep->declBit(c+1479,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1480,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1484,"dr_triggered", false,-1);
    tracep->declBit(c+1485,"dr_primed", false,-1);
    tracep->declBit(c+1486,"dw_trigger", false,-1);
    tracep->declBit(c+1487,"dr_stopped", false,-1);
    tracep->declBus(c+4667,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1488,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1489,"dw_final_stop", false,-1);
    tracep->declBus(c+1490,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1491,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1492,"dr_force_write", false,-1);
    tracep->declBit(c+1493,"dr_run_timeout", false,-1);
    tracep->declBit(c+1494,"new_data", false,-1);
    tracep->declBit(c+1495,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1491,"w_data", false,-1, 30,0);
    tracep->declBit(c+1496,"imm_adr", false,-1);
    tracep->declBit(c+1497,"lst_adr", false,-1);
    tracep->declBus(c+1498,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1499,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1500,"record_ce", false,-1);
    tracep->declBus(c+1501,"r_data", false,-1, 31,0);
    tracep->declBit(c+1489,"bw_stopped", false,-1);
    tracep->declBit(c+1484,"bw_triggered", false,-1);
    tracep->declBit(c+1485,"bw_primed", false,-1);
    tracep->declBit(c+483,"br_wb_ack", false,-1);
    tracep->declBit(c+1502,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+478,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1503,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1504,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1482,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4716,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1505,"br_level_interrupt", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4716,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4628,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4703,"NELM", false,-1, 31,0);
    tracep->declBus(c+4584,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4624,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4717,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4703,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4718,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4439,"i_data_clk", false,-1);
    tracep->declBit(c+4591,"i_ce", false,-1);
    tracep->declBit(c+1130,"i_trigger", false,-1);
    tracep->declBus(c+4540,"i_data", false,-1, 30,0);
    tracep->declBit(c+4439,"i_wb_clk", false,-1);
    tracep->declBit(c+485,"i_wb_cyc", false,-1);
    tracep->declBit(c+486,"i_wb_stb", false,-1);
    tracep->declBit(c+487,"i_wb_we", false,-1);
    tracep->declBit(c+1506,"i_wb_addr", false,-1);
    tracep->declBus(c+489,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+490,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+491,"o_wb_ack", false,-1);
    tracep->declBus(c+492,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+142,"o_interrupt", false,-1);
    tracep->declBit(c+1507,"write_stb", false,-1);
    tracep->declBit(c+1508,"read_from_data", false,-1);
    tracep->declBit(c+1509,"write_to_control", false,-1);
    tracep->declBus(c+492,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4439,"bus_clock", false,-1);
    tracep->declBit(c+1510,"read_address", false,-1);
    tracep->declBus(c+489,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1511,"raddr", false,-1, 9,0);
    tracep->declBus(c+1512,"waddr", false,-1, 9,0);
    tracep->declBit(c+1513,"bw_reset_request", false,-1);
    tracep->declBit(c+1514,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1515,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1513,"bw_reset_complete", false,-1);
    tracep->declBus(c+1516,"br_config", false,-1, 2,0);
    tracep->declBus(c+1517,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1518,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1513,"dw_reset", false,-1);
    tracep->declBit(c+1514,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1515,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1519,"dr_triggered", false,-1);
    tracep->declBit(c+1520,"dr_primed", false,-1);
    tracep->declBit(c+1521,"dw_trigger", false,-1);
    tracep->declBit(c+1522,"dr_stopped", false,-1);
    tracep->declBus(c+4667,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1523,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1524,"dw_final_stop", false,-1);
    tracep->declBus(c+1525,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1526,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1527,"dr_force_write", false,-1);
    tracep->declBit(c+1528,"dr_run_timeout", false,-1);
    tracep->declBit(c+1529,"new_data", false,-1);
    tracep->declBit(c+1530,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1526,"w_data", false,-1, 30,0);
    tracep->declBit(c+1531,"imm_adr", false,-1);
    tracep->declBit(c+1532,"lst_adr", false,-1);
    tracep->declBus(c+1533,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1534,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1535,"record_ce", false,-1);
    tracep->declBus(c+1536,"r_data", false,-1, 31,0);
    tracep->declBit(c+1524,"bw_stopped", false,-1);
    tracep->declBit(c+1519,"bw_triggered", false,-1);
    tracep->declBit(c+1520,"bw_primed", false,-1);
    tracep->declBit(c+491,"br_wb_ack", false,-1);
    tracep->declBit(c+1537,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+486,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1538,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1539,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1517,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4716,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1540,"br_level_interrupt", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4577,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4667,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4577,"NSW", false,-1, 31,0);
    tracep->declBus(c+4588,"NFF", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+449,"i_wb_cyc", false,-1);
    tracep->declBit(c+457,"i_wb_stb", false,-1);
    tracep->declBit(c+451,"i_wb_we", false,-1);
    tracep->declBus(c+452,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+453,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+458,"o_wb_ack", false,-1);
    tracep->declBus(c+459,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4526,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4527,"i_btn", false,-1, 4,0);
    tracep->declBus(c+172,"o_led", false,-1, 7,0);
    tracep->declBit(c+144,"o_int", false,-1);
    tracep->declBit(c+1541,"led_demo", false,-1);
    tracep->declBus(c+1542,"r_led", false,-1, 7,0);
    tracep->declBus(c+1543,"w_btn", false,-1, 7,0);
    tracep->declBus(c+1544,"bounced", false,-1, 7,0);
    tracep->declBus(c+1545,"r_sw", false,-1, 7,0);
    tracep->declBit(c+1546,"sw_int", false,-1);
    tracep->declBit(c+1547,"btn_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+1548,"next_btn", false,-1, 4,0);
    tracep->declBus(c+1549,"s_btn", false,-1, 4,0);
    tracep->declBus(c+1550,"r_btn", false,-1, 4,0);
    tracep->declBus(c+1551,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+1547,"r_btn_int", false,-1);
    tracep->declBit(c+1552,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+1553,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+1545,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4577,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4582,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBus(c+1544,"o_leds", false,-1, 7,0);
    tracep->declBus(c+1554,"led_owner", false,-1, 7,0);
    tracep->declBit(c+1555,"led_dir", false,-1);
    tracep->declBus(c+1556,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+1557,"led_clk", false,-1);
    tracep->declBus(c+1558,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+1559,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+1560,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+1561,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+1562,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+1563,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+1564,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+1565,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+1566,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4581,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4628,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4671,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4671,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4584,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4583,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4576,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4575,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4584,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4627,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4624,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4582,"PAW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4541,"i_reset", false,-1);
    tracep->declBit(c+237,"o_wb_cyc", false,-1);
    tracep->declBit(c+238,"o_wb_stb", false,-1);
    tracep->declBit(c+239,"o_wb_we", false,-1);
    tracep->declBus(c+240,"o_wb_addr", false,-1, 24,0);
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
    tracep->declBus(c+4542,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_dbg_stall", false,-1);
    tracep->declBit(c+163,"o_dbg_ack", false,-1);
    tracep->declBus(c+570,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4589,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4517,"o_prof_stb", false,-1);
    tracep->declBus(c+4518,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4519,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4721,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4626,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4722,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4723,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4724,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4725,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4726,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4727,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4728,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4729,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4730,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4731,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4732,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4733,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4734,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4735,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4736,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4737,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4738,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4589,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4588,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4576,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4579,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4667,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4582,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4630,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4631,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4632,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+1567,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+1568,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+1569,"ctri_int", false,-1);
    tracep->declBit(c+1570,"tma_int", false,-1);
    tracep->declBit(c+1571,"tmb_int", false,-1);
    tracep->declBit(c+1572,"tmc_int", false,-1);
    tracep->declBit(c+1573,"jif_int", false,-1);
    tracep->declBit(c+1574,"dmac_int", false,-1);
    tracep->declBit(c+1575,"mtc_int", false,-1);
    tracep->declBit(c+1576,"moc_int", false,-1);
    tracep->declBit(c+1577,"mpc_int", false,-1);
    tracep->declBit(c+1578,"mic_int", false,-1);
    tracep->declBit(c+1579,"utc_int", false,-1);
    tracep->declBit(c+1580,"uoc_int", false,-1);
    tracep->declBit(c+1581,"upc_int", false,-1);
    tracep->declBit(c+1582,"uic_int", false,-1);
    tracep->declBus(c+1583,"actr_data", false,-1, 31,0);
    tracep->declBit(c+1584,"actr_ack", false,-1);
    tracep->declBit(c+4590,"actr_stall", false,-1);
    tracep->declBit(c+1585,"cpu_clken", false,-1);
    tracep->declBit(c+1586,"sys_cyc", false,-1);
    tracep->declBit(c+1587,"sys_stb", false,-1);
    tracep->declBit(c+1588,"sys_we", false,-1);
    tracep->declBus(c+1589,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+1590,"sys_data", false,-1, 31,0);
    tracep->declBus(c+1591,"cpu_addr", false,-1, 24,0);
    tracep->declBus(c+1592,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+1593,"sys_ack", false,-1);
    tracep->declBit(c+4590,"sys_stall", false,-1);
    tracep->declBit(c+1584,"sel_counter", false,-1);
    tracep->declBit(c+1594,"sel_timer", false,-1);
    tracep->declBit(c+1595,"sel_pic", false,-1);
    tracep->declBit(c+1596,"sel_apic", false,-1);
    tracep->declBit(c+1597,"sel_watchdog", false,-1);
    tracep->declBit(c+1598,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+1599,"sel_dmac", false,-1);
    tracep->declBit(c+1600,"sel_mmus", false,-1);
    tracep->declBit(c+1601,"dbg_cyc", false,-1);
    tracep->declBit(c+1602,"dbg_stb", false,-1);
    tracep->declBit(c+1603,"dbg_we", false,-1);
    tracep->declBus(c+1604,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+1605,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+1606,"dbg_ack", false,-1);
    tracep->declBit(c+1607,"dbg_stall", false,-1);
    tracep->declBus(c+1608,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+1609,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+1610,"no_dbg_err", false,-1);
    tracep->declBit(c+1611,"cpu_break", false,-1);
    tracep->declBit(c+1612,"dbg_cmd_write", false,-1);
    tracep->declBit(c+1613,"dbg_cpu_write", false,-1);
    tracep->declBit(c+1614,"dbg_cpu_read", false,-1);
    tracep->declBus(c+1605,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+1609,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+1615,"reset_hold", false,-1);
    tracep->declBit(c+1616,"halt_on_fault", false,-1);
    tracep->declBit(c+1616,"dbg_catch", false,-1);
    tracep->declBit(c+1617,"reset_request", false,-1);
    tracep->declBit(c+1618,"release_request", false,-1);
    tracep->declBit(c+1619,"halt_request", false,-1);
    tracep->declBit(c+1620,"step_request", false,-1);
    tracep->declBit(c+1621,"clear_cache_request", false,-1);
    tracep->declBit(c+1622,"cmd_reset", false,-1);
    tracep->declBit(c+1623,"cmd_halt", false,-1);
    tracep->declBit(c+1624,"cmd_step", false,-1);
    tracep->declBit(c+1625,"cmd_clear_cache", false,-1);
    tracep->declBit(c+1626,"cmd_write", false,-1);
    tracep->declBit(c+1627,"cmd_read", false,-1);
    tracep->declBus(c+1628,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+1629,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+1630,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1622,"cpu_reset", false,-1);
    tracep->declBit(c+1623,"cpu_halt", false,-1);
    tracep->declBit(c+1631,"cpu_has_halted", false,-1);
    tracep->declBit(c+1632,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+1633,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+1634,"cpu_gie", false,-1);
    tracep->declBit(c+4590,"wdt_stall", false,-1);
    tracep->declBit(c+1635,"wdt_ack", false,-1);
    tracep->declBit(c+1636,"wdt_reset", false,-1);
    tracep->declBus(c+1637,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+1638,"wdbus_ack", false,-1);
    tracep->declBus(c+1639,"r_wdbus_data", false,-1, 24,0);
    tracep->declBus(c+1640,"pic_data", false,-1, 31,0);
    tracep->declBus(c+1641,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+1642,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+1643,"wdbus_int", false,-1);
    tracep->declBit(c+47,"cpu_op_stall", false,-1);
    tracep->declBit(c+1644,"cpu_pf_stall", false,-1);
    tracep->declBit(c+1645,"cpu_i_count", false,-1);
    tracep->declBit(c+1646,"dmac_stb", false,-1);
    tracep->declBit(c+1647,"dc_err", false,-1);
    tracep->declBus(c+1648,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4590,"dmac_stall", false,-1);
    tracep->declBit(c+1649,"dmac_ack", false,-1);
    tracep->declBit(c+1650,"dc_cyc", false,-1);
    tracep->declBit(c+1651,"dc_stb", false,-1);
    tracep->declBit(c+1652,"dc_we", false,-1);
    tracep->declBit(c+1653,"dc_stall", false,-1);
    tracep->declBit(c+1654,"dc_ack", false,-1);
    tracep->declBus(c+1655,"dc_addr", false,-1, 24,0);
    tracep->declArray(c+1656,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1672,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1674,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1675,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1676,"ctri_sel", false,-1);
    tracep->declBit(c+4590,"ctri_stall", false,-1);
    tracep->declBit(c+1676,"ctri_ack", false,-1);
    tracep->declBus(c+1677,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4590,"tma_stall", false,-1);
    tracep->declBit(c+1678,"tma_ack", false,-1);
    tracep->declBit(c+4590,"tmb_stall", false,-1);
    tracep->declBit(c+1679,"tmb_ack", false,-1);
    tracep->declBit(c+4590,"tmc_stall", false,-1);
    tracep->declBit(c+1680,"tmc_ack", false,-1);
    tracep->declBit(c+4590,"jif_stall", false,-1);
    tracep->declBit(c+1681,"jif_ack", false,-1);
    tracep->declBus(c+1682,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1683,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1684,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1685,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4590,"pic_stall", false,-1);
    tracep->declBit(c+1686,"pic_ack", false,-1);
    tracep->declBit(c+1687,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1688,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1689,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1690,"cpu_we", false,-1);
    tracep->declArray(c+1691,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1707,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1707,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1709,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1725,"cpu_stall", false,-1);
    tracep->declBit(c+1726,"pic_interrupt", false,-1);
    tracep->declBit(c+1727,"cpu_ack", false,-1);
    tracep->declBit(c+1728,"cpu_err", false,-1);
    tracep->declBus(c+1729,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+259,"ext_stall", false,-1);
    tracep->declBit(c+260,"ext_ack", false,-1);
    tracep->declBit(c+1674,"mmu_cyc", false,-1);
    tracep->declBit(c+1687,"mmu_stb", false,-1);
    tracep->declBit(c+1690,"mmu_we", false,-1);
    tracep->declBit(c+1730,"mmu_stall", false,-1);
    tracep->declBit(c+1731,"mmu_ack", false,-1);
    tracep->declBit(c+1732,"mmu_err", false,-1);
    tracep->declBit(c+4590,"mmus_stall", false,-1);
    tracep->declBit(c+1733,"mmus_ack", false,-1);
    tracep->declBus(c+1591,"mmu_addr", false,-1, 24,0);
    tracep->declArray(c+1691,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+262,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4589,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4590,"cpu_miss", false,-1);
    tracep->declBit(c+1730,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1731,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+262,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4590,"pf_return_stb", false,-1);
    tracep->declBit(c+4590,"pf_return_we", false,-1);
    tracep->declBit(c+4590,"pf_return_cachable", false,-1);
    tracep->declBus(c+4739,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4739,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+237,"ext_cyc", false,-1);
    tracep->declBit(c+238,"ext_stb", false,-1);
    tracep->declBit(c+239,"ext_we", false,-1);
    tracep->declBit(c+1734,"ext_err", false,-1);
    tracep->declBus(c+240,"ext_addr", false,-1, 24,0);
    tracep->declArray(c+241,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+257,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+262,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1735,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1736,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1737,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1738,"last_sys_stb", false,-1);
    tracep->declBit(c+1739,"cmd_read_ack", false,-1);
    tracep->declBit(c+1733,"r_mmus_ack", false,-1);
    tracep->declBit(c+1740,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1741,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1742,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4590,"mtc_stall", false,-1);
    tracep->declBit(c+1743,"mtc_ack", false,-1);
    tracep->declBit(c+4590,"moc_stall", false,-1);
    tracep->declBit(c+1744,"moc_ack", false,-1);
    tracep->declBit(c+4590,"mpc_stall", false,-1);
    tracep->declBit(c+1745,"mpc_ack", false,-1);
    tracep->declBit(c+4590,"mic_stall", false,-1);
    tracep->declBit(c+1746,"mic_ack", false,-1);
    tracep->declBit(c+4590,"utc_stall", false,-1);
    tracep->declBit(c+1747,"utc_ack", false,-1);
    tracep->declBit(c+4590,"uoc_stall", false,-1);
    tracep->declBit(c+1748,"uoc_ack", false,-1);
    tracep->declBit(c+4590,"upc_stall", false,-1);
    tracep->declBit(c+1749,"upc_ack", false,-1);
    tracep->declBit(c+4590,"uic_stall", false,-1);
    tracep->declBit(c+1750,"uic_ack", false,-1);
    tracep->declBus(c+1751,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1752,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1753,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1754,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1755,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1756,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1757,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1758,"uic_data", false,-1, 31,0);
    tracep->declBus(c+1583,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1645,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1759,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1746,"o_wb_ack", false,-1);
    tracep->declBus(c+1754,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1578,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+47,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1760,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1744,"o_wb_ack", false,-1);
    tracep->declBus(c+1752,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1576,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1644,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1761,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1745,"o_wb_ack", false,-1);
    tracep->declBus(c+1753,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1577,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1763,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1743,"o_wb_ack", false,-1);
    tracep->declBus(c+1751,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1575,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1764,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1765,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1750,"o_wb_ack", false,-1);
    tracep->declBus(c+1758,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1582,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+48,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1766,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1748,"o_wb_ack", false,-1);
    tracep->declBus(c+1756,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1580,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1767,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1768,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1749,"o_wb_ack", false,-1);
    tracep->declBus(c+1757,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1581,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4590,"i_reset", false,-1);
    tracep->declBit(c+1769,"i_event", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1770,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1747,"o_wb_ack", false,-1);
    tracep->declBus(c+1755,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1579,"o_int", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4590,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4586,"AW", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4541,"i_reset", false,-1);
    tracep->declBit(c+42,"i_wb_cyc", false,-1);
    tracep->declBit(c+43,"i_wb_stb", false,-1);
    tracep->declBit(c+44,"i_wb_we", false,-1);
    tracep->declBus(c+45,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+46,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_wb_stall", false,-1);
    tracep->declBit(c+163,"o_wb_ack", false,-1);
    tracep->declBus(c+570,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1610,"o_wb_err", false,-1);
    tracep->declBit(c+1601,"o_dly_cyc", false,-1);
    tracep->declBit(c+1602,"o_dly_stb", false,-1);
    tracep->declBit(c+1603,"o_dly_we", false,-1);
    tracep->declBus(c+1604,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+1605,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+1609,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+1607,"i_dly_stall", false,-1);
    tracep->declBit(c+1606,"i_dly_ack", false,-1);
    tracep->declBus(c+1608,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4590,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+162,"r_stb", false,-1);
    tracep->declBit(c+1771,"r_we", false,-1);
    tracep->declBus(c+1772,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1773,"r_data", false,-1, 31,0);
    tracep->declBus(c+1774,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4575,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4703,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4628,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1586,"i_swb_cyc", false,-1);
    tracep->declBit(c+1646,"i_swb_stb", false,-1);
    tracep->declBit(c+1588,"i_swb_we", false,-1);
    tracep->declBus(c+1775,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+1590,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_swb_stall", false,-1);
    tracep->declBit(c+1649,"o_swb_ack", false,-1);
    tracep->declBus(c+1648,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+1650,"o_mwb_cyc", false,-1);
    tracep->declBit(c+1651,"o_mwb_stb", false,-1);
    tracep->declBit(c+1652,"o_mwb_we", false,-1);
    tracep->declBus(c+1655,"o_mwb_addr", false,-1, 24,0);
    tracep->declArray(c+1656,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1672,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+1653,"i_mwb_stall", false,-1);
    tracep->declBit(c+1654,"i_mwb_ack", false,-1);
    tracep->declArray(c+262,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+1647,"i_mwb_err", false,-1);
    tracep->declBus(c+1675,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+1574,"o_interrupt", false,-1);
    tracep->declBus(c+4740,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4579,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1776,"dma_request", false,-1);
    tracep->declBit(c+1777,"dma_abort", false,-1);
    tracep->declBit(c+1778,"dma_busy", false,-1);
    tracep->declBit(c+1779,"dma_err", false,-1);
    tracep->declBus(c+1780,"dma_src", false,-1, 30,0);
    tracep->declBus(c+1781,"dma_dst", false,-1, 30,0);
    tracep->declBus(c+1782,"read_addr", false,-1, 30,0);
    tracep->declBus(c+1783,"write_addr", false,-1, 30,0);
    tracep->declBus(c+1784,"dma_length", false,-1, 30,0);
    tracep->declBus(c+1785,"remaining_len", false,-1, 30,0);
    tracep->declBus(c+1786,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1787,"dma_trigger", false,-1);
    tracep->declBit(c+1788,"mm2s_request", false,-1);
    tracep->declBit(c+1789,"s2mm_request", false,-1);
    tracep->declBit(c+1790,"mm2s_busy", false,-1);
    tracep->declBit(c+1791,"s2mm_busy", false,-1);
    tracep->declBit(c+1792,"mm2s_err", false,-1);
    tracep->declBit(c+1793,"s2mm_err", false,-1);
    tracep->declBit(c+1794,"mm2s_inc", false,-1);
    tracep->declBit(c+1795,"s2mm_inc", false,-1);
    tracep->declBus(c+1796,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1797,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1798,"mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1799,"s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1800,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1800,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1801,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1802,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4590,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1803,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1804,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1805,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1806,"mm2s_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1807,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1809,"mm2s_valid", false,-1);
    tracep->declBit(c+1810,"mm2s_ready", false,-1);
    tracep->declBit(c+1811,"mm2s_last", false,-1);
    tracep->declArray(c+1812,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1828,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1829,"rx_valid", false,-1);
    tracep->declBit(c+1830,"rx_ready", false,-1);
    tracep->declBit(c+1831,"rx_last", false,-1);
    tracep->declArray(c+1832,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1848,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1849,"tx_valid", false,-1);
    tracep->declBit(c+1850,"tx_ready", false,-1);
    tracep->declBit(c+1851,"tx_last", false,-1);
    tracep->declArray(c+1852,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1868,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1869,"sfifo_full", false,-1);
    tracep->declBit(c+1870,"sfifo_empty", false,-1);
    tracep->declBus(c+1871,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1872,"s2mm_valid", false,-1);
    tracep->declBit(c+1873,"s2mm_ready", false,-1);
    tracep->declBit(c+1874,"s2mm_last", false,-1);
    tracep->declArray(c+1875,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1891,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1892,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1893,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4591,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1894,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1895,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1896,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1897,"s2mm_wr_addr", false,-1, 24,0);
    tracep->declArray(c+1656,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1898,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1650,"wb_cyc", false,-1);
    tracep->declBit(c+1651,"wb_stb", false,-1);
    tracep->declBit(c+1652,"wb_we", false,-1);
    tracep->declBit(c+1653,"wb_stall", false,-1);
    tracep->declBit(c+1654,"wb_ack", false,-1);
    tracep->declBit(c+1647,"wb_err", false,-1);
    tracep->declBus(c+1655,"wb_addr", false,-1, 24,0);
    tracep->declArray(c+1656,"wb_data", false,-1, 511,0);
    tracep->declArray(c+262,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1672,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declArray(c+4741,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4627,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1801,"i_a_cyc", false,-1);
    tracep->declBit(c+1802,"i_a_stb", false,-1);
    tracep->declBit(c+4590,"i_a_we", false,-1);
    tracep->declBus(c+1806,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1656,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1807,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1803,"o_a_stall", false,-1);
    tracep->declBit(c+1804,"o_a_ack", false,-1);
    tracep->declBit(c+1805,"o_a_err", false,-1);
    tracep->declBit(c+1892,"i_b_cyc", false,-1);
    tracep->declBit(c+1893,"i_b_stb", false,-1);
    tracep->declBit(c+4591,"i_b_we", false,-1);
    tracep->declBus(c+1897,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1656,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1898,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1894,"o_b_stall", false,-1);
    tracep->declBit(c+1895,"o_b_ack", false,-1);
    tracep->declBit(c+1896,"o_b_err", false,-1);
    tracep->declBit(c+1650,"o_cyc", false,-1);
    tracep->declBit(c+1651,"o_stb", false,-1);
    tracep->declBit(c+1652,"o_we", false,-1);
    tracep->declBus(c+1655,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1656,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1672,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1653,"i_stall", false,-1);
    tracep->declBit(c+1654,"i_ack", false,-1);
    tracep->declBit(c+1647,"i_err", false,-1);
    tracep->declBit(c+1900,"r_a_owner", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1901,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4575,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4628,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4703,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4744,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4703,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1586,"i_cyc", false,-1);
    tracep->declBit(c+1646,"i_stb", false,-1);
    tracep->declBit(c+1588,"i_we", false,-1);
    tracep->declBus(c+1775,"i_addr", false,-1, 1,0);
    tracep->declBus(c+1590,"i_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_stall", false,-1);
    tracep->declBit(c+1649,"o_ack", false,-1);
    tracep->declBus(c+1648,"o_data", false,-1, 31,0);
    tracep->declBit(c+1776,"o_dma_request", false,-1);
    tracep->declBit(c+1777,"o_dma_abort", false,-1);
    tracep->declBit(c+1778,"i_dma_busy", false,-1);
    tracep->declBit(c+1779,"i_dma_err", false,-1);
    tracep->declBus(c+1780,"o_src_addr", false,-1, 30,0);
    tracep->declBus(c+1781,"o_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1784,"o_length", false,-1, 30,0);
    tracep->declBus(c+1786,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1794,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1795,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1796,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1797,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1787,"o_trigger", false,-1);
    tracep->declBus(c+1782,"i_current_src", false,-1, 30,0);
    tracep->declBus(c+1783,"i_current_dst", false,-1, 30,0);
    tracep->declBus(c+1785,"i_remaining_len", false,-1, 30,0);
    tracep->declBus(c+1675,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+1574,"o_interrupt", false,-1);
    tracep->declBit(c+1902,"int_trigger", false,-1);
    tracep->declBit(c+1903,"r_err", false,-1);
    tracep->declBit(c+1904,"r_zero_len", false,-1);
    tracep->declBit(c+1905,"r_busy", false,-1);
    tracep->declBus(c+1906,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1907,"next_src", false,-1, 31,0);
    tracep->declBus(c+1908,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1909,"next_len", false,-1, 31,0);
    tracep->declBus(c+1910,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1911,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4590,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4590,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4703,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4575,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1777,"i_soft_reset", false,-1);
    tracep->declBit(c+1776,"i_dma_request", false,-1);
    tracep->declBit(c+1778,"o_dma_busy", false,-1);
    tracep->declBit(c+1779,"o_dma_err", false,-1);
    tracep->declBus(c+1780,"i_src_addr", false,-1, 30,0);
    tracep->declBus(c+1781,"i_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1784,"i_length", false,-1, 30,0);
    tracep->declBus(c+1786,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1785,"o_remaining_len", false,-1, 30,0);
    tracep->declBit(c+1787,"i_trigger", false,-1);
    tracep->declBit(c+1788,"o_mm2s_request", false,-1);
    tracep->declBit(c+1790,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1792,"i_mm2s_err", false,-1);
    tracep->declBit(c+1794,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1798,"o_mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1800,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1789,"o_s2mm_request", false,-1);
    tracep->declBit(c+1791,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1793,"i_s2mm_err", false,-1);
    tracep->declBit(c+1795,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1799,"o_s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1800,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4630,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4631,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4632,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4633,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1785,"r_length", false,-1, 30,0);
    tracep->declBus(c+1800,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1912,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4575,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1913,"i_reset", false,-1);
    tracep->declBit(c+1788,"i_request", false,-1);
    tracep->declBit(c+1790,"o_busy", false,-1);
    tracep->declBit(c+1792,"o_err", false,-1);
    tracep->declBit(c+1794,"i_inc", false,-1);
    tracep->declBus(c+1796,"i_size", false,-1, 1,0);
    tracep->declBus(c+1800,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1798,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1801,"o_rd_cyc", false,-1);
    tracep->declBit(c+1802,"o_rd_stb", false,-1);
    tracep->declBit(c+4590,"o_rd_we", false,-1);
    tracep->declBus(c+1806,"o_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1807,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1803,"i_rd_stall", false,-1);
    tracep->declBit(c+1804,"i_rd_ack", false,-1);
    tracep->declArray(c+262,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1805,"i_rd_err", false,-1);
    tracep->declBit(c+1809,"M_VALID", false,-1);
    tracep->declBit(c+1810,"M_READY", false,-1);
    tracep->declArray(c+1812,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1828,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1811,"M_LAST", false,-1);
    tracep->declBus(c+4633,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4632,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4631,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4630,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1914,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1915,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1916,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1917,"first_size", false,-1, 6,0);
    tracep->declBus(c+1918,"next_addr", false,-1, 30,0);
    tracep->declBus(c+1919,"last_request_addr", false,-1, 30,0);
    tracep->declBus(c+1920,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1921,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1922,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1924,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1926,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1928,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1930,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1931,"fill", false,-1, 7,0);
    tracep->declBus(c+1932,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1809,"m_valid", false,-1);
    tracep->declBit(c+1811,"m_last", false,-1);
    tracep->declArray(c+1812,"sreg", false,-1, 511,0);
    tracep->declBus(c+1828,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1933,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1934,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1935,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1936,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1952,"r_inc", false,-1);
    tracep->declBus(c+1953,"r_size", false,-1, 1,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1777,"i_soft_reset", false,-1);
    tracep->declBit(c+1809,"S_VALID", false,-1);
    tracep->declBit(c+1810,"S_READY", false,-1);
    tracep->declArray(c+1812,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1828,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1811,"S_LAST", false,-1);
    tracep->declBit(c+1829,"M_VALID", false,-1);
    tracep->declBit(c+1830,"M_READY", false,-1);
    tracep->declArray(c+1832,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1848,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1831,"M_LAST", false,-1);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1954,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1986,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1987,"fill", false,-1, 7,0);
    tracep->declBit(c+1829,"m_valid", false,-1);
    tracep->declBit(c+1831,"m_last", false,-1);
    tracep->declBit(c+1988,"next_last", false,-1);
    tracep->declBit(c+1989,"r_last", false,-1);
    tracep->declBit(c+1990,"r_full", false,-1);
    tracep->declBus(c+1848,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1991,"shift", false,-1, 5,0);
    tracep->declArray(c+1992,"s_data", false,-1, 511,0);
    tracep->declBus(c+4745,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4575,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1913,"i_reset", false,-1);
    tracep->declBit(c+1789,"i_request", false,-1);
    tracep->declBit(c+1791,"o_busy", false,-1);
    tracep->declBit(c+1793,"o_err", false,-1);
    tracep->declBit(c+1795,"i_inc", false,-1);
    tracep->declBus(c+1797,"i_size", false,-1, 1,0);
    tracep->declBus(c+1799,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1872,"S_VALID", false,-1);
    tracep->declBit(c+1873,"S_READY", false,-1);
    tracep->declArray(c+1875,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1891,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1874,"S_LAST", false,-1);
    tracep->declBit(c+1892,"o_wr_cyc", false,-1);
    tracep->declBit(c+1893,"o_wr_stb", false,-1);
    tracep->declBit(c+4591,"o_wr_we", false,-1);
    tracep->declBus(c+1897,"o_wr_addr", false,-1, 24,0);
    tracep->declArray(c+1656,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1898,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1894,"i_wr_stall", false,-1);
    tracep->declBit(c+1895,"i_wr_ack", false,-1);
    tracep->declArray(c+262,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1896,"i_wr_err", false,-1);
    tracep->declBus(c+4633,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4632,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4631,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4630,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+2008,"r_inc", false,-1);
    tracep->declBus(c+2009,"r_size", false,-1, 1,0);
    tracep->declBus(c+2010,"next_addr", false,-1, 31,0);
    tracep->declBus(c+2011,"subaddr", false,-1, 5,0);
    tracep->declArray(c+2012,"next_data", false,-1, 1023,0);
    tracep->declArray(c+2044,"r_data", false,-1, 511,0);
    tracep->declArray(c+2060,"next_sel", false,-1, 127,0);
    tracep->declArray(c+2064,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+2068,"r_sel", false,-1, 63,0);
    tracep->declBit(c+2070,"r_last", false,-1);
    tracep->declBus(c+2071,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+2072,"wb_pipeline_full", false,-1);
    tracep->declBit(c+2073,"addr_overflow", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4740,"BW", false,-1, 31,0);
    tracep->declBus(c+4579,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1913,"i_reset", false,-1);
    tracep->declBit(c+1829,"i_wr", false,-1);
    tracep->declArray(c+2074,"i_data", false,-1, 519,0);
    tracep->declBit(c+1869,"o_full", false,-1);
    tracep->declBus(c+1871,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1850,"i_rd", false,-1);
    tracep->declArray(c+2091,"o_data", false,-1, 519,0);
    tracep->declBit(c+1870,"o_empty", false,-1);
    tracep->declBus(c+4583,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1869,"r_full", false,-1);
    tracep->declBit(c+1870,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+2108+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+2380,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+2381,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+2382,"w_wr", false,-1);
    tracep->declBit(c+2383,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1777,"i_soft_reset", false,-1);
    tracep->declBus(c+1797,"i_size", false,-1, 1,0);
    tracep->declBit(c+1849,"S_VALID", false,-1);
    tracep->declBit(c+1850,"S_READY", false,-1);
    tracep->declArray(c+1852,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1868,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1851,"S_LAST", false,-1);
    tracep->declBit(c+1872,"M_VALID", false,-1);
    tracep->declBit(c+1873,"M_READY", false,-1);
    tracep->declArray(c+1875,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1891,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1874,"M_LAST", false,-1);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4633,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4632,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4631,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4630,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1872,"m_valid", false,-1);
    tracep->declBit(c+1874,"m_last", false,-1);
    tracep->declBit(c+2384,"r_last", false,-1);
    tracep->declBit(c+2385,"r_next", false,-1);
    tracep->declArray(c+1875,"sreg", false,-1, 511,0);
    tracep->declBus(c+1891,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+2386,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+1616,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+2387,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+1615,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4672,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1686,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1686,"o_wb_ack", false,-1);
    tracep->declBus(c+1640,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1567,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1726,"o_interrupt", false,-1);
    tracep->declBus(c+2388,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2389,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2390,"r_mie", false,-1);
    tracep->declBit(c+2391,"w_any", false,-1);
    tracep->declBit(c+2392,"wb_write", false,-1);
    tracep->declBit(c+2393,"enable_ints", false,-1);
    tracep->declBit(c+2394,"disable_ints", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4672,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+1676,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1676,"o_wb_ack", false,-1);
    tracep->declBus(c+1677,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1568,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1569,"o_interrupt", false,-1);
    tracep->declBus(c+2395,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2396,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2397,"r_mie", false,-1);
    tracep->declBit(c+2398,"w_any", false,-1);
    tracep->declBit(c+2399,"wb_write", false,-1);
    tracep->declBit(c+2400,"enable_ints", false,-1);
    tracep->declBit(c+2401,"disable_ints", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1674,"i_a_cyc", false,-1);
    tracep->declBit(c+1687,"i_a_stb", false,-1);
    tracep->declBit(c+1690,"i_a_we", false,-1);
    tracep->declBus(c+1591,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1691,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1707,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1730,"o_a_stall", false,-1);
    tracep->declBit(c+1731,"o_a_ack", false,-1);
    tracep->declBit(c+1732,"o_a_err", false,-1);
    tracep->declBit(c+1650,"i_b_cyc", false,-1);
    tracep->declBit(c+1651,"i_b_stb", false,-1);
    tracep->declBit(c+1652,"i_b_we", false,-1);
    tracep->declBus(c+1655,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1656,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1672,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1653,"o_b_stall", false,-1);
    tracep->declBit(c+1654,"o_b_ack", false,-1);
    tracep->declBit(c+1647,"o_b_err", false,-1);
    tracep->declBit(c+237,"o_cyc", false,-1);
    tracep->declBit(c+238,"o_stb", false,-1);
    tracep->declBit(c+239,"o_we", false,-1);
    tracep->declBus(c+240,"o_adr", false,-1, 24,0);
    tracep->declArray(c+241,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+257,"o_sel", false,-1, 63,0);
    tracep->declBit(c+259,"i_stall", false,-1);
    tracep->declBit(c+260,"i_ack", false,-1);
    tracep->declBit(c+1734,"i_err", false,-1);
    tracep->declBit(c+2402,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4581,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4582,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4671,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4628,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4576,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4627,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4671,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4584,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1726,"i_interrupt", false,-1);
    tracep->declBit(c+1585,"i_cpu_clken", false,-1);
    tracep->declBit(c+1623,"i_halt", false,-1);
    tracep->declBit(c+1625,"i_clear_cache", false,-1);
    tracep->declBus(c+1628,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1626,"i_dbg_we", false,-1);
    tracep->declBus(c+1629,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2403,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1632,"o_dbg_stall", false,-1);
    tracep->declBit(c+1631,"o_halted", false,-1);
    tracep->declBus(c+1729,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1630,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1611,"o_break", false,-1);
    tracep->declBit(c+1674,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1687,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1688,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1689,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1690,"o_wb_we", false,-1);
    tracep->declBus(c+1591,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1691,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1707,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1725,"i_wb_stall", false,-1);
    tracep->declBit(c+1727,"i_wb_ack", false,-1);
    tracep->declArray(c+1709,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1728,"i_wb_err", false,-1);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1644,"o_pf_stall", false,-1);
    tracep->declBit(c+1645,"o_i_count", false,-1);
    tracep->declBus(c+4589,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4517,"o_prof_stb", false,-1);
    tracep->declBus(c+4518,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4519,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4628,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4591,"cpu_clken", false,-1);
    tracep->declBit(c+4439,"cpu_clock", false,-1);
    tracep->declBit(c+4591,"clk_gate", false,-1);
    tracep->declBus(c+4589,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+2404,"pf_new_pc", false,-1);
    tracep->declBit(c+2405,"clear_icache", false,-1);
    tracep->declBit(c+49,"pf_ready", false,-1);
    tracep->declBus(c+2406,"pf_request_address", false,-1, 30,0);
    tracep->declBus(c+2407,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2408,"pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+2409,"pf_valid", false,-1);
    tracep->declBit(c+2410,"pf_illegal", false,-1);
    tracep->declBit(c+2411,"pf_cyc", false,-1);
    tracep->declBit(c+2412,"pf_stb", false,-1);
    tracep->declBit(c+2413,"pf_stall", false,-1);
    tracep->declBit(c+2414,"pf_ack", false,-1);
    tracep->declBit(c+2415,"pf_err", false,-1);
    tracep->declBus(c+2416,"pf_addr", false,-1, 24,0);
    tracep->declBit(c+4590,"pf_we", false,-1);
    tracep->declArray(c+4592,"pf_data", false,-1, 511,0);
    tracep->declBit(c+2417,"clear_dcache", false,-1);
    tracep->declBit(c+50,"mem_ce", false,-1);
    tracep->declBit(c+2418,"bus_lock", false,-1);
    tracep->declBus(c+2419,"mem_op", false,-1, 2,0);
    tracep->declBus(c+2420,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+2421,"mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+2422,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1691,"mem_data", false,-1, 511,0);
    tracep->declBus(c+2423,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+2424,"mem_busy", false,-1);
    tracep->declBit(c+2425,"mem_rdbusy", false,-1);
    tracep->declBit(c+2426,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+2427,"mem_valid", false,-1);
    tracep->declBit(c+2428,"mem_bus_err", false,-1);
    tracep->declBus(c+2429,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2430,"mem_result", false,-1, 31,0);
    tracep->declBit(c+2431,"mem_stb_lcl", false,-1);
    tracep->declBit(c+2432,"mem_stb_gbl", false,-1);
    tracep->declBit(c+2433,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+2434,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+2435,"mem_bus_addr", false,-1, 24,0);
    tracep->declBit(c+2436,"mem_we", false,-1);
    tracep->declBit(c+2437,"mem_stall", false,-1);
    tracep->declBit(c+2438,"mem_ack", false,-1);
    tracep->declBit(c+2439,"mem_err", false,-1);
    tracep->declQuad(c+2440,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+1632,"w_dbg_stall", false,-1);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4666,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4582,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4576,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4667,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4628,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4579,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4666,"CS", false,-1, 31,0);
    tracep->declBus(c+4576,"LS", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4579,"DP", false,-1, 31,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4630,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4631,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4632,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4633,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+2417,"i_clear", false,-1);
    tracep->declBit(c+50,"i_pipe_stb", false,-1);
    tracep->declBit(c+2418,"i_lock", false,-1);
    tracep->declBus(c+2419,"i_op", false,-1, 2,0);
    tracep->declBus(c+2420,"i_addr", false,-1, 31,0);
    tracep->declBus(c+2422,"i_data", false,-1, 31,0);
    tracep->declBus(c+2423,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+2424,"o_busy", false,-1);
    tracep->declBit(c+2425,"o_rdbusy", false,-1);
    tracep->declBit(c+2426,"o_pipe_stalled", false,-1);
    tracep->declBit(c+2427,"o_valid", false,-1);
    tracep->declBit(c+2428,"o_err", false,-1);
    tracep->declBus(c+2429,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+2430,"o_data", false,-1, 31,0);
    tracep->declBit(c+2434,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2433,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+2432,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+2431,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+2436,"o_wb_we", false,-1);
    tracep->declBus(c+2435,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1691,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+2440,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+2437,"i_wb_stall", false,-1);
    tracep->declBit(c+2438,"i_wb_ack", false,-1);
    tracep->declBit(c+2439,"i_wb_err", false,-1);
    tracep->declArray(c+1709,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4671,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2442,"ik", false,-1, 31,0);
    tracep->declBit(c+2443,"cyc", false,-1);
    tracep->declBit(c+2444,"stb", false,-1);
    tracep->declBit(c+2445,"last_ack", false,-1);
    tracep->declBit(c+2446,"end_of_line", false,-1);
    tracep->declBit(c+2447,"last_line_stb", false,-1);
    tracep->declBit(c+2448,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2449,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+2450,"npending", false,-1, 4,0);
    tracep->declBus(c+2451,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2452+i*1,"c_vtags", true,(i+0), 21,0);
    }
    tracep->declBit(c+2460,"set_vflag", false,-1);
    tracep->declBus(c+2461,"state", false,-1, 1,0);
    tracep->declBus(c+2462,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+2463,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+2479,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+2495,"lock_gbl", false,-1);
    tracep->declBit(c+2496,"lock_lcl", false,-1);
    tracep->declBit(c+2497,"c_wr", false,-1);
    tracep->declArray(c+2498,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+2514,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+2516,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+2517,"last_tag", false,-1, 21,0);
    tracep->declBit(c+2518,"last_tag_valid", false,-1);
    tracep->declBus(c+2519,"i_cline", false,-1, 2,0);
    tracep->declBus(c+2520,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+2521,"cache_miss_inow", false,-1);
    tracep->declBit(c+2522,"w_cachable", false,-1);
    tracep->declBit(c+2523,"raw_cachable_address", false,-1);
    tracep->declBit(c+2524,"r_cachable", false,-1);
    tracep->declBit(c+2525,"r_svalid", false,-1);
    tracep->declBit(c+2526,"r_dvalid", false,-1);
    tracep->declBit(c+2527,"r_rd", false,-1);
    tracep->declBit(c+2528,"r_cache_miss", false,-1);
    tracep->declBit(c+2529,"r_rd_pending", false,-1);
    tracep->declBus(c+2530,"r_addr", false,-1, 24,0);
    tracep->declBus(c+2531,"r_cline", false,-1, 2,0);
    tracep->declBus(c+2532,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+2533,"r_ctag", false,-1, 21,0);
    tracep->declBit(c+2534,"wr_cstb", false,-1);
    tracep->declBit(c+2535,"r_iv", false,-1);
    tracep->declBit(c+2536,"in_cache", false,-1);
    tracep->declBus(c+2537,"r_itag", false,-1, 21,0);
    tracep->declBus(c+2538,"req_data", false,-1, 12,0);
    tracep->declBit(c+2539,"gie", false,-1);
    tracep->declArray(c+2540,"pre_data", false,-1, 511,0);
    tracep->declArray(c+2556,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+2572,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+2573,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+2440,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+2575,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+2576,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+2592,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2608+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+2624,"wraddr", false,-1, 4,0);
    tracep->declBus(c+2625,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4746,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+2626,"i_addr", false,-1, 30,0);
    tracep->declBit(c+2523,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4590,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4666,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4582,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4576,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4625,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4634,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4666,"CW", false,-1, 31,0);
    tracep->declBus(c+4576,"LS", false,-1, 31,0);
    tracep->declBus(c+4625,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4628,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+2404,"i_new_pc", false,-1);
    tracep->declBit(c+2405,"i_clear_cache", false,-1);
    tracep->declBit(c+49,"i_ready", false,-1);
    tracep->declBus(c+2406,"i_pc", false,-1, 30,0);
    tracep->declBit(c+2409,"o_valid", false,-1);
    tracep->declBit(c+2410,"o_illegal", false,-1);
    tracep->declBus(c+2407,"o_insn", false,-1, 31,0);
    tracep->declBus(c+2408,"o_pc", false,-1, 30,0);
    tracep->declBit(c+2411,"o_wb_cyc", false,-1);
    tracep->declBit(c+2412,"o_wb_stb", false,-1);
    tracep->declBit(c+4590,"o_wb_we", false,-1);
    tracep->declBus(c+2416,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4592,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+2413,"i_wb_stall", false,-1);
    tracep->declBit(c+2414,"i_wb_ack", false,-1);
    tracep->declBit(c+2415,"i_wb_err", false,-1);
    tracep->declArray(c+1709,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4588,"INLSB", false,-1, 31,0);
    tracep->declBit(c+2627,"r_v", false,-1);
    tracep->declArray(c+2628,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2644+i*1,"cache_tags", true,(i+0), 18,0);
    }
    tracep->declBus(c+2652,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+2653,"r_v_from_pc", false,-1);
    tracep->declBit(c+2654,"r_v_from_last", false,-1);
    tracep->declBit(c+2655,"rvsrc", false,-1);
    tracep->declBit(c+2656,"w_v_from_pc", false,-1);
    tracep->declBit(c+2657,"w_v_from_last", false,-1);
    tracep->declBus(c+2658,"lastpc", false,-1, 30,0);
    tracep->declBus(c+2659,"wraddr", false,-1, 5,0);
    tracep->declBus(c+2660,"pc_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2661,"last_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2662,"tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2663,"pc_tag", false,-1, 24,3);
    tracep->declBus(c+2664,"lasttag", false,-1, 24,3);
    tracep->declBit(c+2665,"illegal_valid", false,-1);
    tracep->declBus(c+2666,"illegal_cache", false,-1, 24,3);
    tracep->declArray(c+2667,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2683,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+2408,"r_pc", false,-1, 30,0);
    tracep->declBit(c+2699,"isrc", false,-1);
    tracep->declBus(c+2700,"delay", false,-1, 1,0);
    tracep->declBit(c+2701,"svmask", false,-1);
    tracep->declBit(c+2702,"last_ack", false,-1);
    tracep->declBit(c+2703,"needload", false,-1);
    tracep->declBit(c+2704,"last_addr", false,-1);
    tracep->declBit(c+2705,"bus_abort", false,-1);
    tracep->declBus(c+2706,"saddr", false,-1, 2,0);
    tracep->declBit(c+51,"w_advance", false,-1);
    tracep->declBit(c+2707,"w_invalidate_result", false,-1);
    tracep->declBus(c+2708,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2709,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2710,"shifted", false,-1, 511,0);
    tracep->declBus(c+2726,"shift", false,-1, 3,0);
    tracep->declBit(c+4590,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+2434,"i_a_cyc_a", false,-1);
    tracep->declBit(c+2433,"i_a_cyc_b", false,-1);
    tracep->declBit(c+2432,"i_a_stb_a", false,-1);
    tracep->declBit(c+2431,"i_a_stb_b", false,-1);
    tracep->declBit(c+2436,"i_a_we", false,-1);
    tracep->declBus(c+2435,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1691,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+2440,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+2437,"o_a_stall", false,-1);
    tracep->declBit(c+2438,"o_a_ack", false,-1);
    tracep->declBit(c+2439,"o_a_err", false,-1);
    tracep->declBit(c+2411,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4590,"i_b_cyc_b", false,-1);
    tracep->declBit(c+2412,"i_b_stb_a", false,-1);
    tracep->declBit(c+4590,"i_b_stb_b", false,-1);
    tracep->declBit(c+4590,"i_b_we", false,-1);
    tracep->declBus(c+2416,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1691,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4608,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+2413,"o_b_stall", false,-1);
    tracep->declBit(c+2414,"o_b_ack", false,-1);
    tracep->declBit(c+2415,"o_b_err", false,-1);
    tracep->declBit(c+1674,"o_cyc_a", false,-1);
    tracep->declBit(c+1688,"o_cyc_b", false,-1);
    tracep->declBit(c+1687,"o_stb_a", false,-1);
    tracep->declBit(c+1689,"o_stb_b", false,-1);
    tracep->declBit(c+1690,"o_we", false,-1);
    tracep->declBus(c+1591,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1691,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1707,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1725,"i_stall", false,-1);
    tracep->declBit(c+1727,"i_ack", false,-1);
    tracep->declBit(c+1728,"i_err", false,-1);
    tracep->declBit(c+2727,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4747,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4581,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4576,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4627,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4747,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1726,"i_interrupt", false,-1);
    tracep->declBit(c+4591,"o_clken", false,-1);
    tracep->declBit(c+1623,"i_halt", false,-1);
    tracep->declBit(c+1625,"i_clear_cache", false,-1);
    tracep->declBus(c+1628,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1626,"i_dbg_we", false,-1);
    tracep->declBus(c+1629,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2403,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1632,"o_dbg_stall", false,-1);
    tracep->declBus(c+1729,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1630,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1611,"o_break", false,-1);
    tracep->declBit(c+2404,"o_pf_new_pc", false,-1);
    tracep->declBit(c+2405,"o_clear_icache", false,-1);
    tracep->declBit(c+49,"o_pf_ready", false,-1);
    tracep->declBus(c+2406,"o_pf_request_address", false,-1, 30,0);
    tracep->declBit(c+2409,"i_pf_valid", false,-1);
    tracep->declBit(c+2410,"i_pf_illegal", false,-1);
    tracep->declBus(c+2407,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2408,"i_pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+2417,"o_clear_dcache", false,-1);
    tracep->declBit(c+50,"o_mem_ce", false,-1);
    tracep->declBit(c+2418,"o_bus_lock", false,-1);
    tracep->declBus(c+2419,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+2420,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+2422,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+2421,"o_mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+2423,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+2424,"i_mem_busy", false,-1);
    tracep->declBit(c+2425,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+2426,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+2427,"i_mem_valid", false,-1);
    tracep->declBit(c+2428,"i_bus_err", false,-1);
    tracep->declBus(c+2429,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2430,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1644,"o_pf_stall", false,-1);
    tracep->declBit(c+1645,"o_i_count", false,-1);
    tracep->declBus(c+4589,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4517,"o_prof_stb", false,-1);
    tracep->declBus(c+4518,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4519,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4748,"RESET_BUS_ADDRESS", false,-1, 28,0);
    tracep->declBus(c+4749,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4622,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4635,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4636,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4706,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4711,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4672,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4574,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4649,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4671,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4670,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4575,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4669,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4577,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4586,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4666,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4667,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4579,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2728+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2760,"flags", false,-1, 3,0);
    tracep->declBus(c+2761,"iflags", false,-1, 3,0);
    tracep->declBus(c+2762,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2763,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2764,"break_en", false,-1);
    tracep->declBit(c+2765,"user_step", false,-1);
    tracep->declBit(c+2766,"sleep", false,-1);
    tracep->declBit(c+2767,"r_halted", false,-1);
    tracep->declBit(c+2768,"break_pending", false,-1);
    tracep->declBit(c+2769,"trap", false,-1);
    tracep->declBit(c+2770,"gie", false,-1);
    tracep->declBit(c+2771,"ubreak", false,-1);
    tracep->declBit(c+2772,"pending_interrupt", false,-1);
    tracep->declBit(c+2773,"stepped", false,-1);
    tracep->declBit(c+2774,"step", false,-1);
    tracep->declBit(c+2775,"ill_err_u", false,-1);
    tracep->declBit(c+2776,"ill_err_i", false,-1);
    tracep->declBit(c+2777,"ibus_err_flag", false,-1);
    tracep->declBit(c+2778,"ubus_err_flag", false,-1);
    tracep->declBit(c+2779,"idiv_err_flag", false,-1);
    tracep->declBit(c+2780,"udiv_err_flag", false,-1);
    tracep->declBit(c+4590,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4590,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2781,"ihalt_phase", false,-1);
    tracep->declBit(c+2782,"uhalt_phase", false,-1);
    tracep->declBit(c+2783,"master_ce", false,-1);
    tracep->declBit(c+52,"master_stall", false,-1);
    tracep->declBus(c+2784,"pf_pc", false,-1, 30,0);
    tracep->declBit(c+2785,"new_pc", false,-1);
    tracep->declBit(c+2785,"clear_pipeline", false,-1);
    tracep->declBit(c+53,"dcd_stalled", false,-1);
    tracep->declBit(c+2770,"pf_gie", false,-1);
    tracep->declBus(c+2786,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+54,"dcd_ce", false,-1);
    tracep->declBit(c+2787,"dcd_phase", false,-1);
    tracep->declBus(c+2788,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2789,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2790,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2791,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2792,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2793,"dcd_Acc", false,-1);
    tracep->declBit(c+2794,"dcd_Bcc", false,-1);
    tracep->declBit(c+2795,"dcd_Apc", false,-1);
    tracep->declBit(c+2796,"dcd_Bpc", false,-1);
    tracep->declBit(c+2797,"dcd_Rcc", false,-1);
    tracep->declBit(c+2798,"dcd_Rpc", false,-1);
    tracep->declBus(c+2799,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2800,"dcd_wR", false,-1);
    tracep->declBit(c+2801,"dcd_rA", false,-1);
    tracep->declBit(c+2802,"dcd_rB", false,-1);
    tracep->declBit(c+2803,"dcd_ALU", false,-1);
    tracep->declBit(c+2804,"dcd_M", false,-1);
    tracep->declBit(c+2805,"dcd_DIV", false,-1);
    tracep->declBit(c+2806,"dcd_FP", false,-1);
    tracep->declBit(c+2807,"dcd_wF", false,-1);
    tracep->declBit(c+2770,"dcd_gie", false,-1);
    tracep->declBit(c+2808,"dcd_break", false,-1);
    tracep->declBit(c+2809,"dcd_lock", false,-1);
    tracep->declBit(c+2810,"dcd_pipe", false,-1);
    tracep->declBit(c+2811,"dcd_ljmp", false,-1);
    tracep->declBit(c+2812,"dcd_valid", false,-1);
    tracep->declBus(c+4543,"dcd_pc", false,-1, 30,0);
    tracep->declBus(c+2813,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2814,"dcd_zI", false,-1);
    tracep->declBit(c+55,"dcd_A_stall", false,-1);
    tracep->declBit(c+56,"dcd_B_stall", false,-1);
    tracep->declBit(c+4544,"dcd_F_stall", false,-1);
    tracep->declBit(c+2815,"dcd_illegal", false,-1);
    tracep->declBit(c+2816,"dcd_early_branch", false,-1);
    tracep->declBit(c+2817,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2818,"dcd_branch_pc", false,-1, 30,0);
    tracep->declBit(c+4545,"dcd_sim", false,-1);
    tracep->declBus(c+4546,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2819,"prelock_stall", false,-1);
    tracep->declBit(c+2820,"last_lock_insn", false,-1);
    tracep->declBit(c+2821,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2822,"pending_sreg_write", false,-1);
    tracep->declBit(c+4547,"op_valid", false,-1);
    tracep->declBit(c+2823,"op_valid_mem", false,-1);
    tracep->declBit(c+2824,"op_valid_alu", false,-1);
    tracep->declBit(c+2825,"op_valid_div", false,-1);
    tracep->declBit(c+2826,"op_valid_fpu", false,-1);
    tracep->declBit(c+57,"op_stall", false,-1);
    tracep->declBus(c+2827,"op_opn", false,-1, 3,0);
    tracep->declBus(c+2423,"op_R", false,-1, 4,0);
    tracep->declBit(c+2828,"op_Rcc", false,-1);
    tracep->declBus(c+2829,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2830,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2831,"op_rA", false,-1);
    tracep->declBit(c+2832,"op_rB", false,-1);
    tracep->declBus(c+2833,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2834,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2835,"op_pc", false,-1, 30,0);
    tracep->declBus(c+2836,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2837,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2422,"op_Av", false,-1, 31,0);
    tracep->declBus(c+2420,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+58,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+59,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2838,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2839,"op_wR", false,-1);
    tracep->declBit(c+2840,"op_wF", false,-1);
    tracep->declBit(c+2770,"op_gie", false,-1);
    tracep->declBus(c+2841,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2842,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2843,"op_F", false,-1, 7,0);
    tracep->declBit(c+60,"op_ce", false,-1);
    tracep->declBit(c+2844,"op_phase", false,-1);
    tracep->declBit(c+2845,"op_pipe", false,-1);
    tracep->declBit(c+2846,"r_op_break", false,-1);
    tracep->declBit(c+2847,"w_op_valid", false,-1);
    tracep->declBit(c+4590,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4750,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2848,"op_illegal", false,-1);
    tracep->declBit(c+2846,"op_break", false,-1);
    tracep->declBit(c+2849,"op_lock", false,-1);
    tracep->declBit(c+4548,"op_sim", false,-1);
    tracep->declBus(c+4549,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4550,"alu_sim", false,-1);
    tracep->declBus(c+4551,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2850,"alu_pc", false,-1, 30,0);
    tracep->declBus(c+2851,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2852,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2853,"mem_pc_valid", false,-1);
    tracep->declBit(c+2854,"alu_pc_valid", false,-1);
    tracep->declBit(c+2855,"alu_phase", false,-1);
    tracep->declBit(c+4552,"alu_ce", false,-1);
    tracep->declBit(c+61,"alu_stall", false,-1);
    tracep->declBus(c+2856,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2857,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2858,"alu_valid", false,-1);
    tracep->declBit(c+2859,"alu_busy", false,-1);
    tracep->declBit(c+2860,"set_cond", false,-1);
    tracep->declBit(c+2861,"alu_wR", false,-1);
    tracep->declBit(c+2862,"alu_wF", false,-1);
    tracep->declBit(c+2770,"alu_gie", false,-1);
    tracep->declBit(c+2863,"alu_illegal", false,-1);
    tracep->declBit(c+62,"mem_ce", false,-1);
    tracep->declBit(c+63,"mem_stalled", false,-1);
    tracep->declBit(c+64,"div_ce", false,-1);
    tracep->declBit(c+2864,"div_error", false,-1);
    tracep->declBit(c+2865,"div_busy", false,-1);
    tracep->declBit(c+2866,"div_valid", false,-1);
    tracep->declBus(c+2867,"div_result", false,-1, 31,0);
    tracep->declBus(c+2868,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4590,"fpu_ce", false,-1);
    tracep->declBit(c+4590,"fpu_error", false,-1);
    tracep->declBit(c+4590,"fpu_busy", false,-1);
    tracep->declBit(c+4590,"fpu_valid", false,-1);
    tracep->declBus(c+4589,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4635,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+65,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2869,"dbgv", false,-1);
    tracep->declBit(c+2870,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2871,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2872,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2873,"r_dbg_stall", false,-1);
    tracep->declBit(c+2874,"wr_write_pc", false,-1);
    tracep->declBit(c+2875,"wr_write_cc", false,-1);
    tracep->declBit(c+2876,"wr_write_scc", false,-1);
    tracep->declBit(c+2877,"wr_write_ucc", false,-1);
    tracep->declBit(c+2878,"wr_reg_ce", false,-1);
    tracep->declBit(c+2879,"wr_flags_ce", false,-1);
    tracep->declBus(c+2880,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2881,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2882,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2883,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2884,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2885,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2886,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2887,"ipc", false,-1, 30,0);
    tracep->declBus(c+2888,"upc", false,-1, 30,0);
    tracep->declBit(c+2889,"last_write_to_cc", false,-1);
    tracep->declBit(c+2890,"cc_write_hold", false,-1);
    tracep->declBit(c+2405,"r_clear_icache", false,-1);
    tracep->declBit(c+66,"pfpcset", false,-1);
    tracep->declBus(c+67,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4591,"w_clken", false,-1);
    tracep->declBus(c+2891,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2892,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2893,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+68,"avsrc", false,-1, 2,0);
    tracep->declBus(c+69,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2894,"bisrc", false,-1, 1,0);
    tracep->declBit(c+70,"cpu_sim", false,-1);
    tracep->declBus(c+4627,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2895,"r_alu_sim", false,-1);
    tracep->declBus(c+2896,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2897,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2819,"r_prelock_stall", false,-1);
    tracep->declBus(c+2898,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+2421,"r_lock_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+2417,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2779,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2780,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4667,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+2899,"i_reset", false,-1);
    tracep->declBit(c+64,"i_wr", false,-1);
    tracep->declBit(c+2900,"i_signed", false,-1);
    tracep->declBus(c+2422,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+2420,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2865,"o_busy", false,-1);
    tracep->declBit(c+2866,"o_valid", false,-1);
    tracep->declBit(c+2864,"o_err", false,-1);
    tracep->declBus(c+2867,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2868,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2901,"r_busy", false,-1);
    tracep->declBus(c+2902,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2903,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2905,"diff", false,-1, 32,0);
    tracep->declBit(c+2907,"r_sign", false,-1);
    tracep->declBit(c+2908,"pre_sign", false,-1);
    tracep->declBit(c+2909,"r_z", false,-1);
    tracep->declBit(c+2910,"r_c", false,-1);
    tracep->declBit(c+2911,"last_bit", false,-1);
    tracep->declBus(c+2912,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2913,"zero_divisor", false,-1);
    tracep->declBit(c+2914,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2827,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2850,"r_alu_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2855,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4590,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4590,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2781,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2849,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2845,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2821,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2822,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2839,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2768,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2915,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2773,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2916,"prof_stb", false,-1);
    tracep->declBus(c+2917,"prof_addr", false,-1, 30,0);
    tracep->declBus(c+2918,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2782,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2844,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+2423,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2829,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2830,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2831,"r_op_rA", false,-1);
    tracep->declBit(c+2832,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2919,"r_op_sim", false,-1);
    tracep->declBus(c+2920,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2921,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1729,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2863,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2770,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2835,"r_op_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2769,"r_trap", false,-1);
    tracep->declBit(c+2771,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2778,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2775,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2888,"r_upc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4590,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4576,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+2899,"i_reset", false,-1);
    tracep->declBit(c+4552,"i_stb", false,-1);
    tracep->declBus(c+2827,"i_op", false,-1, 3,0);
    tracep->declBus(c+2422,"i_a", false,-1, 31,0);
    tracep->declBus(c+2420,"i_b", false,-1, 31,0);
    tracep->declBus(c+2856,"o_c", false,-1, 31,0);
    tracep->declBus(c+2857,"o_f", false,-1, 3,0);
    tracep->declBit(c+2858,"o_valid", false,-1);
    tracep->declBit(c+2859,"o_busy", false,-1);
    tracep->declBus(c+2922,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2923,"z", false,-1);
    tracep->declBit(c+2924,"n", false,-1);
    tracep->declBit(c+2925,"v", false,-1);
    tracep->declBit(c+2926,"vx", false,-1);
    tracep->declBit(c+2927,"c", false,-1);
    tracep->declBit(c+2928,"pre_sign", false,-1);
    tracep->declBit(c+2929,"set_ovfl", false,-1);
    tracep->declBit(c+2930,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2931,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2933,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2935,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2937,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2939,"mpyhi", false,-1);
    tracep->declBit(c+2940,"mpybusy", false,-1);
    tracep->declBit(c+2941,"mpydone", false,-1);
    tracep->declBit(c+71,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2859,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2942,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2944,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4576,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+2899,"i_reset", false,-1);
    tracep->declBit(c+71,"i_stb", false,-1);
    tracep->declBus(c+2946,"i_op", false,-1, 1,0);
    tracep->declBus(c+2422,"i_a", false,-1, 31,0);
    tracep->declBus(c+2420,"i_b", false,-1, 31,0);
    tracep->declBit(c+2941,"o_valid", false,-1);
    tracep->declBit(c+2940,"o_busy", false,-1);
    tracep->declQuad(c+2937,"o_result", false,-1, 63,0);
    tracep->declBit(c+2939,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2947,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2949,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2951,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2952,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2953,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2954,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2939,"r_hi", false,-1);
    tracep->declQuad(c+2955,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2957,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2959,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2961,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4747,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4747,"AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+2963,"i_reset", false,-1);
    tracep->declBit(c+54,"i_ce", false,-1);
    tracep->declBit(c+53,"i_stalled", false,-1);
    tracep->declBus(c+2407,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2770,"i_gie", false,-1);
    tracep->declBus(c+2408,"i_pc", false,-1, 30,0);
    tracep->declBit(c+2409,"i_pf_valid", false,-1);
    tracep->declBit(c+2410,"i_illegal", false,-1);
    tracep->declBit(c+2812,"o_valid", false,-1);
    tracep->declBit(c+2787,"o_phase", false,-1);
    tracep->declBit(c+2815,"o_illegal", false,-1);
    tracep->declBus(c+4543,"o_pc", false,-1, 30,0);
    tracep->declBus(c+2891,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2892,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2893,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2791,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2792,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2813,"o_I", false,-1, 31,0);
    tracep->declBit(c+2814,"o_zI", false,-1);
    tracep->declBus(c+2799,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2807,"o_wF", false,-1);
    tracep->declBus(c+2786,"o_op", false,-1, 3,0);
    tracep->declBit(c+2803,"o_ALU", false,-1);
    tracep->declBit(c+2804,"o_M", false,-1);
    tracep->declBit(c+2805,"o_DV", false,-1);
    tracep->declBit(c+2806,"o_FP", false,-1);
    tracep->declBit(c+2808,"o_break", false,-1);
    tracep->declBit(c+2809,"o_lock", false,-1);
    tracep->declBit(c+2800,"o_wR", false,-1);
    tracep->declBit(c+2801,"o_rA", false,-1);
    tracep->declBit(c+2802,"o_rB", false,-1);
    tracep->declBit(c+2816,"o_early_branch", false,-1);
    tracep->declBit(c+2817,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2818,"o_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2811,"o_ljmp", false,-1);
    tracep->declBit(c+2810,"o_pipe", false,-1);
    tracep->declBit(c+4545,"o_sim", false,-1);
    tracep->declBus(c+4546,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4711,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4749,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4622,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4703,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4644,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4646,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2964,"w_op", false,-1, 4,0);
    tracep->declBit(c+2965,"w_ldi", false,-1);
    tracep->declBit(c+2966,"w_mov", false,-1);
    tracep->declBit(c+2967,"w_cmptst", false,-1);
    tracep->declBit(c+2968,"w_ldilo", false,-1);
    tracep->declBit(c+2969,"w_ALU", false,-1);
    tracep->declBit(c+2970,"w_brev", false,-1);
    tracep->declBit(c+2971,"w_noop", false,-1);
    tracep->declBit(c+2972,"w_lock", false,-1);
    tracep->declBit(c+2973,"w_sim", false,-1);
    tracep->declBit(c+2974,"w_break", false,-1);
    tracep->declBit(c+2975,"w_special", false,-1);
    tracep->declBit(c+2976,"w_add", false,-1);
    tracep->declBit(c+2977,"w_mpy", false,-1);
    tracep->declBus(c+2791,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2792,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2791,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2978,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2979,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2978,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2979,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2980,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2981,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2982,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2983,"w_wF", false,-1);
    tracep->declBit(c+2984,"w_mem", false,-1);
    tracep->declBit(c+2985,"w_sto", false,-1);
    tracep->declBit(c+2986,"w_div", false,-1);
    tracep->declBit(c+2987,"w_fpu", false,-1);
    tracep->declBit(c+2988,"w_wR", false,-1);
    tracep->declBit(c+2989,"w_rA", false,-1);
    tracep->declBit(c+2990,"w_rB", false,-1);
    tracep->declBit(c+2991,"w_wR_n", false,-1);
    tracep->declBit(c+2992,"w_ljmp", false,-1);
    tracep->declBit(c+2811,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2993,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2994,"iword", false,-1, 31,0);
    tracep->declBit(c+2995,"pf_valid", false,-1);
    tracep->declBus(c+2996,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2997,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2998,"r_I", false,-1, 22,0);
    tracep->declBus(c+2999,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+3000,"w_I", false,-1, 22,0);
    tracep->declBit(c+3001,"w_Iz", false,-1);
    tracep->declBus(c+3002,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2812,"r_valid", false,-1);
    tracep->declBit(c+3003,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4590,"illegal_shift", false,-1);
    tracep->declBit(c+4590,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+3004,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+3005,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2787,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2816,"r_early_branch", false,-1);
    tracep->declBit(c+2817,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2811,"r_ljmp", false,-1);
    tracep->declBus(c+2818,"r_branch_pc", false,-1, 30,0);
    tracep->declBit(c+3006,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2810,"r_pipe", false,-1);
    tracep->declBit(c+3003,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_ce", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+3007,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1681,"o_wb_ack", false,-1);
    tracep->declBus(c+1685,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1573,"o_int", false,-1);
    tracep->declBus(c+1685,"r_counter", false,-1, 31,0);
    tracep->declBit(c+3008,"int_set", false,-1);
    tracep->declBit(c+3009,"new_set", false,-1);
    tracep->declBit(c+3010,"int_now", false,-1);
    tracep->declBus(c+3011,"int_when", false,-1, 31,0);
    tracep->declBus(c+3012,"new_when", false,-1, 31,0);
    tracep->declBus(c+3013,"till_wb", false,-1, 31,0);
    tracep->declBus(c+3014,"till_when", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4703,"VW", false,-1, 31,0);
    tracep->declBus(c+4584,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_ce", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+3015,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1678,"o_wb_ack", false,-1);
    tracep->declBus(c+1682,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1570,"o_int", false,-1);
    tracep->declBit(c+3016,"r_running", false,-1);
    tracep->declBit(c+3017,"r_zero", false,-1);
    tracep->declBus(c+3018,"r_value", false,-1, 30,0);
    tracep->declBit(c+3019,"wb_write", false,-1);
    tracep->declBit(c+3020,"auto_reload", false,-1);
    tracep->declBus(c+3021,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3020,"r_auto_reload", false,-1);
    tracep->declBus(c+3021,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4703,"VW", false,-1, 31,0);
    tracep->declBus(c+4584,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_ce", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+3022,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1679,"o_wb_ack", false,-1);
    tracep->declBus(c+1683,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1571,"o_int", false,-1);
    tracep->declBit(c+3023,"r_running", false,-1);
    tracep->declBit(c+3024,"r_zero", false,-1);
    tracep->declBus(c+3025,"r_value", false,-1, 30,0);
    tracep->declBit(c+3026,"wb_write", false,-1);
    tracep->declBit(c+3027,"auto_reload", false,-1);
    tracep->declBus(c+3028,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3027,"r_auto_reload", false,-1);
    tracep->declBus(c+3028,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4703,"VW", false,-1, 31,0);
    tracep->declBus(c+4584,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_ce", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+3029,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1680,"o_wb_ack", false,-1);
    tracep->declBus(c+1684,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1572,"o_int", false,-1);
    tracep->declBit(c+3030,"r_running", false,-1);
    tracep->declBit(c+3031,"r_zero", false,-1);
    tracep->declBus(c+3032,"r_value", false,-1, 30,0);
    tracep->declBit(c+3033,"wb_write", false,-1);
    tracep->declBit(c+3034,"auto_reload", false,-1);
    tracep->declBus(c+3035,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3034,"r_auto_reload", false,-1);
    tracep->declBus(c+3035,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4574,"BW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+3036,"i_reset", false,-1);
    tracep->declBus(c+4751,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+1643,"o_int", false,-1);
    tracep->declBus(c+3037,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4628,"BW", false,-1, 31,0);
    tracep->declBus(c+4703,"VW", false,-1, 31,0);
    tracep->declBus(c+4627,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+1622,"i_reset", false,-1);
    tracep->declBit(c+1762,"i_ce", false,-1);
    tracep->declBit(c+1586,"i_wb_cyc", false,-1);
    tracep->declBit(c+3038,"i_wb_stb", false,-1);
    tracep->declBit(c+1588,"i_wb_we", false,-1);
    tracep->declBus(c+1590,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4622,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+1635,"o_wb_ack", false,-1);
    tracep->declBus(c+1637,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1636,"o_int", false,-1);
    tracep->declBit(c+3039,"r_running", false,-1);
    tracep->declBit(c+3040,"r_zero", false,-1);
    tracep->declBus(c+3041,"r_value", false,-1, 30,0);
    tracep->declBit(c+3042,"wb_write", false,-1);
    tracep->declBit(c+4590,"auto_reload", false,-1);
    tracep->declBus(c+4704,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4752,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4752,"TB", false,-1, 4,0);
    tracep->declBus(c+4719,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+169,"i_wr", false,-1);
    tracep->declBus(c+167,"i_data", false,-1, 7,0);
    tracep->declBit(c+4522,"o_uart_tx", false,-1);
    tracep->declBit(c+170,"o_busy", false,-1);
    tracep->declBus(c+4635,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4706,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4622,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+3043,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+3044,"state", false,-1, 3,0);
    tracep->declBus(c+3045,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+170,"r_busy", false,-1);
    tracep->declBit(c+3046,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+517,"i_wb_cyc", false,-1);
    tracep->declBit(c+518,"i_wb_stb", false,-1);
    tracep->declBit(c+519,"i_wb_we", false,-1);
    tracep->declBus(c+3047,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+521,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+522,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+523,"o_wb_ack", false,-1);
    tracep->declBus(c+524,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4498,"i_temp_sda", false,-1);
    tracep->declBit(c+4499,"i_temp_scl", false,-1);
    tracep->declBit(c+4500,"o_temp_sda", false,-1);
    tracep->declBit(c+4501,"o_temp_scl", false,-1);
    tracep->declBit(c+4502,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4503,"o_sys_pwm", false,-1);
    tracep->declBit(c+4504,"i_fan_tach", false,-1);
    tracep->declBus(c+4532,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4753,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4754,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4755,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4756,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4649,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+3048,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+3049,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+3050,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+3051,"ck_tach", false,-1);
    tracep->declBit(c+3052,"last_tach", false,-1);
    tracep->declBus(c+3053,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+3054,"tach_reset", false,-1);
    tracep->declBus(c+3055,"tach_count", false,-1, 26,0);
    tracep->declBus(c+3056,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+3057,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4590,"i2c_wb_stall", false,-1);
    tracep->declBit(c+3058,"i2c_wb_ack", false,-1);
    tracep->declBus(c+3059,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+3060,"ign_mem_cyc", false,-1);
    tracep->declBit(c+3061,"mem_stb", false,-1);
    tracep->declBit(c+4590,"ign_mem_we", false,-1);
    tracep->declBit(c+4584,"ign_mem_sel", false,-1);
    tracep->declBus(c+3062,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4626,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+3063,"mem_data", false,-1, 7,0);
    tracep->declBit(c+3064,"mem_ack", false,-1);
    tracep->declBit(c+3065,"i2cd_valid", false,-1);
    tracep->declBit(c+3066,"i2cd_last", false,-1);
    tracep->declBit(c+4590,"ign_i2cd_id", false,-1);
    tracep->declBus(c+3067,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+3068,"pp_ms", false,-1);
    tracep->declBus(c+3069,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+3070,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+3071,"temp_data", false,-1, 31,0);
    tracep->declBit(c+3072,"pre_ack", false,-1);
    tracep->declBus(c+3073,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4667,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4589,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4627,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4667,"AW", false,-1, 31,0);
    tracep->declBus(c+4577,"DW", false,-1, 31,0);
    tracep->declBus(c+4577,"RW", false,-1, 31,0);
    tracep->declBus(c+4667,"BAW", false,-1, 31,0);
    tracep->declBus(c+4694,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4627,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4589,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4757,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+517,"i_wb_cyc", false,-1);
    tracep->declBit(c+3074,"i_wb_stb", false,-1);
    tracep->declBit(c+519,"i_wb_we", false,-1);
    tracep->declBus(c+3075,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+521,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+522,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+3058,"o_wb_ack", false,-1);
    tracep->declBus(c+3059,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+3060,"o_pf_cyc", false,-1);
    tracep->declBit(c+3061,"o_pf_stb", false,-1);
    tracep->declBit(c+4590,"o_pf_we", false,-1);
    tracep->declBus(c+3062,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4626,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4584,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4590,"i_pf_stall", false,-1);
    tracep->declBit(c+3064,"i_pf_ack", false,-1);
    tracep->declBit(c+4590,"i_pf_err", false,-1);
    tracep->declBus(c+3063,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4498,"i_i2c_sda", false,-1);
    tracep->declBit(c+4499,"i_i2c_scl", false,-1);
    tracep->declBit(c+4500,"o_i2c_sda", false,-1);
    tracep->declBit(c+4501,"o_i2c_scl", false,-1);
    tracep->declBit(c+3065,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4591,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+3067,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+3066,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4590,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+3068,"i_sync_signal", false,-1);
    tracep->declBus(c+4532,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4630,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4631,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4632,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4633,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4587,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4624,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4647,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4645,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4669,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4670,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4635,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4637,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4638,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4639,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4640,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4629,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4641,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4706,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4707,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4708,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4709,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4710,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4711,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+3076,"cpu_reset", false,-1);
    tracep->declBit(c+4590,"cpu_clear_cache", false,-1);
    tracep->declBit(c+3077,"cpu_new_pc", false,-1);
    tracep->declBus(c+3078,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+3079,"pf_valid", false,-1);
    tracep->declBit(c+3080,"pf_ready", false,-1);
    tracep->declBus(c+3081,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+3082,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+3083,"pf_illegal", false,-1);
    tracep->declBit(c+3084,"half_valid", false,-1);
    tracep->declBit(c+3085,"imm_cycle", false,-1);
    tracep->declBit(c+3086,"next_valid", false,-1);
    tracep->declBus(c+3087,"next_insn", false,-1, 7,0);
    tracep->declBit(c+3088,"insn_ready", false,-1);
    tracep->declBit(c+3089,"half_ready", false,-1);
    tracep->declBit(c+3090,"i2c_abort", false,-1);
    tracep->declBit(c+3091,"insn_valid", false,-1);
    tracep->declBus(c+3092,"insn", false,-1, 11,0);
    tracep->declBus(c+3093,"half_insn", false,-1, 3,0);
    tracep->declBit(c+3094,"i2c_ckedge", false,-1);
    tracep->declBit(c+3095,"i2c_stretch", false,-1);
    tracep->declBus(c+3096,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+3097,"ckcount", false,-1, 11,0);
    tracep->declBus(c+3098,"abort_address", false,-1, 4,0);
    tracep->declBus(c+3099,"jump_target", false,-1, 4,0);
    tracep->declBit(c+3100,"r_wait", false,-1);
    tracep->declBit(c+3101,"soft_halt_request", false,-1);
    tracep->declBit(c+3076,"r_halted", false,-1);
    tracep->declBit(c+3102,"r_err", false,-1);
    tracep->declBit(c+3103,"r_aborted", false,-1);
    tracep->declBit(c+3104,"r_manual", false,-1);
    tracep->declBit(c+3105,"r_sda", false,-1);
    tracep->declBit(c+3106,"r_scl", false,-1);
    tracep->declBit(c+3107,"w_stopped", false,-1);
    tracep->declBit(c+3108,"w_sda", false,-1);
    tracep->declBit(c+3109,"w_scl", false,-1);
    tracep->declBit(c+3110,"bus_read", false,-1);
    tracep->declBit(c+3111,"bus_write", false,-1);
    tracep->declBit(c+3112,"bus_override", false,-1);
    tracep->declBit(c+3113,"bus_manual", false,-1);
    tracep->declBit(c+3114,"ovw_ready", false,-1);
    tracep->declBit(c+3115,"bus_jump", false,-1);
    tracep->declBus(c+3075,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+3075,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+521,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+522,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+3059,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+3116,"s_tvalid", false,-1);
    tracep->declBit(c+3089,"s_tready", false,-1);
    tracep->declBus(c+3117,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4553,"w_control", false,-1, 31,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+3104,"manual", false,-1);
    tracep->declBit(c+3106,"scl", false,-1);
    tracep->declBit(c+3105,"sda", false,-1);
    tracep->declBit(c+3118,"o_scl", false,-1);
    tracep->declBit(c+3119,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4589,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+72,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+3116,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+3088,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+3120,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+3065,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4591,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+3067,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+3066,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+3094,"i_ckedge", false,-1);
    tracep->declBit(c+3095,"o_stretch", false,-1);
    tracep->declBit(c+4499,"i_scl", false,-1);
    tracep->declBit(c+4498,"i_sda", false,-1);
    tracep->declBit(c+3109,"o_scl", false,-1);
    tracep->declBit(c+3108,"o_sda", false,-1);
    tracep->declBit(c+3090,"o_abort", false,-1);
    tracep->declBus(c+4635,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4636,"START", false,-1, 3,0);
    tracep->declBus(c+4637,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4638,"STOP", false,-1, 3,0);
    tracep->declBus(c+4639,"DATA", false,-1, 3,0);
    tracep->declBus(c+4640,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4629,"ACK", false,-1, 3,0);
    tracep->declBus(c+4641,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4706,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4707,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4708,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4709,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4710,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4627,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4584,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4673,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4679,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4674,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4676,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4712,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4713,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4714,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4715,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4627,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+3121,"last_byte", false,-1);
    tracep->declBit(c+3122,"dir", false,-1);
    tracep->declBit(c+3123,"will_ack", false,-1);
    tracep->declBus(c+3124,"state", false,-1, 3,0);
    tracep->declBus(c+3125,"nbits", false,-1, 2,0);
    tracep->declBus(c+3126,"sreg", false,-1, 7,0);
    tracep->declBit(c+3127,"q_scl", false,-1);
    tracep->declBit(c+3128,"q_sda", false,-1);
    tracep->declBit(c+3129,"ck_scl", false,-1);
    tracep->declBit(c+3130,"ck_sda", false,-1);
    tracep->declBit(c+3131,"lst_scl", false,-1);
    tracep->declBit(c+3132,"lst_sda", false,-1);
    tracep->declBit(c+3133,"stop_bit", false,-1);
    tracep->declBit(c+3134,"channel_busy", false,-1);
    tracep->declBit(c+4590,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4667,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4577,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4667,"AW", false,-1, 31,0);
    tracep->declBus(c+4577,"DW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+73,"i_reset", false,-1);
    tracep->declBit(c+3077,"i_new_pc", false,-1);
    tracep->declBit(c+4590,"i_clear_cache", false,-1);
    tracep->declBit(c+3080,"i_ready", false,-1);
    tracep->declBus(c+3078,"i_pc", false,-1, 4,0);
    tracep->declBit(c+3079,"o_valid", false,-1);
    tracep->declBit(c+3083,"o_illegal", false,-1);
    tracep->declBus(c+3081,"o_insn", false,-1, 7,0);
    tracep->declBus(c+3082,"o_pc", false,-1, 4,0);
    tracep->declBit(c+3060,"o_wb_cyc", false,-1);
    tracep->declBit(c+3061,"o_wb_stb", false,-1);
    tracep->declBit(c+4590,"o_wb_we", false,-1);
    tracep->declBus(c+3062,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4626,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4590,"i_wb_stall", false,-1);
    tracep->declBit(c+3064,"i_wb_ack", false,-1);
    tracep->declBit(c+4590,"i_wb_err", false,-1);
    tracep->declBus(c+3063,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+3135,"last_stb", false,-1);
    tracep->declBit(c+3136,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+3137,"cache_word", false,-1, 7,0);
    tracep->declBit(c+3138,"cache_valid", false,-1);
    tracep->declBus(c+3139,"inflight", false,-1, 1,0);
    tracep->declBit(c+3140,"cache_illegal", false,-1);
    tracep->declBit(c+4590,"r_valid", false,-1);
    tracep->declBus(c+4626,"r_insn", false,-1, 7,0);
    tracep->declBus(c+3063,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declBus(c+4577,"SW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+501,"i_wb_cyc", false,-1);
    tracep->declBit(c+502,"i_wb_stb", false,-1);
    tracep->declBit(c+503,"i_wb_we", false,-1);
    tracep->declBus(c+3141,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+505,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+506,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4590,"o_wb_stall", false,-1);
    tracep->declBit(c+507,"o_wb_ack", false,-1);
    tracep->declBus(c+508,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+3142,"S_VALID", false,-1);
    tracep->declBit(c+150,"S_READY", false,-1);
    tracep->declBus(c+154,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+153,"S_LAST", false,-1);
    tracep->declBit(c+175,"o_dma_cyc", false,-1);
    tracep->declBit(c+176,"o_dma_stb", false,-1);
    tracep->declBit(c+4591,"o_dma_we", false,-1);
    tracep->declBus(c+177,"o_dma_addr", false,-1, 24,0);
    tracep->declArray(c+178,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"i_dma_stall", false,-1);
    tracep->declBit(c+197,"i_dma_ack", false,-1);
    tracep->declArray(c+199,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+198,"i_dma_err", false,-1);
    tracep->declBus(c+4589,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4666,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3143,"r_baseaddr", false,-1, 30,0);
    tracep->declBus(c+3144,"r_memlen", false,-1, 30,0);
    tracep->declBus(c+3145,"subaddr", false,-1, 5,0);
    tracep->declBus(c+3146,"current_addr", false,-1, 30,0);
    tracep->declBus(c+3147,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+3148,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+3149,"wb_last", false,-1);
    tracep->declBit(c+3150,"bus_err", false,-1);
    tracep->declBit(c+3151,"r_reset", false,-1);
    tracep->declBit(c+3152,"r_overflow", false,-1);
    tracep->declBit(c+3153,"skd_valid", false,-1);
    tracep->declBit(c+3154,"skd_ready", false,-1);
    tracep->declBit(c+3155,"skd_last", false,-1);
    tracep->declBus(c+3156,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4669,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+3142,"i_valid", false,-1);
    tracep->declBit(c+150,"o_ready", false,-1);
    tracep->declBus(c+3157,"i_data", false,-1, 8,0);
    tracep->declBit(c+3153,"o_valid", false,-1);
    tracep->declBit(c+3154,"i_ready", false,-1);
    tracep->declBus(c+3158,"o_data", false,-1, 8,0);
    tracep->declBus(c+3159,"w_data", false,-1, 8,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3160,"r_valid", false,-1);
    tracep->declBus(c+3159,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+3153,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4575,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4628,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4579,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4577,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+319,"i_wcyc", false,-1);
    tracep->declBit(c+320,"i_wstb", false,-1);
    tracep->declBit(c+321,"i_wwe", false,-1);
    tracep->declBus(c+3161,"i_waddr", false,-1, 3,0);
    tracep->declArray(c+323,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+339,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+341,"o_wstall", false,-1);
    tracep->declBit(c+342,"o_wack", false,-1);
    tracep->declArray(c+344,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+343,"o_werr", false,-1);
    tracep->declBit(c+439,"o_scyc", false,-1);
    tracep->declBit(c+440,"o_sstb", false,-1);
    tracep->declBit(c+441,"o_swe", false,-1);
    tracep->declBus(c+442,"o_saddr", false,-1, 7,0);
    tracep->declBus(c+443,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+444,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+445,"i_sstall", false,-1);
    tracep->declBit(c+446,"i_sack", false,-1);
    tracep->declBus(c+448,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+447,"i_serr", false,-1);
    tracep->declBus(c+4579,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4667,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+439,"r_cyc", false,-1);
    tracep->declBit(c+3162,"r_stb", false,-1);
    tracep->declBit(c+441,"r_we", false,-1);
    tracep->declBit(c+342,"r_ack", false,-1);
    tracep->declBit(c+343,"r_err", false,-1);
    tracep->declBit(c+3163,"r_first", false,-1);
    tracep->declBus(c+442,"r_addr", false,-1, 7,0);
    tracep->declBit(c+3164,"s_null", false,-1);
    tracep->declBit(c+3165,"s_last", false,-1);
    tracep->declArray(c+3166,"s_data", false,-1, 511,0);
    tracep->declArray(c+344,"r_data", false,-1, 511,0);
    tracep->declArray(c+3182,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+3198,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+3200,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+3202,"r_shift", false,-1, 3,0);
    tracep->declBus(c+3203,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+3204,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+3205,"fifo_full", false,-1);
    tracep->declBit(c+3206,"fifo_empty", false,-1);
    tracep->declBit(c+3207,"fifo_ack", false,-1);
    tracep->declBus(c+3208,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4758,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+3209,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4667,"BW", false,-1, 31,0);
    tracep->declBus(c+4667,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+74,"i_reset", false,-1);
    tracep->declBit(c+3210,"i_wr", false,-1);
    tracep->declBus(c+3211,"i_data", false,-1, 4,0);
    tracep->declBit(c+3205,"o_full", false,-1);
    tracep->declBus(c+3208,"o_fill", false,-1, 5,0);
    tracep->declBit(c+446,"i_rd", false,-1);
    tracep->declBus(c+3212,"o_data", false,-1, 4,0);
    tracep->declBit(c+3206,"o_empty", false,-1);
    tracep->declBus(c+4628,"FLEN", false,-1, 31,0);
    tracep->declBit(c+3213,"r_full", false,-1);
    tracep->declBit(c+3214,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3215+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+3247,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+3248,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+3249,"w_wr", false,-1);
    tracep->declBit(c+3250,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4578,"NM", false,-1, 31,0);
    tracep->declBus(c+4670,"NS", false,-1, 31,0);
    tracep->declBus(c+4577,"AW", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declArray(c+4759,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4762,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4666,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4589,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBus(c+439,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+440,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+441,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+442,"i_maddr", false,-1, 7,0);
    tracep->declBus(c+443,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+444,"i_msel", false,-1, 3,0);
    tracep->declBus(c+445,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+446,"o_mack", false,-1, 0,0);
    tracep->declBus(c+448,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+447,"o_merr", false,-1, 0,0);
    tracep->declBus(c+3251,"o_scyc", false,-1, 10,0);
    tracep->declBus(c+3252,"o_sstb", false,-1, 10,0);
    tracep->declBus(c+3253,"o_swe", false,-1, 10,0);
    tracep->declArray(c+3254,"o_saddr", false,-1, 87,0);
    tracep->declArray(c+3257,"o_sdata", false,-1, 351,0);
    tracep->declQuad(c+3268,"o_ssel", false,-1, 43,0);
    tracep->declBus(c+3270,"i_sstall", false,-1, 10,0);
    tracep->declBus(c+3271,"i_sack", false,-1, 10,0);
    tracep->declArray(c+3272,"i_sdata", false,-1, 351,0);
    tracep->declBus(c+4765,"i_serr", false,-1, 10,0);
    tracep->declBus(c+4589,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4579,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3283+i*1,"request", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 10,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3284+i*1,"grant", true,(i+0), 11,0);
    }
    tracep->declBus(c+3285,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3286,"sgrant", false,-1, 10,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3287+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3288,"mfull", false,-1, 0,0);
    tracep->declBus(c+3289,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3290,"mempty", false,-1, 0,0);
    tracep->declBus(c+4627,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4578,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4583,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4404+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+439,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3291,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3292,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3293+i*1,"m_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3294+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3295+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4405,"m_stall", false,-1, 0,0);
    tracep->declBus(c+3296,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3297+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+3313,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4766,"s_err", false,-1, 15,0);
    tracep->declBus(c+3314,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3315,"iN", false,-1, 31,0);
    tracep->declBus(c+4554,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4406,"regrant", false,-1, 11,0);
    tracep->declBus(c+4555,"reindex", false,-1, 3,0);
    tracep->declBit(c+3316,"stay_on_channel", false,-1);
    tracep->declBit(c+3317,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4407,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4406,"r_regrant", false,-1, 11,0);
    tracep->declBus(c+4555,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3318,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+75,"skd_stb", false,-1);
    tracep->declBit(c+4408,"skd_stall", false,-1);
    tracep->declBit(c+3319,"skd_we", false,-1);
    tracep->declBus(c+3320,"skd_addr", false,-1, 7,0);
    tracep->declBus(c+3321,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3322,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3323,"decoded", false,-1, 11,0);
    tracep->declBit(c+3324,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4670,"NS", false,-1, 31,0);
    tracep->declBus(c+4577,"AW", false,-1, 31,0);
    tracep->declBus(c+4767,"DW", false,-1, 31,0);
    tracep->declArray(c+4759,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4762,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4768,"ACCESS_ALLOWED", false,-1, 10,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+76,"i_valid", false,-1);
    tracep->declBit(c+4408,"o_stall", false,-1);
    tracep->declBus(c+3320,"i_addr", false,-1, 7,0);
    tracep->declQuad(c+3325,"i_data", false,-1, 36,0);
    tracep->declBit(c+3314,"o_valid", false,-1);
    tracep->declBit(c+4409,"i_stall", false,-1);
    tracep->declBus(c+3323,"o_decode", false,-1, 11,0);
    tracep->declBus(c+3327,"o_addr", false,-1, 7,0);
    tracep->declQuad(c+3328,"o_data", false,-1, 36,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+77,"request", false,-1, 11,0);
    tracep->declBus(c+3330,"prerequest", false,-1, 10,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+78,"r_request", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+79,"r_request_NS", false,-1);
    tracep->declBit(c+80,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4769,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+81,"i_reset", false,-1);
    tracep->declBit(c+440,"i_valid", false,-1);
    tracep->declBit(c+3324,"o_ready", false,-1);
    tracep->declQuad(c+3331,"i_data", false,-1, 44,0);
    tracep->declBit(c+75,"o_valid", false,-1);
    tracep->declBit(c+4410,"i_ready", false,-1);
    tracep->declQuad(c+3333,"o_data", false,-1, 44,0);
    tracep->declQuad(c+3335,"w_data", false,-1, 44,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+445,"r_valid", false,-1);
    tracep->declQuad(c+3335,"r_data", false,-1, 44,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+446,"r_mack", false,-1, 0,0);
    tracep->declBus(c+447,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+82,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+83,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+84,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+85,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+86,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+87,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+88,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+89,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+90,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+91,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+92,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4703,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4625,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4628,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+554,"i_scyc", false,-1);
    tracep->declBit(c+555,"i_sstb", false,-1);
    tracep->declBit(c+556,"i_swe", false,-1);
    tracep->declBus(c+3337,"i_saddr", false,-1, 28,0);
    tracep->declBus(c+558,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+559,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+560,"o_sstall", false,-1);
    tracep->declBit(c+561,"o_sack", false,-1);
    tracep->declBus(c+563,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+562,"o_serr", false,-1);
    tracep->declBit(c+278,"o_wcyc", false,-1);
    tracep->declBit(c+279,"o_wstb", false,-1);
    tracep->declBit(c+280,"o_wwe", false,-1);
    tracep->declBus(c+281,"o_waddr", false,-1, 24,0);
    tracep->declArray(c+282,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+298,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+300,"i_wstall", false,-1);
    tracep->declBit(c+301,"i_wack", false,-1);
    tracep->declArray(c+303,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+302,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4667,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+278,"r_cyc", false,-1);
    tracep->declBit(c+3338,"r_stb", false,-1);
    tracep->declBit(c+280,"r_we", false,-1);
    tracep->declBit(c+561,"r_ack", false,-1);
    tracep->declBit(c+562,"r_err", false,-1);
    tracep->declBus(c+281,"r_addr", false,-1, 24,0);
    tracep->declArray(c+282,"r_data", false,-1, 511,0);
    tracep->declArray(c+3339,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+298,"r_sel", false,-1, 63,0);
    tracep->declBus(c+3355,"r_shift", false,-1, 3,0);
    tracep->declBit(c+3356,"fifo_full", false,-1);
    tracep->declBit(c+3357,"ign_fifo_empty", false,-1);
    tracep->declBus(c+3358,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+3359,"w_shift", false,-1, 3,0);
    tracep->declBus(c+3360,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+3361,"w_data", false,-1, 511,0);
    tracep->declQuad(c+3377,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4579,"BW", false,-1, 31,0);
    tracep->declBus(c+4667,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+93,"i_reset", false,-1);
    tracep->declBit(c+3379,"i_wr", false,-1);
    tracep->declBus(c+3355,"i_data", false,-1, 3,0);
    tracep->declBit(c+3356,"o_full", false,-1);
    tracep->declBus(c+3358,"o_fill", false,-1, 5,0);
    tracep->declBit(c+301,"i_rd", false,-1);
    tracep->declBus(c+3360,"o_data", false,-1, 3,0);
    tracep->declBit(c+3357,"o_empty", false,-1);
    tracep->declBus(c+4628,"FLEN", false,-1, 31,0);
    tracep->declBit(c+3356,"r_full", false,-1);
    tracep->declBit(c+3357,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3380+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+3412,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+3413,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+3414,"w_wr", false,-1);
    tracep->declBit(c+3415,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4578,"NM", false,-1, 31,0);
    tracep->declBus(c+4588,"NS", false,-1, 31,0);
    tracep->declBus(c+4691,"AW", false,-1, 31,0);
    tracep->declBus(c+4628,"DW", false,-1, 31,0);
    tracep->declQuad(c+4770,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4772,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4666,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4589,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBus(c+545,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+546,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+547,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+548,"i_maddr", false,-1, 29,0);
    tracep->declBus(c+549,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4622,"i_msel", false,-1, 3,0);
    tracep->declBus(c+550,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+551,"o_mack", false,-1, 0,0);
    tracep->declBus(c+553,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+552,"o_merr", false,-1, 0,0);
    tracep->declBus(c+3416,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+3417,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+3418,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+3419,"o_saddr", false,-1, 59,0);
    tracep->declQuad(c+3421,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+3423,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4556,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4557,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+3424,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+3426,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4589,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4578,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4588,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3427+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3428+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+3429,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3430,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3431+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3432,"mfull", false,-1, 0,0);
    tracep->declBus(c+3433,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3434,"mempty", false,-1, 0,0);
    tracep->declBus(c+4627,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4578,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4579,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4411+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+545,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3435,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3436,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3437+i*1,"m_addr", true,(i+0), 29,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3438+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3439+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4558,"m_stall", false,-1, 0,0);
    tracep->declBus(c+94,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3440+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4559,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3444,"s_err", false,-1, 3,0);
    tracep->declBus(c+3445,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3446,"iN", false,-1, 31,0);
    tracep->declBus(c+4560,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4412,"regrant", false,-1, 2,0);
    tracep->declBus(c+4561,"reindex", false,-1, 1,0);
    tracep->declBit(c+3447,"stay_on_channel", false,-1);
    tracep->declBit(c+3448,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4413,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4412,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4561,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3449,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+95,"skd_stb", false,-1);
    tracep->declBit(c+4562,"skd_stall", false,-1);
    tracep->declBit(c+3450,"skd_we", false,-1);
    tracep->declBus(c+3451,"skd_addr", false,-1, 29,0);
    tracep->declBus(c+3452,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3453,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3454,"decoded", false,-1, 2,0);
    tracep->declBit(c+3455,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4588,"NS", false,-1, 31,0);
    tracep->declBus(c+4691,"AW", false,-1, 31,0);
    tracep->declBus(c+4767,"DW", false,-1, 31,0);
    tracep->declQuad(c+4770,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4772,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4633,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+96,"i_valid", false,-1);
    tracep->declBit(c+4562,"o_stall", false,-1);
    tracep->declBus(c+3451,"i_addr", false,-1, 29,0);
    tracep->declQuad(c+3456,"i_data", false,-1, 36,0);
    tracep->declBit(c+3445,"o_valid", false,-1);
    tracep->declBit(c+4563,"i_stall", false,-1);
    tracep->declBus(c+3454,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3458,"o_addr", false,-1, 29,0);
    tracep->declQuad(c+3459,"o_data", false,-1, 36,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+97,"request", false,-1, 2,0);
    tracep->declBus(c+3461,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+98,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+99,"r_request_NS", false,-1);
    tracep->declBit(c+100,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4774,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+101,"i_reset", false,-1);
    tracep->declBit(c+546,"i_valid", false,-1);
    tracep->declBit(c+3455,"o_ready", false,-1);
    tracep->declArray(c+3462,"i_data", false,-1, 66,0);
    tracep->declBit(c+95,"o_valid", false,-1);
    tracep->declBit(c+4564,"i_ready", false,-1);
    tracep->declArray(c+3465,"o_data", false,-1, 66,0);
    tracep->declArray(c+3468,"w_data", false,-1, 66,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+550,"r_valid", false,-1);
    tracep->declArray(c+3468,"r_data", false,-1, 66,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+551,"r_mack", false,-1, 0,0);
    tracep->declBus(c+552,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+102,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+103,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4579,"NM", false,-1, 31,0);
    tracep->declBus(c+4576,"NS", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4625,"DW", false,-1, 31,0);
    tracep->declArray(c+4775,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4778,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4666,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4589,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4627,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4584,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBus(c+3471,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+3472,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+3473,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+3474,"i_maddr", false,-1, 99,0);
    tracep->declArray(c+3478,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+3542,"i_msel", false,-1, 255,0);
    tracep->declBus(c+3550,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+3551,"o_mack", false,-1, 3,0);
    tracep->declArray(c+3552,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+3616,"o_merr", false,-1, 3,0);
    tracep->declBus(c+3617,"o_scyc", false,-1, 2,0);
    tracep->declBus(c+3618,"o_sstb", false,-1, 2,0);
    tracep->declBus(c+3619,"o_swe", false,-1, 2,0);
    tracep->declArray(c+3620,"o_saddr", false,-1, 74,0);
    tracep->declArray(c+3623,"o_sdata", false,-1, 1535,0);
    tracep->declArray(c+3671,"o_ssel", false,-1, 191,0);
    tracep->declBus(c+3677,"i_sstall", false,-1, 2,0);
    tracep->declBus(c+3678,"i_sack", false,-1, 2,0);
    tracep->declArray(c+3679,"i_sdata", false,-1, 1535,0);
    tracep->declBus(c+3727,"i_serr", false,-1, 2,0);
    tracep->declBus(c+4589,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4588,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4588,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3728+i*1,"request", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3732+i*1,"requested", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3736+i*1,"grant", true,(i+0), 3,0);
    }
    tracep->declBus(c+3740,"mgrant", false,-1, 3,0);
    tracep->declBus(c+3741,"sgrant", false,-1, 2,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3742+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3746,"mfull", false,-1, 3,0);
    tracep->declBus(c+3747,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+3748,"mempty", false,-1, 3,0);
    tracep->declBus(c+4635,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4579,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4579,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4414+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3749+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+3471,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+3753,"m_stb", false,-1, 3,0);
    tracep->declBus(c+3754,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3755+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3759+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3823+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4418,"m_stall", false,-1, 3,0);
    tracep->declBus(c+3831,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3832+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+3896,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3897,"s_err", false,-1, 3,0);
    tracep->declBus(c+3898,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4584,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3899,"iN", false,-1, 31,0);
    tracep->declBus(c+4565,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4419,"regrant", false,-1, 3,0);
    tracep->declBus(c+4566,"reindex", false,-1, 1,0);
    tracep->declBit(c+3900,"stay_on_channel", false,-1);
    tracep->declBit(c+3901,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4420,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4419,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4566,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4421,"regrant", false,-1, 3,0);
    tracep->declBus(c+4567,"reindex", false,-1, 1,0);
    tracep->declBit(c+3902,"stay_on_channel", false,-1);
    tracep->declBit(c+3903,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4422,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4421,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4567,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4423,"regrant", false,-1, 3,0);
    tracep->declBus(c+4568,"reindex", false,-1, 1,0);
    tracep->declBit(c+3904,"stay_on_channel", false,-1);
    tracep->declBit(c+3905,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4424,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4423,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4568,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4425,"regrant", false,-1, 3,0);
    tracep->declBus(c+4569,"reindex", false,-1, 1,0);
    tracep->declBit(c+3906,"stay_on_channel", false,-1);
    tracep->declBit(c+3907,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4426,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4425,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4569,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3908,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+3909,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+3910,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+3911,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+104,"skd_stb", false,-1);
    tracep->declBit(c+4427,"skd_stall", false,-1);
    tracep->declBit(c+3912,"skd_we", false,-1);
    tracep->declBus(c+3913,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3914,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3930,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3932,"decoded", false,-1, 3,0);
    tracep->declBit(c+3933,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4576,"NS", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declArray(c+4775,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4778,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4715,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+105,"i_valid", false,-1);
    tracep->declBit(c+4427,"o_stall", false,-1);
    tracep->declBus(c+3913,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3934,"i_data", false,-1, 576,0);
    tracep->declBit(c+3953,"o_valid", false,-1);
    tracep->declBit(c+4428,"i_stall", false,-1);
    tracep->declBus(c+3932,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3954,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3955,"o_data", false,-1, 576,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+106,"request", false,-1, 3,0);
    tracep->declBus(c+3974,"prerequest", false,-1, 2,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+107,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+108,"r_request_NS", false,-1);
    tracep->declBit(c+109,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4782,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+110,"i_reset", false,-1);
    tracep->declBit(c+176,"i_valid", false,-1);
    tracep->declBit(c+3933,"o_ready", false,-1);
    tracep->declArray(c+3975,"i_data", false,-1, 601,0);
    tracep->declBit(c+104,"o_valid", false,-1);
    tracep->declBit(c+4429,"i_ready", false,-1);
    tracep->declArray(c+3994,"o_data", false,-1, 601,0);
    tracep->declArray(c+4013,"w_data", false,-1, 601,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4032,"r_valid", false,-1);
    tracep->declArray(c+4013,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+111,"skd_stb", false,-1);
    tracep->declBit(c+4430,"skd_stall", false,-1);
    tracep->declBit(c+4033,"skd_we", false,-1);
    tracep->declBus(c+4034,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4035,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4051,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4053,"decoded", false,-1, 3,0);
    tracep->declBit(c+4054,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4576,"NS", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declArray(c+4775,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4778,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4715,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+112,"i_valid", false,-1);
    tracep->declBit(c+4430,"o_stall", false,-1);
    tracep->declBus(c+4034,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4055,"i_data", false,-1, 576,0);
    tracep->declBit(c+4074,"o_valid", false,-1);
    tracep->declBit(c+4431,"i_stall", false,-1);
    tracep->declBus(c+4053,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4075,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4076,"o_data", false,-1, 576,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+113,"request", false,-1, 3,0);
    tracep->declBus(c+4095,"prerequest", false,-1, 2,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+114,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+115,"r_request_NS", false,-1);
    tracep->declBit(c+116,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4782,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+117,"i_reset", false,-1);
    tracep->declBit(c+216,"i_valid", false,-1);
    tracep->declBit(c+4054,"o_ready", false,-1);
    tracep->declArray(c+4096,"i_data", false,-1, 601,0);
    tracep->declBit(c+111,"o_valid", false,-1);
    tracep->declBit(c+4432,"i_ready", false,-1);
    tracep->declArray(c+4115,"o_data", false,-1, 601,0);
    tracep->declArray(c+4134,"w_data", false,-1, 601,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4153,"r_valid", false,-1);
    tracep->declArray(c+4134,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+118,"skd_stb", false,-1);
    tracep->declBit(c+4433,"skd_stall", false,-1);
    tracep->declBit(c+4154,"skd_we", false,-1);
    tracep->declBus(c+4155,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4156,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4172,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4174,"decoded", false,-1, 3,0);
    tracep->declBit(c+4175,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4576,"NS", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declArray(c+4775,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4778,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4715,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+119,"i_valid", false,-1);
    tracep->declBit(c+4433,"o_stall", false,-1);
    tracep->declBus(c+4155,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4176,"i_data", false,-1, 576,0);
    tracep->declBit(c+4195,"o_valid", false,-1);
    tracep->declBit(c+4434,"i_stall", false,-1);
    tracep->declBus(c+4174,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4196,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4197,"o_data", false,-1, 576,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+120,"request", false,-1, 3,0);
    tracep->declBus(c+4216,"prerequest", false,-1, 2,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+121,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+122,"r_request_NS", false,-1);
    tracep->declBit(c+123,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4782,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+124,"i_reset", false,-1);
    tracep->declBit(c+238,"i_valid", false,-1);
    tracep->declBit(c+4175,"o_ready", false,-1);
    tracep->declArray(c+4217,"i_data", false,-1, 601,0);
    tracep->declBit(c+118,"o_valid", false,-1);
    tracep->declBit(c+4435,"i_ready", false,-1);
    tracep->declArray(c+4236,"o_data", false,-1, 601,0);
    tracep->declArray(c+4255,"w_data", false,-1, 601,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4274,"r_valid", false,-1);
    tracep->declArray(c+4255,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+125,"skd_stb", false,-1);
    tracep->declBit(c+4436,"skd_stall", false,-1);
    tracep->declBit(c+4275,"skd_we", false,-1);
    tracep->declBus(c+4276,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4277,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4293,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4295,"decoded", false,-1, 3,0);
    tracep->declBit(c+4296,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4576,"NS", false,-1, 31,0);
    tracep->declBus(c+4582,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declArray(c+4775,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4778,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4715,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4584,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+4440,"i_reset", false,-1);
    tracep->declBit(c+126,"i_valid", false,-1);
    tracep->declBit(c+4436,"o_stall", false,-1);
    tracep->declBus(c+4276,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4297,"i_data", false,-1, 576,0);
    tracep->declBit(c+4316,"o_valid", false,-1);
    tracep->declBit(c+4437,"i_stall", false,-1);
    tracep->declBus(c+4295,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4317,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4318,"o_data", false,-1, 576,0);
    tracep->declBus(c+4584,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+127,"request", false,-1, 3,0);
    tracep->declBus(c+4337,"prerequest", false,-1, 2,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+128,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+129,"r_request_NS", false,-1);
    tracep->declBit(c+130,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4627,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4627,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4782,"DW", false,-1, 31,0);
    tracep->declBus(c+4584,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4439,"i_clk", false,-1);
    tracep->declBit(c+131,"i_reset", false,-1);
    tracep->declBit(c+279,"i_valid", false,-1);
    tracep->declBit(c+4296,"o_ready", false,-1);
    tracep->declArray(c+4338,"i_data", false,-1, 601,0);
    tracep->declBit(c+125,"o_valid", false,-1);
    tracep->declBit(c+4438,"i_ready", false,-1);
    tracep->declArray(c+4357,"o_data", false,-1, 601,0);
    tracep->declArray(c+4376,"w_data", false,-1, 601,0);
    tracep->declBit(c+4590,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+300,"r_valid", false,-1);
    tracep->declArray(c+4376,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+3551,"r_mack", false,-1, 3,0);
    tracep->declBus(c+3616,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4395,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4396,"regrant", false,-1, 3,0);
    tracep->declBus(c+4397,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4398,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4399,"regrant", false,-1, 3,0);
    tracep->declBus(c+4400,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[2] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4401,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4402,"regrant", false,-1, 3,0);
    tracep->declBus(c+4403,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+132,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+133,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
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
    VlWide<16>/*511:0*/ __Vtemp_hf82de6ac__0;
    VlWide<16>/*511:0*/ __Vtemp_hf74e670c__0;
    VlWide<16>/*511:0*/ __Vtemp_h21e563ec__0;
    VlWide<16>/*511:0*/ __Vtemp_hd1e4c677__0;
    VlWide<16>/*511:0*/ __Vtemp_h6ddae8d1__0;
    VlWide<16>/*511:0*/ __Vtemp_hc1d82fb0__1;
    VlWide<16>/*511:0*/ __Vtemp_h6d0d1506__0;
    VlWide<17>/*543:0*/ __Vtemp_h6b3f223d__0;
    VlWide<16>/*511:0*/ __Vtemp_h01ff8f7b__0;
    VlWide<16>/*511:0*/ __Vtemp_he3c3974d__0;
    VlWide<11>/*351:0*/ __Vtemp_h33b103d1__0;
    VlWide<16>/*511:0*/ __Vtemp_hcfafa750__0;
    VlWide<4>/*127:0*/ __Vtemp_h2146f57f__0;
    VlWide<64>/*2047:0*/ __Vtemp_h95b27ed2__0;
    VlWide<8>/*255:0*/ __Vtemp_h7cab7483__0;
    VlWide<48>/*1535:0*/ __Vtemp_h9e08da6e__0;
    VlWide<16>/*511:0*/ __Vtemp_h0fd98bf7__0;
    VlWide<19>/*607:0*/ __Vtemp_h3b245e0e__0;
    VlWide<16>/*511:0*/ __Vtemp_hcb138391__0;
    VlWide<19>/*607:0*/ __Vtemp_hf41d9735__0;
    VlWide<19>/*607:0*/ __Vtemp_h6283f4ea__0;
    VlWide<16>/*511:0*/ __Vtemp_hb4195529__0;
    VlWide<19>/*607:0*/ __Vtemp_hb863f640__0;
    VlWide<16>/*511:0*/ __Vtemp_h61e633ab__0;
    VlWide<19>/*607:0*/ __Vtemp_h43fd6509__0;
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
                               << 0xbU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),12);
    bufp->fullSData(oldp+78,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),11);
    bufp->fullBit(oldp+79,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+80,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+81,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+82,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+83,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+84,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+85,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+86,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+87,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+88,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+89,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+92,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+93,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT____Vcellinp__UPSIZE__DOT__u_fifo__i_reset));
    bufp->fullCData(oldp+94,(vlSelf->main__DOT__wbu_xbar__DOT__s_stall),4);
    bufp->fullBit(oldp+95,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+96,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+97,((((IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 2U) | ((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                                         & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest)))),3);
    bufp->fullCData(oldp+98,(((- (IData)((IData)(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid))) 
                              & (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest))),2);
    bufp->fullBit(oldp+99,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+100,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+102,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+103,(vlSelf->main__DOT__wbu_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+106,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+113,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+114,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+115,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+116,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+117,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+118,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+120,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+121,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+122,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+123,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+127,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+128,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+129,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+133,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+134,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
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
    bufp->fullIData(oldp+177,(vlSelf->main__DOT__wbwide_i2cdma_addr),25);
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
    bufp->fullIData(oldp+217,(vlSelf->main__DOT__wbwide_i2cm_addr),25);
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
    bufp->fullIData(oldp+240,(vlSelf->main__DOT__wbwide_zip_addr),25);
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
    bufp->fullIData(oldp+281,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),25);
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
    bufp->fullIData(oldp+322,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),25);
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
    bufp->fullWData(oldp+323,(__Vtemp_hf82de6ac__0),512);
    bufp->fullQData(oldp+339,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+341,(vlSelf->main__DOT__wbwide_wbdown_stall));
    bufp->fullBit(oldp+342,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
    bufp->fullBit(oldp+343,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullWData(oldp+344,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+360,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+361,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+362,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+363,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
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
    bufp->fullWData(oldp+364,(__Vtemp_hf74e670c__0),512);
    bufp->fullQData(oldp+380,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
    bufp->fullBit(oldp+382,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+383,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+399,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                   >> 2U))));
    bufp->fullBit(oldp+400,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                   >> 2U))));
    bufp->fullBit(oldp+401,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                   >> 2U))));
    bufp->fullIData(oldp+402,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
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
    bufp->fullWData(oldp+403,(__Vtemp_h21e563ec__0),512);
    bufp->fullQData(oldp+419,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U])))),64);
    bufp->fullBit(oldp+421,(vlSelf->main__DOT__wbwide_ddr3_controller_stall));
    bufp->fullBit(oldp+422,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                             [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->fullWData(oldp+423,(vlSelf->main__DOT__wbwide_ddr3_controller_idata),512);
    bufp->fullBit(oldp+439,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+440,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+441,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullCData(oldp+442,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),8);
    bufp->fullIData(oldp+443,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+444,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+445,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+446,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+447,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+448,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullBit(oldp+449,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 8U))));
    bufp->fullBit(oldp+450,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                              >> 8U) & (0U == (7U & 
                                               vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+451,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 8U))));
    bufp->fullIData(oldp+452,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+453,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x20U)))),4);
    bufp->fullBit(oldp+454,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                              >> 8U) & (1U == (7U & 
                                               vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+455,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullIData(oldp+456,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+457,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+458,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+459,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+460,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                              >> 8U) & (4U == (7U & 
                                               vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+461,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+462,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+463,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullCData(oldp+464,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),8);
    bufp->fullIData(oldp+465,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+466,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+467,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+468,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+469,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+470,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+471,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullCData(oldp+472,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                        >> 8U))),8);
    bufp->fullIData(oldp+473,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+474,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 4U)))),4);
    bufp->fullBit(oldp+475,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+476,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 2U))));
    bufp->fullBit(oldp+478,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 2U))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 2U))));
    bufp->fullCData(oldp+480,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+481,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+482,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 8U)))),4);
    bufp->fullBit(oldp+483,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+484,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+485,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 3U))));
    bufp->fullBit(oldp+486,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 3U))));
    bufp->fullBit(oldp+487,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 3U))));
    bufp->fullCData(oldp+488,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+489,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+490,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0xcU)))),4);
    bufp->fullBit(oldp+491,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+492,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+493,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 4U))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 4U))));
    bufp->fullBit(oldp+495,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 4U))));
    bufp->fullCData(oldp+496,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),8);
    bufp->fullIData(oldp+497,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+498,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x10U)))),4);
    bufp->fullBit(oldp+499,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+500,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+501,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 5U))));
    bufp->fullBit(oldp+502,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 5U))));
    bufp->fullBit(oldp+503,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 5U))));
    bufp->fullCData(oldp+504,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                        >> 8U))),8);
    bufp->fullIData(oldp+505,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+506,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x14U)))),4);
    bufp->fullBit(oldp+507,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+508,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+509,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 6U))));
    bufp->fullBit(oldp+510,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 6U))));
    bufp->fullBit(oldp+511,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 6U))));
    bufp->fullCData(oldp+512,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+513,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+514,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x18U)))),4);
    bufp->fullBit(oldp+515,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+516,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+517,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 7U))));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 7U))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 7U))));
    bufp->fullCData(oldp+520,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+521,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+522,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x1cU)))),4);
    bufp->fullBit(oldp+523,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+524,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+525,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 8U))));
    bufp->fullCData(oldp+526,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])),8);
    bufp->fullBit(oldp+527,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+528,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+529,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 9U))));
    bufp->fullBit(oldp+530,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 9U))));
    bufp->fullBit(oldp+531,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 9U))));
    bufp->fullCData(oldp+532,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                        >> 8U))),8);
    bufp->fullIData(oldp+533,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+534,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x24U)))),4);
    bufp->fullBit(oldp+535,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+536,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+537,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+538,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+539,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                        >> 0x10U))),8);
    bufp->fullIData(oldp+540,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+541,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                               >> 0x28U)))),4);
    bufp->fullBit(oldp+542,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+543,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+544,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullBit(oldp+545,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+546,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+547,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+548,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullIData(oldp+549,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+550,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+551,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+552,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+553,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+554,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+555,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+556,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+557,((0x3fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),30);
    bufp->fullIData(oldp+558,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+559,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+560,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+561,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+562,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+563,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+564,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+565,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+567,((0x3fffffffU & (IData)(
                                                     (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                      >> 0x1eU)))),30);
    bufp->fullIData(oldp+568,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+569,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+570,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullSData(oldp+571,((0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                           << 7U) | 
                                          (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                           >> 0x19U)))),14);
    bufp->fullBit(oldp+572,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+573,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+574,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+590,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+591,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+593,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+594,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+595,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+596,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+597,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+598,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+599,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+600,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+601,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+602,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+603,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+604,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+605,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+606,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullCData(oldp+607,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                     >> 0x10U))),2);
    bufp->fullBit(oldp+608,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+609,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+610,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+611,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+612,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+613,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+614,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+615,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+616,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+617,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+618,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+619,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+620,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+621,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+622,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+623,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+624,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+625,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+626,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+627,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+628,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+629,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+630,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+631,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+632,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+633,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+634,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+635,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+636,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+637,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+638,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+639,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+640,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+641,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+642,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+643,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+644,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+645,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+646,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+647,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+648,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+649,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+650,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+651,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullIData(oldp+652,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                             << 0xeU) 
                                            | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                               >> 0x12U)))),24);
    bufp->fullCData(oldp+653,((0x7fU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                        >> 0x10U))),7);
    bufp->fullIData(oldp+654,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+655,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+656,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullSData(oldp+657,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),16);
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+659,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+660,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+661,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                             & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+662,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullBit(oldp+663,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+664,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullCData(oldp+666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullSData(oldp+675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullBit(oldp+683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullWData(oldp+686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),512);
    bufp->fullQData(oldp+702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),64);
    bufp->fullSData(oldp+704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullIData(oldp+709,((0xffffffU & ((IData)(5U) 
                                            + ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                << 0xeU) 
                                               | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                  >> 0x12U))))),24);
    bufp->fullBit(oldp+710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullQData(oldp+713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),64);
    bufp->fullQData(oldp+715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),64);
    bufp->fullQData(oldp+717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),64);
    bufp->fullQData(oldp+719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),64);
    bufp->fullWData(oldp+721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),512);
    bufp->fullWData(oldp+737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),512);
    bufp->fullWData(oldp+753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),512);
    bufp->fullWData(oldp+769,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),512);
    bufp->fullQData(oldp+785,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullQData(oldp+787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
    bufp->fullQData(oldp+789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
    bufp->fullQData(oldp+791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
    bufp->fullQData(oldp+793,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4]),64);
    bufp->fullQData(oldp+795,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5]),64);
    bufp->fullQData(oldp+797,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6]),64);
    bufp->fullQData(oldp+799,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7]),64);
    bufp->fullCData(oldp+801,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullCData(oldp+802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
    bufp->fullCData(oldp+803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
    bufp->fullCData(oldp+804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
    bufp->fullCData(oldp+805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4]),8);
    bufp->fullCData(oldp+806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5]),8);
    bufp->fullCData(oldp+807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6]),8);
    bufp->fullCData(oldp+808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7]),8);
    bufp->fullSData(oldp+809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+829,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+830,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+833,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+834,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+835,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+838,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+839,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+841,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+842,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+853,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+854,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+865,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullCData(oldp+868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+874,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+875,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+877,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullBit(oldp+885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullCData(oldp+888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullCData(oldp+892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q),2);
    bufp->fullBit(oldp+893,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+894,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+895,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+896,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+898,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+899,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+900,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+901,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+902,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+903,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0]),6);
    bufp->fullCData(oldp+904,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[1]),6);
    bufp->fullCData(oldp+905,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[2]),6);
    bufp->fullCData(oldp+906,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[3]),6);
    bufp->fullCData(oldp+907,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[4]),6);
    bufp->fullCData(oldp+908,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[5]),6);
    bufp->fullCData(oldp+909,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[6]),6);
    bufp->fullCData(oldp+910,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[7]),6);
    bufp->fullCData(oldp+911,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullBit(oldp+912,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat));
    bufp->fullCData(oldp+913,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+914,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+915,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+916,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullCData(oldp+917,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),3);
    bufp->fullCData(oldp+918,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),6);
    bufp->fullSData(oldp+919,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+920,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+921,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+922,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
    bufp->fullCData(oldp+923,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
    bufp->fullCData(oldp+924,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
    bufp->fullCData(oldp+925,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4]),4);
    bufp->fullCData(oldp+926,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5]),4);
    bufp->fullCData(oldp+927,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6]),4);
    bufp->fullCData(oldp+928,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7]),4);
    bufp->fullCData(oldp+929,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+930,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+931,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+932,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+933,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+934,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+935,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+936,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+937,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+938,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+939,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+940,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+941,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+942,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullWData(oldp+943,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),512);
    bufp->fullWData(oldp+959,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),512);
    bufp->fullCData(oldp+975,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+976,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+977,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+978,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+979,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+980,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+981,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+982,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+983,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+984,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+985,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+986,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+987,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+988,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+989,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+990,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+991,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+992,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+993,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+994,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullWData(oldp+995,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),512);
    bufp->fullBit(oldp+1011,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+1012,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+1013,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+1014,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullWData(oldp+1015,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),512);
    bufp->fullWData(oldp+1031,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+1035,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+1036,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
    bufp->fullCData(oldp+1037,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
    bufp->fullCData(oldp+1038,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
    bufp->fullCData(oldp+1039,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4]),7);
    bufp->fullCData(oldp+1040,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5]),7);
    bufp->fullCData(oldp+1041,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6]),7);
    bufp->fullCData(oldp+1042,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7]),7);
    bufp->fullCData(oldp+1043,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+1044,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+1045,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+1046,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+1047,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+1048,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+1049,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+1050,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+1051,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+1052,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+1053,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+1054,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+1055,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+1056,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+1057,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+1058,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+1059,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+1060,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+1061,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+1062,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+1063,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+1064,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+1065,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+1066,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+1067,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+1068,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+1069,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+1070,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+1071,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+1072,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+1073,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+1074,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+1075,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+1076,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat),6);
    bufp->fullBit(oldp+1077,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback));
    bufp->fullCData(oldp+1078,(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check),6);
    bufp->fullQData(oldp+1079,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data),64);
    bufp->fullBit(oldp+1081,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated));
    bufp->fullBit(oldp+1082,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+1083,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+1084,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+1085,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+1086,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+1087,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+1088,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+1089,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+1090,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+1091,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+1092,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),8);
    bufp->fullCData(oldp+1093,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),8);
    bufp->fullCData(oldp+1094,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),8);
    bufp->fullCData(oldp+1095,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),8);
    bufp->fullCData(oldp+1096,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail),8);
    bufp->fullCData(oldp+1097,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),3);
    bufp->fullBit(oldp+1098,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst));
    bufp->fullBit(oldp+1099,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_stb));
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_we));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_aux));
    bufp->fullIData(oldp+1102,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_addr),24);
    bufp->fullWData(oldp+1103,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_data),512);
    bufp->fullQData(oldp+1119,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_sel),64);
    bufp->fullIData(oldp+1121,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullCData(oldp+1122,(vlSelf->main__DOT__ddr3_controller_inst__DOT__test_state),4);
    bufp->fullIData(oldp+1123,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter),24);
    bufp->fullIData(oldp+1124,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter),24);
    bufp->fullIData(oldp+1125,(vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter),24);
    bufp->fullIData(oldp+1126,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_counter),32);
    bufp->fullIData(oldp+1127,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_counter),32);
    bufp->fullIData(oldp+1128,(vlSelf->main__DOT__ddr3_controller_inst__DOT__correct_read_data),32);
    bufp->fullIData(oldp+1129,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_read_data),32);
    bufp->fullBit(oldp+1130,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U])));
    bufp->fullBit(oldp+1131,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+1132,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+1133,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+1134,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+1135,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                              | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                  | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                 | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+1136,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+1138,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+1139,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+1141,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+1143,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+1144,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+1146,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+1147,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+1149,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                               & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                  & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                              | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+1150,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+1151,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+1152,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                              & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+1154,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                              | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+1156,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+1157,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+1158,((0x7ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+1159,((0x7ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+1160,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+1161,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+1162,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+1163,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+1164,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+1165,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                               & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                  & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                              | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+1166,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+1167,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+1168,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+1169,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+1170,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+1171,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+1172,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+1173,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+1174,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+1175,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+1176,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+1177,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+1178,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+1179,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+1180,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+1181,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                              | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+1182,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+1184,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+1185,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+1186,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+1187,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+1189,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+1190,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+1191,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+1192,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+1193,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+1194,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+1195,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                   >> 0x21U))))));
    bufp->fullCData(oldp+1196,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+1197,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+1198,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+1199,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+1200,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+1202,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                          >> 0x1fU)) 
                                 << 0x1eU) | (0x3fffffffU 
                                              & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+1203,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+1204,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+1205,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+1206,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+1207,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+1208,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+1209,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+1210,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+1211,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+1212,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+1213,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+1214,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+1215,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+1216,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+1217,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+1218,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+1219,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                 | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+1220,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                              | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+1221,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+1222,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+1224,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+1226,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+1227,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+1228,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+1229,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+1230,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+1232,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+1233,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+1234,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+1235,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                              & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+1236,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+1238,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+1239,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+1240,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+1241,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+1242,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+1243,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+1244,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+1245,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+1246,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+1247,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+1248,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+1249,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+1250,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+1251,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+1252,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+1253,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+1254,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+1255,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                    >> 9U))));
    bufp->fullBit(oldp+1256,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+1257,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+1258,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+1259,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                              & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                 >> 0x15U))));
    bufp->fullBit(oldp+1260,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+1261,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+1262,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+1263,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+1264,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                 | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+1266,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+1267,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+1268,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+1269,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+1270,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+1271,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+1272,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+1273,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullCData(oldp+1274,((3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),2);
    bufp->fullBit(oldp+1275,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+1276,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+1277,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),31);
    bufp->fullBit(oldp+1278,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+1279,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+1280,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+1281,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),31);
    bufp->fullBit(oldp+1282,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+1283,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+1284,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+1285,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+1286,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+1287,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+1288,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+1289,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+1290,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+1291,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+1292,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+1293,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+1294,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+1295,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+1296,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+1297,(vlSelf->main__DOT__i2ci__DOT__abort_address),31);
    bufp->fullIData(oldp+1298,(vlSelf->main__DOT__i2ci__DOT__jump_target),31);
    bufp->fullBit(oldp+1299,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+1300,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+1301,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+1302,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+1303,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+1304,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+1305,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+1306,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+1307,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+1308,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+1309,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1310,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+1311,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+1312,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+1313,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+1314,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+1315,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+1316,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+1317,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+1318,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+1319,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+1320,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+1321,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+1322,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+1323,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+1324,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+1325,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+1326,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+1327,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+1328,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+1329,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+1330,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+1331,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+1332,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+1333,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+1334,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+1335,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+1336,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+1337,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+1338,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+1354,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+1355,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+1356,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+1357,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+1358,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+1374,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+1390,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+1391,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+1392,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+1393,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+1394,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+1395,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+1396,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+1397,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+1398,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+1399,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1400,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1401,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+1402,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+1403,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1404,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1405,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+1406,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+1407,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+1408,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+1409,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1410,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1411,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+1412,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+1413,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+1414,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1415,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+1416,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1417,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+1418,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+1419,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+1420,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+1421,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+1422,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+1423,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1424,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+1425,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1426,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+1427,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+1428,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+1429,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+1430,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+1431,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+1432,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+1433,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+1434,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+1435,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+1436,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1437,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1438,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1439,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1440,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1441,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1442,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1443,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1444,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1445,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1446,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1447,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1448,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1449,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1450,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1451,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1452,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1453,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1454,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1455,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1456,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1457,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1458,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1459,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1460,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1461,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1462,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1463,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1464,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1465,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1466,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1467,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1468,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1469,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1470,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1471,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1472,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1473,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1474,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1475,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1476,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1477,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1478,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1479,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1480,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1481,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1482,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1483,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1484,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1485,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1486,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1487,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1488,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1489,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1490,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1491,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1492,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1493,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1494,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1495,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1496,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1497,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1498,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1499,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1500,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1501,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1502,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1503,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1504,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1505,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1506,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1507,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1508,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1509,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1510,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1511,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1512,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1513,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1514,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1515,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1516,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1517,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1518,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1519,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1520,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1521,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1522,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1523,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1524,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1525,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1526,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1527,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1528,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1529,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1530,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1531,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1532,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1533,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1534,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1535,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1536,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1537,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1538,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1539,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1540,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1541,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+1542,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+1543,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+1544,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+1545,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+1546,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+1547,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+1548,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullCData(oldp+1549,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+1550,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+1551,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullBit(oldp+1552,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullSData(oldp+1553,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+1554,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+1555,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+1556,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+1557,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+1558,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+1559,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1560,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1561,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1562,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1563,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1564,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1565,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1566,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+1567,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+1568,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+1569,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+1570,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+1571,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+1572,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+1573,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+1574,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+1575,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+1576,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+1577,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+1578,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+1579,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+1580,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+1581,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+1582,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+1583,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+1584,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+1585,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                 | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                        >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+1586,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+1587,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+1588,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+1589,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+1590,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+1591,(vlSelf->main__DOT__swic__DOT__cpu_addr),25);
    bufp->fullIData(oldp+1592,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+1593,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+1594,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+1595,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+1596,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+1597,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+1598,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+1599,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+1600,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                 >> 7U))));
    bufp->fullBit(oldp+1601,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+1602,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+1603,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+1604,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+1605,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+1606,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+1607,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+1608,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+1609,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+1610,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+1611,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+1612,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+1613,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+1614,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+1615,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+1616,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+1617,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+1618,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                              & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+1619,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+1620,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+1621,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+1622,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+1623,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+1624,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+1625,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+1626,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+1627,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+1628,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+1629,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+1630,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+1631,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+1632,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+1633,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+1634,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
    bufp->fullBit(oldp+1635,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+1636,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+1637,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+1638,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+1639,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),25);
    bufp->fullIData(oldp+1640,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+1641,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+1642,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                          >> 2U))))));
    bufp->fullBit(oldp+1643,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+1644,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+1645,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+1646,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+1647,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+1648,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+1649,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+1650,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+1651,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+1652,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+1653,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+1654,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+1655,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),25);
    bufp->fullWData(oldp+1656,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1672,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1674,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1675,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1676,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1677,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1678,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1679,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1680,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1681,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1682,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1683,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1684,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1685,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1686,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1687,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1688,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1689,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1690,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1691,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1707,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1709,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1725,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1726,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1727,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1728,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1729,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1730,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1731,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1732,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1733,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1734,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1735,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1736,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1737,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1738,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1739,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1740,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1741,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1742,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1743,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1744,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1745,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1746,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1747,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1748,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1749,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1750,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1751,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1752,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1753,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1754,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1755,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1756,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1757,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1758,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1759,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1760,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1761,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1762,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1763,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1764,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1765,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1766,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1767,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1768,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1769,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1770,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1771,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1772,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1773,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1774,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1775,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1777,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1778,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1779,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1780,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),31);
    bufp->fullIData(oldp+1781,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),31);
    bufp->fullIData(oldp+1782,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1783,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1784,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),31);
    bufp->fullIData(oldp+1785,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),31);
    bufp->fullSData(oldp+1786,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1787,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1788,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1789,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1790,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1791,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1792,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1793,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1794,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1795,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1796,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1797,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1798,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),31);
    bufp->fullIData(oldp+1799,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),31);
    bufp->fullSData(oldp+1800,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1801,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1802,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1803,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1804,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1805,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1806,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),25);
    bufp->fullQData(oldp+1807,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1809,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1810,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1811,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1812,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1828,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1829,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1830,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1831,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1832,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1848,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1849,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1850,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1851,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1852,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1868,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1869,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1870,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1871,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1872,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1873,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1874,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1875,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1891,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1892,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1893,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1894,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1895,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1896,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1897,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),25);
    bufp->fullQData(oldp+1898,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1900,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1901,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1902,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1903,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1904,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1905,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1906,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1907,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1908,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1909,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1910,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1911,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1912,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1913,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1914,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1915,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1916,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1917,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1918,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),31);
    bufp->fullIData(oldp+1919,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),31);
    bufp->fullCData(oldp+1920,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1921,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1922,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1924,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1926,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1928,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1930,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1931,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1932,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1933,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1934,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1935,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1936,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1952,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1953,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1954,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1986,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1987,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1988,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1989,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1990,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1991,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1992,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+2008,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+2009,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+2010,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),32);
    bufp->fullCData(oldp+2011,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+2012,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+2044,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+2060,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+2064,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+2068,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+2070,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+2071,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+2072,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+2073,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+2074,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+2091,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+2108,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+2125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+2142,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+2159,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+2176,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+2193,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+2210,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+2227,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+2244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+2261,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+2278,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+2295,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+2312,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+2329,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+2346,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+2363,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+2380,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+2381,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+2382,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+2383,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+2384,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+2385,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+2386,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+2387,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+2388,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+2389,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2390,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+2391,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+2392,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+2393,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+2394,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+2395,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+2396,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+2399,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+2400,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+2402,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+2403,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+2404,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+2405,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+2406,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),31);
    bufp->fullIData(oldp+2407,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+2408,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),31);
    bufp->fullBit(oldp+2409,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+2410,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+2412,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+2413,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+2415,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+2416,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),25);
    bufp->fullBit(oldp+2417,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+2418,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+2419,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+2420,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+2421,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),31);
    bufp->fullIData(oldp+2422,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+2423,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+2424,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+2425,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+2426,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+2427,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+2428,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+2429,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+2430,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+2431,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+2432,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+2433,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+2434,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+2435,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),25);
    bufp->fullBit(oldp+2436,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+2437,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+2438,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+2440,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+2442,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+2443,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+2444,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+2445,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+2447,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+2448,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+2450,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+2451,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+2452,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),22);
    bufp->fullIData(oldp+2453,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),22);
    bufp->fullIData(oldp+2454,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),22);
    bufp->fullIData(oldp+2455,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),22);
    bufp->fullIData(oldp+2456,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),22);
    bufp->fullIData(oldp+2457,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),22);
    bufp->fullIData(oldp+2458,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),22);
    bufp->fullIData(oldp+2459,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),22);
    bufp->fullBit(oldp+2460,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+2461,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+2462,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+2463,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+2479,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+2495,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+2496,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+2497,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+2498,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+2514,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+2516,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+2517,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),22);
    bufp->fullBit(oldp+2518,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+2519,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2520,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+2521,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+2522,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+2523,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+2524,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+2525,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+2526,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+2527,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+2528,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+2529,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+2530,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),25);
    bufp->fullCData(oldp+2531,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+2532,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+2533,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                             >> 3U))),22);
    bufp->fullBit(oldp+2534,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+2535,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+2536,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+2537,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),22);
    bufp->fullSData(oldp+2538,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+2539,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+2540,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+2556,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+2572,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+2573,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+2575,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+2576,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+2592,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+2608,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+2609,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+2610,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+2611,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+2612,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+2613,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+2614,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+2615,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+2616,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+2617,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+2618,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+2619,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+2620,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+2621,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+2622,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+2623,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+2624,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+2625,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+2626,((0x7fffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),31);
    bufp->fullBit(oldp+2627,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+2628,(__Vtemp_he3c3974d__0),512);
    bufp->fullIData(oldp+2644,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),19);
    bufp->fullIData(oldp+2645,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),19);
    bufp->fullIData(oldp+2646,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),19);
    bufp->fullIData(oldp+2647,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),19);
    bufp->fullIData(oldp+2648,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),19);
    bufp->fullIData(oldp+2649,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),19);
    bufp->fullIData(oldp+2650,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),19);
    bufp->fullIData(oldp+2651,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),19);
    bufp->fullCData(oldp+2652,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+2653,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+2654,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+2655,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+2656,((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U)) 
                               == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                   >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+2657,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+2658,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),31);
    bufp->fullCData(oldp+2659,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+2660,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),22);
    bufp->fullIData(oldp+2661,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),22);
    bufp->fullIData(oldp+2662,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),22);
    bufp->fullIData(oldp+2663,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U))),22);
    bufp->fullIData(oldp+2664,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U))),22);
    bufp->fullBit(oldp+2665,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2666,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),22);
    bufp->fullWData(oldp+2667,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2683,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2699,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2700,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2701,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2702,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2703,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2704,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2705,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2706,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2707,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2708,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2709,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2710,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2726,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2727,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2728,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2729,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2730,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2731,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2732,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2733,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2734,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2735,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2736,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2737,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2738,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2739,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2740,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2748,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2749,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2750,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2751,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2752,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2753,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2754,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2755,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2756,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2757,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2758,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2759,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2761,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2762,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2763,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2764,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2765,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2766,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2767,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2768,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2769,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2770,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2771,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2772,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2773,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2774,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2775,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),31);
    bufp->fullBit(oldp+2785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2788,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2789,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2790,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2793,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2794,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2795,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2796,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2797,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2798,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2801,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2802,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2803,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2804,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2805,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2806,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2807,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2808,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2809,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2810,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2811,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2812,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2813,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2814,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2815,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2816,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2818,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),31);
    bufp->fullBit(oldp+2819,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2820,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2821,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2822,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2823,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2824,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2829,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2830,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2831,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2833,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),31);
    bufp->fullIData(oldp+2836,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2837,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2838,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2839,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2840,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2841,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2842,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2843,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2844,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2845,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2846,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2847,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2848,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2849,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2850,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),31);
    bufp->fullCData(oldp+2851,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2852,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2853,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2854,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2855,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2856,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2857,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2858,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2859,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2860,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2861,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2862,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2863,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2864,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2865,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2866,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2868,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2869,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2870,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2871,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2873,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2874,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2875,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2876,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2877,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2878,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2879,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2880,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2881,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2882,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2883,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2884,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2885,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2886,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2887,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),31);
    bufp->fullIData(oldp+2888,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),31);
    bufp->fullBit(oldp+2889,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2890,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2891,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2892,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2893,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2894,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2895,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2896,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2897,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2898,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2899,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2900,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2901,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2903,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2905,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2907,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2908,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2911,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2912,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2913,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2914,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2915,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2916,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2917,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),31);
    bufp->fullIData(oldp+2918,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2919,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2920,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2921,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2922,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2923,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2924,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2925,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2926,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2927,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2928,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2929,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2930,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2931,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2933,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2935,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2937,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2939,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2940,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2941,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2942,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2944,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2946,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2949,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2951,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2952,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2953,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2954,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2955,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2957,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2959,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2961,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2963,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2964,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2965,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2966,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2967,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2968,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2969,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2970,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2971,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2972,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2973,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2974,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2975,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2976,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2977,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2978,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2979,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2980,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2981,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2982,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2983,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2986,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2988,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2989,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2991,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2992,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2993,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2994,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2999,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+3000,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+3001,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+3002,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+3003,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+3004,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+3005,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+3006,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+3007,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+3008,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+3009,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+3010,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+3011,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+3012,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+3013,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+3014,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+3015,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+3016,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+3017,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+3018,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+3019,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+3020,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3021,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3022,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+3023,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+3024,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+3025,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+3026,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+3027,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3028,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3029,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+3030,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+3031,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+3032,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+3033,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+3034,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3035,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3036,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+3037,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+3038,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+3039,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+3040,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+3041,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+3042,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+3043,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+3044,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+3045,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+3046,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullCData(oldp+3047,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),3);
    bufp->fullSData(oldp+3048,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+3049,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+3050,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+3051,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+3052,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+3053,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+3054,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+3055,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+3056,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+3057,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+3058,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+3059,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+3060,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+3061,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+3062,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+3063,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+3064,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+3065,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+3066,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+3067,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+3068,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+3069,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+3070,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+3071,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+3072,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+3073,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+3074,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+3075,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),2);
    bufp->fullBit(oldp+3076,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+3077,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+3078,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+3079,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+3080,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+3081,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+3082,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+3083,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+3084,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+3085,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+3086,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+3087,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+3088,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+3089,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+3090,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+3091,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+3092,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+3093,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+3094,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+3095,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+3096,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+3097,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+3098,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+3099,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+3100,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+3101,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+3102,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+3103,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+3104,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+3105,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+3106,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+3107,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+3108,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+3109,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+3110,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+3111,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+3112,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+3113,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+3114,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+3115,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullBit(oldp+3116,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+3117,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+3118,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+3119,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+3120,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+3121,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+3122,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+3123,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+3124,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+3125,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+3126,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+3127,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+3128,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+3129,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+3130,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+3131,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+3132,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+3133,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+3134,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+3135,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+3136,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+3137,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+3138,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+3139,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+3140,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullCData(oldp+3141,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 8U))),2);
    bufp->fullBit(oldp+3142,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+3143,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),31);
    bufp->fullIData(oldp+3144,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),31);
    bufp->fullCData(oldp+3145,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+3146,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),31);
    bufp->fullIData(oldp+3147,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+3148,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullBit(oldp+3149,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+3150,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+3151,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+3152,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+3153,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+3154,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+3155,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+3156,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+3157,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+3158,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+3159,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+3160,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullCData(oldp+3161,((0xfU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),4);
    bufp->fullBit(oldp+3162,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+3163,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+3164,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+3165,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+3166,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+3182,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+3198,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+3200,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+3202,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+3203,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullCData(oldp+3204,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullBit(oldp+3205,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+3206,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+3207,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+3208,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullIData(oldp+3209,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullBit(oldp+3210,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+3211,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+3212,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+3213,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+3214,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+3215,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+3216,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+3217,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+3218,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+3219,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+3220,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+3221,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+3222,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+3223,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+3224,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+3225,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+3226,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+3227,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+3228,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+3229,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+3230,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+3231,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+3232,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+3233,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+3234,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+3235,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+3236,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+3237,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+3238,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+3239,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+3240,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+3241,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+3242,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+3243,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+3244,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+3245,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+3246,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+3247,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+3248,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+3249,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+3250,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+3251,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),11);
    bufp->fullSData(oldp+3252,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),11);
    bufp->fullSData(oldp+3253,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),11);
    bufp->fullWData(oldp+3254,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),88);
    bufp->fullWData(oldp+3257,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),352);
    bufp->fullQData(oldp+3268,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),44);
    bufp->fullSData(oldp+3270,(((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                << 0xaU)),11);
    bufp->fullSData(oldp+3271,((((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
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
    bufp->fullWData(oldp+3272,(__Vtemp_h33b103d1__0),352);
    bufp->fullSData(oldp+3283,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),12);
    bufp->fullSData(oldp+3284,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),12);
    bufp->fullBit(oldp+3285,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullSData(oldp+3286,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),11);
    bufp->fullCData(oldp+3287,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3288,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+3289,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3290,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullBit(oldp+3291,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3292,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullCData(oldp+3293,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),8);
    bufp->fullIData(oldp+3294,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3295,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullSData(oldp+3296,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullIData(oldp+3297,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3298,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3299,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3300,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3301,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3302,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3303,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3304,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3305,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3306,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3307,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3308,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3309,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3310,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3311,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3312,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullSData(oldp+3313,(((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
    bufp->fullBit(oldp+3314,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3315,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3316,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3317,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3318,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3319,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x2cU)))));
    bufp->fullCData(oldp+3320,((0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                 >> 0x24U)))),8);
    bufp->fullIData(oldp+3321,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+3322,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullSData(oldp+3323,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),12);
    bufp->fullBit(oldp+3324,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3325,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x2cU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullCData(oldp+3327,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),8);
    bufp->fullQData(oldp+3328,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+3330,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),11);
    bufp->fullQData(oldp+3331,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),45);
    bufp->fullQData(oldp+3333,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),45);
    bufp->fullQData(oldp+3335,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),45);
    bufp->fullIData(oldp+3337,((0x1fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),29);
    bufp->fullBit(oldp+3338,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+3339,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+3355,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+3356,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+3357,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+3358,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+3359,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+3360,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+3361,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+3377,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+3379,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+3380,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+3381,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+3382,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+3383,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+3384,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+3385,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+3386,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+3387,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+3388,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+3389,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+3390,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+3391,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+3392,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+3393,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+3394,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+3395,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+3396,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+3397,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+3398,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+3399,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+3400,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+3401,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+3402,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+3403,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+3404,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+3405,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+3406,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+3407,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+3408,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+3409,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+3410,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+3411,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+3412,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+3413,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+3414,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+3415,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+3416,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+3417,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+3418,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+3419,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),60);
    bufp->fullQData(oldp+3421,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+3423,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+3424,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+3426,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+3427,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+3428,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+3429,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+3430,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+3431,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3432,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+3433,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3434,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+3435,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3436,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+3437,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),30);
    bufp->fullIData(oldp+3438,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3439,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+3440,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3441,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3442,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3443,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+3444,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+3445,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3446,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3447,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3448,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3449,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3450,((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                    >> 2U))));
    bufp->fullIData(oldp+3451,((0x3fffffffU & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                << 0x1cU) 
                                               | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                  >> 4U)))),30);
    bufp->fullIData(oldp+3452,(((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                 << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+3453,((0xfU & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])),4);
    bufp->fullCData(oldp+3454,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3455,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3456,((((QData)((IData)((1U 
                                                  & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                     >> 2U)))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))))),37);
    bufp->fullIData(oldp+3458,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),30);
    bufp->fullQData(oldp+3459,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+3461,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3462,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),67);
    bufp->fullWData(oldp+3465,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),67);
    bufp->fullWData(oldp+3468,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),67);
    bufp->fullCData(oldp+3471,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+3472,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+3473,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
    bufp->fullWData(oldp+3474,(__Vtemp_h2146f57f__0),100);
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
    bufp->fullWData(oldp+3478,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+3542,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+3550,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+3551,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+3552,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+3616,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+3617,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),3);
    bufp->fullCData(oldp+3618,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),3);
    bufp->fullCData(oldp+3619,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),3);
    bufp->fullWData(oldp+3620,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),75);
    bufp->fullWData(oldp+3623,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1536);
    bufp->fullWData(oldp+3671,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),192);
    bufp->fullCData(oldp+3677,((((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                 << 2U) | (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))),3);
    bufp->fullCData(oldp+3678,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                  [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                 << 2U) | (((IData)(vlSelf->main__DOT__wbwide_bkram_ack) 
                                            << 1U) 
                                           | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack)))),3);
    __Vtemp_h9e08da6e__0[0U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0U];
    __Vtemp_h9e08da6e__0[1U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[1U];
    __Vtemp_h9e08da6e__0[2U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[2U];
    __Vtemp_h9e08da6e__0[3U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[3U];
    __Vtemp_h9e08da6e__0[4U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[4U];
    __Vtemp_h9e08da6e__0[5U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[5U];
    __Vtemp_h9e08da6e__0[6U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[6U];
    __Vtemp_h9e08da6e__0[7U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[7U];
    __Vtemp_h9e08da6e__0[8U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[8U];
    __Vtemp_h9e08da6e__0[9U] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[9U];
    __Vtemp_h9e08da6e__0[0xaU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xaU];
    __Vtemp_h9e08da6e__0[0xbU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xbU];
    __Vtemp_h9e08da6e__0[0xcU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xcU];
    __Vtemp_h9e08da6e__0[0xdU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xdU];
    __Vtemp_h9e08da6e__0[0xeU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xeU];
    __Vtemp_h9e08da6e__0[0xfU] = vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data[0xfU];
    __Vtemp_h9e08da6e__0[0x10U] = vlSelf->main__DOT__wbwide_bkram_idata[0U];
    __Vtemp_h9e08da6e__0[0x11U] = vlSelf->main__DOT__wbwide_bkram_idata[1U];
    __Vtemp_h9e08da6e__0[0x12U] = vlSelf->main__DOT__wbwide_bkram_idata[2U];
    __Vtemp_h9e08da6e__0[0x13U] = vlSelf->main__DOT__wbwide_bkram_idata[3U];
    __Vtemp_h9e08da6e__0[0x14U] = vlSelf->main__DOT__wbwide_bkram_idata[4U];
    __Vtemp_h9e08da6e__0[0x15U] = vlSelf->main__DOT__wbwide_bkram_idata[5U];
    __Vtemp_h9e08da6e__0[0x16U] = vlSelf->main__DOT__wbwide_bkram_idata[6U];
    __Vtemp_h9e08da6e__0[0x17U] = vlSelf->main__DOT__wbwide_bkram_idata[7U];
    __Vtemp_h9e08da6e__0[0x18U] = vlSelf->main__DOT__wbwide_bkram_idata[8U];
    __Vtemp_h9e08da6e__0[0x19U] = vlSelf->main__DOT__wbwide_bkram_idata[9U];
    __Vtemp_h9e08da6e__0[0x1aU] = vlSelf->main__DOT__wbwide_bkram_idata[0xaU];
    __Vtemp_h9e08da6e__0[0x1bU] = vlSelf->main__DOT__wbwide_bkram_idata[0xbU];
    __Vtemp_h9e08da6e__0[0x1cU] = vlSelf->main__DOT__wbwide_bkram_idata[0xcU];
    __Vtemp_h9e08da6e__0[0x1dU] = vlSelf->main__DOT__wbwide_bkram_idata[0xdU];
    __Vtemp_h9e08da6e__0[0x1eU] = vlSelf->main__DOT__wbwide_bkram_idata[0xeU];
    __Vtemp_h9e08da6e__0[0x1fU] = vlSelf->main__DOT__wbwide_bkram_idata[0xfU];
    __Vtemp_h9e08da6e__0[0x20U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0U];
    __Vtemp_h9e08da6e__0[0x21U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[1U];
    __Vtemp_h9e08da6e__0[0x22U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[2U];
    __Vtemp_h9e08da6e__0[0x23U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[3U];
    __Vtemp_h9e08da6e__0[0x24U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[4U];
    __Vtemp_h9e08da6e__0[0x25U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[5U];
    __Vtemp_h9e08da6e__0[0x26U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[6U];
    __Vtemp_h9e08da6e__0[0x27U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[7U];
    __Vtemp_h9e08da6e__0[0x28U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[8U];
    __Vtemp_h9e08da6e__0[0x29U] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[9U];
    __Vtemp_h9e08da6e__0[0x2aU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xaU];
    __Vtemp_h9e08da6e__0[0x2bU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xbU];
    __Vtemp_h9e08da6e__0[0x2cU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xcU];
    __Vtemp_h9e08da6e__0[0x2dU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xdU];
    __Vtemp_h9e08da6e__0[0x2eU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xeU];
    __Vtemp_h9e08da6e__0[0x2fU] = vlSelf->main__DOT__wbwide_ddr3_controller_idata[0xfU];
    bufp->fullWData(oldp+3679,(__Vtemp_h9e08da6e__0),1536);
    bufp->fullCData(oldp+3727,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err),3);
    bufp->fullCData(oldp+3728,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),4);
    bufp->fullCData(oldp+3729,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),4);
    bufp->fullCData(oldp+3730,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),4);
    bufp->fullCData(oldp+3731,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),4);
    bufp->fullCData(oldp+3732,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),3);
    bufp->fullCData(oldp+3733,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),3);
    bufp->fullCData(oldp+3734,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),3);
    bufp->fullCData(oldp+3735,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),3);
    bufp->fullCData(oldp+3736,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),4);
    bufp->fullCData(oldp+3737,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),4);
    bufp->fullCData(oldp+3738,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),4);
    bufp->fullCData(oldp+3739,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),4);
    bufp->fullCData(oldp+3740,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+3741,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),3);
    bufp->fullCData(oldp+3742,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+3743,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+3744,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+3745,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+3746,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+3747,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+3748,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+3750,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+3751,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+3752,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+3753,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+3754,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+3755,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+3756,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),25);
    bufp->fullIData(oldp+3757,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),25);
    bufp->fullIData(oldp+3758,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),25);
    bufp->fullWData(oldp+3759,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+3775,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+3791,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+3807,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+3823,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+3825,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+3827,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+3829,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullCData(oldp+3831,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullWData(oldp+3832,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3848,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3864,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3880,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullCData(oldp+3896,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullCData(oldp+3897,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+3898,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullIData(oldp+3899,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3900,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3901,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3902,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3903,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3904,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3905,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3906,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3907,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3908,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3909,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3910,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3911,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3912,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3913,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3914,(__Vtemp_h0fd98bf7__0),512);
    bufp->fullQData(oldp+3930,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3932,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3933,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3934,(__Vtemp_h3b245e0e__0),577);
    bufp->fullBit(oldp+3953,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3954,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3955,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3974,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3975,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+3994,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4013,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4032,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4033,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4034,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4035,(__Vtemp_hcb138391__0),512);
    bufp->fullQData(oldp+4051,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4053,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4054,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4055,(__Vtemp_hf41d9735__0),577);
    bufp->fullBit(oldp+4074,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4075,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4076,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4095,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),3);
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
    bufp->fullWData(oldp+4096,(__Vtemp_h6283f4ea__0),602);
    bufp->fullWData(oldp+4115,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4134,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4153,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4154,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4155,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4156,(__Vtemp_hb4195529__0),512);
    bufp->fullQData(oldp+4172,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4174,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4175,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4176,(__Vtemp_hb863f640__0),577);
    bufp->fullBit(oldp+4195,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4196,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4197,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4216,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+4217,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+4236,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4255,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4274,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4275,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4276,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4277,(__Vtemp_h61e633ab__0),512);
    bufp->fullQData(oldp+4293,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4295,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4296,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4297,(__Vtemp_h43fd6509__0),577);
    bufp->fullBit(oldp+4316,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4317,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4318,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4337,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+4338,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+4357,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4376,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullCData(oldp+4395,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4396,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4397,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4398,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4399,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4400,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4401,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4402,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4403,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4404,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4405,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4406,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),12);
    bufp->fullCData(oldp+4407,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4408,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4409,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4410,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4411,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4412,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4413,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4414,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4415,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4416,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4417,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4418,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4419,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4420,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4421,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4422,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4423,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4424,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4425,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4426,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullBit(oldp+4427,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4428,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4429,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4430,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4431,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4432,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4433,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4434,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4435,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4436,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4437,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4438,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4439,(vlSelf->i_clk));
    bufp->fullBit(oldp+4440,(vlSelf->i_reset));
    bufp->fullWData(oldp+4441,(vlSelf->i_ddr3_controller_iserdes_data),512);
    bufp->fullQData(oldp+4457,(vlSelf->i_ddr3_controller_iserdes_dqs),64);
    bufp->fullQData(oldp+4459,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),64);
    bufp->fullBit(oldp+4461,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4462,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4465,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4466,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4467,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullWData(oldp+4468,(vlSelf->o_ddr3_controller_data),512);
    bufp->fullQData(oldp+4484,(vlSelf->o_ddr3_controller_dm),64);
    bufp->fullCData(oldp+4486,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4487,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4488,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4489,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4490,(vlSelf->o_ddr3_controller_odelay_data_ld),8);
    bufp->fullCData(oldp+4491,(vlSelf->o_ddr3_controller_odelay_dqs_ld),8);
    bufp->fullCData(oldp+4492,(vlSelf->o_ddr3_controller_idelay_data_ld),8);
    bufp->fullCData(oldp+4493,(vlSelf->o_ddr3_controller_idelay_dqs_ld),8);
    bufp->fullCData(oldp+4494,(vlSelf->o_ddr3_controller_bitslip),8);
    bufp->fullBit(oldp+4495,(vlSelf->o_ddr3_controller_leveling_calib));
    bufp->fullCData(oldp+4496,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4497,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4498,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4499,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4500,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4501,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4502,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4503,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4504,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4505,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4506,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4507,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4508,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4509,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4510,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4511,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4512,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4513,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4514,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4515,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4516,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4517,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4518,(vlSelf->cpu_prof_addr),31);
    bufp->fullIData(oldp+4519,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4520,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4521,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4522,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4523,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4524,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4525,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4526,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4527,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4528,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4529,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4530,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & vlSelf->i_ddr3_controller_iserdes_data[1U]))),32);
    bufp->fullIData(oldp+4531,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & vlSelf->i_ddr3_controller_iserdes_data[0U]))),32);
    bufp->fullIData(oldp+4532,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4533,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4534,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4535,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4536,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->fullBit(oldp+4537,((0U == (((((((((((((((
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
    bufp->fullSData(oldp+4538,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4539,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[1U])),31);
    bufp->fullIData(oldp+4540,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[0U])),31);
    bufp->fullBit(oldp+4541,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullCData(oldp+4542,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4543,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),31);
    bufp->fullBit(oldp+4544,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4545,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4546,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4547,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4548,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4549,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4550,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4551,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4552,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4553,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullIData(oldp+4554,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4555,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4556,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4557,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullBit(oldp+4558,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullCData(oldp+4559,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4560,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4561,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullBit(oldp+4562,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4563,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4564,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullIData(oldp+4565,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4566,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4567,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4568,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4569,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4570,(10.0));
    bufp->fullDouble(oldp+4572,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4574,(0xeU),32);
    bufp->fullIData(oldp+4575,(0xaU),32);
    bufp->fullIData(oldp+4576,(3U),32);
    bufp->fullIData(oldp+4577,(8U),32);
    bufp->fullIData(oldp+4578,(1U),32);
    bufp->fullIData(oldp+4579,(4U),32);
    bufp->fullIData(oldp+4580,(0x18U),32);
    bufp->fullIData(oldp+4581,(0x4000000U),32);
    bufp->fullIData(oldp+4582,(0x19U),32);
    bufp->fullIData(oldp+4583,(0x10U),32);
    bufp->fullBit(oldp+4584,(1U));
    bufp->fullIData(oldp+4585,(0x64U),24);
    bufp->fullIData(oldp+4586,(7U),32);
    bufp->fullIData(oldp+4587,(0x13U),32);
    bufp->fullIData(oldp+4588,(2U),32);
    bufp->fullIData(oldp+4589,(0U),32);
    bufp->fullBit(oldp+4590,(0U));
    bufp->fullBit(oldp+4591,(1U));
    bufp->fullWData(oldp+4592,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4608,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+4610,(vlSelf->main__DOT__wb32_buildtime_addr),8);
    bufp->fullBit(oldp+4611,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4612,(0x191825U),32);
    bufp->fullCData(oldp+4613,(vlSelf->main__DOT__wb32_gpio_addr),8);
    bufp->fullBit(oldp+4614,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullCData(oldp+4615,(vlSelf->main__DOT__wb32_sirefclk_addr),8);
    bufp->fullBit(oldp+4616,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullCData(oldp+4617,(vlSelf->main__DOT__wb32_spio_addr),8);
    bufp->fullBit(oldp+4618,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullCData(oldp+4619,(vlSelf->main__DOT__wb32_version_addr),8);
    bufp->fullBit(oldp+4620,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4621,(0x20230907U),32);
    bufp->fullCData(oldp+4622,(0xfU),4);
    bufp->fullCData(oldp+4623,(0x20U),8);
    bufp->fullIData(oldp+4624,(0x14U),32);
    bufp->fullIData(oldp+4625,(0x200U),32);
    bufp->fullCData(oldp+4626,(0U),8);
    bufp->fullBit(oldp+4627,(0U));
    bufp->fullIData(oldp+4628,(0x20U),32);
    bufp->fullCData(oldp+4629,(6U),4);
    bufp->fullCData(oldp+4630,(0U),2);
    bufp->fullCData(oldp+4631,(1U),2);
    bufp->fullCData(oldp+4632,(2U),2);
    bufp->fullCData(oldp+4633,(3U),2);
    bufp->fullIData(oldp+4634,(0x40U),32);
    bufp->fullCData(oldp+4635,(0U),4);
    bufp->fullCData(oldp+4636,(1U),4);
    bufp->fullCData(oldp+4637,(2U),4);
    bufp->fullCData(oldp+4638,(3U),4);
    bufp->fullCData(oldp+4639,(4U),4);
    bufp->fullCData(oldp+4640,(5U),4);
    bufp->fullCData(oldp+4641,(7U),4);
    bufp->fullIData(oldp+4642,(0x1bU),32);
    bufp->fullIData(oldp+4643,(0x1aU),32);
    bufp->fullIData(oldp+4644,(0x17U),32);
    bufp->fullIData(oldp+4645,(0x16U),32);
    bufp->fullIData(oldp+4646,(0x12U),32);
    bufp->fullIData(oldp+4647,(0x15U),32);
    bufp->fullIData(oldp+4648,(0x11U),32);
    bufp->fullIData(oldp+4649,(0xdU),32);
    bufp->fullIData(oldp+4650,(0x30d40U),32);
    bufp->fullIData(oldp+4651,(0x7a120U),32);
    bufp->fullDouble(oldp+4652,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4654,(0x23U),32);
    bufp->fullDouble(oldp+4655,(350.0));
    bufp->fullIData(oldp+4657,(0x1e78U),32);
    bufp->fullDouble(oldp+4658,(360.0));
    bufp->fullDouble(oldp+4660,(15.0));
    bufp->fullIData(oldp+4662,(0xaU),19);
    bufp->fullDouble(oldp+4663,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4665,(0x80U),32);
    bufp->fullIData(oldp+4666,(6U),32);
    bufp->fullIData(oldp+4667,(5U),32);
    bufp->fullIData(oldp+4668,(0xc350U),19);
    bufp->fullIData(oldp+4669,(9U),32);
    bufp->fullIData(oldp+4670,(0xbU),32);
    bufp->fullIData(oldp+4671,(0xcU),32);
    bufp->fullIData(oldp+4672,(0xfU),32);
    bufp->fullCData(oldp+4673,(0U),3);
    bufp->fullCData(oldp+4674,(2U),3);
    bufp->fullIData(oldp+4675,(0x20040U),19);
    bufp->fullCData(oldp+4676,(3U),3);
    bufp->fullIData(oldp+4677,(0x30004U),19);
    bufp->fullIData(oldp+4678,(0x30000U),19);
    bufp->fullCData(oldp+4679,(1U),3);
    bufp->fullIData(oldp+4680,(0x100c4U),19);
    bufp->fullIData(oldp+4681,(0x10044U),19);
    bufp->fullIData(oldp+4682,(0x720U),19);
    bufp->fullIData(oldp+4683,(0x4380005U),28);
    bufp->fullIData(oldp+4684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4691,(0x1eU),32);
    bufp->fullIData(oldp+4692,(0x24U),32);
    bufp->fullIData(oldp+4693,(0x400U),32);
    bufp->fullCData(oldp+4694,(0U),5);
    bufp->fullQData(oldp+4695,(0x100000000ULL),36);
    bufp->fullQData(oldp+4697,(0x40000000ULL),36);
    bufp->fullQData(oldp+4699,(0ULL),36);
    bufp->fullCData(oldp+4701,(0x4fU),7);
    bufp->fullCData(oldp+4702,(0x49U),7);
    bufp->fullIData(oldp+4703,(0x1fU),32);
    bufp->fullIData(oldp+4704,(0U),31);
    bufp->fullSData(oldp+4705,(0xfffU),12);
    bufp->fullCData(oldp+4706,(8U),4);
    bufp->fullCData(oldp+4707,(9U),4);
    bufp->fullCData(oldp+4708,(0xaU),4);
    bufp->fullCData(oldp+4709,(0xbU),4);
    bufp->fullCData(oldp+4710,(0xcU),4);
    bufp->fullCData(oldp+4711,(0xdU),4);
    bufp->fullCData(oldp+4712,(4U),3);
    bufp->fullCData(oldp+4713,(5U),3);
    bufp->fullCData(oldp+4714,(6U),3);
    bufp->fullCData(oldp+4715,(7U),3);
    bufp->fullCData(oldp+4716,(0xaU),5);
    bufp->fullIData(oldp+4717,(0x1fcU),20);
    bufp->fullIData(oldp+4718,(0x7fffffffU),31);
    bufp->fullCData(oldp+4719,(0x64U),7);
    bufp->fullCData(oldp+4720,(0x32U),7);
    bufp->fullIData(oldp+4721,(0xc0000000U),32);
    bufp->fullCData(oldp+4722,(1U),8);
    bufp->fullCData(oldp+4723,(2U),8);
    bufp->fullCData(oldp+4724,(3U),8);
    bufp->fullCData(oldp+4725,(4U),8);
    bufp->fullCData(oldp+4726,(5U),8);
    bufp->fullCData(oldp+4727,(6U),8);
    bufp->fullCData(oldp+4728,(7U),8);
    bufp->fullCData(oldp+4729,(8U),8);
    bufp->fullCData(oldp+4730,(9U),8);
    bufp->fullCData(oldp+4731,(0xaU),8);
    bufp->fullCData(oldp+4732,(0xbU),8);
    bufp->fullCData(oldp+4733,(0xcU),8);
    bufp->fullCData(oldp+4734,(0xdU),8);
    bufp->fullCData(oldp+4735,(0xeU),8);
    bufp->fullCData(oldp+4736,(0xfU),8);
    bufp->fullCData(oldp+4737,(0x80U),8);
    bufp->fullCData(oldp+4738,(0x10U),8);
    bufp->fullIData(oldp+4739,(0U),20);
    bufp->fullIData(oldp+4740,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4741,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4744,(0x41425254U),32);
    bufp->fullIData(oldp+4745,(0x40U),32);
    bufp->fullBit(oldp+4746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4747,(0x1dU),32);
    bufp->fullIData(oldp+4748,(0x1000000U),29);
    bufp->fullCData(oldp+4749,(0xeU),4);
    bufp->fullSData(oldp+4750,(0x1d7U),9);
    bufp->fullSData(oldp+4751,(0x2000U),14);
    bufp->fullCData(oldp+4752,(7U),5);
    bufp->fullIData(oldp+4753,(0x5f5e100U),32);
    bufp->fullIData(oldp+4754,(0x186a0U),32);
    bufp->fullIData(oldp+4755,(0x4e20U),32);
    bufp->fullIData(oldp+4756,(0x1387U),32);
    bufp->fullSData(oldp+4757,(0xc8U),12);
    bufp->fullIData(oldp+4758,(0x10U),32);
    __Vtemp_h2308cdb3__0[0U] = 0x18100800U;
    __Vtemp_h2308cdb3__0[1U] = 0x38302820U;
    __Vtemp_h2308cdb3__0[2U] = 0x806040U;
    bufp->fullWData(oldp+4759,(__Vtemp_h2308cdb3__0),88);
    __Vtemp_h382813b1__0[0U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[1U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[2U] = 0x80e0f8U;
    bufp->fullWData(oldp+4762,(__Vtemp_h382813b1__0),88);
    bufp->fullSData(oldp+4765,(0U),11);
    bufp->fullSData(oldp+4766,(0xf800U),16);
    bufp->fullIData(oldp+4767,(0x25U),32);
    bufp->fullSData(oldp+4768,(0x7ffU),11);
    bufp->fullIData(oldp+4769,(0x2dU),32);
    bufp->fullQData(oldp+4770,(0x800000000000000ULL),60);
    bufp->fullQData(oldp+4772,(0xe00000020000000ULL),60);
    bufp->fullIData(oldp+4774,(0x43U),32);
    __Vtemp_h5259539f__0[0U] = 0x80000U;
    __Vtemp_h5259539f__0[1U] = 0x2000U;
    __Vtemp_h5259539f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4775,(__Vtemp_h5259539f__0),75);
    __Vtemp_ha5e9189f__0[0U] = 0x1f80000U;
    __Vtemp_ha5e9189f__0[1U] = 0x3f000U;
    __Vtemp_ha5e9189f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4778,(__Vtemp_ha5e9189f__0),75);
    bufp->fullIData(oldp+4781,(0x241U),32);
    bufp->fullIData(oldp+4782,(0x25aU),32);
}
