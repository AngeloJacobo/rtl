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
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declArray(c+4454,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4470,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4472,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4474,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4475,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4478,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4479,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4480,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4481,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4497,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4499,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4500,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4501,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4502,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4503,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4504,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4505,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4506,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4507,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBit(c+4508,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBit(c+4509,"o_ddr3_controller_reset", false,-1);
    tracep->declBus(c+4510,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4511,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4512,"i_fan_sda", false,-1);
    tracep->declBit(c+4513,"i_fan_scl", false,-1);
    tracep->declBit(c+4514,"o_fan_sda", false,-1);
    tracep->declBit(c+4515,"o_fan_scl", false,-1);
    tracep->declBit(c+4516,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4517,"o_sys_pwm", false,-1);
    tracep->declBit(c+4518,"i_fan_tach", false,-1);
    tracep->declBit(c+4519,"i_i2c_sda", false,-1);
    tracep->declBit(c+4520,"i_i2c_scl", false,-1);
    tracep->declBit(c+4521,"o_i2c_sda", false,-1);
    tracep->declBit(c+4522,"o_i2c_scl", false,-1);
    tracep->declBit(c+4523,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4524,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4525,"cpu_sim_we", false,-1);
    tracep->declBus(c+4526,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4527,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4528,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4529,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4530,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4531,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4532,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4533,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4534,"i_cpu_reset", false,-1);
    tracep->declBit(c+4535,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4536,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4537,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4538,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4539,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4540,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4541,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4542,"o_led", false,-1, 7,0);
    tracep->declBit(c+4543,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4584,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4586,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4588,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4589,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4590,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4591,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4591,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4591,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4593,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4594,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4595,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4596,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4597,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4598,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4599,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4596,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4600,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4590,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declArray(c+4454,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4470,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4472,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4474,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4475,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4478,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4479,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4480,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4481,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4497,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4499,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4500,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4501,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4502,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4503,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4504,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4505,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4506,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4507,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBit(c+4508,"o_ddr3_controller_leveling_calib", false,-1);
    tracep->declBit(c+4509,"o_ddr3_controller_reset", false,-1);
    tracep->declBus(c+4510,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4511,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4512,"i_fan_sda", false,-1);
    tracep->declBit(c+4513,"i_fan_scl", false,-1);
    tracep->declBit(c+4514,"o_fan_sda", false,-1);
    tracep->declBit(c+4515,"o_fan_scl", false,-1);
    tracep->declBit(c+4516,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4517,"o_sys_pwm", false,-1);
    tracep->declBit(c+4518,"i_fan_tach", false,-1);
    tracep->declBit(c+4519,"i_i2c_sda", false,-1);
    tracep->declBit(c+4520,"i_i2c_scl", false,-1);
    tracep->declBit(c+4521,"o_i2c_sda", false,-1);
    tracep->declBit(c+4522,"o_i2c_scl", false,-1);
    tracep->declBit(c+4523,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4524,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4525,"cpu_sim_we", false,-1);
    tracep->declBus(c+4526,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4527,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4528,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4529,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4530,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4531,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4532,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4533,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4534,"i_cpu_reset", false,-1);
    tracep->declBit(c+4535,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4536,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4537,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4596,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4591,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4538,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4539,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4540,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4541,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4542,"o_led", false,-1, 7,0);
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
    tracep->declBus(c+145,"ddr3_controller_aux_out", false,-1, 7,0);
    tracep->declBus(c+35,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+4544,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4545,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+146,"r_sirefclk_en", false,-1);
    tracep->declBus(c+147,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+148,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+149,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+150,"i2cdma_ready", false,-1);
    tracep->declBus(c+4546,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4601,"I2C_ID_WIDTH", false,-1, 31,0);
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
    tracep->declBus(c+4602,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4603,"zip_trigger", false,-1);
    tracep->declBus(c+164,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+165,"zip_cpu_int", false,-1);
    tracep->declBit(c+4543,"i_clk200", false,-1);
    tracep->declBus(c+166,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+167,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+168,"wbu_rx_stb", false,-1);
    tracep->declBit(c+169,"wbu_tx_stb", false,-1);
    tracep->declBit(c+170,"wbu_tx_busy", false,-1);
    tracep->declBus(c+171,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4602,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+172,"w_led", false,-1, 7,0);
    tracep->declBus(c+173,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+174,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+175,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+176,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4604,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+177,"wbwide_i2cdma_addr", false,-1, 24,0);
    tracep->declArray(c+178,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+197,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+198,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+199,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+215,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+216,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4603,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+217,"wbwide_i2cm_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4621,"wbwide_i2cm_sel", false,-1, 63,0);
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
    tracep->declBit(c+4603,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+382,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4603,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+383,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+399,"wbwide_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+400,"wbwide_ddr3_controller_stb", false,-1);
    tracep->declBit(c+401,"wbwide_ddr3_controller_we", false,-1);
    tracep->declBus(c+402,"wbwide_ddr3_controller_addr", false,-1, 24,0);
    tracep->declArray(c+403,"wbwide_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+419,"wbwide_ddr3_controller_sel", false,-1, 63,0);
    tracep->declBit(c+421,"wbwide_ddr3_controller_stall", false,-1);
    tracep->declBit(c+422,"wbwide_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4603,"wbwide_ddr3_controller_err", false,-1);
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
    tracep->declBus(c+4623,"wb32_buildtime_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+450,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4624,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4625,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+454,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+451,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4626,"wb32_gpio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+454,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4627,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4547,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+455,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+451,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4628,"wb32_sirefclk_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+149,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4629,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+456,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+457,"wb32_spio_stb", false,-1);
    tracep->declBit(c+451,"wb32_spio_we", false,-1);
    tracep->declBus(c+4630,"wb32_spio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_spio_stall", false,-1);
    tracep->declBit(c+458,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4631,"wb32_spio_err", false,-1);
    tracep->declBus(c+459,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_version_cyc", false,-1);
    tracep->declBit(c+460,"wb32_version_stb", false,-1);
    tracep->declBit(c+451,"wb32_version_we", false,-1);
    tracep->declBus(c+4632,"wb32_version_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_version_stall", false,-1);
    tracep->declBit(c+460,"wb32_version_ack", false,-1);
    tracep->declBit(c+4633,"wb32_version_err", false,-1);
    tracep->declBus(c+4634,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+461,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+462,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+463,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+464,"wb32_i2cscope_addr", false,-1, 7,0);
    tracep->declBus(c+465,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+466,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+467,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4603,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+468,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+469,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+470,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+471,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+472,"wb32_scope1_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+473,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+474,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+475,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4603,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+476,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+477,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+478,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+479,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+480,"wb32_scope2_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+481,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+482,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+483,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4603,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+484,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+485,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+486,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+487,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+488,"wb32_scope3_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+489,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+490,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+491,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4603,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+492,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+493,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+494,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+495,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+496,"wb32_i2cs_addr", false,-1, 7,0);
    tracep->declBus(c+497,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+498,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+499,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4603,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+500,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+501,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+502,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+503,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+504,"wb32_i2cdma_addr", false,-1, 7,0);
    tracep->declBus(c+505,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+506,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+507,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4603,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+508,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+509,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+510,"wb32_uart_stb", false,-1);
    tracep->declBit(c+511,"wb32_uart_we", false,-1);
    tracep->declBus(c+512,"wb32_uart_addr", false,-1, 7,0);
    tracep->declBus(c+513,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+514,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_uart_stall", false,-1);
    tracep->declBit(c+515,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4603,"wb32_uart_err", false,-1);
    tracep->declBus(c+516,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+517,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+518,"wb32_fan_stb", false,-1);
    tracep->declBit(c+519,"wb32_fan_we", false,-1);
    tracep->declBus(c+520,"wb32_fan_addr", false,-1, 7,0);
    tracep->declBus(c+521,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+522,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_fan_stall", false,-1);
    tracep->declBit(c+523,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4603,"wb32_fan_err", false,-1);
    tracep->declBus(c+524,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+449,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+525,"wb32_sio_stb", false,-1);
    tracep->declBit(c+451,"wb32_sio_we", false,-1);
    tracep->declBus(c+526,"wb32_sio_addr", false,-1, 7,0);
    tracep->declBus(c+452,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+453,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_sio_stall", false,-1);
    tracep->declBit(c+527,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4603,"wb32_sio_err", false,-1);
    tracep->declBus(c+528,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+529,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+530,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+531,"wb32_cfg_we", false,-1);
    tracep->declBus(c+532,"wb32_cfg_addr", false,-1, 7,0);
    tracep->declBus(c+533,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+534,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+535,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4603,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4602,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+536,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+537,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+538,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+539,"wb32_ddr3_phy_addr", false,-1, 7,0);
    tracep->declBus(c+540,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+541,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+542,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+543,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4603,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+544,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+545,"wbu_cyc", false,-1);
    tracep->declBit(c+546,"wbu_stb", false,-1);
    tracep->declBit(c+547,"wbu_we", false,-1);
    tracep->declBus(c+548,"wbu_addr", false,-1, 29,0);
    tracep->declBus(c+549,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4635,"wbu_sel", false,-1, 3,0);
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
    tracep->declBit(c+4548,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4549,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4603,"wbu_zip_err", false,-1);
    tracep->declBus(c+570,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+527,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+528,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4603,"zip_unused", false,-1);
    tracep->declBit(c+165,"w_bus_int", false,-1);
    tracep->declBus(c+548,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+535,"r_cfg_ack", false,-1);
    tracep->declBit(c+4603,"cfg_unused", false,-1);
    tracep->declBus(c+4636,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4637,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4639,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4640,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4641,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4588,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+360,"i_wb_cyc", false,-1);
    tracep->declBit(c+361,"i_wb_stb", false,-1);
    tracep->declBit(c+362,"i_wb_we", false,-1);
    tracep->declBus(c+571,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+364,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+380,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+382,"o_wb_ack", false,-1);
    tracep->declArray(c+383,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+572,"w_wstb", false,-1);
    tracep->declBit(c+573,"w_stb", false,-1);
    tracep->declArray(c+574,"w_data", false,-1, 511,0);
    tracep->declBus(c+590,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+591,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4603,"unused", false,-1);
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
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4591,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBus(c+594,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4510,"o_word", false,-1, 7,0);
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
    tracep->declBus(c+4643,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+509,"i_wb_cyc", false,-1);
    tracep->declBit(c+510,"i_wb_stb", false,-1);
    tracep->declBit(c+511,"i_wb_we", false,-1);
    tracep->declBus(c+607,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+513,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+514,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
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
    tracep->declBus(c+4643,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4644,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4645,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4646,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4647,"UART_TXREG", false,-1, 1,0);
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
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4599,"BW", false,-1, 31,0);
    tracep->declBus(c+4643,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4597,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4648,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
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
    tracep->declBus(c+4643,"lglen", false,-1, 3,0);
    tracep->declBit(c+137,"w_half_full", false,-1);
    tracep->declBus(c+636,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4599,"BW", false,-1, 31,0);
    tracep->declBus(c+4643,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4641,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4648,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
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
    tracep->declBus(c+4643,"lglen", false,-1, 3,0);
    tracep->declBit(c+139,"w_half_full", false,-1);
    tracep->declBus(c+651,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4584,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4586,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4588,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4589,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4590,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4591,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4591,"LANES", false,-1, 31,0);
    tracep->declBus(c+4591,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4599,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4642,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4641,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4597,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4592,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4638,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4593,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4648,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4592,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4593,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4590,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4452,"i_controller_clk", false,-1);
    tracep->declBit(c+4550,"i_rst_n", false,-1);
    tracep->declBit(c+399,"i_wb_cyc", false,-1);
    tracep->declBit(c+400,"i_wb_stb", false,-1);
    tracep->declBit(c+401,"i_wb_we", false,-1);
    tracep->declBus(c+652,"i_wb_addr", false,-1, 23,0);
    tracep->declArray(c+403,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+419,"i_wb_sel", false,-1, 63,0);
    tracep->declBus(c+4640,"i_aux", false,-1, 7,0);
    tracep->declBit(c+421,"o_wb_stall", false,-1);
    tracep->declBit(c+422,"o_wb_ack", false,-1);
    tracep->declArray(c+423,"o_wb_data", false,-1, 511,0);
    tracep->declBus(c+145,"o_aux", false,-1, 7,0);
    tracep->declBit(c+536,"i_wb2_cyc", false,-1);
    tracep->declBit(c+537,"i_wb2_stb", false,-1);
    tracep->declBit(c+538,"i_wb2_we", false,-1);
    tracep->declBus(c+653,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+541,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+540,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+542,"o_wb2_stall", false,-1);
    tracep->declBit(c+543,"o_wb2_ack", false,-1);
    tracep->declBus(c+544,"o_wb2_data", false,-1, 31,0);
    tracep->declArray(c+4454,"i_phy_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4470,"i_phy_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4472,"i_phy_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4474,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4475,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4478,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4479,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4480,"o_phy_toggle_dqs", false,-1);
    tracep->declArray(c+4481,"o_phy_data", false,-1, 511,0);
    tracep->declQuad(c+4497,"o_phy_dm", false,-1, 63,0);
    tracep->declBus(c+4499,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4500,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4501,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4502,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4503,"o_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4504,"o_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4505,"o_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4506,"o_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4507,"o_phy_bitslip", false,-1, 7,0);
    tracep->declBit(c+4508,"o_phy_write_leveling_calib", false,-1);
    tracep->declBit(c+4509,"o_phy_reset", false,-1);
    tracep->declBus(c+35,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4544,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4545,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4649,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4650,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4651,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4652,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4653,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4654,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4655,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4643,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4656,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4656,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4657,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4595,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4593,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4658,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4659,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4600,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4660,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4658,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4659,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4661,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4637,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4600,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4660,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4662,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4596,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4663,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4646,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4647,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4644,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4645,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4602,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4591,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4602,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4591,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4600,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4664,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4665,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4666,"tRCD", false,-1);
    tracep->declDouble(c+4666,"tRP", false,-1);
    tracep->declBus(c+4668,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4669,"tRFC", false,-1);
    tracep->declBus(c+4671,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4672,"tXPR", false,-1);
    tracep->declDouble(c+4674,"tWR", false,-1);
    tracep->declDouble(c+4584,"tWTR", false,-1);
    tracep->declBus(c+4676,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4677,"tWLO", false,-1);
    tracep->declBus(c+4601,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4584,"tRTP", false,-1);
    tracep->declBus(c+4592,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4590,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4679,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4680,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4681,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4682,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4596,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4601,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4650,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4652,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4649,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4649,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4650,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4649,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4650,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4649,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4652,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4653,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4681,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4654,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4601,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4602,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4681,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4596,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4663,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4602,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4639,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4601,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4590,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4592,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4681,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4680,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4599,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4591,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4683,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4589,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4684,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4685,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4663,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4588,"CHECK_STARTING_DATA", false,-1, 31,0);
    tracep->declBus(c+4686,"BITSLIP_DQS_TRAIN_3", false,-1, 31,0);
    tracep->declBus(c+4596,"WRITE_ZERO", false,-1, 31,0);
    tracep->declBus(c+4662,"BURST_WRITE", false,-1, 31,0);
    tracep->declBus(c+4660,"BURST_READ", false,-1, 31,0);
    tracep->declBus(c+4600,"RANDOM_WRITE", false,-1, 31,0);
    tracep->declBus(c+4637,"RANDOM_READ", false,-1, 31,0);
    tracep->declBus(c+4661,"ALTERNATE_WRITE_READ", false,-1, 31,0);
    tracep->declBus(c+4659,"FINISH_READ", false,-1, 31,0);
    tracep->declBus(c+4658,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4681,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4639,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4681,"REPEAT_CLK_SAMPLING", false,-1, 31,0);
    tracep->declBus(c+4687,"PASR", false,-1, 2,0);
    tracep->declBus(c+4687,"CWL", false,-1, 2,0);
    tracep->declBus(c+4597,"ASR", false,-1, 0,0);
    tracep->declBus(c+4641,"SRT", false,-1, 0,0);
    tracep->declBus(c+4644,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4688,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4689,"MR2", false,-1, 18,0);
    tracep->declBus(c+4644,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4597,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4641,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4690,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4691,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4692,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4641,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4644,"DIC", false,-1, 1,0);
    tracep->declBus(c+4690,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4597,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4641,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4644,"AL", false,-1, 1,0);
    tracep->declBus(c+4641,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4641,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4693,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4694,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4695,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4644,"BL", false,-1, 1,0);
    tracep->declBus(c+4653,"CL", false,-1, 3,0);
    tracep->declBus(c+4641,"RBT", false,-1, 0,0);
    tracep->declBus(c+4597,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4690,"WR", false,-1, 2,0);
    tracep->declBus(c+4641,"PPD", false,-1, 0,0);
    tracep->declBus(c+4687,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4696,"MR0", false,-1, 18,0);
    tracep->declBus(c+4697,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+654,"index", false,-1, 31,0);
    tracep->declBus(c+655,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+656,"instruction", false,-1, 27,0);
    tracep->declBus(c+657,"delay_counter", false,-1, 15,0);
    tracep->declBit(c+658,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+659,"reset_done", false,-1);
    tracep->declBit(c+660,"pause_counter", false,-1);
    tracep->declBit(c+661,"issue_read_command", false,-1);
    tracep->declBit(c+4603,"issue_write_command", false,-1);
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
    tracep->declBus(c+684,"stage1_aux", false,-1, 7,0);
    tracep->declBit(c+685,"stage1_we", false,-1);
    tracep->declArray(c+686,"stage1_data", false,-1, 511,0);
    tracep->declQuad(c+702,"stage1_dm", false,-1, 63,0);
    tracep->declBus(c+704,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+705,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+706,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+707,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+708,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+709,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBus(c+710,"calib_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+711,"stage2_pending", false,-1);
    tracep->declBus(c+712,"stage2_aux", false,-1, 7,0);
    tracep->declBit(c+713,"stage2_we", false,-1);
    tracep->declQuad(c+714,"stage2_dm_unaligned", false,-1, 63,0);
    tracep->declQuad(c+716,"stage2_dm_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+718+i*2,"stage2_dm", true,(i+0), 63,0);
    }
    tracep->declArray(c+722,"stage2_data_unaligned", false,-1, 511,0);
    tracep->declArray(c+738,"stage2_data_unaligned_temp", false,-1, 511,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+754+i*16,"stage2_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+786+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+802+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+810,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+811,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+812,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+813+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+821+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+829+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+837+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+845+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+853+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+861+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+869+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+877+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+881,"cmd_odt_q", false,-1);
    tracep->declBit(c+882,"cmd_odt", false,-1);
    tracep->declBit(c+883,"cmd_ck_en", false,-1);
    tracep->declBit(c+884,"cmd_reset_n", false,-1);
    tracep->declBit(c+885,"o_wb_stall_q", false,-1);
    tracep->declBit(c+886,"o_wb_stall_d", false,-1);
    tracep->declBit(c+887,"o_wb_stall_calib", false,-1);
    tracep->declBit(c+888,"precharge_slot_busy", false,-1);
    tracep->declBit(c+889,"activate_slot_busy", false,-1);
    tracep->declBus(c+890,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+891,"write_dqs_d", false,-1);
    tracep->declBus(c+892,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+893,"write_dqs_val", false,-1, 2,0);
    tracep->declBus(c+894,"write_dq_q", false,-1, 1,0);
    tracep->declBit(c+895,"write_dq_d", false,-1);
    tracep->declBus(c+896,"write_dq", false,-1, 3,0);
    tracep->declBus(c+897,"state_calibrate", false,-1, 5,0);
    tracep->declQuad(c+898,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+900,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+901,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+902,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+903,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+904,"dqs_target_index_orig", false,-1, 5,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+905+i*1,"dq_target_index", true,(i+0), 6,0);
    }
    tracep->declBus(c+913,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+914,"dqs_start_index_repeat", false,-1, 0,0);
    tracep->declBus(c+915,"train_delay", false,-1, 3,0);
    tracep->declBus(c+916,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+917,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+918,"initial_dqs", false,-1);
    tracep->declBus(c+919,"lane", false,-1, 2,0);
    tracep->declBus(c+920,"lane_times_8", false,-1, 5,0);
    tracep->declBus(c+921,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+922,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+923+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+931+i*1,"shift_reg_read_pipe_q", true,(i+0), 8,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+936+i*1,"shift_reg_read_pipe_d", true,(i+0), 8,0);
    }
    tracep->declBit(c+941,"index_read_pipe", false,-1);
    tracep->declBit(c+942,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+943+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+945+i*16,"o_wb_data_q", true,(i+0), 511,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+977+i*1,"o_wb_ack_read_q", true,(i+0), 8,0);
    }
    tracep->declBit(c+993,"calib_stb", false,-1);
    tracep->declBus(c+994,"calib_aux", false,-1, 7,0);
    tracep->declBit(c+995,"calib_we", false,-1);
    tracep->declBus(c+996,"calib_addr", false,-1, 23,0);
    tracep->declArray(c+997,"calib_data", false,-1, 511,0);
    tracep->declBit(c+1013,"write_calib_odt", false,-1);
    tracep->declBit(c+1014,"write_calib_dqs", false,-1);
    tracep->declBit(c+1015,"write_calib_dq", false,-1);
    tracep->declBit(c+1016,"prev_write_level_feedback", false,-1);
    tracep->declArray(c+1017,"read_data_store", false,-1, 511,0);
    tracep->declArray(c+1033,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1037+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1045+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1053+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1061+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+1069,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1070+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+1078,"sample_clk_repeat", false,-1, 3,0);
    tracep->declBit(c+1079,"stored_write_level_feedback", false,-1);
    tracep->declBus(c+1080,"start_index_check", false,-1, 5,0);
    tracep->declQuad(c+1081,"read_lane_data", false,-1, 63,0);
    tracep->declBit(c+1083,"odelay_cntvalue_repeated", false,-1);
    tracep->declBit(c+1084,"wb2_stb", false,-1);
    tracep->declBit(c+1085,"wb2_update", false,-1);
    tracep->declBit(c+1086,"wb2_we", false,-1);
    tracep->declBus(c+1087,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+1088,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+1089,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+1090,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1091,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1092,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1093,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+1094,"wb2_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+1095,"wb2_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+1096,"wb2_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+1097,"wb2_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+1098,"write_level_fail", false,-1, 7,0);
    tracep->declBus(c+1099,"wb2_write_lane", false,-1, 2,0);
    tracep->declBit(c+1100,"sync_rst_wb2", false,-1);
    tracep->declBit(c+1101,"sync_rst_controller", false,-1);
    tracep->declBit(c+1102,"reset_from_wb2", false,-1);
    tracep->declBit(c+1103,"reset_from_calibrate", false,-1);
    tracep->declBit(c+1104,"reset_from_test", false,-1);
    tracep->declBit(c+1105,"repeat_test", false,-1);
    tracep->declBus(c+1106,"read_test_address_counter", false,-1, 23,0);
    tracep->declBus(c+1107,"check_test_address_counter", false,-1, 23,0);
    tracep->declBus(c+1108,"write_test_address_counter", false,-1, 31,0);
    tracep->declBus(c+1109,"correct_read_data", false,-1, 31,0);
    tracep->declBus(c+1110,"wrong_read_data", false,-1, 31,0);
    tracep->declBus(c+1111,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declArray(c+1112,"expected_read", false,-1, 511,0);
    tracep->declArray(c+1128,"wrong_data", false,-1, 511,0);
    tracep->declBit(c+1105,"debug_trigger", false,-1);
    tracep->declBit(c+4551,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4698,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4699,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4700,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4701,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4702,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4703,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4704,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4600,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4680,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4589,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4641,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4705,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
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
    tracep->declBit(c+1144,"soft_reset", false,-1);
    tracep->declBit(c+171,"r_wdt_reset", false,-1);
    tracep->declBit(c+4604,"cmd_port_active", false,-1);
    tracep->declBit(c+1145,"rx_valid", false,-1);
    tracep->declBus(c+1146,"rx_data", false,-1, 7,0);
    tracep->declBit(c+1147,"in_stb", false,-1);
    tracep->declBit(c+1148,"in_active", false,-1);
    tracep->declQuad(c+1149,"in_word", false,-1, 35,0);
    tracep->declBit(c+169,"ps_full", false,-1);
    tracep->declBus(c+167,"ps_data", false,-1, 7,0);
    tracep->declBit(c+1151,"wbu_tx_stb", false,-1);
    tracep->declBus(c+1152,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+1153,"ififo_valid", false,-1);
    tracep->declQuad(c+1154,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+1156,"exec_stb", false,-1);
    tracep->declQuad(c+1157,"exec_word", false,-1, 35,0);
    tracep->declBit(c+1159,"ofifo_rd", false,-1);
    tracep->declQuad(c+1160,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+1162,"ofifo_err", false,-1);
    tracep->declBit(c+1163,"ofifo_empty_n", false,-1);
    tracep->declBit(c+1164,"w_bus_busy", false,-1);
    tracep->declBit(c+171,"w_bus_reset", false,-1);
    tracep->declBus(c+1165,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+1166,"ign_input_busy", false,-1);
    tracep->declBit(c+1167,"output_busy", false,-1);
    tracep->declBit(c+1168,"out_active", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4706,"BW", false,-1, 31,0);
    tracep->declBus(c+4589,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1156,"i_wr", false,-1);
    tracep->declQuad(c+1157,"i_data", false,-1, 35,0);
    tracep->declBit(c+1159,"i_rd", false,-1);
    tracep->declQuad(c+1160,"o_data", false,-1, 35,0);
    tracep->declBit(c+1163,"o_empty_n", false,-1);
    tracep->declBit(c+1162,"o_err", false,-1);
    tracep->declBus(c+4707,"FLEN", false,-1, 31,0);
    tracep->declBus(c+1169,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+1170,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+1171,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+1172,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+1173,"will_overflow", false,-1);
    tracep->declBit(c+1174,"will_underflow", false,-1);
    tracep->declBit(c+1175,"r_empty_n", false,-1);
    tracep->declBit(c+1176,"w_write", false,-1);
    tracep->declBit(c+1177,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+1153,"ififo_empty_n", false,-1);
    tracep->declBit(c+1178,"ififo_err", false,-1);
    tracep->declBit(c+1179,"ififo_rd", false,-1);
    tracep->declBit(c+4603,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4706,"BW", false,-1, 31,0);
    tracep->declBus(c+4680,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1147,"i_wr", false,-1);
    tracep->declQuad(c+1149,"i_data", false,-1, 35,0);
    tracep->declBit(c+1179,"i_rd", false,-1);
    tracep->declQuad(c+1154,"o_data", false,-1, 35,0);
    tracep->declBit(c+1153,"o_empty_n", false,-1);
    tracep->declBit(c+1178,"o_err", false,-1);
    tracep->declBus(c+4648,"FLEN", false,-1, 31,0);
    tracep->declBus(c+1180,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+1181,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+1182,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+1183,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+1184,"will_overflow", false,-1);
    tracep->declBit(c+1185,"will_underflow", false,-1);
    tracep->declBit(c+1186,"r_empty_n", false,-1);
    tracep->declBit(c+1187,"w_write", false,-1);
    tracep->declBit(c+1188,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4597,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1145,"i_stb", false,-1);
    tracep->declBit(c+1166,"o_busy", false,-1);
    tracep->declBus(c+1146,"i_byte", false,-1, 7,0);
    tracep->declBit(c+1144,"o_soft_reset", false,-1);
    tracep->declBit(c+1147,"o_stb", false,-1);
    tracep->declBit(c+4603,"i_busy", false,-1);
    tracep->declQuad(c+1149,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1148,"o_active", false,-1);
    tracep->declBit(c+1189,"hx_stb", false,-1);
    tracep->declBit(c+1190,"hx_valid", false,-1);
    tracep->declBus(c+1191,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+1192,"cw_stb", false,-1);
    tracep->declBit(c+1193,"cw_busy", false,-1);
    tracep->declBit(c+1194,"cw_active", false,-1);
    tracep->declQuad(c+1195,"cw_word", false,-1, 35,0);
    tracep->declBit(c+1197,"cod_busy", false,-1);
    tracep->declBit(c+1198,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1192,"i_stb", false,-1);
    tracep->declBit(c+1197,"o_busy", false,-1);
    tracep->declQuad(c+1195,"i_word", false,-1, 35,0);
    tracep->declBit(c+1147,"o_stb", false,-1);
    tracep->declBit(c+4603,"i_busy", false,-1);
    tracep->declQuad(c+1149,"o_word", false,-1, 35,0);
    tracep->declBit(c+1198,"o_active", false,-1);
    tracep->declBus(c+1199,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+1200,"r_word", false,-1, 35,0);
    tracep->declBus(c+1202,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+1203,"r_addr", false,-1, 24,0);
    tracep->declBus(c+1204,"w_addr", false,-1, 31,0);
    tracep->declBus(c+1205,"rd_len", false,-1, 9,0);
    tracep->declBus(c+1206,"cword", false,-1, 31,0);
    tracep->declBus(c+1207,"r_stb", false,-1, 2,0);
    tracep->declBit(c+1208,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4641,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1189,"i_stb", false,-1);
    tracep->declBit(c+1193,"o_busy", false,-1);
    tracep->declBit(c+1190,"i_valid", false,-1);
    tracep->declBus(c+1191,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+1192,"o_stb", false,-1);
    tracep->declBit(c+1197,"i_busy", false,-1);
    tracep->declQuad(c+1195,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1194,"o_active", false,-1);
    tracep->declBus(c+1209,"r_len", false,-1, 2,0);
    tracep->declBus(c+1210,"cw_len", false,-1, 2,0);
    tracep->declBus(c+1211,"lastcw", false,-1, 1,0);
    tracep->declBit(c+1212,"w_stb", false,-1);
    tracep->declQuad(c+1213,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+1189,"skd_stb", false,-1);
    tracep->declBit(c+1190,"skd_valid", false,-1);
    tracep->declBus(c+1191,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+1193,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1145,"i_stb", false,-1);
    tracep->declBit(c+1166,"o_busy", false,-1);
    tracep->declBus(c+1146,"i_byte", false,-1, 7,0);
    tracep->declBit(c+1144,"o_soft_reset", false,-1);
    tracep->declBit(c+1189,"o_stb", false,-1);
    tracep->declBit(c+1190,"o_valid", false,-1);
    tracep->declBit(c+1193,"i_busy", false,-1);
    tracep->declBus(c+1191,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4641,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4592,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4705,"AW", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1153,"i_valid", false,-1);
    tracep->declQuad(c+1154,"i_codword", false,-1, 35,0);
    tracep->declBit(c+1164,"o_busy", false,-1);
    tracep->declBit(c+545,"o_wb_cyc", false,-1);
    tracep->declBit(c+546,"o_wb_stb", false,-1);
    tracep->declBit(c+547,"o_wb_we", false,-1);
    tracep->declBus(c+548,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+549,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+550,"i_wb_stall", false,-1);
    tracep->declBit(c+551,"i_wb_ack", false,-1);
    tracep->declBus(c+553,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+552,"i_wb_err", false,-1);
    tracep->declBit(c+1156,"o_stb", false,-1);
    tracep->declQuad(c+1157,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1159,"i_fifo_rd", false,-1);
    tracep->declBus(c+4644,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4645,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4646,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4647,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4645,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+1215,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+1216,"wb_state", false,-1, 1,0);
    tracep->declBus(c+1217,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+1218,"r_len", false,-1, 9,0);
    tracep->declBit(c+1219,"r_inc", false,-1);
    tracep->declBit(c+1220,"r_new_addr", false,-1);
    tracep->declBit(c+1221,"last_read_request", false,-1);
    tracep->declBit(c+1222,"last_ack", false,-1);
    tracep->declBit(c+1223,"zero_acks", false,-1);
    tracep->declBit(c+1164,"r_busy", false,-1);
    tracep->declBus(c+1224,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4708,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4604,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4603,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4597,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+171,"i_soft_reset", false,-1);
    tracep->declBit(c+1159,"i_stb", false,-1);
    tracep->declBit(c+1167,"o_busy", false,-1);
    tracep->declQuad(c+1160,"i_codword", false,-1, 35,0);
    tracep->declBit(c+545,"i_wb_cyc", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+1225,"i_bus_busy", false,-1);
    tracep->declBit(c+1151,"o_stb", false,-1);
    tracep->declBit(c+1168,"o_active", false,-1);
    tracep->declBus(c+1152,"o_char", false,-1, 7,0);
    tracep->declBit(c+169,"i_tx_busy", false,-1);
    tracep->declBit(c+1226,"dw_busy", false,-1);
    tracep->declBit(c+1167,"cw_stb", false,-1);
    tracep->declBit(c+1167,"cw_busy", false,-1);
    tracep->declBit(c+1227,"cp_stb", false,-1);
    tracep->declBit(c+1226,"dw_stb", false,-1);
    tracep->declBit(c+1228,"ln_stb", false,-1);
    tracep->declBit(c+1229,"ln_busy", false,-1);
    tracep->declBit(c+1230,"cp_busy", false,-1);
    tracep->declBit(c+1231,"byte_busy", false,-1);
    tracep->declBit(c+1232,"cp_active", false,-1);
    tracep->declBit(c+1233,"dw_active", false,-1);
    tracep->declBit(c+1234,"ln_active", false,-1);
    tracep->declQuad(c+1235,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+1237,"cp_word", false,-1, 35,0);
    tracep->declBus(c+1239,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+1240,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+1241,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declBus(c+4706,"CW", false,-1, 31,0);
    tracep->declBus(c+4589,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1167,"i_stb", false,-1);
    tracep->declQuad(c+1235,"i_codword", false,-1, 35,0);
    tracep->declBit(c+1226,"i_busy", false,-1);
    tracep->declBit(c+1227,"o_stb", false,-1);
    tracep->declQuad(c+1237,"o_cword", false,-1, 35,0);
    tracep->declBit(c+1230,"o_busy", false,-1);
    tracep->declBit(c+1232,"o_active", false,-1);
    tracep->declBit(c+1242,"aword_valid", false,-1);
    tracep->declQuad(c+1243,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+1245,"w_addr", false,-1, 31,0);
    tracep->declBus(c+1246,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+1247,"tbl_busy", false,-1);
    tracep->declBit(c+1248,"w_accepted", false,-1);
    tracep->declQuad(c+1249,"r_word", false,-1, 35,0);
    tracep->declBus(c+1251,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+1252,"tbl_filled", false,-1);
    tracep->declBus(c+1253,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+1254,"pmatch", false,-1);
    tracep->declBit(c+1255,"dmatch", false,-1);
    tracep->declBit(c+1256,"vaddr", false,-1);
    tracep->declBus(c+1257,"cword", false,-1, 31,0);
    tracep->declBus(c+1258,"maddr", false,-1, 9,0);
    tracep->declBit(c+1259,"matched", false,-1);
    tracep->declBit(c+1260,"zmatch", false,-1);
    tracep->declBit(c+1261,"hmatch", false,-1);
    tracep->declBus(c+1262,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+1263,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+1237,"r_cword", false,-1, 35,0);
    tracep->declBus(c+1264,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+1265,"clear_table", false,-1);
    tracep->declBit(c+1266,"addr_within_table", false,-1);
    tracep->declBit(c+1267,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+1268,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+171,"i_reset", false,-1);
    tracep->declBit(c+1159,"i_stb", false,-1);
    tracep->declQuad(c+1160,"i_codword", false,-1, 35,0);
    tracep->declBit(c+545,"i_cyc", false,-1);
    tracep->declBit(c+1225,"i_busy", false,-1);
    tracep->declBit(c+165,"i_int", false,-1);
    tracep->declBit(c+1167,"o_stb", false,-1);
    tracep->declQuad(c+1235,"o_codword", false,-1, 35,0);
    tracep->declBit(c+1167,"o_busy", false,-1);
    tracep->declBit(c+1269,"i_tx_busy", false,-1);
    tracep->declQuad(c+4709,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4711,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4713,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4659,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+1270,"int_request", false,-1);
    tracep->declBit(c+1271,"int_sent", false,-1);
    tracep->declBit(c+1272,"idle_expired", false,-1);
    tracep->declBit(c+1273,"idle_state", false,-1);
    tracep->declBus(c+1274,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1227,"i_stb", false,-1);
    tracep->declQuad(c+1237,"i_word", false,-1, 35,0);
    tracep->declBit(c+1229,"i_tx_busy", false,-1);
    tracep->declBit(c+1226,"o_stb", false,-1);
    tracep->declBus(c+1239,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1226,"o_busy", false,-1);
    tracep->declBit(c+1233,"o_active", false,-1);
    tracep->declBus(c+1275,"w_len", false,-1, 2,0);
    tracep->declBus(c+1276,"r_len", false,-1, 2,0);
    tracep->declBus(c+1277,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1226,"i_stb", false,-1);
    tracep->declBus(c+1239,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1228,"o_stb", false,-1);
    tracep->declBus(c+1240,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+1278,"i_bus_busy", false,-1);
    tracep->declBit(c+1231,"i_tx_busy", false,-1);
    tracep->declBit(c+1229,"o_busy", false,-1);
    tracep->declBit(c+1234,"o_active", false,-1);
    tracep->declBus(c+4715,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4716,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+1279,"last_out_nl", false,-1);
    tracep->declBit(c+1280,"last_in_nl", false,-1);
    tracep->declBit(c+1281,"full_line", false,-1);
    tracep->declBit(c+1282,"r_busy", false,-1);
    tracep->declBus(c+1283,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+1228,"i_stb", false,-1);
    tracep->declBus(c+1240,"i_bits", false,-1, 6,0);
    tracep->declBit(c+1151,"o_stb", false,-1);
    tracep->declBus(c+1152,"o_char", false,-1, 7,0);
    tracep->declBit(c+1231,"o_busy", false,-1);
    tracep->declBit(c+169,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4596,"NIN", false,-1, 31,0);
    tracep->declBus(c+4591,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4636,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+449,"i_wb_cyc", false,-1);
    tracep->declBit(c+454,"i_wb_stb", false,-1);
    tracep->declBit(c+451,"i_wb_we", false,-1);
    tracep->declBus(c+452,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+453,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+454,"o_wb_ack", false,-1);
    tracep->declBus(c+4547,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4538,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4539,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+143,"o_int", false,-1);
    tracep->declBus(c+1284,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+1285,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+1286,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+1284,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4552,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4595,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4601,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4644,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4591,"RW", false,-1, 31,0);
    tracep->declBus(c+4717,"BAW", false,-1, 31,0);
    tracep->declBus(c+4718,"RESET_ADDRESS", false,-1, 30,0);
    tracep->declBus(c+4597,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4602,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4719,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+493,"i_wb_cyc", false,-1);
    tracep->declBit(c+494,"i_wb_stb", false,-1);
    tracep->declBit(c+495,"i_wb_we", false,-1);
    tracep->declBus(c+1287,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+497,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+498,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+499,"o_wb_ack", false,-1);
    tracep->declBus(c+500,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+215,"o_pf_cyc", false,-1);
    tracep->declBit(c+216,"o_pf_stb", false,-1);
    tracep->declBit(c+4603,"o_pf_we", false,-1);
    tracep->declBus(c+217,"o_pf_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4621,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+218,"i_pf_stall", false,-1);
    tracep->declBit(c+219,"i_pf_ack", false,-1);
    tracep->declBit(c+220,"i_pf_err", false,-1);
    tracep->declArray(c+221,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4519,"i_i2c_sda", false,-1);
    tracep->declBit(c+4520,"i_i2c_scl", false,-1);
    tracep->declBit(c+4521,"o_i2c_sda", false,-1);
    tracep->declBit(c+4522,"o_i2c_scl", false,-1);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+155,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4603,"i_sync_signal", false,-1);
    tracep->declBus(c+36,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4644,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4645,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4646,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4647,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4600,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4637,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4661,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4659,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4683,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4684,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4649,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4651,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4652,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4653,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4654,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4643,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4655,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4720,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4721,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4722,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4723,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4724,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4725,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+1288,"cpu_reset", false,-1);
    tracep->declBit(c+4603,"cpu_clear_cache", false,-1);
    tracep->declBit(c+1289,"cpu_new_pc", false,-1);
    tracep->declBus(c+1290,"pf_jump_addr", false,-1, 30,0);
    tracep->declBit(c+1291,"pf_valid", false,-1);
    tracep->declBit(c+1292,"pf_ready", false,-1);
    tracep->declBus(c+1293,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+1294,"pf_insn_addr", false,-1, 30,0);
    tracep->declBit(c+1295,"pf_illegal", false,-1);
    tracep->declBit(c+1296,"half_valid", false,-1);
    tracep->declBit(c+1297,"imm_cycle", false,-1);
    tracep->declBit(c+1298,"next_valid", false,-1);
    tracep->declBus(c+1299,"next_insn", false,-1, 7,0);
    tracep->declBit(c+1300,"insn_ready", false,-1);
    tracep->declBit(c+1301,"half_ready", false,-1);
    tracep->declBit(c+1302,"i2c_abort", false,-1);
    tracep->declBit(c+1303,"insn_valid", false,-1);
    tracep->declBus(c+1304,"insn", false,-1, 11,0);
    tracep->declBus(c+1305,"half_insn", false,-1, 3,0);
    tracep->declBit(c+1306,"i2c_ckedge", false,-1);
    tracep->declBit(c+1307,"i2c_stretch", false,-1);
    tracep->declBus(c+1308,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+1309,"ckcount", false,-1, 11,0);
    tracep->declBus(c+1310,"abort_address", false,-1, 30,0);
    tracep->declBus(c+1311,"jump_target", false,-1, 30,0);
    tracep->declBit(c+1312,"r_wait", false,-1);
    tracep->declBit(c+1313,"soft_halt_request", false,-1);
    tracep->declBit(c+1288,"r_halted", false,-1);
    tracep->declBit(c+1314,"r_err", false,-1);
    tracep->declBit(c+1315,"r_aborted", false,-1);
    tracep->declBit(c+1316,"r_manual", false,-1);
    tracep->declBit(c+1317,"r_sda", false,-1);
    tracep->declBit(c+1318,"r_scl", false,-1);
    tracep->declBit(c+1319,"w_stopped", false,-1);
    tracep->declBit(c+1320,"w_sda", false,-1);
    tracep->declBit(c+1321,"w_scl", false,-1);
    tracep->declBit(c+1322,"bus_read", false,-1);
    tracep->declBit(c+1323,"bus_write", false,-1);
    tracep->declBit(c+1324,"bus_override", false,-1);
    tracep->declBit(c+1325,"bus_manual", false,-1);
    tracep->declBit(c+1326,"ovw_ready", false,-1);
    tracep->declBit(c+1327,"bus_jump", false,-1);
    tracep->declBus(c+1287,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+1287,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+497,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+498,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+500,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+1328,"s_tvalid", false,-1);
    tracep->declBit(c+1301,"s_tready", false,-1);
    tracep->declBus(c+1329,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+37,"w_control", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+1316,"manual", false,-1);
    tracep->declBit(c+1318,"scl", false,-1);
    tracep->declBit(c+1317,"sda", false,-1);
    tracep->declBit(c+1330,"o_scl", false,-1);
    tracep->declBit(c+1331,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+1332,"mid_axis_pkt", false,-1);
    tracep->declBus(c+1333,"r_channel", false,-1, 1,0);
    tracep->declBus(c+155,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4602,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+38,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+1328,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+1300,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+1334,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+151,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+152,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+154,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+153,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+1306,"i_ckedge", false,-1);
    tracep->declBit(c+1307,"o_stretch", false,-1);
    tracep->declBit(c+4520,"i_scl", false,-1);
    tracep->declBit(c+4519,"i_sda", false,-1);
    tracep->declBit(c+1321,"o_scl", false,-1);
    tracep->declBit(c+1320,"o_sda", false,-1);
    tracep->declBit(c+1302,"o_abort", false,-1);
    tracep->declBus(c+4649,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4650,"START", false,-1, 3,0);
    tracep->declBus(c+4651,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4652,"STOP", false,-1, 3,0);
    tracep->declBus(c+4653,"DATA", false,-1, 3,0);
    tracep->declBus(c+4654,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4643,"ACK", false,-1, 3,0);
    tracep->declBus(c+4655,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4720,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4721,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4722,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4723,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4724,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4641,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4597,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4687,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4693,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4688,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4690,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4726,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4727,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4728,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4729,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4641,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+1335,"last_byte", false,-1);
    tracep->declBit(c+1336,"dir", false,-1);
    tracep->declBit(c+1337,"will_ack", false,-1);
    tracep->declBus(c+1338,"state", false,-1, 3,0);
    tracep->declBus(c+1339,"nbits", false,-1, 2,0);
    tracep->declBus(c+1340,"sreg", false,-1, 7,0);
    tracep->declBit(c+1341,"q_scl", false,-1);
    tracep->declBit(c+1342,"q_sda", false,-1);
    tracep->declBit(c+1343,"ck_scl", false,-1);
    tracep->declBit(c+1344,"ck_sda", false,-1);
    tracep->declBit(c+1345,"lst_scl", false,-1);
    tracep->declBit(c+1346,"lst_sda", false,-1);
    tracep->declBit(c+1347,"stop_bit", false,-1);
    tracep->declBit(c+1348,"channel_busy", false,-1);
    tracep->declBit(c+4603,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4717,"AW", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+39,"i_reset", false,-1);
    tracep->declBit(c+1289,"i_new_pc", false,-1);
    tracep->declBit(c+4603,"i_clear_cache", false,-1);
    tracep->declBit(c+1292,"i_ready", false,-1);
    tracep->declBus(c+1290,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1291,"o_valid", false,-1);
    tracep->declBit(c+1295,"o_illegal", false,-1);
    tracep->declBus(c+1293,"o_insn", false,-1, 7,0);
    tracep->declBus(c+1294,"o_pc", false,-1, 30,0);
    tracep->declBit(c+215,"o_wb_cyc", false,-1);
    tracep->declBit(c+216,"o_wb_stb", false,-1);
    tracep->declBit(c+4603,"o_wb_we", false,-1);
    tracep->declBus(c+217,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+218,"i_wb_stall", false,-1);
    tracep->declBit(c+219,"i_wb_ack", false,-1);
    tracep->declBit(c+220,"i_wb_err", false,-1);
    tracep->declArray(c+221,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1349,"last_stb", false,-1);
    tracep->declBit(c+1350,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+1351,"cache_word", false,-1, 511,0);
    tracep->declBit(c+1367,"cache_valid", false,-1);
    tracep->declBus(c+1368,"inflight", false,-1, 1,0);
    tracep->declBit(c+1369,"cache_illegal", false,-1);
    tracep->declBit(c+1370,"r_valid", false,-1);
    tracep->declArray(c+1371,"r_insn", false,-1, 511,0);
    tracep->declArray(c+1387,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4680,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+1370,"rg_valid", false,-1);
    tracep->declArray(c+1371,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+1403,"r_count", false,-1, 6,0);
    tracep->declBus(c+1404,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4603,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4730,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4642,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4717,"NELM", false,-1, 31,0);
    tracep->declBus(c+4597,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4637,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4731,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4717,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4732,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4452,"i_data_clk", false,-1);
    tracep->declBit(c+4604,"i_ce", false,-1);
    tracep->declBit(c+1315,"i_trigger", false,-1);
    tracep->declBus(c+40,"i_data", false,-1, 30,0);
    tracep->declBit(c+4452,"i_wb_clk", false,-1);
    tracep->declBit(c+461,"i_wb_cyc", false,-1);
    tracep->declBit(c+462,"i_wb_stb", false,-1);
    tracep->declBit(c+463,"i_wb_we", false,-1);
    tracep->declBit(c+1405,"i_wb_addr", false,-1);
    tracep->declBus(c+465,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+466,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+467,"o_wb_ack", false,-1);
    tracep->declBus(c+468,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+141,"o_interrupt", false,-1);
    tracep->declBit(c+1406,"write_stb", false,-1);
    tracep->declBit(c+1407,"read_from_data", false,-1);
    tracep->declBit(c+1408,"write_to_control", false,-1);
    tracep->declBus(c+468,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4452,"bus_clock", false,-1);
    tracep->declBit(c+1409,"read_address", false,-1);
    tracep->declBus(c+465,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1410,"raddr", false,-1, 9,0);
    tracep->declBus(c+1411,"waddr", false,-1, 9,0);
    tracep->declBit(c+1412,"bw_reset_request", false,-1);
    tracep->declBit(c+1413,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1414,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1412,"bw_reset_complete", false,-1);
    tracep->declBus(c+1415,"br_config", false,-1, 2,0);
    tracep->declBus(c+1416,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1417,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1412,"dw_reset", false,-1);
    tracep->declBit(c+1413,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1414,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1418,"dr_triggered", false,-1);
    tracep->declBit(c+1419,"dr_primed", false,-1);
    tracep->declBit(c+1420,"dw_trigger", false,-1);
    tracep->declBit(c+1421,"dr_stopped", false,-1);
    tracep->declBus(c+4681,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1422,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1423,"dw_final_stop", false,-1);
    tracep->declBus(c+1424,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1425,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1426,"dr_force_write", false,-1);
    tracep->declBit(c+1427,"dr_run_timeout", false,-1);
    tracep->declBit(c+1428,"new_data", false,-1);
    tracep->declBit(c+1429,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1425,"w_data", false,-1, 30,0);
    tracep->declBit(c+1430,"imm_adr", false,-1);
    tracep->declBit(c+1431,"lst_adr", false,-1);
    tracep->declBus(c+1432,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1433,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1434,"record_ce", false,-1);
    tracep->declBus(c+1435,"r_data", false,-1, 31,0);
    tracep->declBit(c+1423,"bw_stopped", false,-1);
    tracep->declBit(c+1418,"bw_triggered", false,-1);
    tracep->declBit(c+1419,"bw_primed", false,-1);
    tracep->declBit(c+467,"br_wb_ack", false,-1);
    tracep->declBit(c+1436,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+462,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1437,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1438,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1416,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4730,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1439,"br_level_interrupt", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4599,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4733,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4599,"TB", false,-1, 31,0);
    tracep->declBus(c+4649,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4650,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4651,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4652,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4653,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4654,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4643,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4655,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4720,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4721,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4635,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4535,"i_uart_rx", false,-1);
    tracep->declBit(c+168,"o_wr", false,-1);
    tracep->declBus(c+166,"o_data", false,-1, 7,0);
    tracep->declBus(c+4734,"half_baud", false,-1, 6,0);
    tracep->declBus(c+1440,"state", false,-1, 3,0);
    tracep->declBus(c+1441,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+1442,"zero_baud_counter", false,-1);
    tracep->declBit(c+1443,"q_uart", false,-1);
    tracep->declBit(c+1444,"qq_uart", false,-1);
    tracep->declBit(c+1445,"ck_uart", false,-1);
    tracep->declBus(c+1446,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+1447,"half_baud_time", false,-1);
    tracep->declBus(c+1448,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4730,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4642,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4717,"NELM", false,-1, 31,0);
    tracep->declBus(c+4597,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4637,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4731,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4717,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4732,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4452,"i_data_clk", false,-1);
    tracep->declBit(c+4604,"i_ce", false,-1);
    tracep->declBit(c+1105,"i_trigger", false,-1);
    tracep->declBus(c+41,"i_data", false,-1, 30,0);
    tracep->declBit(c+4452,"i_wb_clk", false,-1);
    tracep->declBit(c+469,"i_wb_cyc", false,-1);
    tracep->declBit(c+470,"i_wb_stb", false,-1);
    tracep->declBit(c+471,"i_wb_we", false,-1);
    tracep->declBit(c+1449,"i_wb_addr", false,-1);
    tracep->declBus(c+473,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+474,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+475,"o_wb_ack", false,-1);
    tracep->declBus(c+476,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+135,"o_interrupt", false,-1);
    tracep->declBit(c+1450,"write_stb", false,-1);
    tracep->declBit(c+1451,"read_from_data", false,-1);
    tracep->declBit(c+1452,"write_to_control", false,-1);
    tracep->declBus(c+476,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4452,"bus_clock", false,-1);
    tracep->declBit(c+1453,"read_address", false,-1);
    tracep->declBus(c+473,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1454,"raddr", false,-1, 9,0);
    tracep->declBus(c+1455,"waddr", false,-1, 9,0);
    tracep->declBit(c+1456,"bw_reset_request", false,-1);
    tracep->declBit(c+1457,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1458,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1456,"bw_reset_complete", false,-1);
    tracep->declBus(c+1459,"br_config", false,-1, 2,0);
    tracep->declBus(c+1460,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1461,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1456,"dw_reset", false,-1);
    tracep->declBit(c+1457,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1458,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1462,"dr_triggered", false,-1);
    tracep->declBit(c+1463,"dr_primed", false,-1);
    tracep->declBit(c+1464,"dw_trigger", false,-1);
    tracep->declBit(c+1465,"dr_stopped", false,-1);
    tracep->declBus(c+4681,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1466,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1467,"dw_final_stop", false,-1);
    tracep->declBus(c+1468,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1469,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1470,"dr_force_write", false,-1);
    tracep->declBit(c+1471,"dr_run_timeout", false,-1);
    tracep->declBit(c+1472,"new_data", false,-1);
    tracep->declBit(c+1473,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1469,"w_data", false,-1, 30,0);
    tracep->declBit(c+1474,"imm_adr", false,-1);
    tracep->declBit(c+1475,"lst_adr", false,-1);
    tracep->declBus(c+1476,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1477,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1478,"record_ce", false,-1);
    tracep->declBus(c+1479,"r_data", false,-1, 31,0);
    tracep->declBit(c+1467,"bw_stopped", false,-1);
    tracep->declBit(c+1462,"bw_triggered", false,-1);
    tracep->declBit(c+1463,"bw_primed", false,-1);
    tracep->declBit(c+475,"br_wb_ack", false,-1);
    tracep->declBit(c+1480,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+470,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1481,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1482,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1460,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4730,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1483,"br_level_interrupt", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4730,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4642,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4717,"NELM", false,-1, 31,0);
    tracep->declBus(c+4597,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4637,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4731,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4717,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4732,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4452,"i_data_clk", false,-1);
    tracep->declBit(c+4604,"i_ce", false,-1);
    tracep->declBit(c+1105,"i_trigger", false,-1);
    tracep->declBus(c+4553,"i_data", false,-1, 30,0);
    tracep->declBit(c+4452,"i_wb_clk", false,-1);
    tracep->declBit(c+477,"i_wb_cyc", false,-1);
    tracep->declBit(c+478,"i_wb_stb", false,-1);
    tracep->declBit(c+479,"i_wb_we", false,-1);
    tracep->declBit(c+1484,"i_wb_addr", false,-1);
    tracep->declBus(c+481,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+482,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+483,"o_wb_ack", false,-1);
    tracep->declBus(c+484,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+136,"o_interrupt", false,-1);
    tracep->declBit(c+1485,"write_stb", false,-1);
    tracep->declBit(c+1486,"read_from_data", false,-1);
    tracep->declBit(c+1487,"write_to_control", false,-1);
    tracep->declBus(c+484,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4452,"bus_clock", false,-1);
    tracep->declBit(c+1488,"read_address", false,-1);
    tracep->declBus(c+481,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1489,"raddr", false,-1, 9,0);
    tracep->declBus(c+1490,"waddr", false,-1, 9,0);
    tracep->declBit(c+1491,"bw_reset_request", false,-1);
    tracep->declBit(c+1492,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1493,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1491,"bw_reset_complete", false,-1);
    tracep->declBus(c+1494,"br_config", false,-1, 2,0);
    tracep->declBus(c+1495,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1496,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1491,"dw_reset", false,-1);
    tracep->declBit(c+1492,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1493,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1497,"dr_triggered", false,-1);
    tracep->declBit(c+1498,"dr_primed", false,-1);
    tracep->declBit(c+1499,"dw_trigger", false,-1);
    tracep->declBit(c+1500,"dr_stopped", false,-1);
    tracep->declBus(c+4681,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1501,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1502,"dw_final_stop", false,-1);
    tracep->declBus(c+1503,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1504,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1505,"dr_force_write", false,-1);
    tracep->declBit(c+1506,"dr_run_timeout", false,-1);
    tracep->declBit(c+1507,"new_data", false,-1);
    tracep->declBit(c+1508,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1504,"w_data", false,-1, 30,0);
    tracep->declBit(c+1509,"imm_adr", false,-1);
    tracep->declBit(c+1510,"lst_adr", false,-1);
    tracep->declBus(c+1511,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1512,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1513,"record_ce", false,-1);
    tracep->declBus(c+1514,"r_data", false,-1, 31,0);
    tracep->declBit(c+1502,"bw_stopped", false,-1);
    tracep->declBit(c+1497,"bw_triggered", false,-1);
    tracep->declBit(c+1498,"bw_primed", false,-1);
    tracep->declBit(c+483,"br_wb_ack", false,-1);
    tracep->declBit(c+1515,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+478,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1516,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1517,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1495,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4730,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1518,"br_level_interrupt", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4730,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4642,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4717,"NELM", false,-1, 31,0);
    tracep->declBus(c+4597,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4637,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4731,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4717,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4732,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4452,"i_data_clk", false,-1);
    tracep->declBit(c+4604,"i_ce", false,-1);
    tracep->declBit(c+1105,"i_trigger", false,-1);
    tracep->declBus(c+4554,"i_data", false,-1, 30,0);
    tracep->declBit(c+4452,"i_wb_clk", false,-1);
    tracep->declBit(c+485,"i_wb_cyc", false,-1);
    tracep->declBit(c+486,"i_wb_stb", false,-1);
    tracep->declBit(c+487,"i_wb_we", false,-1);
    tracep->declBit(c+1519,"i_wb_addr", false,-1);
    tracep->declBus(c+489,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+490,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+491,"o_wb_ack", false,-1);
    tracep->declBus(c+492,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+142,"o_interrupt", false,-1);
    tracep->declBit(c+1520,"write_stb", false,-1);
    tracep->declBit(c+1521,"read_from_data", false,-1);
    tracep->declBit(c+1522,"write_to_control", false,-1);
    tracep->declBus(c+492,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4452,"bus_clock", false,-1);
    tracep->declBit(c+1523,"read_address", false,-1);
    tracep->declBus(c+489,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+1524,"raddr", false,-1, 9,0);
    tracep->declBus(c+1525,"waddr", false,-1, 9,0);
    tracep->declBit(c+1526,"bw_reset_request", false,-1);
    tracep->declBit(c+1527,"bw_manual_trigger", false,-1);
    tracep->declBit(c+1528,"bw_disable_trigger", false,-1);
    tracep->declBit(c+1526,"bw_reset_complete", false,-1);
    tracep->declBus(c+1529,"br_config", false,-1, 2,0);
    tracep->declBus(c+1530,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+1531,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+1526,"dw_reset", false,-1);
    tracep->declBit(c+1527,"dw_manual_trigger", false,-1);
    tracep->declBit(c+1528,"dw_disable_trigger", false,-1);
    tracep->declBit(c+1532,"dr_triggered", false,-1);
    tracep->declBit(c+1533,"dr_primed", false,-1);
    tracep->declBit(c+1534,"dw_trigger", false,-1);
    tracep->declBit(c+1535,"dr_stopped", false,-1);
    tracep->declBus(c+4681,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+1536,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+1537,"dw_final_stop", false,-1);
    tracep->declBus(c+1538,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+1539,"qd_data", false,-1, 30,0);
    tracep->declBit(c+1540,"dr_force_write", false,-1);
    tracep->declBit(c+1541,"dr_run_timeout", false,-1);
    tracep->declBit(c+1542,"new_data", false,-1);
    tracep->declBit(c+1543,"dr_force_inhibit", false,-1);
    tracep->declBus(c+1539,"w_data", false,-1, 30,0);
    tracep->declBit(c+1544,"imm_adr", false,-1);
    tracep->declBit(c+1545,"lst_adr", false,-1);
    tracep->declBus(c+1546,"lst_val", false,-1, 30,0);
    tracep->declBus(c+1547,"imm_val", false,-1, 30,0);
    tracep->declBit(c+1548,"record_ce", false,-1);
    tracep->declBus(c+1549,"r_data", false,-1, 31,0);
    tracep->declBit(c+1537,"bw_stopped", false,-1);
    tracep->declBit(c+1532,"bw_triggered", false,-1);
    tracep->declBit(c+1533,"bw_primed", false,-1);
    tracep->declBit(c+491,"br_wb_ack", false,-1);
    tracep->declBit(c+1550,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+486,"bw_cyc_stb", false,-1);
    tracep->declBus(c+1551,"this_addr", false,-1, 9,0);
    tracep->declBus(c+1552,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+1530,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4730,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+1553,"br_level_interrupt", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4591,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4681,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4591,"NSW", false,-1, 31,0);
    tracep->declBus(c+4601,"NFF", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+449,"i_wb_cyc", false,-1);
    tracep->declBit(c+457,"i_wb_stb", false,-1);
    tracep->declBit(c+451,"i_wb_we", false,-1);
    tracep->declBus(c+452,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+453,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+458,"o_wb_ack", false,-1);
    tracep->declBus(c+459,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4540,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4541,"i_btn", false,-1, 4,0);
    tracep->declBus(c+172,"o_led", false,-1, 7,0);
    tracep->declBit(c+144,"o_int", false,-1);
    tracep->declBit(c+1554,"led_demo", false,-1);
    tracep->declBus(c+1555,"r_led", false,-1, 7,0);
    tracep->declBus(c+1556,"w_btn", false,-1, 7,0);
    tracep->declBus(c+1557,"bounced", false,-1, 7,0);
    tracep->declBus(c+1558,"r_sw", false,-1, 7,0);
    tracep->declBit(c+1559,"sw_int", false,-1);
    tracep->declBit(c+1560,"btn_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+1561,"next_btn", false,-1, 4,0);
    tracep->declBus(c+1562,"s_btn", false,-1, 4,0);
    tracep->declBus(c+1563,"r_btn", false,-1, 4,0);
    tracep->declBus(c+1564,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+1560,"r_btn_int", false,-1);
    tracep->declBit(c+1565,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+1566,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+1558,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4591,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4595,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBus(c+1557,"o_leds", false,-1, 7,0);
    tracep->declBus(c+1567,"led_owner", false,-1, 7,0);
    tracep->declBit(c+1568,"led_dir", false,-1);
    tracep->declBus(c+1569,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+1570,"led_clk", false,-1);
    tracep->declBus(c+1571,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+1572,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+1573,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+1574,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+1575,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+1576,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+1577,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+1578,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+1579,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4594,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4642,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4685,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4685,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4597,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4596,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4590,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4589,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4597,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4641,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4637,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4595,"PAW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4555,"i_reset", false,-1);
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
    tracep->declBus(c+4556,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_dbg_stall", false,-1);
    tracep->declBit(c+163,"o_dbg_ack", false,-1);
    tracep->declBus(c+570,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4602,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4531,"o_prof_stb", false,-1);
    tracep->declBus(c+4532,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4533,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4735,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4640,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4736,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4737,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4738,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4739,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4740,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4741,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4742,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4743,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4744,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4745,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4746,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4747,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4748,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4749,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4750,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4751,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4752,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4602,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4601,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4590,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4592,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4681,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4595,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4644,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4645,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4646,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+1580,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+1581,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+1582,"ctri_int", false,-1);
    tracep->declBit(c+1583,"tma_int", false,-1);
    tracep->declBit(c+1584,"tmb_int", false,-1);
    tracep->declBit(c+1585,"tmc_int", false,-1);
    tracep->declBit(c+1586,"jif_int", false,-1);
    tracep->declBit(c+1587,"dmac_int", false,-1);
    tracep->declBit(c+1588,"mtc_int", false,-1);
    tracep->declBit(c+1589,"moc_int", false,-1);
    tracep->declBit(c+1590,"mpc_int", false,-1);
    tracep->declBit(c+1591,"mic_int", false,-1);
    tracep->declBit(c+1592,"utc_int", false,-1);
    tracep->declBit(c+1593,"uoc_int", false,-1);
    tracep->declBit(c+1594,"upc_int", false,-1);
    tracep->declBit(c+1595,"uic_int", false,-1);
    tracep->declBus(c+1596,"actr_data", false,-1, 31,0);
    tracep->declBit(c+1597,"actr_ack", false,-1);
    tracep->declBit(c+4603,"actr_stall", false,-1);
    tracep->declBit(c+1598,"cpu_clken", false,-1);
    tracep->declBit(c+1599,"sys_cyc", false,-1);
    tracep->declBit(c+1600,"sys_stb", false,-1);
    tracep->declBit(c+1601,"sys_we", false,-1);
    tracep->declBus(c+1602,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+1603,"sys_data", false,-1, 31,0);
    tracep->declBus(c+1604,"cpu_addr", false,-1, 24,0);
    tracep->declBus(c+1605,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+1606,"sys_ack", false,-1);
    tracep->declBit(c+4603,"sys_stall", false,-1);
    tracep->declBit(c+1597,"sel_counter", false,-1);
    tracep->declBit(c+1607,"sel_timer", false,-1);
    tracep->declBit(c+1608,"sel_pic", false,-1);
    tracep->declBit(c+1609,"sel_apic", false,-1);
    tracep->declBit(c+1610,"sel_watchdog", false,-1);
    tracep->declBit(c+1611,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+1612,"sel_dmac", false,-1);
    tracep->declBit(c+1613,"sel_mmus", false,-1);
    tracep->declBit(c+1614,"dbg_cyc", false,-1);
    tracep->declBit(c+1615,"dbg_stb", false,-1);
    tracep->declBit(c+1616,"dbg_we", false,-1);
    tracep->declBus(c+1617,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+1618,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+1619,"dbg_ack", false,-1);
    tracep->declBit(c+1620,"dbg_stall", false,-1);
    tracep->declBus(c+1621,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+1622,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+1623,"no_dbg_err", false,-1);
    tracep->declBit(c+1624,"cpu_break", false,-1);
    tracep->declBit(c+1625,"dbg_cmd_write", false,-1);
    tracep->declBit(c+1626,"dbg_cpu_write", false,-1);
    tracep->declBit(c+1627,"dbg_cpu_read", false,-1);
    tracep->declBus(c+1618,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+1622,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+1628,"reset_hold", false,-1);
    tracep->declBit(c+1629,"halt_on_fault", false,-1);
    tracep->declBit(c+1629,"dbg_catch", false,-1);
    tracep->declBit(c+1630,"reset_request", false,-1);
    tracep->declBit(c+1631,"release_request", false,-1);
    tracep->declBit(c+1632,"halt_request", false,-1);
    tracep->declBit(c+1633,"step_request", false,-1);
    tracep->declBit(c+1634,"clear_cache_request", false,-1);
    tracep->declBit(c+1635,"cmd_reset", false,-1);
    tracep->declBit(c+1636,"cmd_halt", false,-1);
    tracep->declBit(c+1637,"cmd_step", false,-1);
    tracep->declBit(c+1638,"cmd_clear_cache", false,-1);
    tracep->declBit(c+1639,"cmd_write", false,-1);
    tracep->declBit(c+1640,"cmd_read", false,-1);
    tracep->declBus(c+1641,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+1642,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+1643,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1635,"cpu_reset", false,-1);
    tracep->declBit(c+1636,"cpu_halt", false,-1);
    tracep->declBit(c+1644,"cpu_has_halted", false,-1);
    tracep->declBit(c+1645,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+1646,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+1647,"cpu_gie", false,-1);
    tracep->declBit(c+4603,"wdt_stall", false,-1);
    tracep->declBit(c+1648,"wdt_ack", false,-1);
    tracep->declBit(c+1649,"wdt_reset", false,-1);
    tracep->declBus(c+1650,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+1651,"wdbus_ack", false,-1);
    tracep->declBus(c+1652,"r_wdbus_data", false,-1, 24,0);
    tracep->declBus(c+1653,"pic_data", false,-1, 31,0);
    tracep->declBus(c+1654,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+1655,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+1656,"wdbus_int", false,-1);
    tracep->declBit(c+47,"cpu_op_stall", false,-1);
    tracep->declBit(c+1657,"cpu_pf_stall", false,-1);
    tracep->declBit(c+1658,"cpu_i_count", false,-1);
    tracep->declBit(c+1659,"dmac_stb", false,-1);
    tracep->declBit(c+1660,"dc_err", false,-1);
    tracep->declBus(c+1661,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4603,"dmac_stall", false,-1);
    tracep->declBit(c+1662,"dmac_ack", false,-1);
    tracep->declBit(c+1663,"dc_cyc", false,-1);
    tracep->declBit(c+1664,"dc_stb", false,-1);
    tracep->declBit(c+1665,"dc_we", false,-1);
    tracep->declBit(c+1666,"dc_stall", false,-1);
    tracep->declBit(c+1667,"dc_ack", false,-1);
    tracep->declBus(c+1668,"dc_addr", false,-1, 24,0);
    tracep->declArray(c+1669,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1685,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1687,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1688,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1689,"ctri_sel", false,-1);
    tracep->declBit(c+4603,"ctri_stall", false,-1);
    tracep->declBit(c+1689,"ctri_ack", false,-1);
    tracep->declBus(c+1690,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4603,"tma_stall", false,-1);
    tracep->declBit(c+1691,"tma_ack", false,-1);
    tracep->declBit(c+4603,"tmb_stall", false,-1);
    tracep->declBit(c+1692,"tmb_ack", false,-1);
    tracep->declBit(c+4603,"tmc_stall", false,-1);
    tracep->declBit(c+1693,"tmc_ack", false,-1);
    tracep->declBit(c+4603,"jif_stall", false,-1);
    tracep->declBit(c+1694,"jif_ack", false,-1);
    tracep->declBus(c+1695,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1696,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1697,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1698,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4603,"pic_stall", false,-1);
    tracep->declBit(c+1699,"pic_ack", false,-1);
    tracep->declBit(c+1700,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1701,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1702,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1703,"cpu_we", false,-1);
    tracep->declArray(c+1704,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1720,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1720,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1722,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1738,"cpu_stall", false,-1);
    tracep->declBit(c+1739,"pic_interrupt", false,-1);
    tracep->declBit(c+1740,"cpu_ack", false,-1);
    tracep->declBit(c+1741,"cpu_err", false,-1);
    tracep->declBus(c+1742,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+259,"ext_stall", false,-1);
    tracep->declBit(c+260,"ext_ack", false,-1);
    tracep->declBit(c+1687,"mmu_cyc", false,-1);
    tracep->declBit(c+1700,"mmu_stb", false,-1);
    tracep->declBit(c+1703,"mmu_we", false,-1);
    tracep->declBit(c+1743,"mmu_stall", false,-1);
    tracep->declBit(c+1744,"mmu_ack", false,-1);
    tracep->declBit(c+1745,"mmu_err", false,-1);
    tracep->declBit(c+4603,"mmus_stall", false,-1);
    tracep->declBit(c+1746,"mmus_ack", false,-1);
    tracep->declBus(c+1604,"mmu_addr", false,-1, 24,0);
    tracep->declArray(c+1704,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+262,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4602,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4603,"cpu_miss", false,-1);
    tracep->declBit(c+1743,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1744,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+262,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4603,"pf_return_stb", false,-1);
    tracep->declBit(c+4603,"pf_return_we", false,-1);
    tracep->declBit(c+4603,"pf_return_cachable", false,-1);
    tracep->declBus(c+4753,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4753,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+237,"ext_cyc", false,-1);
    tracep->declBit(c+238,"ext_stb", false,-1);
    tracep->declBit(c+239,"ext_we", false,-1);
    tracep->declBit(c+1747,"ext_err", false,-1);
    tracep->declBus(c+240,"ext_addr", false,-1, 24,0);
    tracep->declArray(c+241,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+257,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+262,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1748,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1749,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1750,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1751,"last_sys_stb", false,-1);
    tracep->declBit(c+1752,"cmd_read_ack", false,-1);
    tracep->declBit(c+1746,"r_mmus_ack", false,-1);
    tracep->declBit(c+1753,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1754,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1755,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4603,"mtc_stall", false,-1);
    tracep->declBit(c+1756,"mtc_ack", false,-1);
    tracep->declBit(c+4603,"moc_stall", false,-1);
    tracep->declBit(c+1757,"moc_ack", false,-1);
    tracep->declBit(c+4603,"mpc_stall", false,-1);
    tracep->declBit(c+1758,"mpc_ack", false,-1);
    tracep->declBit(c+4603,"mic_stall", false,-1);
    tracep->declBit(c+1759,"mic_ack", false,-1);
    tracep->declBit(c+4603,"utc_stall", false,-1);
    tracep->declBit(c+1760,"utc_ack", false,-1);
    tracep->declBit(c+4603,"uoc_stall", false,-1);
    tracep->declBit(c+1761,"uoc_ack", false,-1);
    tracep->declBit(c+4603,"upc_stall", false,-1);
    tracep->declBit(c+1762,"upc_ack", false,-1);
    tracep->declBit(c+4603,"uic_stall", false,-1);
    tracep->declBit(c+1763,"uic_ack", false,-1);
    tracep->declBus(c+1764,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1765,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1766,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1767,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1768,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1769,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1770,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1771,"uic_data", false,-1, 31,0);
    tracep->declBus(c+1596,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1658,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1772,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1759,"o_wb_ack", false,-1);
    tracep->declBus(c+1767,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1591,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+47,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1773,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1757,"o_wb_ack", false,-1);
    tracep->declBus(c+1765,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1589,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1657,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1774,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1758,"o_wb_ack", false,-1);
    tracep->declBus(c+1766,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1590,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1776,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1756,"o_wb_ack", false,-1);
    tracep->declBus(c+1764,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1588,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1777,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1778,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1763,"o_wb_ack", false,-1);
    tracep->declBus(c+1771,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1595,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+48,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1779,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1761,"o_wb_ack", false,-1);
    tracep->declBus(c+1769,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1593,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1780,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1781,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1762,"o_wb_ack", false,-1);
    tracep->declBus(c+1770,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1594,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4603,"i_reset", false,-1);
    tracep->declBit(c+1782,"i_event", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1783,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1760,"o_wb_ack", false,-1);
    tracep->declBus(c+1768,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1592,"o_int", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4603,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4599,"AW", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4555,"i_reset", false,-1);
    tracep->declBit(c+42,"i_wb_cyc", false,-1);
    tracep->declBit(c+43,"i_wb_stb", false,-1);
    tracep->declBit(c+44,"i_wb_we", false,-1);
    tracep->declBus(c+45,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+46,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+162,"o_wb_stall", false,-1);
    tracep->declBit(c+163,"o_wb_ack", false,-1);
    tracep->declBus(c+570,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1623,"o_wb_err", false,-1);
    tracep->declBit(c+1614,"o_dly_cyc", false,-1);
    tracep->declBit(c+1615,"o_dly_stb", false,-1);
    tracep->declBit(c+1616,"o_dly_we", false,-1);
    tracep->declBus(c+1617,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+1618,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+1622,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+1620,"i_dly_stall", false,-1);
    tracep->declBit(c+1619,"i_dly_ack", false,-1);
    tracep->declBus(c+1621,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4603,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+162,"r_stb", false,-1);
    tracep->declBit(c+1784,"r_we", false,-1);
    tracep->declBus(c+1785,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1786,"r_data", false,-1, 31,0);
    tracep->declBus(c+1787,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4589,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4717,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4642,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1599,"i_swb_cyc", false,-1);
    tracep->declBit(c+1659,"i_swb_stb", false,-1);
    tracep->declBit(c+1601,"i_swb_we", false,-1);
    tracep->declBus(c+1788,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+1603,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_swb_stall", false,-1);
    tracep->declBit(c+1662,"o_swb_ack", false,-1);
    tracep->declBus(c+1661,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+1663,"o_mwb_cyc", false,-1);
    tracep->declBit(c+1664,"o_mwb_stb", false,-1);
    tracep->declBit(c+1665,"o_mwb_we", false,-1);
    tracep->declBus(c+1668,"o_mwb_addr", false,-1, 24,0);
    tracep->declArray(c+1669,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1685,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+1666,"i_mwb_stall", false,-1);
    tracep->declBit(c+1667,"i_mwb_ack", false,-1);
    tracep->declArray(c+262,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+1660,"i_mwb_err", false,-1);
    tracep->declBus(c+1688,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+1587,"o_interrupt", false,-1);
    tracep->declBus(c+4754,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1789,"dma_request", false,-1);
    tracep->declBit(c+1790,"dma_abort", false,-1);
    tracep->declBit(c+1791,"dma_busy", false,-1);
    tracep->declBit(c+1792,"dma_err", false,-1);
    tracep->declBus(c+1793,"dma_src", false,-1, 30,0);
    tracep->declBus(c+1794,"dma_dst", false,-1, 30,0);
    tracep->declBus(c+1795,"read_addr", false,-1, 30,0);
    tracep->declBus(c+1796,"write_addr", false,-1, 30,0);
    tracep->declBus(c+1797,"dma_length", false,-1, 30,0);
    tracep->declBus(c+1798,"remaining_len", false,-1, 30,0);
    tracep->declBus(c+1799,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1800,"dma_trigger", false,-1);
    tracep->declBit(c+1801,"mm2s_request", false,-1);
    tracep->declBit(c+1802,"s2mm_request", false,-1);
    tracep->declBit(c+1803,"mm2s_busy", false,-1);
    tracep->declBit(c+1804,"s2mm_busy", false,-1);
    tracep->declBit(c+1805,"mm2s_err", false,-1);
    tracep->declBit(c+1806,"s2mm_err", false,-1);
    tracep->declBit(c+1807,"mm2s_inc", false,-1);
    tracep->declBit(c+1808,"s2mm_inc", false,-1);
    tracep->declBus(c+1809,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1810,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1811,"mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1812,"s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1813,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1813,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1814,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1815,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4603,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1816,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1817,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1818,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1819,"mm2s_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1820,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1822,"mm2s_valid", false,-1);
    tracep->declBit(c+1823,"mm2s_ready", false,-1);
    tracep->declBit(c+1824,"mm2s_last", false,-1);
    tracep->declArray(c+1825,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1841,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1842,"rx_valid", false,-1);
    tracep->declBit(c+1843,"rx_ready", false,-1);
    tracep->declBit(c+1844,"rx_last", false,-1);
    tracep->declArray(c+1845,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1861,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1862,"tx_valid", false,-1);
    tracep->declBit(c+1863,"tx_ready", false,-1);
    tracep->declBit(c+1864,"tx_last", false,-1);
    tracep->declArray(c+1865,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1881,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1882,"sfifo_full", false,-1);
    tracep->declBit(c+1883,"sfifo_empty", false,-1);
    tracep->declBus(c+1884,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1885,"s2mm_valid", false,-1);
    tracep->declBit(c+1886,"s2mm_ready", false,-1);
    tracep->declBit(c+1887,"s2mm_last", false,-1);
    tracep->declArray(c+1888,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1904,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1905,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1906,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4604,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1907,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1908,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1909,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1910,"s2mm_wr_addr", false,-1, 24,0);
    tracep->declArray(c+1669,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1911,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1663,"wb_cyc", false,-1);
    tracep->declBit(c+1664,"wb_stb", false,-1);
    tracep->declBit(c+1665,"wb_we", false,-1);
    tracep->declBit(c+1666,"wb_stall", false,-1);
    tracep->declBit(c+1667,"wb_ack", false,-1);
    tracep->declBit(c+1660,"wb_err", false,-1);
    tracep->declBus(c+1668,"wb_addr", false,-1, 24,0);
    tracep->declArray(c+1669,"wb_data", false,-1, 511,0);
    tracep->declArray(c+262,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1685,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declArray(c+4755,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4641,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1814,"i_a_cyc", false,-1);
    tracep->declBit(c+1815,"i_a_stb", false,-1);
    tracep->declBit(c+4603,"i_a_we", false,-1);
    tracep->declBus(c+1819,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1669,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1820,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1816,"o_a_stall", false,-1);
    tracep->declBit(c+1817,"o_a_ack", false,-1);
    tracep->declBit(c+1818,"o_a_err", false,-1);
    tracep->declBit(c+1905,"i_b_cyc", false,-1);
    tracep->declBit(c+1906,"i_b_stb", false,-1);
    tracep->declBit(c+4604,"i_b_we", false,-1);
    tracep->declBus(c+1910,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1669,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1911,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1907,"o_b_stall", false,-1);
    tracep->declBit(c+1908,"o_b_ack", false,-1);
    tracep->declBit(c+1909,"o_b_err", false,-1);
    tracep->declBit(c+1663,"o_cyc", false,-1);
    tracep->declBit(c+1664,"o_stb", false,-1);
    tracep->declBit(c+1665,"o_we", false,-1);
    tracep->declBus(c+1668,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1669,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1685,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1666,"i_stall", false,-1);
    tracep->declBit(c+1667,"i_ack", false,-1);
    tracep->declBit(c+1660,"i_err", false,-1);
    tracep->declBit(c+1913,"r_a_owner", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1914,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4589,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4642,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4717,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4758,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4717,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1599,"i_cyc", false,-1);
    tracep->declBit(c+1659,"i_stb", false,-1);
    tracep->declBit(c+1601,"i_we", false,-1);
    tracep->declBus(c+1788,"i_addr", false,-1, 1,0);
    tracep->declBus(c+1603,"i_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_stall", false,-1);
    tracep->declBit(c+1662,"o_ack", false,-1);
    tracep->declBus(c+1661,"o_data", false,-1, 31,0);
    tracep->declBit(c+1789,"o_dma_request", false,-1);
    tracep->declBit(c+1790,"o_dma_abort", false,-1);
    tracep->declBit(c+1791,"i_dma_busy", false,-1);
    tracep->declBit(c+1792,"i_dma_err", false,-1);
    tracep->declBus(c+1793,"o_src_addr", false,-1, 30,0);
    tracep->declBus(c+1794,"o_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1797,"o_length", false,-1, 30,0);
    tracep->declBus(c+1799,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1807,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1808,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1809,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1810,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1800,"o_trigger", false,-1);
    tracep->declBus(c+1795,"i_current_src", false,-1, 30,0);
    tracep->declBus(c+1796,"i_current_dst", false,-1, 30,0);
    tracep->declBus(c+1798,"i_remaining_len", false,-1, 30,0);
    tracep->declBus(c+1688,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+1587,"o_interrupt", false,-1);
    tracep->declBit(c+1915,"int_trigger", false,-1);
    tracep->declBit(c+1916,"r_err", false,-1);
    tracep->declBit(c+1917,"r_zero_len", false,-1);
    tracep->declBit(c+1918,"r_busy", false,-1);
    tracep->declBus(c+1919,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1920,"next_src", false,-1, 31,0);
    tracep->declBus(c+1921,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1922,"next_len", false,-1, 31,0);
    tracep->declBus(c+1923,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1924,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4603,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4603,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4717,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4589,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1790,"i_soft_reset", false,-1);
    tracep->declBit(c+1789,"i_dma_request", false,-1);
    tracep->declBit(c+1791,"o_dma_busy", false,-1);
    tracep->declBit(c+1792,"o_dma_err", false,-1);
    tracep->declBus(c+1793,"i_src_addr", false,-1, 30,0);
    tracep->declBus(c+1794,"i_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1797,"i_length", false,-1, 30,0);
    tracep->declBus(c+1799,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1798,"o_remaining_len", false,-1, 30,0);
    tracep->declBit(c+1800,"i_trigger", false,-1);
    tracep->declBit(c+1801,"o_mm2s_request", false,-1);
    tracep->declBit(c+1803,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1805,"i_mm2s_err", false,-1);
    tracep->declBit(c+1807,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1811,"o_mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1813,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1802,"o_s2mm_request", false,-1);
    tracep->declBit(c+1804,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1806,"i_s2mm_err", false,-1);
    tracep->declBit(c+1808,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1812,"o_s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1813,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4644,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4645,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4646,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4647,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1798,"r_length", false,-1, 30,0);
    tracep->declBus(c+1813,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1925,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4589,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1926,"i_reset", false,-1);
    tracep->declBit(c+1801,"i_request", false,-1);
    tracep->declBit(c+1803,"o_busy", false,-1);
    tracep->declBit(c+1805,"o_err", false,-1);
    tracep->declBit(c+1807,"i_inc", false,-1);
    tracep->declBus(c+1809,"i_size", false,-1, 1,0);
    tracep->declBus(c+1813,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1811,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1814,"o_rd_cyc", false,-1);
    tracep->declBit(c+1815,"o_rd_stb", false,-1);
    tracep->declBit(c+4603,"o_rd_we", false,-1);
    tracep->declBus(c+1819,"o_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1820,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1816,"i_rd_stall", false,-1);
    tracep->declBit(c+1817,"i_rd_ack", false,-1);
    tracep->declArray(c+262,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1818,"i_rd_err", false,-1);
    tracep->declBit(c+1822,"M_VALID", false,-1);
    tracep->declBit(c+1823,"M_READY", false,-1);
    tracep->declArray(c+1825,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1841,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1824,"M_LAST", false,-1);
    tracep->declBus(c+4647,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4646,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4645,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4644,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1927,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1928,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1929,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1930,"first_size", false,-1, 6,0);
    tracep->declBus(c+1931,"next_addr", false,-1, 30,0);
    tracep->declBus(c+1932,"last_request_addr", false,-1, 30,0);
    tracep->declBus(c+1933,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1934,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1935,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1937,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1939,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1941,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1943,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1944,"fill", false,-1, 7,0);
    tracep->declBus(c+1945,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1822,"m_valid", false,-1);
    tracep->declBit(c+1824,"m_last", false,-1);
    tracep->declArray(c+1825,"sreg", false,-1, 511,0);
    tracep->declBus(c+1841,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1946,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1947,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1948,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1949,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1965,"r_inc", false,-1);
    tracep->declBus(c+1966,"r_size", false,-1, 1,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1790,"i_soft_reset", false,-1);
    tracep->declBit(c+1822,"S_VALID", false,-1);
    tracep->declBit(c+1823,"S_READY", false,-1);
    tracep->declArray(c+1825,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1841,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1824,"S_LAST", false,-1);
    tracep->declBit(c+1842,"M_VALID", false,-1);
    tracep->declBit(c+1843,"M_READY", false,-1);
    tracep->declArray(c+1845,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1861,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1844,"M_LAST", false,-1);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1967,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1999,"next_fill", false,-1, 7,0);
    tracep->declBus(c+2000,"fill", false,-1, 7,0);
    tracep->declBit(c+1842,"m_valid", false,-1);
    tracep->declBit(c+1844,"m_last", false,-1);
    tracep->declBit(c+2001,"next_last", false,-1);
    tracep->declBit(c+2002,"r_last", false,-1);
    tracep->declBit(c+2003,"r_full", false,-1);
    tracep->declBus(c+1861,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+2004,"shift", false,-1, 5,0);
    tracep->declArray(c+2005,"s_data", false,-1, 511,0);
    tracep->declBus(c+4759,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4589,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1926,"i_reset", false,-1);
    tracep->declBit(c+1802,"i_request", false,-1);
    tracep->declBit(c+1804,"o_busy", false,-1);
    tracep->declBit(c+1806,"o_err", false,-1);
    tracep->declBit(c+1808,"i_inc", false,-1);
    tracep->declBus(c+1810,"i_size", false,-1, 1,0);
    tracep->declBus(c+1812,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1885,"S_VALID", false,-1);
    tracep->declBit(c+1886,"S_READY", false,-1);
    tracep->declArray(c+1888,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1904,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1887,"S_LAST", false,-1);
    tracep->declBit(c+1905,"o_wr_cyc", false,-1);
    tracep->declBit(c+1906,"o_wr_stb", false,-1);
    tracep->declBit(c+4604,"o_wr_we", false,-1);
    tracep->declBus(c+1910,"o_wr_addr", false,-1, 24,0);
    tracep->declArray(c+1669,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1911,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1907,"i_wr_stall", false,-1);
    tracep->declBit(c+1908,"i_wr_ack", false,-1);
    tracep->declArray(c+262,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1909,"i_wr_err", false,-1);
    tracep->declBus(c+4647,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4646,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4645,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4644,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+2021,"r_inc", false,-1);
    tracep->declBus(c+2022,"r_size", false,-1, 1,0);
    tracep->declBus(c+2023,"next_addr", false,-1, 31,0);
    tracep->declBus(c+2024,"subaddr", false,-1, 5,0);
    tracep->declArray(c+2025,"next_data", false,-1, 1023,0);
    tracep->declArray(c+2057,"r_data", false,-1, 511,0);
    tracep->declArray(c+2073,"next_sel", false,-1, 127,0);
    tracep->declArray(c+2077,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+2081,"r_sel", false,-1, 63,0);
    tracep->declBit(c+2083,"r_last", false,-1);
    tracep->declBus(c+2084,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+2085,"wb_pipeline_full", false,-1);
    tracep->declBit(c+2086,"addr_overflow", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4754,"BW", false,-1, 31,0);
    tracep->declBus(c+4592,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1926,"i_reset", false,-1);
    tracep->declBit(c+1842,"i_wr", false,-1);
    tracep->declArray(c+2087,"i_data", false,-1, 519,0);
    tracep->declBit(c+1882,"o_full", false,-1);
    tracep->declBus(c+1884,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1863,"i_rd", false,-1);
    tracep->declArray(c+2104,"o_data", false,-1, 519,0);
    tracep->declBit(c+1883,"o_empty", false,-1);
    tracep->declBus(c+4596,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1882,"r_full", false,-1);
    tracep->declBit(c+1883,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+2121+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+2393,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+2394,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+2395,"w_wr", false,-1);
    tracep->declBit(c+2396,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1790,"i_soft_reset", false,-1);
    tracep->declBus(c+1810,"i_size", false,-1, 1,0);
    tracep->declBit(c+1862,"S_VALID", false,-1);
    tracep->declBit(c+1863,"S_READY", false,-1);
    tracep->declArray(c+1865,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1881,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1864,"S_LAST", false,-1);
    tracep->declBit(c+1885,"M_VALID", false,-1);
    tracep->declBit(c+1886,"M_READY", false,-1);
    tracep->declArray(c+1888,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1904,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1887,"M_LAST", false,-1);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4647,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4646,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4645,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4644,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1885,"m_valid", false,-1);
    tracep->declBit(c+1887,"m_last", false,-1);
    tracep->declBit(c+2397,"r_last", false,-1);
    tracep->declBit(c+2398,"r_next", false,-1);
    tracep->declArray(c+1888,"sreg", false,-1, 511,0);
    tracep->declBus(c+1904,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+2399,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+1629,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+2400,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+1628,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4686,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1699,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1699,"o_wb_ack", false,-1);
    tracep->declBus(c+1653,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1580,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1739,"o_interrupt", false,-1);
    tracep->declBus(c+2401,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2402,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2403,"r_mie", false,-1);
    tracep->declBit(c+2404,"w_any", false,-1);
    tracep->declBit(c+2405,"wb_write", false,-1);
    tracep->declBit(c+2406,"enable_ints", false,-1);
    tracep->declBit(c+2407,"disable_ints", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4686,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+1689,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1689,"o_wb_ack", false,-1);
    tracep->declBus(c+1690,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+1581,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1582,"o_interrupt", false,-1);
    tracep->declBus(c+2408,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+2409,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+2410,"r_mie", false,-1);
    tracep->declBit(c+2411,"w_any", false,-1);
    tracep->declBit(c+2412,"wb_write", false,-1);
    tracep->declBit(c+2413,"enable_ints", false,-1);
    tracep->declBit(c+2414,"disable_ints", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1687,"i_a_cyc", false,-1);
    tracep->declBit(c+1700,"i_a_stb", false,-1);
    tracep->declBit(c+1703,"i_a_we", false,-1);
    tracep->declBus(c+1604,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1704,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1720,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1743,"o_a_stall", false,-1);
    tracep->declBit(c+1744,"o_a_ack", false,-1);
    tracep->declBit(c+1745,"o_a_err", false,-1);
    tracep->declBit(c+1663,"i_b_cyc", false,-1);
    tracep->declBit(c+1664,"i_b_stb", false,-1);
    tracep->declBit(c+1665,"i_b_we", false,-1);
    tracep->declBus(c+1668,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1669,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1685,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1666,"o_b_stall", false,-1);
    tracep->declBit(c+1667,"o_b_ack", false,-1);
    tracep->declBit(c+1660,"o_b_err", false,-1);
    tracep->declBit(c+237,"o_cyc", false,-1);
    tracep->declBit(c+238,"o_stb", false,-1);
    tracep->declBit(c+239,"o_we", false,-1);
    tracep->declBus(c+240,"o_adr", false,-1, 24,0);
    tracep->declArray(c+241,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+257,"o_sel", false,-1, 63,0);
    tracep->declBit(c+259,"i_stall", false,-1);
    tracep->declBit(c+260,"i_ack", false,-1);
    tracep->declBit(c+1747,"i_err", false,-1);
    tracep->declBit(c+2415,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4594,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4595,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4685,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4642,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4590,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4641,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4685,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4597,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1739,"i_interrupt", false,-1);
    tracep->declBit(c+1598,"i_cpu_clken", false,-1);
    tracep->declBit(c+1636,"i_halt", false,-1);
    tracep->declBit(c+1638,"i_clear_cache", false,-1);
    tracep->declBus(c+1641,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1639,"i_dbg_we", false,-1);
    tracep->declBus(c+1642,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2416,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1645,"o_dbg_stall", false,-1);
    tracep->declBit(c+1644,"o_halted", false,-1);
    tracep->declBus(c+1742,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1643,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1624,"o_break", false,-1);
    tracep->declBit(c+1687,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1700,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1701,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1702,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1703,"o_wb_we", false,-1);
    tracep->declBus(c+1604,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1704,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1720,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1738,"i_wb_stall", false,-1);
    tracep->declBit(c+1740,"i_wb_ack", false,-1);
    tracep->declArray(c+1722,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1741,"i_wb_err", false,-1);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1657,"o_pf_stall", false,-1);
    tracep->declBit(c+1658,"o_i_count", false,-1);
    tracep->declBus(c+4602,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4531,"o_prof_stb", false,-1);
    tracep->declBus(c+4532,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4533,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4642,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4604,"cpu_clken", false,-1);
    tracep->declBit(c+4452,"cpu_clock", false,-1);
    tracep->declBit(c+4604,"clk_gate", false,-1);
    tracep->declBus(c+4602,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+2417,"pf_new_pc", false,-1);
    tracep->declBit(c+2418,"clear_icache", false,-1);
    tracep->declBit(c+49,"pf_ready", false,-1);
    tracep->declBus(c+2419,"pf_request_address", false,-1, 30,0);
    tracep->declBus(c+2420,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2421,"pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+2422,"pf_valid", false,-1);
    tracep->declBit(c+2423,"pf_illegal", false,-1);
    tracep->declBit(c+2424,"pf_cyc", false,-1);
    tracep->declBit(c+2425,"pf_stb", false,-1);
    tracep->declBit(c+2426,"pf_stall", false,-1);
    tracep->declBit(c+2427,"pf_ack", false,-1);
    tracep->declBit(c+2428,"pf_err", false,-1);
    tracep->declBus(c+2429,"pf_addr", false,-1, 24,0);
    tracep->declBit(c+4603,"pf_we", false,-1);
    tracep->declArray(c+4605,"pf_data", false,-1, 511,0);
    tracep->declBit(c+2430,"clear_dcache", false,-1);
    tracep->declBit(c+50,"mem_ce", false,-1);
    tracep->declBit(c+2431,"bus_lock", false,-1);
    tracep->declBus(c+2432,"mem_op", false,-1, 2,0);
    tracep->declBus(c+2433,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+2434,"mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+2435,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1704,"mem_data", false,-1, 511,0);
    tracep->declBus(c+2436,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+2437,"mem_busy", false,-1);
    tracep->declBit(c+2438,"mem_rdbusy", false,-1);
    tracep->declBit(c+2439,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+2440,"mem_valid", false,-1);
    tracep->declBit(c+2441,"mem_bus_err", false,-1);
    tracep->declBus(c+2442,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2443,"mem_result", false,-1, 31,0);
    tracep->declBit(c+2444,"mem_stb_lcl", false,-1);
    tracep->declBit(c+2445,"mem_stb_gbl", false,-1);
    tracep->declBit(c+2446,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+2447,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+2448,"mem_bus_addr", false,-1, 24,0);
    tracep->declBit(c+2449,"mem_we", false,-1);
    tracep->declBit(c+2450,"mem_stall", false,-1);
    tracep->declBit(c+2451,"mem_ack", false,-1);
    tracep->declBit(c+2452,"mem_err", false,-1);
    tracep->declQuad(c+2453,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+1645,"w_dbg_stall", false,-1);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4680,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4595,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4590,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4681,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4642,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4592,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4680,"CS", false,-1, 31,0);
    tracep->declBus(c+4590,"LS", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4592,"DP", false,-1, 31,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4644,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4645,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4646,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4647,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+2430,"i_clear", false,-1);
    tracep->declBit(c+50,"i_pipe_stb", false,-1);
    tracep->declBit(c+2431,"i_lock", false,-1);
    tracep->declBus(c+2432,"i_op", false,-1, 2,0);
    tracep->declBus(c+2433,"i_addr", false,-1, 31,0);
    tracep->declBus(c+2435,"i_data", false,-1, 31,0);
    tracep->declBus(c+2436,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+2437,"o_busy", false,-1);
    tracep->declBit(c+2438,"o_rdbusy", false,-1);
    tracep->declBit(c+2439,"o_pipe_stalled", false,-1);
    tracep->declBit(c+2440,"o_valid", false,-1);
    tracep->declBit(c+2441,"o_err", false,-1);
    tracep->declBus(c+2442,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+2443,"o_data", false,-1, 31,0);
    tracep->declBit(c+2447,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2446,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+2445,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+2444,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+2449,"o_wb_we", false,-1);
    tracep->declBus(c+2448,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1704,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+2453,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+2450,"i_wb_stall", false,-1);
    tracep->declBit(c+2451,"i_wb_ack", false,-1);
    tracep->declBit(c+2452,"i_wb_err", false,-1);
    tracep->declArray(c+1722,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4685,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2455,"ik", false,-1, 31,0);
    tracep->declBit(c+2456,"cyc", false,-1);
    tracep->declBit(c+2457,"stb", false,-1);
    tracep->declBit(c+2458,"last_ack", false,-1);
    tracep->declBit(c+2459,"end_of_line", false,-1);
    tracep->declBit(c+2460,"last_line_stb", false,-1);
    tracep->declBit(c+2461,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+2462,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+2463,"npending", false,-1, 4,0);
    tracep->declBus(c+2464,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2465+i*1,"c_vtags", true,(i+0), 21,0);
    }
    tracep->declBit(c+2473,"set_vflag", false,-1);
    tracep->declBus(c+2474,"state", false,-1, 1,0);
    tracep->declBus(c+2475,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+2476,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+2492,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+2508,"lock_gbl", false,-1);
    tracep->declBit(c+2509,"lock_lcl", false,-1);
    tracep->declBit(c+2510,"c_wr", false,-1);
    tracep->declArray(c+2511,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+2527,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+2529,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+2530,"last_tag", false,-1, 21,0);
    tracep->declBit(c+2531,"last_tag_valid", false,-1);
    tracep->declBus(c+2532,"i_cline", false,-1, 2,0);
    tracep->declBus(c+2533,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+2534,"cache_miss_inow", false,-1);
    tracep->declBit(c+2535,"w_cachable", false,-1);
    tracep->declBit(c+2536,"raw_cachable_address", false,-1);
    tracep->declBit(c+2537,"r_cachable", false,-1);
    tracep->declBit(c+2538,"r_svalid", false,-1);
    tracep->declBit(c+2539,"r_dvalid", false,-1);
    tracep->declBit(c+2540,"r_rd", false,-1);
    tracep->declBit(c+2541,"r_cache_miss", false,-1);
    tracep->declBit(c+2542,"r_rd_pending", false,-1);
    tracep->declBus(c+2543,"r_addr", false,-1, 24,0);
    tracep->declBus(c+2544,"r_cline", false,-1, 2,0);
    tracep->declBus(c+2545,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+2546,"r_ctag", false,-1, 21,0);
    tracep->declBit(c+2547,"wr_cstb", false,-1);
    tracep->declBit(c+2548,"r_iv", false,-1);
    tracep->declBit(c+2549,"in_cache", false,-1);
    tracep->declBus(c+2550,"r_itag", false,-1, 21,0);
    tracep->declBus(c+2551,"req_data", false,-1, 12,0);
    tracep->declBit(c+2552,"gie", false,-1);
    tracep->declArray(c+2553,"pre_data", false,-1, 511,0);
    tracep->declArray(c+2569,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+2585,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+2586,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+2453,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+2588,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+2589,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+2605,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2621+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+2637,"wraddr", false,-1, 4,0);
    tracep->declBus(c+2638,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4760,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+2639,"i_addr", false,-1, 30,0);
    tracep->declBit(c+2536,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4603,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4680,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4595,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4590,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4638,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4648,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4680,"CW", false,-1, 31,0);
    tracep->declBus(c+4590,"LS", false,-1, 31,0);
    tracep->declBus(c+4638,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4642,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+2417,"i_new_pc", false,-1);
    tracep->declBit(c+2418,"i_clear_cache", false,-1);
    tracep->declBit(c+49,"i_ready", false,-1);
    tracep->declBus(c+2419,"i_pc", false,-1, 30,0);
    tracep->declBit(c+2422,"o_valid", false,-1);
    tracep->declBit(c+2423,"o_illegal", false,-1);
    tracep->declBus(c+2420,"o_insn", false,-1, 31,0);
    tracep->declBus(c+2421,"o_pc", false,-1, 30,0);
    tracep->declBit(c+2424,"o_wb_cyc", false,-1);
    tracep->declBit(c+2425,"o_wb_stb", false,-1);
    tracep->declBit(c+4603,"o_wb_we", false,-1);
    tracep->declBus(c+2429,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4605,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+2426,"i_wb_stall", false,-1);
    tracep->declBit(c+2427,"i_wb_ack", false,-1);
    tracep->declBit(c+2428,"i_wb_err", false,-1);
    tracep->declArray(c+1722,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4601,"INLSB", false,-1, 31,0);
    tracep->declBit(c+2640,"r_v", false,-1);
    tracep->declArray(c+2641,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2657+i*1,"cache_tags", true,(i+0), 18,0);
    }
    tracep->declBus(c+2665,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+2666,"r_v_from_pc", false,-1);
    tracep->declBit(c+2667,"r_v_from_last", false,-1);
    tracep->declBit(c+2668,"rvsrc", false,-1);
    tracep->declBit(c+2669,"w_v_from_pc", false,-1);
    tracep->declBit(c+2670,"w_v_from_last", false,-1);
    tracep->declBus(c+2671,"lastpc", false,-1, 30,0);
    tracep->declBus(c+2672,"wraddr", false,-1, 5,0);
    tracep->declBus(c+2673,"pc_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2674,"last_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2675,"tag_lookup", false,-1, 24,3);
    tracep->declBus(c+2676,"pc_tag", false,-1, 24,3);
    tracep->declBus(c+2677,"lasttag", false,-1, 24,3);
    tracep->declBit(c+2678,"illegal_valid", false,-1);
    tracep->declBus(c+2679,"illegal_cache", false,-1, 24,3);
    tracep->declArray(c+2680,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2696,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+2421,"r_pc", false,-1, 30,0);
    tracep->declBit(c+2712,"isrc", false,-1);
    tracep->declBus(c+2713,"delay", false,-1, 1,0);
    tracep->declBit(c+2714,"svmask", false,-1);
    tracep->declBit(c+2715,"last_ack", false,-1);
    tracep->declBit(c+2716,"needload", false,-1);
    tracep->declBit(c+2717,"last_addr", false,-1);
    tracep->declBit(c+2718,"bus_abort", false,-1);
    tracep->declBus(c+2719,"saddr", false,-1, 2,0);
    tracep->declBit(c+51,"w_advance", false,-1);
    tracep->declBit(c+2720,"w_invalidate_result", false,-1);
    tracep->declBus(c+2721,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2722,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2723,"shifted", false,-1, 511,0);
    tracep->declBus(c+2739,"shift", false,-1, 3,0);
    tracep->declBit(c+4603,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+2447,"i_a_cyc_a", false,-1);
    tracep->declBit(c+2446,"i_a_cyc_b", false,-1);
    tracep->declBit(c+2445,"i_a_stb_a", false,-1);
    tracep->declBit(c+2444,"i_a_stb_b", false,-1);
    tracep->declBit(c+2449,"i_a_we", false,-1);
    tracep->declBus(c+2448,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1704,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+2453,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+2450,"o_a_stall", false,-1);
    tracep->declBit(c+2451,"o_a_ack", false,-1);
    tracep->declBit(c+2452,"o_a_err", false,-1);
    tracep->declBit(c+2424,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4603,"i_b_cyc_b", false,-1);
    tracep->declBit(c+2425,"i_b_stb_a", false,-1);
    tracep->declBit(c+4603,"i_b_stb_b", false,-1);
    tracep->declBit(c+4603,"i_b_we", false,-1);
    tracep->declBus(c+2429,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1704,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4621,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+2426,"o_b_stall", false,-1);
    tracep->declBit(c+2427,"o_b_ack", false,-1);
    tracep->declBit(c+2428,"o_b_err", false,-1);
    tracep->declBit(c+1687,"o_cyc_a", false,-1);
    tracep->declBit(c+1701,"o_cyc_b", false,-1);
    tracep->declBit(c+1700,"o_stb_a", false,-1);
    tracep->declBit(c+1702,"o_stb_b", false,-1);
    tracep->declBit(c+1703,"o_we", false,-1);
    tracep->declBus(c+1604,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1704,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1720,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1738,"i_stall", false,-1);
    tracep->declBit(c+1740,"i_ack", false,-1);
    tracep->declBit(c+1741,"i_err", false,-1);
    tracep->declBit(c+2740,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4761,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4590,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4641,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4761,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1739,"i_interrupt", false,-1);
    tracep->declBit(c+4604,"o_clken", false,-1);
    tracep->declBit(c+1636,"i_halt", false,-1);
    tracep->declBit(c+1638,"i_clear_cache", false,-1);
    tracep->declBus(c+1641,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+1639,"i_dbg_we", false,-1);
    tracep->declBus(c+1642,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+2416,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+1645,"o_dbg_stall", false,-1);
    tracep->declBus(c+1742,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1643,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+1624,"o_break", false,-1);
    tracep->declBit(c+2417,"o_pf_new_pc", false,-1);
    tracep->declBit(c+2418,"o_clear_icache", false,-1);
    tracep->declBit(c+49,"o_pf_ready", false,-1);
    tracep->declBus(c+2419,"o_pf_request_address", false,-1, 30,0);
    tracep->declBit(c+2422,"i_pf_valid", false,-1);
    tracep->declBit(c+2423,"i_pf_illegal", false,-1);
    tracep->declBus(c+2420,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+2421,"i_pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+2430,"o_clear_dcache", false,-1);
    tracep->declBit(c+50,"o_mem_ce", false,-1);
    tracep->declBit(c+2431,"o_bus_lock", false,-1);
    tracep->declBus(c+2432,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+2433,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+2435,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+2434,"o_mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+2436,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+2437,"i_mem_busy", false,-1);
    tracep->declBit(c+2438,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+2439,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+2440,"i_mem_valid", false,-1);
    tracep->declBit(c+2441,"i_bus_err", false,-1);
    tracep->declBus(c+2442,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+2443,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+47,"o_op_stall", false,-1);
    tracep->declBit(c+1657,"o_pf_stall", false,-1);
    tracep->declBit(c+1658,"o_i_count", false,-1);
    tracep->declBus(c+4602,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4531,"o_prof_stb", false,-1);
    tracep->declBus(c+4532,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4533,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4762,"RESET_BUS_ADDRESS", false,-1, 28,0);
    tracep->declBus(c+4763,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4635,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4649,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4650,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4720,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4725,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4686,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4588,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4663,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4685,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4684,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4589,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4683,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4591,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4599,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4680,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4681,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4592,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2741+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2773,"flags", false,-1, 3,0);
    tracep->declBus(c+2774,"iflags", false,-1, 3,0);
    tracep->declBus(c+2775,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2776,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2777,"break_en", false,-1);
    tracep->declBit(c+2778,"user_step", false,-1);
    tracep->declBit(c+2779,"sleep", false,-1);
    tracep->declBit(c+2780,"r_halted", false,-1);
    tracep->declBit(c+2781,"break_pending", false,-1);
    tracep->declBit(c+2782,"trap", false,-1);
    tracep->declBit(c+2783,"gie", false,-1);
    tracep->declBit(c+2784,"ubreak", false,-1);
    tracep->declBit(c+2785,"pending_interrupt", false,-1);
    tracep->declBit(c+2786,"stepped", false,-1);
    tracep->declBit(c+2787,"step", false,-1);
    tracep->declBit(c+2788,"ill_err_u", false,-1);
    tracep->declBit(c+2789,"ill_err_i", false,-1);
    tracep->declBit(c+2790,"ibus_err_flag", false,-1);
    tracep->declBit(c+2791,"ubus_err_flag", false,-1);
    tracep->declBit(c+2792,"idiv_err_flag", false,-1);
    tracep->declBit(c+2793,"udiv_err_flag", false,-1);
    tracep->declBit(c+4603,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4603,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2794,"ihalt_phase", false,-1);
    tracep->declBit(c+2795,"uhalt_phase", false,-1);
    tracep->declBit(c+2796,"master_ce", false,-1);
    tracep->declBit(c+52,"master_stall", false,-1);
    tracep->declBus(c+2797,"pf_pc", false,-1, 30,0);
    tracep->declBit(c+2798,"new_pc", false,-1);
    tracep->declBit(c+2798,"clear_pipeline", false,-1);
    tracep->declBit(c+53,"dcd_stalled", false,-1);
    tracep->declBit(c+2783,"pf_gie", false,-1);
    tracep->declBus(c+2799,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+54,"dcd_ce", false,-1);
    tracep->declBit(c+2800,"dcd_phase", false,-1);
    tracep->declBus(c+2801,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2802,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2803,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2804,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2805,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2806,"dcd_Acc", false,-1);
    tracep->declBit(c+2807,"dcd_Bcc", false,-1);
    tracep->declBit(c+2808,"dcd_Apc", false,-1);
    tracep->declBit(c+2809,"dcd_Bpc", false,-1);
    tracep->declBit(c+2810,"dcd_Rcc", false,-1);
    tracep->declBit(c+2811,"dcd_Rpc", false,-1);
    tracep->declBus(c+2812,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2813,"dcd_wR", false,-1);
    tracep->declBit(c+2814,"dcd_rA", false,-1);
    tracep->declBit(c+2815,"dcd_rB", false,-1);
    tracep->declBit(c+2816,"dcd_ALU", false,-1);
    tracep->declBit(c+2817,"dcd_M", false,-1);
    tracep->declBit(c+2818,"dcd_DIV", false,-1);
    tracep->declBit(c+2819,"dcd_FP", false,-1);
    tracep->declBit(c+2820,"dcd_wF", false,-1);
    tracep->declBit(c+2783,"dcd_gie", false,-1);
    tracep->declBit(c+2821,"dcd_break", false,-1);
    tracep->declBit(c+2822,"dcd_lock", false,-1);
    tracep->declBit(c+2823,"dcd_pipe", false,-1);
    tracep->declBit(c+2824,"dcd_ljmp", false,-1);
    tracep->declBit(c+2825,"dcd_valid", false,-1);
    tracep->declBus(c+4557,"dcd_pc", false,-1, 30,0);
    tracep->declBus(c+2826,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2827,"dcd_zI", false,-1);
    tracep->declBit(c+55,"dcd_A_stall", false,-1);
    tracep->declBit(c+56,"dcd_B_stall", false,-1);
    tracep->declBit(c+4558,"dcd_F_stall", false,-1);
    tracep->declBit(c+2828,"dcd_illegal", false,-1);
    tracep->declBit(c+2829,"dcd_early_branch", false,-1);
    tracep->declBit(c+2830,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2831,"dcd_branch_pc", false,-1, 30,0);
    tracep->declBit(c+4559,"dcd_sim", false,-1);
    tracep->declBus(c+4560,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2832,"prelock_stall", false,-1);
    tracep->declBit(c+2833,"last_lock_insn", false,-1);
    tracep->declBit(c+2834,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2835,"pending_sreg_write", false,-1);
    tracep->declBit(c+4561,"op_valid", false,-1);
    tracep->declBit(c+2836,"op_valid_mem", false,-1);
    tracep->declBit(c+2837,"op_valid_alu", false,-1);
    tracep->declBit(c+2838,"op_valid_div", false,-1);
    tracep->declBit(c+2839,"op_valid_fpu", false,-1);
    tracep->declBit(c+57,"op_stall", false,-1);
    tracep->declBus(c+2840,"op_opn", false,-1, 3,0);
    tracep->declBus(c+2436,"op_R", false,-1, 4,0);
    tracep->declBit(c+2841,"op_Rcc", false,-1);
    tracep->declBus(c+2842,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2843,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2844,"op_rA", false,-1);
    tracep->declBit(c+2845,"op_rB", false,-1);
    tracep->declBus(c+2846,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2847,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2848,"op_pc", false,-1, 30,0);
    tracep->declBus(c+2849,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2850,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2435,"op_Av", false,-1, 31,0);
    tracep->declBus(c+2433,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+58,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+59,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2851,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2852,"op_wR", false,-1);
    tracep->declBit(c+2853,"op_wF", false,-1);
    tracep->declBit(c+2783,"op_gie", false,-1);
    tracep->declBus(c+2854,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2855,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2856,"op_F", false,-1, 7,0);
    tracep->declBit(c+60,"op_ce", false,-1);
    tracep->declBit(c+2857,"op_phase", false,-1);
    tracep->declBit(c+2858,"op_pipe", false,-1);
    tracep->declBit(c+2859,"r_op_break", false,-1);
    tracep->declBit(c+2860,"w_op_valid", false,-1);
    tracep->declBit(c+4603,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4764,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2861,"op_illegal", false,-1);
    tracep->declBit(c+2859,"op_break", false,-1);
    tracep->declBit(c+2862,"op_lock", false,-1);
    tracep->declBit(c+4562,"op_sim", false,-1);
    tracep->declBus(c+4563,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4564,"alu_sim", false,-1);
    tracep->declBus(c+4565,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2863,"alu_pc", false,-1, 30,0);
    tracep->declBus(c+2864,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2865,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2866,"mem_pc_valid", false,-1);
    tracep->declBit(c+2867,"alu_pc_valid", false,-1);
    tracep->declBit(c+2868,"alu_phase", false,-1);
    tracep->declBit(c+4566,"alu_ce", false,-1);
    tracep->declBit(c+61,"alu_stall", false,-1);
    tracep->declBus(c+2869,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2870,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2871,"alu_valid", false,-1);
    tracep->declBit(c+2872,"alu_busy", false,-1);
    tracep->declBit(c+2873,"set_cond", false,-1);
    tracep->declBit(c+2874,"alu_wR", false,-1);
    tracep->declBit(c+2875,"alu_wF", false,-1);
    tracep->declBit(c+2783,"alu_gie", false,-1);
    tracep->declBit(c+2876,"alu_illegal", false,-1);
    tracep->declBit(c+62,"mem_ce", false,-1);
    tracep->declBit(c+63,"mem_stalled", false,-1);
    tracep->declBit(c+64,"div_ce", false,-1);
    tracep->declBit(c+2877,"div_error", false,-1);
    tracep->declBit(c+2878,"div_busy", false,-1);
    tracep->declBit(c+2879,"div_valid", false,-1);
    tracep->declBus(c+2880,"div_result", false,-1, 31,0);
    tracep->declBus(c+2881,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4603,"fpu_ce", false,-1);
    tracep->declBit(c+4603,"fpu_error", false,-1);
    tracep->declBit(c+4603,"fpu_busy", false,-1);
    tracep->declBit(c+4603,"fpu_valid", false,-1);
    tracep->declBus(c+4602,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4649,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+65,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2882,"dbgv", false,-1);
    tracep->declBit(c+2883,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2884,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2885,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2886,"r_dbg_stall", false,-1);
    tracep->declBit(c+2887,"wr_write_pc", false,-1);
    tracep->declBit(c+2888,"wr_write_cc", false,-1);
    tracep->declBit(c+2889,"wr_write_scc", false,-1);
    tracep->declBit(c+2890,"wr_write_ucc", false,-1);
    tracep->declBit(c+2891,"wr_reg_ce", false,-1);
    tracep->declBit(c+2892,"wr_flags_ce", false,-1);
    tracep->declBus(c+2893,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2894,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2895,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2896,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2897,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2898,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2899,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2900,"ipc", false,-1, 30,0);
    tracep->declBus(c+2901,"upc", false,-1, 30,0);
    tracep->declBit(c+2902,"last_write_to_cc", false,-1);
    tracep->declBit(c+2903,"cc_write_hold", false,-1);
    tracep->declBit(c+2418,"r_clear_icache", false,-1);
    tracep->declBit(c+66,"pfpcset", false,-1);
    tracep->declBus(c+67,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4604,"w_clken", false,-1);
    tracep->declBus(c+2904,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2905,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2906,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+68,"avsrc", false,-1, 2,0);
    tracep->declBus(c+69,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2907,"bisrc", false,-1, 1,0);
    tracep->declBit(c+70,"cpu_sim", false,-1);
    tracep->declBus(c+4641,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2908,"r_alu_sim", false,-1);
    tracep->declBus(c+2909,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2910,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2832,"r_prelock_stall", false,-1);
    tracep->declBus(c+2911,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+2434,"r_lock_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+2430,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2792,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2793,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4681,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+2912,"i_reset", false,-1);
    tracep->declBit(c+64,"i_wr", false,-1);
    tracep->declBit(c+2913,"i_signed", false,-1);
    tracep->declBus(c+2435,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+2433,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2878,"o_busy", false,-1);
    tracep->declBit(c+2879,"o_valid", false,-1);
    tracep->declBit(c+2877,"o_err", false,-1);
    tracep->declBus(c+2880,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2881,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2914,"r_busy", false,-1);
    tracep->declBus(c+2915,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2916,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2918,"diff", false,-1, 32,0);
    tracep->declBit(c+2920,"r_sign", false,-1);
    tracep->declBit(c+2921,"pre_sign", false,-1);
    tracep->declBit(c+2922,"r_z", false,-1);
    tracep->declBit(c+2923,"r_c", false,-1);
    tracep->declBit(c+2924,"last_bit", false,-1);
    tracep->declBus(c+2925,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2926,"zero_divisor", false,-1);
    tracep->declBit(c+2927,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2840,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2863,"r_alu_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2868,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4603,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4603,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2794,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2862,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2858,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2834,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2835,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2852,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2781,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2928,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2786,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2929,"prof_stb", false,-1);
    tracep->declBus(c+2930,"prof_addr", false,-1, 30,0);
    tracep->declBus(c+2931,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2795,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2857,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+2436,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2842,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2843,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2844,"r_op_rA", false,-1);
    tracep->declBit(c+2845,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2932,"r_op_sim", false,-1);
    tracep->declBus(c+2933,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2934,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1742,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2876,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2783,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2848,"r_op_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2782,"r_trap", false,-1);
    tracep->declBit(c+2784,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2791,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2788,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2901,"r_upc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4603,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4590,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+2912,"i_reset", false,-1);
    tracep->declBit(c+4566,"i_stb", false,-1);
    tracep->declBus(c+2840,"i_op", false,-1, 3,0);
    tracep->declBus(c+2435,"i_a", false,-1, 31,0);
    tracep->declBus(c+2433,"i_b", false,-1, 31,0);
    tracep->declBus(c+2869,"o_c", false,-1, 31,0);
    tracep->declBus(c+2870,"o_f", false,-1, 3,0);
    tracep->declBit(c+2871,"o_valid", false,-1);
    tracep->declBit(c+2872,"o_busy", false,-1);
    tracep->declBus(c+2935,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2936,"z", false,-1);
    tracep->declBit(c+2937,"n", false,-1);
    tracep->declBit(c+2938,"v", false,-1);
    tracep->declBit(c+2939,"vx", false,-1);
    tracep->declBit(c+2940,"c", false,-1);
    tracep->declBit(c+2941,"pre_sign", false,-1);
    tracep->declBit(c+2942,"set_ovfl", false,-1);
    tracep->declBit(c+2943,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2944,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2946,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2948,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2950,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2952,"mpyhi", false,-1);
    tracep->declBit(c+2953,"mpybusy", false,-1);
    tracep->declBit(c+2954,"mpydone", false,-1);
    tracep->declBit(c+71,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2872,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2955,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2957,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4590,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+2912,"i_reset", false,-1);
    tracep->declBit(c+71,"i_stb", false,-1);
    tracep->declBus(c+2959,"i_op", false,-1, 1,0);
    tracep->declBus(c+2435,"i_a", false,-1, 31,0);
    tracep->declBus(c+2433,"i_b", false,-1, 31,0);
    tracep->declBit(c+2954,"o_valid", false,-1);
    tracep->declBit(c+2953,"o_busy", false,-1);
    tracep->declQuad(c+2950,"o_result", false,-1, 63,0);
    tracep->declBit(c+2952,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2960,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2962,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2964,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2965,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2966,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2967,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2952,"r_hi", false,-1);
    tracep->declQuad(c+2968,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2970,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2972,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2974,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4761,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4761,"AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+2976,"i_reset", false,-1);
    tracep->declBit(c+54,"i_ce", false,-1);
    tracep->declBit(c+53,"i_stalled", false,-1);
    tracep->declBus(c+2420,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2783,"i_gie", false,-1);
    tracep->declBus(c+2421,"i_pc", false,-1, 30,0);
    tracep->declBit(c+2422,"i_pf_valid", false,-1);
    tracep->declBit(c+2423,"i_illegal", false,-1);
    tracep->declBit(c+2825,"o_valid", false,-1);
    tracep->declBit(c+2800,"o_phase", false,-1);
    tracep->declBit(c+2828,"o_illegal", false,-1);
    tracep->declBus(c+4557,"o_pc", false,-1, 30,0);
    tracep->declBus(c+2904,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2905,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2906,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2804,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2805,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2826,"o_I", false,-1, 31,0);
    tracep->declBit(c+2827,"o_zI", false,-1);
    tracep->declBus(c+2812,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2820,"o_wF", false,-1);
    tracep->declBus(c+2799,"o_op", false,-1, 3,0);
    tracep->declBit(c+2816,"o_ALU", false,-1);
    tracep->declBit(c+2817,"o_M", false,-1);
    tracep->declBit(c+2818,"o_DV", false,-1);
    tracep->declBit(c+2819,"o_FP", false,-1);
    tracep->declBit(c+2821,"o_break", false,-1);
    tracep->declBit(c+2822,"o_lock", false,-1);
    tracep->declBit(c+2813,"o_wR", false,-1);
    tracep->declBit(c+2814,"o_rA", false,-1);
    tracep->declBit(c+2815,"o_rB", false,-1);
    tracep->declBit(c+2829,"o_early_branch", false,-1);
    tracep->declBit(c+2830,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2831,"o_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2824,"o_ljmp", false,-1);
    tracep->declBit(c+2823,"o_pipe", false,-1);
    tracep->declBit(c+4559,"o_sim", false,-1);
    tracep->declBus(c+4560,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4725,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4763,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4635,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4717,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4658,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4660,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2977,"w_op", false,-1, 4,0);
    tracep->declBit(c+2978,"w_ldi", false,-1);
    tracep->declBit(c+2979,"w_mov", false,-1);
    tracep->declBit(c+2980,"w_cmptst", false,-1);
    tracep->declBit(c+2981,"w_ldilo", false,-1);
    tracep->declBit(c+2982,"w_ALU", false,-1);
    tracep->declBit(c+2983,"w_brev", false,-1);
    tracep->declBit(c+2984,"w_noop", false,-1);
    tracep->declBit(c+2985,"w_lock", false,-1);
    tracep->declBit(c+2986,"w_sim", false,-1);
    tracep->declBit(c+2987,"w_break", false,-1);
    tracep->declBit(c+2988,"w_special", false,-1);
    tracep->declBit(c+2989,"w_add", false,-1);
    tracep->declBit(c+2990,"w_mpy", false,-1);
    tracep->declBus(c+2804,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2805,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2804,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2991,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2992,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2991,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2992,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2993,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2994,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2995,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2996,"w_wF", false,-1);
    tracep->declBit(c+2997,"w_mem", false,-1);
    tracep->declBit(c+2998,"w_sto", false,-1);
    tracep->declBit(c+2999,"w_div", false,-1);
    tracep->declBit(c+3000,"w_fpu", false,-1);
    tracep->declBit(c+3001,"w_wR", false,-1);
    tracep->declBit(c+3002,"w_rA", false,-1);
    tracep->declBit(c+3003,"w_rB", false,-1);
    tracep->declBit(c+3004,"w_wR_n", false,-1);
    tracep->declBit(c+3005,"w_ljmp", false,-1);
    tracep->declBit(c+2824,"w_ljmp_dly", false,-1);
    tracep->declBit(c+3006,"w_cis_ljmp", false,-1);
    tracep->declBus(c+3007,"iword", false,-1, 31,0);
    tracep->declBit(c+3008,"pf_valid", false,-1);
    tracep->declBus(c+3009,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+3010,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+3011,"r_I", false,-1, 22,0);
    tracep->declBus(c+3012,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+3013,"w_I", false,-1, 22,0);
    tracep->declBit(c+3014,"w_Iz", false,-1);
    tracep->declBus(c+3015,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2825,"r_valid", false,-1);
    tracep->declBit(c+3016,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4603,"illegal_shift", false,-1);
    tracep->declBit(c+4603,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+3017,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+3018,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2800,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2829,"r_early_branch", false,-1);
    tracep->declBit(c+2830,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2824,"r_ljmp", false,-1);
    tracep->declBus(c+2831,"r_branch_pc", false,-1, 30,0);
    tracep->declBit(c+3019,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2823,"r_pipe", false,-1);
    tracep->declBit(c+3016,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_ce", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+3020,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1694,"o_wb_ack", false,-1);
    tracep->declBus(c+1698,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1586,"o_int", false,-1);
    tracep->declBus(c+1698,"r_counter", false,-1, 31,0);
    tracep->declBit(c+3021,"int_set", false,-1);
    tracep->declBit(c+3022,"new_set", false,-1);
    tracep->declBit(c+3023,"int_now", false,-1);
    tracep->declBus(c+3024,"int_when", false,-1, 31,0);
    tracep->declBus(c+3025,"new_when", false,-1, 31,0);
    tracep->declBus(c+3026,"till_wb", false,-1, 31,0);
    tracep->declBus(c+3027,"till_when", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4717,"VW", false,-1, 31,0);
    tracep->declBus(c+4597,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_ce", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+3028,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1691,"o_wb_ack", false,-1);
    tracep->declBus(c+1695,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1583,"o_int", false,-1);
    tracep->declBit(c+3029,"r_running", false,-1);
    tracep->declBit(c+3030,"r_zero", false,-1);
    tracep->declBus(c+3031,"r_value", false,-1, 30,0);
    tracep->declBit(c+3032,"wb_write", false,-1);
    tracep->declBit(c+3033,"auto_reload", false,-1);
    tracep->declBus(c+3034,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3033,"r_auto_reload", false,-1);
    tracep->declBus(c+3034,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4717,"VW", false,-1, 31,0);
    tracep->declBus(c+4597,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_ce", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+3035,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1692,"o_wb_ack", false,-1);
    tracep->declBus(c+1696,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1584,"o_int", false,-1);
    tracep->declBit(c+3036,"r_running", false,-1);
    tracep->declBit(c+3037,"r_zero", false,-1);
    tracep->declBus(c+3038,"r_value", false,-1, 30,0);
    tracep->declBit(c+3039,"wb_write", false,-1);
    tracep->declBit(c+3040,"auto_reload", false,-1);
    tracep->declBus(c+3041,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3040,"r_auto_reload", false,-1);
    tracep->declBus(c+3041,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4717,"VW", false,-1, 31,0);
    tracep->declBus(c+4597,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_ce", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+3042,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1693,"o_wb_ack", false,-1);
    tracep->declBus(c+1697,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1585,"o_int", false,-1);
    tracep->declBit(c+3043,"r_running", false,-1);
    tracep->declBit(c+3044,"r_zero", false,-1);
    tracep->declBus(c+3045,"r_value", false,-1, 30,0);
    tracep->declBit(c+3046,"wb_write", false,-1);
    tracep->declBit(c+3047,"auto_reload", false,-1);
    tracep->declBus(c+3048,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+3047,"r_auto_reload", false,-1);
    tracep->declBus(c+3048,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4588,"BW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+3049,"i_reset", false,-1);
    tracep->declBus(c+4765,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+1656,"o_int", false,-1);
    tracep->declBus(c+3050,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4642,"BW", false,-1, 31,0);
    tracep->declBus(c+4717,"VW", false,-1, 31,0);
    tracep->declBus(c+4641,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+1635,"i_reset", false,-1);
    tracep->declBit(c+1775,"i_ce", false,-1);
    tracep->declBit(c+1599,"i_wb_cyc", false,-1);
    tracep->declBit(c+3051,"i_wb_stb", false,-1);
    tracep->declBit(c+1601,"i_wb_we", false,-1);
    tracep->declBus(c+1603,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4635,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+1648,"o_wb_ack", false,-1);
    tracep->declBus(c+1650,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+1649,"o_int", false,-1);
    tracep->declBit(c+3052,"r_running", false,-1);
    tracep->declBit(c+3053,"r_zero", false,-1);
    tracep->declBus(c+3054,"r_value", false,-1, 30,0);
    tracep->declBit(c+3055,"wb_write", false,-1);
    tracep->declBit(c+4603,"auto_reload", false,-1);
    tracep->declBus(c+4718,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4766,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4766,"TB", false,-1, 4,0);
    tracep->declBus(c+4733,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+169,"i_wr", false,-1);
    tracep->declBus(c+167,"i_data", false,-1, 7,0);
    tracep->declBit(c+4536,"o_uart_tx", false,-1);
    tracep->declBit(c+170,"o_busy", false,-1);
    tracep->declBus(c+4649,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4720,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4635,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+3056,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+3057,"state", false,-1, 3,0);
    tracep->declBus(c+3058,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+170,"r_busy", false,-1);
    tracep->declBit(c+3059,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+517,"i_wb_cyc", false,-1);
    tracep->declBit(c+518,"i_wb_stb", false,-1);
    tracep->declBit(c+519,"i_wb_we", false,-1);
    tracep->declBus(c+3060,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+521,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+522,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+523,"o_wb_ack", false,-1);
    tracep->declBus(c+524,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4512,"i_temp_sda", false,-1);
    tracep->declBit(c+4513,"i_temp_scl", false,-1);
    tracep->declBit(c+4514,"o_temp_sda", false,-1);
    tracep->declBit(c+4515,"o_temp_scl", false,-1);
    tracep->declBit(c+4516,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4517,"o_sys_pwm", false,-1);
    tracep->declBit(c+4518,"i_fan_tach", false,-1);
    tracep->declBus(c+4546,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4767,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4768,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4769,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4770,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4663,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+3061,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+3062,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+3063,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+3064,"ck_tach", false,-1);
    tracep->declBit(c+3065,"last_tach", false,-1);
    tracep->declBus(c+3066,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+3067,"tach_reset", false,-1);
    tracep->declBus(c+3068,"tach_count", false,-1, 26,0);
    tracep->declBus(c+3069,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+3070,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4603,"i2c_wb_stall", false,-1);
    tracep->declBit(c+3071,"i2c_wb_ack", false,-1);
    tracep->declBus(c+3072,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+3073,"ign_mem_cyc", false,-1);
    tracep->declBit(c+3074,"mem_stb", false,-1);
    tracep->declBit(c+4603,"ign_mem_we", false,-1);
    tracep->declBit(c+4597,"ign_mem_sel", false,-1);
    tracep->declBus(c+3075,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4640,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+3076,"mem_data", false,-1, 7,0);
    tracep->declBit(c+3077,"mem_ack", false,-1);
    tracep->declBit(c+3078,"i2cd_valid", false,-1);
    tracep->declBit(c+3079,"i2cd_last", false,-1);
    tracep->declBit(c+4603,"ign_i2cd_id", false,-1);
    tracep->declBus(c+3080,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+3081,"pp_ms", false,-1);
    tracep->declBus(c+3082,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+3083,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+3084,"temp_data", false,-1, 31,0);
    tracep->declBit(c+3085,"pre_ack", false,-1);
    tracep->declBus(c+3086,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4681,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4602,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4641,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4681,"AW", false,-1, 31,0);
    tracep->declBus(c+4591,"DW", false,-1, 31,0);
    tracep->declBus(c+4591,"RW", false,-1, 31,0);
    tracep->declBus(c+4681,"BAW", false,-1, 31,0);
    tracep->declBus(c+4708,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4641,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4602,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4771,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+517,"i_wb_cyc", false,-1);
    tracep->declBit(c+3087,"i_wb_stb", false,-1);
    tracep->declBit(c+519,"i_wb_we", false,-1);
    tracep->declBus(c+3088,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+521,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+522,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+3071,"o_wb_ack", false,-1);
    tracep->declBus(c+3072,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+3073,"o_pf_cyc", false,-1);
    tracep->declBit(c+3074,"o_pf_stb", false,-1);
    tracep->declBit(c+4603,"o_pf_we", false,-1);
    tracep->declBus(c+3075,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4640,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4597,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4603,"i_pf_stall", false,-1);
    tracep->declBit(c+3077,"i_pf_ack", false,-1);
    tracep->declBit(c+4603,"i_pf_err", false,-1);
    tracep->declBus(c+3076,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4512,"i_i2c_sda", false,-1);
    tracep->declBit(c+4513,"i_i2c_scl", false,-1);
    tracep->declBit(c+4514,"o_i2c_sda", false,-1);
    tracep->declBit(c+4515,"o_i2c_scl", false,-1);
    tracep->declBit(c+3078,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4604,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+3080,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+3079,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4603,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+3081,"i_sync_signal", false,-1);
    tracep->declBus(c+4546,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4644,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4645,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4646,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4647,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4600,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4637,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4661,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4659,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4683,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4684,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4649,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4651,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4652,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4653,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4654,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4643,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4655,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4720,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4721,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4722,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4723,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4724,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4725,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+3089,"cpu_reset", false,-1);
    tracep->declBit(c+4603,"cpu_clear_cache", false,-1);
    tracep->declBit(c+3090,"cpu_new_pc", false,-1);
    tracep->declBus(c+3091,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+3092,"pf_valid", false,-1);
    tracep->declBit(c+3093,"pf_ready", false,-1);
    tracep->declBus(c+3094,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+3095,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+3096,"pf_illegal", false,-1);
    tracep->declBit(c+3097,"half_valid", false,-1);
    tracep->declBit(c+3098,"imm_cycle", false,-1);
    tracep->declBit(c+3099,"next_valid", false,-1);
    tracep->declBus(c+3100,"next_insn", false,-1, 7,0);
    tracep->declBit(c+3101,"insn_ready", false,-1);
    tracep->declBit(c+3102,"half_ready", false,-1);
    tracep->declBit(c+3103,"i2c_abort", false,-1);
    tracep->declBit(c+3104,"insn_valid", false,-1);
    tracep->declBus(c+3105,"insn", false,-1, 11,0);
    tracep->declBus(c+3106,"half_insn", false,-1, 3,0);
    tracep->declBit(c+3107,"i2c_ckedge", false,-1);
    tracep->declBit(c+3108,"i2c_stretch", false,-1);
    tracep->declBus(c+3109,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+3110,"ckcount", false,-1, 11,0);
    tracep->declBus(c+3111,"abort_address", false,-1, 4,0);
    tracep->declBus(c+3112,"jump_target", false,-1, 4,0);
    tracep->declBit(c+3113,"r_wait", false,-1);
    tracep->declBit(c+3114,"soft_halt_request", false,-1);
    tracep->declBit(c+3089,"r_halted", false,-1);
    tracep->declBit(c+3115,"r_err", false,-1);
    tracep->declBit(c+3116,"r_aborted", false,-1);
    tracep->declBit(c+3117,"r_manual", false,-1);
    tracep->declBit(c+3118,"r_sda", false,-1);
    tracep->declBit(c+3119,"r_scl", false,-1);
    tracep->declBit(c+3120,"w_stopped", false,-1);
    tracep->declBit(c+3121,"w_sda", false,-1);
    tracep->declBit(c+3122,"w_scl", false,-1);
    tracep->declBit(c+3123,"bus_read", false,-1);
    tracep->declBit(c+3124,"bus_write", false,-1);
    tracep->declBit(c+3125,"bus_override", false,-1);
    tracep->declBit(c+3126,"bus_manual", false,-1);
    tracep->declBit(c+3127,"ovw_ready", false,-1);
    tracep->declBit(c+3128,"bus_jump", false,-1);
    tracep->declBus(c+3088,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+3088,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+521,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+522,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+3072,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+3129,"s_tvalid", false,-1);
    tracep->declBit(c+3102,"s_tready", false,-1);
    tracep->declBus(c+3130,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4567,"w_control", false,-1, 31,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+3117,"manual", false,-1);
    tracep->declBit(c+3119,"scl", false,-1);
    tracep->declBit(c+3118,"sda", false,-1);
    tracep->declBit(c+3131,"o_scl", false,-1);
    tracep->declBit(c+3132,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4602,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+72,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+3129,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+3101,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+3133,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+3078,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4604,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+3080,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+3079,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+3107,"i_ckedge", false,-1);
    tracep->declBit(c+3108,"o_stretch", false,-1);
    tracep->declBit(c+4513,"i_scl", false,-1);
    tracep->declBit(c+4512,"i_sda", false,-1);
    tracep->declBit(c+3122,"o_scl", false,-1);
    tracep->declBit(c+3121,"o_sda", false,-1);
    tracep->declBit(c+3103,"o_abort", false,-1);
    tracep->declBus(c+4649,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4650,"START", false,-1, 3,0);
    tracep->declBus(c+4651,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4652,"STOP", false,-1, 3,0);
    tracep->declBus(c+4653,"DATA", false,-1, 3,0);
    tracep->declBus(c+4654,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4643,"ACK", false,-1, 3,0);
    tracep->declBus(c+4655,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4720,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4721,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4722,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4723,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4724,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4641,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4597,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4687,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4693,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4688,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4690,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4726,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4727,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4728,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4729,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4641,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+3134,"last_byte", false,-1);
    tracep->declBit(c+3135,"dir", false,-1);
    tracep->declBit(c+3136,"will_ack", false,-1);
    tracep->declBus(c+3137,"state", false,-1, 3,0);
    tracep->declBus(c+3138,"nbits", false,-1, 2,0);
    tracep->declBus(c+3139,"sreg", false,-1, 7,0);
    tracep->declBit(c+3140,"q_scl", false,-1);
    tracep->declBit(c+3141,"q_sda", false,-1);
    tracep->declBit(c+3142,"ck_scl", false,-1);
    tracep->declBit(c+3143,"ck_sda", false,-1);
    tracep->declBit(c+3144,"lst_scl", false,-1);
    tracep->declBit(c+3145,"lst_sda", false,-1);
    tracep->declBit(c+3146,"stop_bit", false,-1);
    tracep->declBit(c+3147,"channel_busy", false,-1);
    tracep->declBit(c+4603,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4681,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4591,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4681,"AW", false,-1, 31,0);
    tracep->declBus(c+4591,"DW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+73,"i_reset", false,-1);
    tracep->declBit(c+3090,"i_new_pc", false,-1);
    tracep->declBit(c+4603,"i_clear_cache", false,-1);
    tracep->declBit(c+3093,"i_ready", false,-1);
    tracep->declBus(c+3091,"i_pc", false,-1, 4,0);
    tracep->declBit(c+3092,"o_valid", false,-1);
    tracep->declBit(c+3096,"o_illegal", false,-1);
    tracep->declBus(c+3094,"o_insn", false,-1, 7,0);
    tracep->declBus(c+3095,"o_pc", false,-1, 4,0);
    tracep->declBit(c+3073,"o_wb_cyc", false,-1);
    tracep->declBit(c+3074,"o_wb_stb", false,-1);
    tracep->declBit(c+4603,"o_wb_we", false,-1);
    tracep->declBus(c+3075,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4640,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4603,"i_wb_stall", false,-1);
    tracep->declBit(c+3077,"i_wb_ack", false,-1);
    tracep->declBit(c+4603,"i_wb_err", false,-1);
    tracep->declBus(c+3076,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+3148,"last_stb", false,-1);
    tracep->declBit(c+3149,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+3150,"cache_word", false,-1, 7,0);
    tracep->declBit(c+3151,"cache_valid", false,-1);
    tracep->declBus(c+3152,"inflight", false,-1, 1,0);
    tracep->declBit(c+3153,"cache_illegal", false,-1);
    tracep->declBit(c+4603,"r_valid", false,-1);
    tracep->declBus(c+4640,"r_insn", false,-1, 7,0);
    tracep->declBus(c+3076,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declBus(c+4591,"SW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+501,"i_wb_cyc", false,-1);
    tracep->declBit(c+502,"i_wb_stb", false,-1);
    tracep->declBit(c+503,"i_wb_we", false,-1);
    tracep->declBus(c+3154,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+505,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+506,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4603,"o_wb_stall", false,-1);
    tracep->declBit(c+507,"o_wb_ack", false,-1);
    tracep->declBus(c+508,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+3155,"S_VALID", false,-1);
    tracep->declBit(c+150,"S_READY", false,-1);
    tracep->declBus(c+154,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+153,"S_LAST", false,-1);
    tracep->declBit(c+175,"o_dma_cyc", false,-1);
    tracep->declBit(c+176,"o_dma_stb", false,-1);
    tracep->declBit(c+4604,"o_dma_we", false,-1);
    tracep->declBus(c+177,"o_dma_addr", false,-1, 24,0);
    tracep->declArray(c+178,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+194,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+196,"i_dma_stall", false,-1);
    tracep->declBit(c+197,"i_dma_ack", false,-1);
    tracep->declArray(c+199,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+198,"i_dma_err", false,-1);
    tracep->declBus(c+4602,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4680,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3156,"r_baseaddr", false,-1, 30,0);
    tracep->declBus(c+3157,"r_memlen", false,-1, 30,0);
    tracep->declBus(c+3158,"subaddr", false,-1, 5,0);
    tracep->declBus(c+3159,"current_addr", false,-1, 30,0);
    tracep->declBus(c+3160,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+3161,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+3162,"wb_last", false,-1);
    tracep->declBit(c+3163,"bus_err", false,-1);
    tracep->declBit(c+3164,"r_reset", false,-1);
    tracep->declBit(c+3165,"r_overflow", false,-1);
    tracep->declBit(c+3166,"skd_valid", false,-1);
    tracep->declBit(c+3167,"skd_ready", false,-1);
    tracep->declBit(c+3168,"skd_last", false,-1);
    tracep->declBus(c+3169,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4683,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+3155,"i_valid", false,-1);
    tracep->declBit(c+150,"o_ready", false,-1);
    tracep->declBus(c+3170,"i_data", false,-1, 8,0);
    tracep->declBit(c+3166,"o_valid", false,-1);
    tracep->declBit(c+3167,"i_ready", false,-1);
    tracep->declBus(c+3171,"o_data", false,-1, 8,0);
    tracep->declBus(c+3172,"w_data", false,-1, 8,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3173,"r_valid", false,-1);
    tracep->declBus(c+3172,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+3166,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4589,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4642,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4592,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4591,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+319,"i_wcyc", false,-1);
    tracep->declBit(c+320,"i_wstb", false,-1);
    tracep->declBit(c+321,"i_wwe", false,-1);
    tracep->declBus(c+3174,"i_waddr", false,-1, 3,0);
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
    tracep->declBus(c+4592,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4681,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+439,"r_cyc", false,-1);
    tracep->declBit(c+3175,"r_stb", false,-1);
    tracep->declBit(c+441,"r_we", false,-1);
    tracep->declBit(c+342,"r_ack", false,-1);
    tracep->declBit(c+343,"r_err", false,-1);
    tracep->declBit(c+3176,"r_first", false,-1);
    tracep->declBus(c+442,"r_addr", false,-1, 7,0);
    tracep->declBit(c+3177,"s_null", false,-1);
    tracep->declBit(c+3178,"s_last", false,-1);
    tracep->declArray(c+3179,"s_data", false,-1, 511,0);
    tracep->declArray(c+344,"r_data", false,-1, 511,0);
    tracep->declArray(c+3195,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+3211,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+3213,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+3215,"r_shift", false,-1, 3,0);
    tracep->declBus(c+3216,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+3217,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+3218,"fifo_full", false,-1);
    tracep->declBit(c+3219,"fifo_empty", false,-1);
    tracep->declBit(c+3220,"fifo_ack", false,-1);
    tracep->declBus(c+3221,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4772,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+3222,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4681,"BW", false,-1, 31,0);
    tracep->declBus(c+4681,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+74,"i_reset", false,-1);
    tracep->declBit(c+3223,"i_wr", false,-1);
    tracep->declBus(c+3224,"i_data", false,-1, 4,0);
    tracep->declBit(c+3218,"o_full", false,-1);
    tracep->declBus(c+3221,"o_fill", false,-1, 5,0);
    tracep->declBit(c+446,"i_rd", false,-1);
    tracep->declBus(c+3225,"o_data", false,-1, 4,0);
    tracep->declBit(c+3219,"o_empty", false,-1);
    tracep->declBus(c+4642,"FLEN", false,-1, 31,0);
    tracep->declBit(c+3226,"r_full", false,-1);
    tracep->declBit(c+3227,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3228+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+3260,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+3261,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+3262,"w_wr", false,-1);
    tracep->declBit(c+3263,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4639,"NM", false,-1, 31,0);
    tracep->declBus(c+4684,"NS", false,-1, 31,0);
    tracep->declBus(c+4591,"AW", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declArray(c+4773,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4776,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4680,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4602,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
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
    tracep->declBus(c+3264,"o_scyc", false,-1, 10,0);
    tracep->declBus(c+3265,"o_sstb", false,-1, 10,0);
    tracep->declBus(c+3266,"o_swe", false,-1, 10,0);
    tracep->declArray(c+3267,"o_saddr", false,-1, 87,0);
    tracep->declArray(c+3270,"o_sdata", false,-1, 351,0);
    tracep->declQuad(c+3281,"o_ssel", false,-1, 43,0);
    tracep->declBus(c+3283,"i_sstall", false,-1, 10,0);
    tracep->declBus(c+3284,"i_sack", false,-1, 10,0);
    tracep->declArray(c+3285,"i_sdata", false,-1, 351,0);
    tracep->declBus(c+4779,"i_serr", false,-1, 10,0);
    tracep->declBus(c+4602,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4639,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4592,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3296+i*1,"request", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 10,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3297+i*1,"grant", true,(i+0), 11,0);
    }
    tracep->declBus(c+3298,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3299,"sgrant", false,-1, 10,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3300+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3301,"mfull", false,-1, 0,0);
    tracep->declBus(c+3302,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3303,"mempty", false,-1, 0,0);
    tracep->declBus(c+4641,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4639,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4596,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4417+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+439,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3304,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3305,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3306+i*1,"m_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3307+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3308+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4418,"m_stall", false,-1, 0,0);
    tracep->declBus(c+3309,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3310+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+3326,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4780,"s_err", false,-1, 15,0);
    tracep->declBus(c+3327,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3328,"iN", false,-1, 31,0);
    tracep->declBus(c+4568,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4419,"regrant", false,-1, 11,0);
    tracep->declBus(c+4569,"reindex", false,-1, 3,0);
    tracep->declBit(c+3329,"stay_on_channel", false,-1);
    tracep->declBit(c+3330,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4420,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4419,"r_regrant", false,-1, 11,0);
    tracep->declBus(c+4569,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3331,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+75,"skd_stb", false,-1);
    tracep->declBit(c+4421,"skd_stall", false,-1);
    tracep->declBit(c+3332,"skd_we", false,-1);
    tracep->declBus(c+3333,"skd_addr", false,-1, 7,0);
    tracep->declBus(c+3334,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3335,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3336,"decoded", false,-1, 11,0);
    tracep->declBit(c+3337,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4684,"NS", false,-1, 31,0);
    tracep->declBus(c+4591,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declArray(c+4773,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4776,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4782,"ACCESS_ALLOWED", false,-1, 10,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+76,"i_valid", false,-1);
    tracep->declBit(c+4421,"o_stall", false,-1);
    tracep->declBus(c+3333,"i_addr", false,-1, 7,0);
    tracep->declQuad(c+3338,"i_data", false,-1, 36,0);
    tracep->declBit(c+3327,"o_valid", false,-1);
    tracep->declBit(c+4422,"i_stall", false,-1);
    tracep->declBus(c+3336,"o_decode", false,-1, 11,0);
    tracep->declBus(c+3340,"o_addr", false,-1, 7,0);
    tracep->declQuad(c+3341,"o_data", false,-1, 36,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+77,"request", false,-1, 11,0);
    tracep->declBus(c+3343,"prerequest", false,-1, 10,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+78,"r_request", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+79,"r_request_NS", false,-1);
    tracep->declBit(c+80,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4783,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+81,"i_reset", false,-1);
    tracep->declBit(c+440,"i_valid", false,-1);
    tracep->declBit(c+3337,"o_ready", false,-1);
    tracep->declQuad(c+3344,"i_data", false,-1, 44,0);
    tracep->declBit(c+75,"o_valid", false,-1);
    tracep->declBit(c+4423,"i_ready", false,-1);
    tracep->declQuad(c+3346,"o_data", false,-1, 44,0);
    tracep->declQuad(c+3348,"w_data", false,-1, 44,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+445,"r_valid", false,-1);
    tracep->declQuad(c+3348,"r_data", false,-1, 44,0);
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
    tracep->declBus(c+4717,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4642,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+554,"i_scyc", false,-1);
    tracep->declBit(c+555,"i_sstb", false,-1);
    tracep->declBit(c+556,"i_swe", false,-1);
    tracep->declBus(c+3350,"i_saddr", false,-1, 28,0);
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
    tracep->declBus(c+4681,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+278,"r_cyc", false,-1);
    tracep->declBit(c+3351,"r_stb", false,-1);
    tracep->declBit(c+280,"r_we", false,-1);
    tracep->declBit(c+561,"r_ack", false,-1);
    tracep->declBit(c+562,"r_err", false,-1);
    tracep->declBus(c+281,"r_addr", false,-1, 24,0);
    tracep->declArray(c+282,"r_data", false,-1, 511,0);
    tracep->declArray(c+3352,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+298,"r_sel", false,-1, 63,0);
    tracep->declBus(c+3368,"r_shift", false,-1, 3,0);
    tracep->declBit(c+3369,"fifo_full", false,-1);
    tracep->declBit(c+3370,"ign_fifo_empty", false,-1);
    tracep->declBus(c+3371,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+3372,"w_shift", false,-1, 3,0);
    tracep->declBus(c+3373,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+3374,"w_data", false,-1, 511,0);
    tracep->declQuad(c+3390,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4592,"BW", false,-1, 31,0);
    tracep->declBus(c+4681,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+93,"i_reset", false,-1);
    tracep->declBit(c+3392,"i_wr", false,-1);
    tracep->declBus(c+3368,"i_data", false,-1, 3,0);
    tracep->declBit(c+3369,"o_full", false,-1);
    tracep->declBus(c+3371,"o_fill", false,-1, 5,0);
    tracep->declBit(c+301,"i_rd", false,-1);
    tracep->declBus(c+3373,"o_data", false,-1, 3,0);
    tracep->declBit(c+3370,"o_empty", false,-1);
    tracep->declBus(c+4642,"FLEN", false,-1, 31,0);
    tracep->declBit(c+3369,"r_full", false,-1);
    tracep->declBit(c+3370,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3393+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+3425,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+3426,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+3427,"w_wr", false,-1);
    tracep->declBit(c+3428,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4639,"NM", false,-1, 31,0);
    tracep->declBus(c+4601,"NS", false,-1, 31,0);
    tracep->declBus(c+4705,"AW", false,-1, 31,0);
    tracep->declBus(c+4642,"DW", false,-1, 31,0);
    tracep->declQuad(c+4784,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4786,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4680,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4602,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBus(c+545,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+546,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+547,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+548,"i_maddr", false,-1, 29,0);
    tracep->declBus(c+549,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4635,"i_msel", false,-1, 3,0);
    tracep->declBus(c+550,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+551,"o_mack", false,-1, 0,0);
    tracep->declBus(c+553,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+552,"o_merr", false,-1, 0,0);
    tracep->declBus(c+3429,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+3430,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+3431,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+3432,"o_saddr", false,-1, 59,0);
    tracep->declQuad(c+3434,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+3436,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4570,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4571,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+3437,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+3439,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4602,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4639,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4601,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3440+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3441+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+3442,"mgrant", false,-1, 0,0);
    tracep->declBus(c+3443,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3444+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3445,"mfull", false,-1, 0,0);
    tracep->declBus(c+3446,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+3447,"mempty", false,-1, 0,0);
    tracep->declBus(c+4641,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4639,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4592,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4424+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+545,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+3448,"m_stb", false,-1, 0,0);
    tracep->declBus(c+3449,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3450+i*1,"m_addr", true,(i+0), 29,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3451+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+3452+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4572,"m_stall", false,-1, 0,0);
    tracep->declBus(c+94,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3453+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4573,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3457,"s_err", false,-1, 3,0);
    tracep->declBus(c+3458,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3459,"iN", false,-1, 31,0);
    tracep->declBus(c+4574,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4425,"regrant", false,-1, 2,0);
    tracep->declBus(c+4575,"reindex", false,-1, 1,0);
    tracep->declBit(c+3460,"stay_on_channel", false,-1);
    tracep->declBit(c+3461,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4426,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4425,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4575,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3462,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+95,"skd_stb", false,-1);
    tracep->declBit(c+4576,"skd_stall", false,-1);
    tracep->declBit(c+3463,"skd_we", false,-1);
    tracep->declBus(c+3464,"skd_addr", false,-1, 29,0);
    tracep->declBus(c+3465,"skd_data", false,-1, 31,0);
    tracep->declBus(c+3466,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+3467,"decoded", false,-1, 2,0);
    tracep->declBit(c+3468,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4601,"NS", false,-1, 31,0);
    tracep->declBus(c+4705,"AW", false,-1, 31,0);
    tracep->declBus(c+4781,"DW", false,-1, 31,0);
    tracep->declQuad(c+4784,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4786,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4647,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+96,"i_valid", false,-1);
    tracep->declBit(c+4576,"o_stall", false,-1);
    tracep->declBus(c+3464,"i_addr", false,-1, 29,0);
    tracep->declQuad(c+3469,"i_data", false,-1, 36,0);
    tracep->declBit(c+3458,"o_valid", false,-1);
    tracep->declBit(c+4577,"i_stall", false,-1);
    tracep->declBus(c+3467,"o_decode", false,-1, 2,0);
    tracep->declBus(c+3471,"o_addr", false,-1, 29,0);
    tracep->declQuad(c+3472,"o_data", false,-1, 36,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+97,"request", false,-1, 2,0);
    tracep->declBus(c+3474,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+98,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+99,"r_request_NS", false,-1);
    tracep->declBit(c+100,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4788,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+101,"i_reset", false,-1);
    tracep->declBit(c+546,"i_valid", false,-1);
    tracep->declBit(c+3468,"o_ready", false,-1);
    tracep->declArray(c+3475,"i_data", false,-1, 66,0);
    tracep->declBit(c+95,"o_valid", false,-1);
    tracep->declBit(c+4578,"i_ready", false,-1);
    tracep->declArray(c+3478,"o_data", false,-1, 66,0);
    tracep->declArray(c+3481,"w_data", false,-1, 66,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+550,"r_valid", false,-1);
    tracep->declArray(c+3481,"r_data", false,-1, 66,0);
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
    tracep->declBus(c+4592,"NM", false,-1, 31,0);
    tracep->declBus(c+4590,"NS", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4638,"DW", false,-1, 31,0);
    tracep->declArray(c+4789,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4792,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4680,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4602,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4641,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4597,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBus(c+3484,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+3485,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+3486,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+3487,"i_maddr", false,-1, 99,0);
    tracep->declArray(c+3491,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+3555,"i_msel", false,-1, 255,0);
    tracep->declBus(c+3563,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+3564,"o_mack", false,-1, 3,0);
    tracep->declArray(c+3565,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+3629,"o_merr", false,-1, 3,0);
    tracep->declBus(c+3630,"o_scyc", false,-1, 2,0);
    tracep->declBus(c+3631,"o_sstb", false,-1, 2,0);
    tracep->declBus(c+3632,"o_swe", false,-1, 2,0);
    tracep->declArray(c+3633,"o_saddr", false,-1, 74,0);
    tracep->declArray(c+3636,"o_sdata", false,-1, 1535,0);
    tracep->declArray(c+3684,"o_ssel", false,-1, 191,0);
    tracep->declBus(c+3690,"i_sstall", false,-1, 2,0);
    tracep->declBus(c+3691,"i_sack", false,-1, 2,0);
    tracep->declArray(c+3692,"i_sdata", false,-1, 1535,0);
    tracep->declBus(c+3740,"i_serr", false,-1, 2,0);
    tracep->declBus(c+4602,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4601,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4601,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3741+i*1,"request", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3745+i*1,"requested", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3749+i*1,"grant", true,(i+0), 3,0);
    }
    tracep->declBus(c+3753,"mgrant", false,-1, 3,0);
    tracep->declBus(c+3754,"sgrant", false,-1, 2,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3755+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+3759,"mfull", false,-1, 3,0);
    tracep->declBus(c+3760,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+3761,"mempty", false,-1, 3,0);
    tracep->declBus(c+4649,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4592,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4592,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4427+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3762+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+3484,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+3766,"m_stb", false,-1, 3,0);
    tracep->declBus(c+3767,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+3768+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3772+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+3836+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4431,"m_stall", false,-1, 3,0);
    tracep->declBus(c+3844,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3845+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+3909,"s_ack", false,-1, 3,0);
    tracep->declBus(c+3910,"s_err", false,-1, 3,0);
    tracep->declBus(c+3911,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4597,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+3912,"iN", false,-1, 31,0);
    tracep->declBus(c+4579,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4432,"regrant", false,-1, 3,0);
    tracep->declBus(c+4580,"reindex", false,-1, 1,0);
    tracep->declBit(c+3913,"stay_on_channel", false,-1);
    tracep->declBit(c+3914,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4433,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4432,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4580,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4434,"regrant", false,-1, 3,0);
    tracep->declBus(c+4581,"reindex", false,-1, 1,0);
    tracep->declBit(c+3915,"stay_on_channel", false,-1);
    tracep->declBit(c+3916,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4435,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4434,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4581,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4436,"regrant", false,-1, 3,0);
    tracep->declBus(c+4582,"reindex", false,-1, 1,0);
    tracep->declBit(c+3917,"stay_on_channel", false,-1);
    tracep->declBit(c+3918,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4437,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4436,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4582,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4438,"regrant", false,-1, 3,0);
    tracep->declBus(c+4583,"reindex", false,-1, 1,0);
    tracep->declBit(c+3919,"stay_on_channel", false,-1);
    tracep->declBit(c+3920,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4439,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4438,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4583,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+3921,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+3922,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+3923,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+3924,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+104,"skd_stb", false,-1);
    tracep->declBit(c+4440,"skd_stall", false,-1);
    tracep->declBit(c+3925,"skd_we", false,-1);
    tracep->declBus(c+3926,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3927,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3943,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3945,"decoded", false,-1, 3,0);
    tracep->declBit(c+3946,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4590,"NS", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4795,"DW", false,-1, 31,0);
    tracep->declArray(c+4789,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4792,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4729,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+105,"i_valid", false,-1);
    tracep->declBit(c+4440,"o_stall", false,-1);
    tracep->declBus(c+3926,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3947,"i_data", false,-1, 576,0);
    tracep->declBit(c+3966,"o_valid", false,-1);
    tracep->declBit(c+4441,"i_stall", false,-1);
    tracep->declBus(c+3945,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3967,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3968,"o_data", false,-1, 576,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+106,"request", false,-1, 3,0);
    tracep->declBus(c+3987,"prerequest", false,-1, 2,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+107,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+108,"r_request_NS", false,-1);
    tracep->declBit(c+109,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4796,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+110,"i_reset", false,-1);
    tracep->declBit(c+176,"i_valid", false,-1);
    tracep->declBit(c+3946,"o_ready", false,-1);
    tracep->declArray(c+3988,"i_data", false,-1, 601,0);
    tracep->declBit(c+104,"o_valid", false,-1);
    tracep->declBit(c+4442,"i_ready", false,-1);
    tracep->declArray(c+4007,"o_data", false,-1, 601,0);
    tracep->declArray(c+4026,"w_data", false,-1, 601,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4045,"r_valid", false,-1);
    tracep->declArray(c+4026,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+111,"skd_stb", false,-1);
    tracep->declBit(c+4443,"skd_stall", false,-1);
    tracep->declBit(c+4046,"skd_we", false,-1);
    tracep->declBus(c+4047,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4048,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4064,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4066,"decoded", false,-1, 3,0);
    tracep->declBit(c+4067,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4590,"NS", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4795,"DW", false,-1, 31,0);
    tracep->declArray(c+4789,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4792,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4729,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+112,"i_valid", false,-1);
    tracep->declBit(c+4443,"o_stall", false,-1);
    tracep->declBus(c+4047,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4068,"i_data", false,-1, 576,0);
    tracep->declBit(c+4087,"o_valid", false,-1);
    tracep->declBit(c+4444,"i_stall", false,-1);
    tracep->declBus(c+4066,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4088,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4089,"o_data", false,-1, 576,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+113,"request", false,-1, 3,0);
    tracep->declBus(c+4108,"prerequest", false,-1, 2,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+114,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+115,"r_request_NS", false,-1);
    tracep->declBit(c+116,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4796,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+117,"i_reset", false,-1);
    tracep->declBit(c+216,"i_valid", false,-1);
    tracep->declBit(c+4067,"o_ready", false,-1);
    tracep->declArray(c+4109,"i_data", false,-1, 601,0);
    tracep->declBit(c+111,"o_valid", false,-1);
    tracep->declBit(c+4445,"i_ready", false,-1);
    tracep->declArray(c+4128,"o_data", false,-1, 601,0);
    tracep->declArray(c+4147,"w_data", false,-1, 601,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4166,"r_valid", false,-1);
    tracep->declArray(c+4147,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+118,"skd_stb", false,-1);
    tracep->declBit(c+4446,"skd_stall", false,-1);
    tracep->declBit(c+4167,"skd_we", false,-1);
    tracep->declBus(c+4168,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4169,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4185,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4187,"decoded", false,-1, 3,0);
    tracep->declBit(c+4188,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4590,"NS", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4795,"DW", false,-1, 31,0);
    tracep->declArray(c+4789,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4792,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4729,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+119,"i_valid", false,-1);
    tracep->declBit(c+4446,"o_stall", false,-1);
    tracep->declBus(c+4168,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4189,"i_data", false,-1, 576,0);
    tracep->declBit(c+4208,"o_valid", false,-1);
    tracep->declBit(c+4447,"i_stall", false,-1);
    tracep->declBus(c+4187,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4209,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4210,"o_data", false,-1, 576,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+120,"request", false,-1, 3,0);
    tracep->declBus(c+4229,"prerequest", false,-1, 2,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+121,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+122,"r_request_NS", false,-1);
    tracep->declBit(c+123,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4796,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+124,"i_reset", false,-1);
    tracep->declBit(c+238,"i_valid", false,-1);
    tracep->declBit(c+4188,"o_ready", false,-1);
    tracep->declArray(c+4230,"i_data", false,-1, 601,0);
    tracep->declBit(c+118,"o_valid", false,-1);
    tracep->declBit(c+4448,"i_ready", false,-1);
    tracep->declArray(c+4249,"o_data", false,-1, 601,0);
    tracep->declArray(c+4268,"w_data", false,-1, 601,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+4287,"r_valid", false,-1);
    tracep->declArray(c+4268,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+125,"skd_stb", false,-1);
    tracep->declBit(c+4449,"skd_stall", false,-1);
    tracep->declBit(c+4288,"skd_we", false,-1);
    tracep->declBus(c+4289,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+4290,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+4306,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+4308,"decoded", false,-1, 3,0);
    tracep->declBit(c+4309,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4590,"NS", false,-1, 31,0);
    tracep->declBus(c+4595,"AW", false,-1, 31,0);
    tracep->declBus(c+4795,"DW", false,-1, 31,0);
    tracep->declArray(c+4789,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4792,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4729,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4597,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+4453,"i_reset", false,-1);
    tracep->declBit(c+126,"i_valid", false,-1);
    tracep->declBit(c+4449,"o_stall", false,-1);
    tracep->declBus(c+4289,"i_addr", false,-1, 24,0);
    tracep->declArray(c+4310,"i_data", false,-1, 576,0);
    tracep->declBit(c+4329,"o_valid", false,-1);
    tracep->declBit(c+4450,"i_stall", false,-1);
    tracep->declBus(c+4308,"o_decode", false,-1, 3,0);
    tracep->declBus(c+4330,"o_addr", false,-1, 24,0);
    tracep->declArray(c+4331,"o_data", false,-1, 576,0);
    tracep->declBus(c+4597,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+127,"request", false,-1, 3,0);
    tracep->declBus(c+4350,"prerequest", false,-1, 2,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+128,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+129,"r_request_NS", false,-1);
    tracep->declBit(c+130,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4641,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4641,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4796,"DW", false,-1, 31,0);
    tracep->declBus(c+4597,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4452,"i_clk", false,-1);
    tracep->declBit(c+131,"i_reset", false,-1);
    tracep->declBit(c+279,"i_valid", false,-1);
    tracep->declBit(c+4309,"o_ready", false,-1);
    tracep->declArray(c+4351,"i_data", false,-1, 601,0);
    tracep->declBit(c+125,"o_valid", false,-1);
    tracep->declBit(c+4451,"i_ready", false,-1);
    tracep->declArray(c+4370,"o_data", false,-1, 601,0);
    tracep->declArray(c+4389,"w_data", false,-1, 601,0);
    tracep->declBit(c+4603,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+300,"r_valid", false,-1);
    tracep->declArray(c+4389,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+3564,"r_mack", false,-1, 3,0);
    tracep->declBus(c+3629,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4408,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4409,"regrant", false,-1, 3,0);
    tracep->declBus(c+4410,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4411,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4412,"regrant", false,-1, 3,0);
    tracep->declBus(c+4413,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[2] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+4414,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4415,"regrant", false,-1, 3,0);
    tracep->declBus(c+4416,"reindex", false,-1, 1,0);
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
    bufp->fullIData(oldp+35,((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test) 
                               << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
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
    bufp->fullCData(oldp+145,((0xffU & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                        [0U] >> 1U))),8);
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
                             [0U] & (0x17U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
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
    bufp->fullCData(oldp+684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux),8);
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
    bufp->fullIData(oldp+710,((0xffffffU & ((IData)(5U) 
                                            + vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr))),24);
    bufp->fullBit(oldp+711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullCData(oldp+712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux),8);
    bufp->fullBit(oldp+713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullQData(oldp+714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),64);
    bufp->fullQData(oldp+716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),64);
    bufp->fullQData(oldp+718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),64);
    bufp->fullQData(oldp+720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),64);
    bufp->fullWData(oldp+722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),512);
    bufp->fullWData(oldp+738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),512);
    bufp->fullWData(oldp+754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),512);
    bufp->fullWData(oldp+770,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),512);
    bufp->fullQData(oldp+786,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullQData(oldp+788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
    bufp->fullQData(oldp+790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
    bufp->fullQData(oldp+792,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
    bufp->fullQData(oldp+794,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4]),64);
    bufp->fullQData(oldp+796,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5]),64);
    bufp->fullQData(oldp+798,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6]),64);
    bufp->fullQData(oldp+800,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7]),64);
    bufp->fullCData(oldp+802,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullCData(oldp+803,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
    bufp->fullCData(oldp+804,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
    bufp->fullCData(oldp+805,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
    bufp->fullCData(oldp+806,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4]),8);
    bufp->fullCData(oldp+807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5]),8);
    bufp->fullCData(oldp+808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6]),8);
    bufp->fullCData(oldp+809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7]),8);
    bufp->fullSData(oldp+810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+812,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+813,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+814,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+815,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+816,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+817,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+818,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+819,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+820,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+821,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+822,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+823,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+824,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+825,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+826,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+828,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+829,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+830,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+833,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+834,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+835,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+838,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+839,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+841,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+842,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+853,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+854,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+865,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullCData(oldp+869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+874,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+875,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+877,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullBit(oldp+886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_calib));
    bufp->fullBit(oldp+888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullCData(oldp+890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+893,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullCData(oldp+894,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q),2);
    bufp->fullBit(oldp+895,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+896,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+897,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),6);
    bufp->fullQData(oldp+898,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+900,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+901,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+902,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+903,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+904,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+905,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0]),7);
    bufp->fullCData(oldp+906,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[1]),7);
    bufp->fullCData(oldp+907,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[2]),7);
    bufp->fullCData(oldp+908,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[3]),7);
    bufp->fullCData(oldp+909,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[4]),7);
    bufp->fullCData(oldp+910,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[5]),7);
    bufp->fullCData(oldp+911,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[6]),7);
    bufp->fullCData(oldp+912,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[7]),7);
    bufp->fullCData(oldp+913,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullBit(oldp+914,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat));
    bufp->fullCData(oldp+915,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),4);
    bufp->fullCData(oldp+916,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+917,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+918,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullCData(oldp+919,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),3);
    bufp->fullCData(oldp+920,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),6);
    bufp->fullSData(oldp+921,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+922,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+923,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+924,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
    bufp->fullCData(oldp+925,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
    bufp->fullCData(oldp+926,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
    bufp->fullCData(oldp+927,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4]),4);
    bufp->fullCData(oldp+928,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5]),4);
    bufp->fullCData(oldp+929,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6]),4);
    bufp->fullCData(oldp+930,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7]),4);
    bufp->fullSData(oldp+931,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),9);
    bufp->fullSData(oldp+932,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),9);
    bufp->fullSData(oldp+933,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),9);
    bufp->fullSData(oldp+934,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),9);
    bufp->fullSData(oldp+935,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),9);
    bufp->fullSData(oldp+936,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),9);
    bufp->fullSData(oldp+937,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),9);
    bufp->fullSData(oldp+938,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),9);
    bufp->fullSData(oldp+939,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),9);
    bufp->fullSData(oldp+940,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),9);
    bufp->fullBit(oldp+941,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+942,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+943,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+944,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullWData(oldp+945,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),512);
    bufp->fullWData(oldp+961,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),512);
    bufp->fullSData(oldp+977,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),9);
    bufp->fullSData(oldp+978,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),9);
    bufp->fullSData(oldp+979,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),9);
    bufp->fullSData(oldp+980,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),9);
    bufp->fullSData(oldp+981,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),9);
    bufp->fullSData(oldp+982,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),9);
    bufp->fullSData(oldp+983,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),9);
    bufp->fullSData(oldp+984,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),9);
    bufp->fullSData(oldp+985,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),9);
    bufp->fullSData(oldp+986,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),9);
    bufp->fullSData(oldp+987,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),9);
    bufp->fullSData(oldp+988,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),9);
    bufp->fullSData(oldp+989,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),9);
    bufp->fullSData(oldp+990,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),9);
    bufp->fullSData(oldp+991,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),9);
    bufp->fullSData(oldp+992,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),9);
    bufp->fullBit(oldp+993,(vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_stb));
    bufp->fullCData(oldp+994,(vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_aux),8);
    bufp->fullBit(oldp+995,(vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_we));
    bufp->fullIData(oldp+996,(vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_addr),24);
    bufp->fullWData(oldp+997,(vlSelf->main__DOT__ddr3_controller_inst__DOT__calib_data),512);
    bufp->fullBit(oldp+1013,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+1014,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+1015,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+1016,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullWData(oldp+1017,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),512);
    bufp->fullWData(oldp+1033,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+1037,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+1038,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
    bufp->fullCData(oldp+1039,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
    bufp->fullCData(oldp+1040,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
    bufp->fullCData(oldp+1041,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4]),7);
    bufp->fullCData(oldp+1042,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5]),7);
    bufp->fullCData(oldp+1043,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6]),7);
    bufp->fullCData(oldp+1044,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7]),7);
    bufp->fullCData(oldp+1045,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+1046,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+1047,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+1048,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+1049,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+1050,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+1051,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+1052,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+1053,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+1054,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+1055,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+1056,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+1057,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+1058,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+1059,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+1060,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+1061,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+1062,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+1063,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+1064,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+1065,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+1066,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+1067,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+1068,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+1069,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+1070,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+1071,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+1072,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+1073,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+1074,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+1075,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+1076,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+1077,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+1078,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat),4);
    bufp->fullBit(oldp+1079,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback));
    bufp->fullCData(oldp+1080,(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check),6);
    bufp->fullQData(oldp+1081,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data),64);
    bufp->fullBit(oldp+1083,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_cntvalue_repeated));
    bufp->fullBit(oldp+1084,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+1085,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+1086,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+1087,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+1088,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+1089,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+1090,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+1091,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+1092,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+1093,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+1094,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),8);
    bufp->fullCData(oldp+1095,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),8);
    bufp->fullCData(oldp+1096,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),8);
    bufp->fullCData(oldp+1097,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),8);
    bufp->fullCData(oldp+1098,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_level_fail),8);
    bufp->fullCData(oldp+1099,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),3);
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_wb2));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sync_rst_controller));
    bufp->fullBit(oldp+1102,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_wb2));
    bufp->fullBit(oldp+1103,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_calibrate));
    bufp->fullBit(oldp+1104,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_from_test));
    bufp->fullBit(oldp+1105,(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test));
    bufp->fullIData(oldp+1106,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_test_address_counter),24);
    bufp->fullIData(oldp+1107,(vlSelf->main__DOT__ddr3_controller_inst__DOT__check_test_address_counter),24);
    bufp->fullIData(oldp+1108,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_test_address_counter),32);
    bufp->fullIData(oldp+1109,(vlSelf->main__DOT__ddr3_controller_inst__DOT__correct_read_data),32);
    bufp->fullIData(oldp+1110,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_read_data),32);
    bufp->fullIData(oldp+1111,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullWData(oldp+1112,(vlSelf->main__DOT__ddr3_controller_inst__DOT__expected_read),512);
    bufp->fullWData(oldp+1128,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wrong_data),512);
    bufp->fullBit(oldp+1144,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+1145,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+1146,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+1147,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                              | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                   | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                  | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                 | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+1149,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+1151,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+1152,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+1153,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+1154,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+1156,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+1157,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+1159,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+1160,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+1162,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                               & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                  & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                              | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+1163,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+1164,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+1165,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                              & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+1167,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+1168,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                              | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+1169,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+1170,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+1171,((0x7ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+1172,((0x7ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+1173,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+1174,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+1175,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+1176,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+1177,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+1178,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                               & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                  & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                              | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+1179,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+1180,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+1181,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+1182,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+1183,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+1184,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+1185,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+1186,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+1187,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+1188,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+1189,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+1190,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+1191,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+1192,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+1193,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+1194,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                              | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+1195,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+1197,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+1198,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+1199,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+1200,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+1202,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+1203,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+1204,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+1205,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+1206,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+1207,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+1208,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                   >> 0x21U))))));
    bufp->fullCData(oldp+1209,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+1210,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+1211,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+1212,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+1213,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+1215,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                          >> 0x1fU)) 
                                 << 0x1eU) | (0x3fffffffU 
                                              & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+1216,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+1217,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+1218,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+1219,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+1220,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+1221,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+1222,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+1223,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+1224,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+1225,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+1226,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+1227,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+1228,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+1229,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+1230,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+1231,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                 | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                              | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                 & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                    & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+1235,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+1237,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+1239,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+1240,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+1241,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+1242,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+1243,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+1245,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+1246,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+1247,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+1248,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                              & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+1249,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+1251,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+1252,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+1253,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+1254,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+1255,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+1256,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+1257,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+1258,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+1259,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+1260,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+1261,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+1262,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+1263,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+1264,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+1265,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+1266,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+1267,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+1268,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                    >> 9U))));
    bufp->fullBit(oldp+1269,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+1270,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+1271,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+1272,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                              & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                 >> 0x15U))));
    bufp->fullBit(oldp+1273,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+1274,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+1275,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+1276,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+1277,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                              | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                 | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+1279,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+1280,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+1281,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+1282,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+1283,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+1284,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+1285,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+1286,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullCData(oldp+1287,((3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),2);
    bufp->fullBit(oldp+1288,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+1289,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+1290,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),31);
    bufp->fullBit(oldp+1291,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+1292,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+1293,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+1294,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),31);
    bufp->fullBit(oldp+1295,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+1296,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+1297,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+1298,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+1299,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+1300,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+1301,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+1302,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+1303,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+1304,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+1305,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+1306,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+1307,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+1308,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+1309,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+1310,(vlSelf->main__DOT__i2ci__DOT__abort_address),31);
    bufp->fullIData(oldp+1311,(vlSelf->main__DOT__i2ci__DOT__jump_target),31);
    bufp->fullBit(oldp+1312,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+1313,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+1314,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+1315,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+1316,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+1317,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+1318,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+1319,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+1320,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+1321,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+1322,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1323,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+1324,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+1325,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+1326,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+1327,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+1328,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+1329,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+1330,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+1331,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+1332,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+1333,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+1334,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+1335,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+1336,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+1337,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+1338,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+1339,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+1340,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+1341,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+1342,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+1343,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+1344,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+1345,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+1346,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+1347,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+1348,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+1349,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+1350,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+1351,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+1367,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+1368,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+1369,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+1370,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+1371,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+1387,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+1403,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+1404,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+1405,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+1406,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+1407,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+1408,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+1409,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+1410,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+1411,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+1412,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1413,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1414,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+1415,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+1416,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1417,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1418,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+1419,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+1420,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+1421,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+1422,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1423,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1424,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+1425,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+1426,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+1427,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1428,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+1429,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1430,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+1431,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+1432,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+1433,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+1434,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+1435,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+1436,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1437,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+1438,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1439,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+1440,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+1441,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+1442,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+1443,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+1444,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+1445,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+1446,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+1447,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+1448,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+1449,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1450,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+1451,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1452,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1453,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1454,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1455,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1456,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1457,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1458,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1459,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1460,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1461,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1462,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1463,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1464,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1465,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1466,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1467,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1468,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1469,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1470,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1471,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1472,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1473,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1474,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1475,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1476,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1477,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1478,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1479,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1480,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1481,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1482,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1483,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1484,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1485,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+1486,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1487,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1488,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1489,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1490,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1491,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1492,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1493,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1494,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1495,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1496,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1497,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1498,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1499,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1500,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1501,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1502,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1503,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1504,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1505,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1506,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1507,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1508,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1509,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1510,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1511,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1512,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1513,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1514,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1515,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1516,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1517,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1518,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1519,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1520,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+1521,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+1522,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+1523,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+1524,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+1525,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+1526,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1527,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                    >> 1U))));
    bufp->fullBit(oldp+1528,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+1529,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+1530,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+1531,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+1532,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+1533,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+1534,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+1535,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+1536,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+1537,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                    >> 4U))));
    bufp->fullIData(oldp+1538,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+1539,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+1540,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+1541,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+1542,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+1543,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+1544,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+1545,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+1546,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+1547,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+1548,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+1549,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+1550,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+1551,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+1552,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+1553,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+1554,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+1555,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+1556,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+1557,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+1558,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+1559,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+1560,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+1561,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullCData(oldp+1562,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+1563,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+1564,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullBit(oldp+1565,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullSData(oldp+1566,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+1567,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+1568,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+1569,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+1570,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+1571,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+1572,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1573,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1574,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1575,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1576,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1577,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1578,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+1579,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+1580,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+1581,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+1582,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+1583,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+1584,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+1585,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+1586,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+1587,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+1588,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+1589,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+1590,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+1591,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+1592,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+1593,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+1594,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+1595,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+1596,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+1597,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+1598,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                 | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                        >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+1599,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+1600,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+1601,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+1602,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+1603,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+1604,(vlSelf->main__DOT__swic__DOT__cpu_addr),25);
    bufp->fullIData(oldp+1605,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+1606,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+1607,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+1608,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+1609,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+1610,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+1611,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+1612,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+1613,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                 >> 7U))));
    bufp->fullBit(oldp+1614,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+1615,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+1616,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+1617,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+1618,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+1619,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+1620,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+1621,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+1622,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+1623,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+1624,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+1625,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+1626,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+1627,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+1628,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+1629,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+1630,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+1631,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                              & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+1632,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+1633,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+1634,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+1635,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+1636,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+1637,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+1638,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+1639,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+1640,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+1641,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+1642,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+1643,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+1644,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+1645,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+1646,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+1647,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                    >> 1U))));
    bufp->fullBit(oldp+1648,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+1649,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+1650,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+1651,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+1652,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),25);
    bufp->fullIData(oldp+1653,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+1654,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+1655,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                    | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                       | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                          >> 2U))))));
    bufp->fullBit(oldp+1656,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+1657,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+1658,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+1659,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+1660,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+1661,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+1662,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+1663,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+1664,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+1665,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+1666,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+1667,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+1668,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),25);
    bufp->fullWData(oldp+1669,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1685,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1687,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1688,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1689,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1690,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1691,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1692,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1693,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1694,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1695,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1696,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1697,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1698,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1699,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1700,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1701,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1702,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1703,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1704,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1720,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1722,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1738,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1739,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1740,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1741,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1743,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1744,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1745,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1746,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1747,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1748,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1749,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1750,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1751,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1752,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1753,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1754,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1755,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1756,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1757,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1758,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1759,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1760,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1761,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1762,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1763,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1764,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1765,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1766,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1767,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1768,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1769,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1770,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1771,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1772,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1773,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1774,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1775,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1777,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1778,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1779,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1780,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1781,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1782,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1783,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1784,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1785,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1786,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1787,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1788,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1789,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1790,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1791,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1792,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1793,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),31);
    bufp->fullIData(oldp+1794,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),31);
    bufp->fullIData(oldp+1795,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1796,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1797,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),31);
    bufp->fullIData(oldp+1798,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),31);
    bufp->fullSData(oldp+1799,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1800,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1801,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1802,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1803,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1804,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1805,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1806,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1807,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1808,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1809,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1810,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1811,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),31);
    bufp->fullIData(oldp+1812,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),31);
    bufp->fullSData(oldp+1813,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1814,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1815,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1816,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1817,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1818,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1819,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),25);
    bufp->fullQData(oldp+1820,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1822,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1823,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1824,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1825,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1841,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1842,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1843,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1844,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1845,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1861,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1862,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1863,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1864,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1865,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1881,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1882,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1883,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1884,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1885,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1886,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1887,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1888,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1904,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1905,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1906,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1907,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1908,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1909,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1910,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),25);
    bufp->fullQData(oldp+1911,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1913,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1914,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1915,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1916,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1917,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1918,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1919,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1920,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1921,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1922,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1923,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1924,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1925,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1926,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1927,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1928,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1929,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1930,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1931,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),31);
    bufp->fullIData(oldp+1932,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),31);
    bufp->fullCData(oldp+1933,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1934,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1935,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1937,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1939,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1941,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1943,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1944,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1945,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1946,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1947,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1948,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1949,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1965,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1966,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1967,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1999,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+2000,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+2001,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+2002,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+2003,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+2004,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+2005,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+2021,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+2022,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+2023,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),32);
    bufp->fullCData(oldp+2024,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+2025,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+2057,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+2073,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+2077,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+2081,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+2083,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+2084,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+2085,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+2086,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+2087,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+2104,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+2121,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+2138,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+2155,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+2172,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+2189,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+2206,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+2223,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+2240,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+2257,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+2274,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+2291,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+2308,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+2325,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+2342,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+2359,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+2376,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+2393,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+2394,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+2395,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+2396,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+2398,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+2399,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+2400,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+2401,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+2402,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2403,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+2404,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+2405,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+2406,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+2407,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+2408,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+2409,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+2410,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+2412,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+2413,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+2415,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+2416,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+2417,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+2418,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+2419,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),31);
    bufp->fullIData(oldp+2420,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+2421,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),31);
    bufp->fullBit(oldp+2422,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+2423,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2424,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+2425,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+2426,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+2427,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+2428,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+2429,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),25);
    bufp->fullBit(oldp+2430,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+2431,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+2432,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+2433,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+2434,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),31);
    bufp->fullIData(oldp+2435,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+2436,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+2437,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+2438,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+2440,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+2441,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+2442,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+2443,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+2444,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+2445,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+2446,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+2447,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+2448,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),25);
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+2450,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+2451,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+2452,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+2453,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+2455,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+2456,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+2457,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+2458,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+2459,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+2460,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+2461,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+2462,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+2463,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+2464,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+2465,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),22);
    bufp->fullIData(oldp+2466,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),22);
    bufp->fullIData(oldp+2467,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),22);
    bufp->fullIData(oldp+2468,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),22);
    bufp->fullIData(oldp+2469,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),22);
    bufp->fullIData(oldp+2470,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),22);
    bufp->fullIData(oldp+2471,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),22);
    bufp->fullIData(oldp+2472,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),22);
    bufp->fullBit(oldp+2473,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+2474,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+2475,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+2476,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+2492,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+2508,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+2509,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+2510,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+2511,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+2527,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+2529,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+2530,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),22);
    bufp->fullBit(oldp+2531,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+2532,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2533,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+2534,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+2535,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+2536,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+2537,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+2538,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+2539,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+2540,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+2541,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+2542,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+2543,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),25);
    bufp->fullCData(oldp+2544,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+2545,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+2546,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                             >> 3U))),22);
    bufp->fullBit(oldp+2547,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+2548,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+2549,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+2550,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),22);
    bufp->fullSData(oldp+2551,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+2552,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+2553,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+2569,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+2585,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+2586,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+2588,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+2589,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+2605,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+2621,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+2622,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+2623,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+2624,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+2625,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+2626,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+2627,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+2628,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+2629,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+2630,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+2631,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+2632,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+2633,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+2634,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+2635,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+2636,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+2637,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+2638,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+2639,((0x7fffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),31);
    bufp->fullBit(oldp+2640,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+2641,(__Vtemp_he3c3974d__0),512);
    bufp->fullIData(oldp+2657,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),19);
    bufp->fullIData(oldp+2658,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),19);
    bufp->fullIData(oldp+2659,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),19);
    bufp->fullIData(oldp+2660,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),19);
    bufp->fullIData(oldp+2661,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),19);
    bufp->fullIData(oldp+2662,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),19);
    bufp->fullIData(oldp+2663,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),19);
    bufp->fullIData(oldp+2664,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),19);
    bufp->fullCData(oldp+2665,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+2666,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+2667,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+2668,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+2669,((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U)) 
                               == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                   >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+2670,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+2671,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),31);
    bufp->fullCData(oldp+2672,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+2673,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),22);
    bufp->fullIData(oldp+2674,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),22);
    bufp->fullIData(oldp+2675,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),22);
    bufp->fullIData(oldp+2676,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U))),22);
    bufp->fullIData(oldp+2677,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U))),22);
    bufp->fullBit(oldp+2678,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+2679,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),22);
    bufp->fullWData(oldp+2680,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2696,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2712,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2713,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2714,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2715,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2716,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2717,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2718,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2719,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2720,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2721,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2722,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2723,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2739,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2740,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2748,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2749,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2750,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2751,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2752,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2753,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2754,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2755,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2756,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2757,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2758,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2759,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2761,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2762,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2763,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2764,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2765,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2766,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2767,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2768,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2769,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2770,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2771,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2772,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2773,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2774,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2775,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2793,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2794,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2795,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2796,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2797,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),31);
    bufp->fullBit(oldp+2798,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2799,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2800,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2801,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2802,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2803,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2804,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2805,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2806,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2807,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2808,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2809,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2810,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2811,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2812,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2813,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2814,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2815,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2816,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2817,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2818,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2819,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2820,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2821,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2822,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2823,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2824,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2829,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2830,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2831,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),31);
    bufp->fullBit(oldp+2832,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2833,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2834,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2835,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2836,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2837,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2838,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2839,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2840,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2841,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2842,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2843,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2844,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2845,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2846,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2847,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2848,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),31);
    bufp->fullIData(oldp+2849,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2850,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2851,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2852,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2853,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2854,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2855,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2856,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2857,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2858,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2859,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2860,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2861,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2862,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2863,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),31);
    bufp->fullCData(oldp+2864,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2865,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2866,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2868,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2869,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2870,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2871,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2872,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2873,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2874,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2875,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2876,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2877,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2878,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2879,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2880,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2881,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2882,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2883,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2884,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2885,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2886,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2887,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2888,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2889,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2890,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2891,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2892,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2893,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2894,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2895,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2896,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2897,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2898,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2899,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2900,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),31);
    bufp->fullIData(oldp+2901,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),31);
    bufp->fullBit(oldp+2902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2903,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2904,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2905,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2906,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2907,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2908,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2909,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2910,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2911,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2912,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2913,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2914,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2915,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2916,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2918,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2920,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2921,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2922,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2923,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2924,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2925,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2926,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2927,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2928,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2929,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2930,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),31);
    bufp->fullIData(oldp+2931,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2932,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2933,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2934,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2935,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2936,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2937,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2938,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2939,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2940,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2941,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2942,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2943,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2944,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2946,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2948,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2952,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2953,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2954,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2955,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2957,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2959,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2960,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2962,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2964,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2965,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2966,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2967,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2968,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2970,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2972,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2974,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2976,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2977,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2978,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2979,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2980,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2981,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2983,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2986,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2987,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2989,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2990,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2993,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2994,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2995,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2996,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2998,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2999,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+3000,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+3001,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+3002,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+3003,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+3004,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+3005,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+3006,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+3007,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+3008,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+3009,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+3010,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+3011,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+3012,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+3013,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+3014,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+3015,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+3016,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+3017,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+3018,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+3019,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+3020,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+3021,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+3022,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+3023,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+3024,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+3025,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+3026,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+3027,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+3028,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+3029,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+3030,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+3031,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+3032,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+3033,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3034,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3035,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+3036,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+3037,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+3038,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+3039,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+3040,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3041,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3042,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+3043,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+3044,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+3045,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+3046,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+3047,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+3048,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+3049,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+3050,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+3051,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+3052,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+3053,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+3054,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+3055,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+3056,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+3057,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+3058,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+3059,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullCData(oldp+3060,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),3);
    bufp->fullSData(oldp+3061,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+3062,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+3063,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+3064,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+3065,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+3066,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+3067,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+3068,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+3069,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+3070,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+3071,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+3072,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+3073,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+3074,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+3075,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+3076,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+3077,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+3078,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+3079,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+3080,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+3081,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+3082,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+3083,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+3084,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+3085,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+3086,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+3087,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+3088,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),2);
    bufp->fullBit(oldp+3089,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+3090,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+3091,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+3092,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+3093,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+3094,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+3095,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+3096,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+3097,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+3098,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+3099,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+3100,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+3101,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+3102,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+3103,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+3104,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+3105,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+3106,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+3107,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+3108,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+3109,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+3110,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+3111,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+3112,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+3113,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+3114,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+3115,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+3116,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+3117,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+3118,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+3119,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+3120,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+3121,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+3122,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+3123,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+3124,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+3125,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+3126,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+3127,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+3128,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullBit(oldp+3129,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+3130,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+3131,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+3132,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+3133,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+3134,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+3135,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+3136,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+3137,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+3138,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+3139,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+3140,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+3141,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+3142,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+3143,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+3144,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+3145,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+3146,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+3147,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+3148,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+3149,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+3150,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+3151,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+3152,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+3153,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullCData(oldp+3154,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 8U))),2);
    bufp->fullBit(oldp+3155,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+3156,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),31);
    bufp->fullIData(oldp+3157,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),31);
    bufp->fullCData(oldp+3158,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+3159,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),31);
    bufp->fullIData(oldp+3160,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+3161,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullBit(oldp+3162,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+3163,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+3164,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+3165,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+3166,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+3167,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+3168,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+3169,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+3170,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+3171,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+3172,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+3173,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullCData(oldp+3174,((0xfU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),4);
    bufp->fullBit(oldp+3175,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+3176,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+3177,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+3178,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+3179,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+3195,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+3211,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+3213,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+3215,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+3216,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullCData(oldp+3217,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullBit(oldp+3218,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+3219,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+3220,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+3221,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullIData(oldp+3222,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullBit(oldp+3223,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+3224,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+3225,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+3226,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+3227,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+3228,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+3229,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+3230,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+3231,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+3232,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+3233,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+3234,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+3235,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+3236,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+3237,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+3238,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+3239,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+3240,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+3241,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+3242,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+3243,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+3244,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+3245,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+3246,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+3247,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+3248,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+3249,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+3250,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+3251,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+3252,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+3253,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+3254,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+3255,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+3256,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+3257,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+3258,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+3259,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+3260,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+3261,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+3262,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+3263,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+3264,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),11);
    bufp->fullSData(oldp+3265,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),11);
    bufp->fullSData(oldp+3266,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),11);
    bufp->fullWData(oldp+3267,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),88);
    bufp->fullWData(oldp+3270,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),352);
    bufp->fullQData(oldp+3281,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),44);
    bufp->fullSData(oldp+3283,(((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                << 0xaU)),11);
    bufp->fullSData(oldp+3284,((((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
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
    bufp->fullWData(oldp+3285,(__Vtemp_h33b103d1__0),352);
    bufp->fullSData(oldp+3296,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),12);
    bufp->fullSData(oldp+3297,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),12);
    bufp->fullBit(oldp+3298,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullSData(oldp+3299,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),11);
    bufp->fullCData(oldp+3300,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3301,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+3302,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3303,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullBit(oldp+3304,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3305,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullCData(oldp+3306,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),8);
    bufp->fullIData(oldp+3307,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3308,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullSData(oldp+3309,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullIData(oldp+3310,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3311,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3312,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3313,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3314,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3315,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3316,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3317,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3318,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3319,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3320,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3321,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3322,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3323,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3324,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3325,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullSData(oldp+3326,(((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
    bufp->fullBit(oldp+3327,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3328,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3329,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3330,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3331,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3332,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x2cU)))));
    bufp->fullCData(oldp+3333,((0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                 >> 0x24U)))),8);
    bufp->fullIData(oldp+3334,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+3335,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullSData(oldp+3336,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),12);
    bufp->fullBit(oldp+3337,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3338,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x2cU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullCData(oldp+3340,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),8);
    bufp->fullQData(oldp+3341,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+3343,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),11);
    bufp->fullQData(oldp+3344,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),45);
    bufp->fullQData(oldp+3346,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),45);
    bufp->fullQData(oldp+3348,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),45);
    bufp->fullIData(oldp+3350,((0x1fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),29);
    bufp->fullBit(oldp+3351,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+3352,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+3368,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+3369,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+3370,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+3371,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+3372,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+3373,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+3374,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+3390,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+3392,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+3393,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+3394,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+3395,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+3396,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+3397,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+3398,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+3399,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+3400,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+3401,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+3402,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+3403,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+3404,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+3405,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+3406,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+3407,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+3408,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+3409,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+3410,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+3411,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+3412,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+3413,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+3414,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+3415,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+3416,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+3417,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+3418,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+3419,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+3420,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+3421,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+3422,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+3423,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+3424,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+3425,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+3426,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+3427,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+3428,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+3429,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+3430,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+3431,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+3432,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),60);
    bufp->fullQData(oldp+3434,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+3436,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+3437,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+3439,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+3440,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+3441,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+3442,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+3443,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+3444,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+3445,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+3446,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+3447,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+3448,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+3449,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+3450,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),30);
    bufp->fullIData(oldp+3451,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+3452,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+3453,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3454,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3455,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3456,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+3457,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+3458,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+3459,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3460,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3461,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3462,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3463,((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                    >> 2U))));
    bufp->fullIData(oldp+3464,((0x3fffffffU & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                << 0x1cU) 
                                               | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                  >> 4U)))),30);
    bufp->fullIData(oldp+3465,(((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                 << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+3466,((0xfU & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])),4);
    bufp->fullCData(oldp+3467,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+3468,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+3469,((((QData)((IData)((1U 
                                                  & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                     >> 2U)))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))))),37);
    bufp->fullIData(oldp+3471,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),30);
    bufp->fullQData(oldp+3472,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+3474,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+3475,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),67);
    bufp->fullWData(oldp+3478,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),67);
    bufp->fullWData(oldp+3481,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),67);
    bufp->fullCData(oldp+3484,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+3485,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+3486,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
    bufp->fullWData(oldp+3487,(__Vtemp_h2146f57f__0),100);
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
    bufp->fullWData(oldp+3491,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+3555,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+3563,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+3564,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+3565,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+3629,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+3630,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),3);
    bufp->fullCData(oldp+3631,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),3);
    bufp->fullCData(oldp+3632,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),3);
    bufp->fullWData(oldp+3633,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),75);
    bufp->fullWData(oldp+3636,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1536);
    bufp->fullWData(oldp+3684,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),192);
    bufp->fullCData(oldp+3690,((((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                 << 2U) | (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))),3);
    bufp->fullCData(oldp+3691,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                  [0U] & (0x17U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
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
    bufp->fullWData(oldp+3692,(__Vtemp_h9e08da6e__0),1536);
    bufp->fullCData(oldp+3740,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err),3);
    bufp->fullCData(oldp+3741,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),4);
    bufp->fullCData(oldp+3742,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),4);
    bufp->fullCData(oldp+3743,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),4);
    bufp->fullCData(oldp+3744,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),4);
    bufp->fullCData(oldp+3745,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),3);
    bufp->fullCData(oldp+3746,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),3);
    bufp->fullCData(oldp+3747,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),3);
    bufp->fullCData(oldp+3748,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),3);
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),4);
    bufp->fullCData(oldp+3750,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),4);
    bufp->fullCData(oldp+3751,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),4);
    bufp->fullCData(oldp+3752,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),4);
    bufp->fullCData(oldp+3753,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+3754,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),3);
    bufp->fullCData(oldp+3755,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+3756,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+3757,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+3758,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+3759,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+3760,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+3761,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+3762,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+3763,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+3764,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+3765,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+3766,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+3767,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+3768,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+3769,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),25);
    bufp->fullIData(oldp+3770,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),25);
    bufp->fullIData(oldp+3771,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),25);
    bufp->fullWData(oldp+3772,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+3788,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+3804,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+3820,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+3836,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+3838,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+3840,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+3842,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullCData(oldp+3844,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullWData(oldp+3845,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3861,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3877,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3893,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
    bufp->fullCData(oldp+3909,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullCData(oldp+3910,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+3911,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullIData(oldp+3912,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullBit(oldp+3913,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3914,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3915,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3916,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3917,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3918,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullBit(oldp+3919,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+3920,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+3921,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3922,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3923,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+3924,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+3925,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3926,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3927,(__Vtemp_h0fd98bf7__0),512);
    bufp->fullQData(oldp+3943,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3945,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3946,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3947,(__Vtemp_h3b245e0e__0),577);
    bufp->fullBit(oldp+3966,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3967,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3968,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3987,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3988,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+4007,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4026,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4045,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4046,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4047,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4048,(__Vtemp_hcb138391__0),512);
    bufp->fullQData(oldp+4064,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4066,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4067,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4068,(__Vtemp_hf41d9735__0),577);
    bufp->fullBit(oldp+4087,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4088,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4089,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4108,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),3);
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
    bufp->fullWData(oldp+4109,(__Vtemp_h6283f4ea__0),602);
    bufp->fullWData(oldp+4128,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4147,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4166,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4167,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4168,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4169,(__Vtemp_hb4195529__0),512);
    bufp->fullQData(oldp+4185,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4187,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4188,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4189,(__Vtemp_hb863f640__0),577);
    bufp->fullBit(oldp+4208,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4209,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4210,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4229,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+4230,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+4249,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4268,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+4287,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+4288,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+4289,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+4290,(__Vtemp_h61e633ab__0),512);
    bufp->fullQData(oldp+4306,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+4308,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),4);
    bufp->fullBit(oldp+4309,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+4310,(__Vtemp_h43fd6509__0),577);
    bufp->fullBit(oldp+4329,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+4330,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+4331,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+4350,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+4351,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+4370,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+4389,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullCData(oldp+4408,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4409,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4410,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4411,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4412,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4413,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4414,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+4415,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4416,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4417,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4418,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4419,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),12);
    bufp->fullCData(oldp+4420,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4421,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4422,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4423,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4424,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4425,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4426,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4427,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4428,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4429,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4430,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4431,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4432,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4433,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4434,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4435,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4436,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4437,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4438,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullCData(oldp+4439,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullBit(oldp+4440,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4441,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4442,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4443,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4444,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4445,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4446,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4447,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4448,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4449,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4450,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4451,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4452,(vlSelf->i_clk));
    bufp->fullBit(oldp+4453,(vlSelf->i_reset));
    bufp->fullWData(oldp+4454,(vlSelf->i_ddr3_controller_iserdes_data),512);
    bufp->fullQData(oldp+4470,(vlSelf->i_ddr3_controller_iserdes_dqs),64);
    bufp->fullQData(oldp+4472,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),64);
    bufp->fullBit(oldp+4474,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4475,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4478,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4479,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4480,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullWData(oldp+4481,(vlSelf->o_ddr3_controller_data),512);
    bufp->fullQData(oldp+4497,(vlSelf->o_ddr3_controller_dm),64);
    bufp->fullCData(oldp+4499,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4500,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4501,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4502,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4503,(vlSelf->o_ddr3_controller_odelay_data_ld),8);
    bufp->fullCData(oldp+4504,(vlSelf->o_ddr3_controller_odelay_dqs_ld),8);
    bufp->fullCData(oldp+4505,(vlSelf->o_ddr3_controller_idelay_data_ld),8);
    bufp->fullCData(oldp+4506,(vlSelf->o_ddr3_controller_idelay_dqs_ld),8);
    bufp->fullCData(oldp+4507,(vlSelf->o_ddr3_controller_bitslip),8);
    bufp->fullBit(oldp+4508,(vlSelf->o_ddr3_controller_leveling_calib));
    bufp->fullBit(oldp+4509,(vlSelf->o_ddr3_controller_reset));
    bufp->fullCData(oldp+4510,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4511,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4512,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4513,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4514,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4515,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4516,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4517,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4518,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4519,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4520,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4521,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4522,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4523,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4524,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4525,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4526,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4527,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4528,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4529,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4530,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4531,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4532,(vlSelf->cpu_prof_addr),31);
    bufp->fullIData(oldp+4533,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4534,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4535,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4536,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4537,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4538,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4539,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4540,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4541,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4542,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4543,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4544,((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test) 
                                 << 0x1fU) | (0x7fffffffU 
                                              & vlSelf->i_ddr3_controller_iserdes_data[1U]))),32);
    bufp->fullIData(oldp+4545,((((IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__repeat_test) 
                                 << 0x1fU) | (0x7fffffffU 
                                              & vlSelf->i_ddr3_controller_iserdes_data[0U]))),32);
    bufp->fullIData(oldp+4546,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullIData(oldp+4547,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4548,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4549,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4550,((1U & (~ (IData)(vlSelf->i_reset)))));
    bufp->fullBit(oldp+4551,((0U == (((((((((((((((
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
    bufp->fullSData(oldp+4552,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4553,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[1U])),31);
    bufp->fullIData(oldp+4554,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[0U])),31);
    bufp->fullBit(oldp+4555,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullCData(oldp+4556,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4557,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),31);
    bufp->fullBit(oldp+4558,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4559,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4560,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4561,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4562,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4563,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4564,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4565,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4566,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4567,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullIData(oldp+4568,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4569,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4570,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4571,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullBit(oldp+4572,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullCData(oldp+4573,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4574,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4575,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullBit(oldp+4576,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4577,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4578,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullIData(oldp+4579,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4580,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4581,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4582,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4583,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4584,(10.0));
    bufp->fullDouble(oldp+4586,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4588,(0xeU),32);
    bufp->fullIData(oldp+4589,(0xaU),32);
    bufp->fullIData(oldp+4590,(3U),32);
    bufp->fullIData(oldp+4591,(8U),32);
    bufp->fullIData(oldp+4592,(4U),32);
    bufp->fullIData(oldp+4593,(0x18U),32);
    bufp->fullIData(oldp+4594,(0x4000000U),32);
    bufp->fullIData(oldp+4595,(0x19U),32);
    bufp->fullIData(oldp+4596,(0x10U),32);
    bufp->fullBit(oldp+4597,(1U));
    bufp->fullIData(oldp+4598,(0x64U),24);
    bufp->fullIData(oldp+4599,(7U),32);
    bufp->fullIData(oldp+4600,(0x13U),32);
    bufp->fullIData(oldp+4601,(2U),32);
    bufp->fullIData(oldp+4602,(0U),32);
    bufp->fullBit(oldp+4603,(0U));
    bufp->fullBit(oldp+4604,(1U));
    bufp->fullWData(oldp+4605,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4621,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+4623,(vlSelf->main__DOT__wb32_buildtime_addr),8);
    bufp->fullBit(oldp+4624,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4625,(0x63401U),32);
    bufp->fullCData(oldp+4626,(vlSelf->main__DOT__wb32_gpio_addr),8);
    bufp->fullBit(oldp+4627,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullCData(oldp+4628,(vlSelf->main__DOT__wb32_sirefclk_addr),8);
    bufp->fullBit(oldp+4629,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullCData(oldp+4630,(vlSelf->main__DOT__wb32_spio_addr),8);
    bufp->fullBit(oldp+4631,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullCData(oldp+4632,(vlSelf->main__DOT__wb32_version_addr),8);
    bufp->fullBit(oldp+4633,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4634,(0x20230911U),32);
    bufp->fullCData(oldp+4635,(0xfU),4);
    bufp->fullCData(oldp+4636,(0x20U),8);
    bufp->fullIData(oldp+4637,(0x14U),32);
    bufp->fullIData(oldp+4638,(0x200U),32);
    bufp->fullIData(oldp+4639,(1U),32);
    bufp->fullCData(oldp+4640,(0U),8);
    bufp->fullBit(oldp+4641,(0U));
    bufp->fullIData(oldp+4642,(0x20U),32);
    bufp->fullCData(oldp+4643,(6U),4);
    bufp->fullCData(oldp+4644,(0U),2);
    bufp->fullCData(oldp+4645,(1U),2);
    bufp->fullCData(oldp+4646,(2U),2);
    bufp->fullCData(oldp+4647,(3U),2);
    bufp->fullIData(oldp+4648,(0x40U),32);
    bufp->fullCData(oldp+4649,(0U),4);
    bufp->fullCData(oldp+4650,(1U),4);
    bufp->fullCData(oldp+4651,(2U),4);
    bufp->fullCData(oldp+4652,(3U),4);
    bufp->fullCData(oldp+4653,(4U),4);
    bufp->fullCData(oldp+4654,(5U),4);
    bufp->fullCData(oldp+4655,(7U),4);
    bufp->fullIData(oldp+4656,(0x1bU),32);
    bufp->fullIData(oldp+4657,(0x1aU),32);
    bufp->fullIData(oldp+4658,(0x17U),32);
    bufp->fullIData(oldp+4659,(0x16U),32);
    bufp->fullIData(oldp+4660,(0x12U),32);
    bufp->fullIData(oldp+4661,(0x15U),32);
    bufp->fullIData(oldp+4662,(0x11U),32);
    bufp->fullIData(oldp+4663,(0xdU),32);
    bufp->fullIData(oldp+4664,(0x30d40U),32);
    bufp->fullIData(oldp+4665,(0x7a120U),32);
    bufp->fullDouble(oldp+4666,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4668,(0x23U),32);
    bufp->fullDouble(oldp+4669,(350.0));
    bufp->fullIData(oldp+4671,(0x1e78U),32);
    bufp->fullDouble(oldp+4672,(360.0));
    bufp->fullDouble(oldp+4674,(15.0));
    bufp->fullIData(oldp+4676,(0xaU),19);
    bufp->fullDouble(oldp+4677,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4679,(0x80U),32);
    bufp->fullIData(oldp+4680,(6U),32);
    bufp->fullIData(oldp+4681,(5U),32);
    bufp->fullIData(oldp+4682,(0xc350U),19);
    bufp->fullIData(oldp+4683,(9U),32);
    bufp->fullIData(oldp+4684,(0xbU),32);
    bufp->fullIData(oldp+4685,(0xcU),32);
    bufp->fullIData(oldp+4686,(0xfU),32);
    bufp->fullCData(oldp+4687,(0U),3);
    bufp->fullCData(oldp+4688,(2U),3);
    bufp->fullIData(oldp+4689,(0x20040U),19);
    bufp->fullCData(oldp+4690,(3U),3);
    bufp->fullIData(oldp+4691,(0x30004U),19);
    bufp->fullIData(oldp+4692,(0x30000U),19);
    bufp->fullCData(oldp+4693,(1U),3);
    bufp->fullIData(oldp+4694,(0x100c4U),19);
    bufp->fullIData(oldp+4695,(0x10044U),19);
    bufp->fullIData(oldp+4696,(0x720U),19);
    bufp->fullIData(oldp+4697,(0x4380005U),28);
    bufp->fullIData(oldp+4698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4705,(0x1eU),32);
    bufp->fullIData(oldp+4706,(0x24U),32);
    bufp->fullIData(oldp+4707,(0x400U),32);
    bufp->fullCData(oldp+4708,(0U),5);
    bufp->fullQData(oldp+4709,(0x100000000ULL),36);
    bufp->fullQData(oldp+4711,(0x40000000ULL),36);
    bufp->fullQData(oldp+4713,(0ULL),36);
    bufp->fullCData(oldp+4715,(0x4fU),7);
    bufp->fullCData(oldp+4716,(0x49U),7);
    bufp->fullIData(oldp+4717,(0x1fU),32);
    bufp->fullIData(oldp+4718,(0U),31);
    bufp->fullSData(oldp+4719,(0xfffU),12);
    bufp->fullCData(oldp+4720,(8U),4);
    bufp->fullCData(oldp+4721,(9U),4);
    bufp->fullCData(oldp+4722,(0xaU),4);
    bufp->fullCData(oldp+4723,(0xbU),4);
    bufp->fullCData(oldp+4724,(0xcU),4);
    bufp->fullCData(oldp+4725,(0xdU),4);
    bufp->fullCData(oldp+4726,(4U),3);
    bufp->fullCData(oldp+4727,(5U),3);
    bufp->fullCData(oldp+4728,(6U),3);
    bufp->fullCData(oldp+4729,(7U),3);
    bufp->fullCData(oldp+4730,(0xaU),5);
    bufp->fullIData(oldp+4731,(0x1fcU),20);
    bufp->fullIData(oldp+4732,(0x7fffffffU),31);
    bufp->fullCData(oldp+4733,(0x64U),7);
    bufp->fullCData(oldp+4734,(0x32U),7);
    bufp->fullIData(oldp+4735,(0xc0000000U),32);
    bufp->fullCData(oldp+4736,(1U),8);
    bufp->fullCData(oldp+4737,(2U),8);
    bufp->fullCData(oldp+4738,(3U),8);
    bufp->fullCData(oldp+4739,(4U),8);
    bufp->fullCData(oldp+4740,(5U),8);
    bufp->fullCData(oldp+4741,(6U),8);
    bufp->fullCData(oldp+4742,(7U),8);
    bufp->fullCData(oldp+4743,(8U),8);
    bufp->fullCData(oldp+4744,(9U),8);
    bufp->fullCData(oldp+4745,(0xaU),8);
    bufp->fullCData(oldp+4746,(0xbU),8);
    bufp->fullCData(oldp+4747,(0xcU),8);
    bufp->fullCData(oldp+4748,(0xdU),8);
    bufp->fullCData(oldp+4749,(0xeU),8);
    bufp->fullCData(oldp+4750,(0xfU),8);
    bufp->fullCData(oldp+4751,(0x80U),8);
    bufp->fullCData(oldp+4752,(0x10U),8);
    bufp->fullIData(oldp+4753,(0U),20);
    bufp->fullIData(oldp+4754,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4755,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4758,(0x41425254U),32);
    bufp->fullIData(oldp+4759,(0x40U),32);
    bufp->fullBit(oldp+4760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4761,(0x1dU),32);
    bufp->fullIData(oldp+4762,(0x1000000U),29);
    bufp->fullCData(oldp+4763,(0xeU),4);
    bufp->fullSData(oldp+4764,(0x1d7U),9);
    bufp->fullSData(oldp+4765,(0x2000U),14);
    bufp->fullCData(oldp+4766,(7U),5);
    bufp->fullIData(oldp+4767,(0x5f5e100U),32);
    bufp->fullIData(oldp+4768,(0x186a0U),32);
    bufp->fullIData(oldp+4769,(0x4e20U),32);
    bufp->fullIData(oldp+4770,(0x1387U),32);
    bufp->fullSData(oldp+4771,(0xc8U),12);
    bufp->fullIData(oldp+4772,(0x10U),32);
    __Vtemp_h2308cdb3__0[0U] = 0x18100800U;
    __Vtemp_h2308cdb3__0[1U] = 0x38302820U;
    __Vtemp_h2308cdb3__0[2U] = 0x806040U;
    bufp->fullWData(oldp+4773,(__Vtemp_h2308cdb3__0),88);
    __Vtemp_h382813b1__0[0U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[1U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[2U] = 0x80e0f8U;
    bufp->fullWData(oldp+4776,(__Vtemp_h382813b1__0),88);
    bufp->fullSData(oldp+4779,(0U),11);
    bufp->fullSData(oldp+4780,(0xf800U),16);
    bufp->fullIData(oldp+4781,(0x25U),32);
    bufp->fullSData(oldp+4782,(0x7ffU),11);
    bufp->fullIData(oldp+4783,(0x2dU),32);
    bufp->fullQData(oldp+4784,(0x800000000000000ULL),60);
    bufp->fullQData(oldp+4786,(0xe00000020000000ULL),60);
    bufp->fullIData(oldp+4788,(0x43U),32);
    __Vtemp_h5259539f__0[0U] = 0x80000U;
    __Vtemp_h5259539f__0[1U] = 0x2000U;
    __Vtemp_h5259539f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4789,(__Vtemp_h5259539f__0),75);
    __Vtemp_ha5e9189f__0[0U] = 0x1f80000U;
    __Vtemp_ha5e9189f__0[1U] = 0x3f000U;
    __Vtemp_ha5e9189f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4792,(__Vtemp_ha5e9189f__0),75);
    bufp->fullIData(oldp+4795,(0x241U),32);
    bufp->fullIData(oldp+4796,(0x25aU),32);
}
