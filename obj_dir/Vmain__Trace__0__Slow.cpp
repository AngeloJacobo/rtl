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
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declArray(c+4407,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4423,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4425,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4427,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4428,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4431,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4432,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4433,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4434,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4450,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4452,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4453,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4454,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4455,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4456,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4457,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4458,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4459,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4460,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBus(c+4461,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4462,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4463,"i_fan_sda", false,-1);
    tracep->declBit(c+4464,"i_fan_scl", false,-1);
    tracep->declBit(c+4465,"o_fan_sda", false,-1);
    tracep->declBit(c+4466,"o_fan_scl", false,-1);
    tracep->declBit(c+4467,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4468,"o_sys_pwm", false,-1);
    tracep->declBit(c+4469,"i_fan_tach", false,-1);
    tracep->declBit(c+4470,"i_i2c_sda", false,-1);
    tracep->declBit(c+4471,"i_i2c_scl", false,-1);
    tracep->declBit(c+4472,"o_i2c_sda", false,-1);
    tracep->declBit(c+4473,"o_i2c_scl", false,-1);
    tracep->declBit(c+4474,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4475,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4476,"cpu_sim_we", false,-1);
    tracep->declBus(c+4477,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4478,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4479,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4480,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4481,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4482,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4483,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4484,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4485,"i_cpu_reset", false,-1);
    tracep->declBit(c+4486,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4487,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4488,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4489,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4490,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4491,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4492,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4493,"o_led", false,-1, 7,0);
    tracep->declBit(c+4494,"i_clk200", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declDouble(c+4537,"DDR3_CONTROLLERCONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4539,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4541,"DDR3_CONTROLLERROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4542,"DDR3_CONTROLLERCOL_BITS", false,-1, 31,0);
    tracep->declBus(c+4543,"DDR3_CONTROLLERBA_BITS", false,-1, 31,0);
    tracep->declBus(c+4544,"DDR3_CONTROLLERDQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4544,"DDR3_CONTROLLERLANES", false,-1, 31,0);
    tracep->declBus(c+4545,"DDR3_CONTROLLERAUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4546,"DDR3_CONTROLLERSERDES_RATIO", false,-1, 31,0);
    tracep->declBus(c+4547,"DDR3_CONTROLLERCMD_LEN", false,-1, 31,0);
    tracep->declBus(c+4548,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4549,"ZIP_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4550,"ZIP_INTS", false,-1, 31,0);
    tracep->declBus(c+4551,"ZIP_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4552,"BUSUART", false,-1, 23,0);
    tracep->declBus(c+4553,"DBGBUSBITS", false,-1, 31,0);
    tracep->declBus(c+4550,"DBGBUSWATCHDOG_RAW", false,-1, 31,0);
    tracep->declBus(c+4554,"DBGBUSWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4543,"ICAPE_LGDIV", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declArray(c+4407,"i_ddr3_controller_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4423,"i_ddr3_controller_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4425,"i_ddr3_controller_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4427,"i_ddr3_controller_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4428,"o_ddr3_controller_cmd", false,-1, 95,0);
    tracep->declBit(c+4431,"o_ddr3_controller_dqs_tri_control", false,-1);
    tracep->declBit(c+4432,"o_ddr3_controller_dq_tri_control", false,-1);
    tracep->declBit(c+4433,"o_ddr3_controller_toggle_dqs", false,-1);
    tracep->declArray(c+4434,"o_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+4450,"o_ddr3_controller_dm", false,-1, 63,0);
    tracep->declBus(c+4452,"o_ddr3_controller_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4453,"o_ddr3_controller_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4454,"o_ddr3_controller_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4455,"o_ddr3_controller_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4456,"o_ddr3_controller_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4457,"o_ddr3_controller_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4458,"o_ddr3_controller_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4459,"o_ddr3_controller_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4460,"o_ddr3_controller_bitslip", false,-1, 7,0);
    tracep->declBus(c+4461,"o_sirefclk_word", false,-1, 7,0);
    tracep->declBit(c+4462,"o_sirefclk_ce", false,-1);
    tracep->declBit(c+4463,"i_fan_sda", false,-1);
    tracep->declBit(c+4464,"i_fan_scl", false,-1);
    tracep->declBit(c+4465,"o_fan_sda", false,-1);
    tracep->declBit(c+4466,"o_fan_scl", false,-1);
    tracep->declBit(c+4467,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4468,"o_sys_pwm", false,-1);
    tracep->declBit(c+4469,"i_fan_tach", false,-1);
    tracep->declBit(c+4470,"i_i2c_sda", false,-1);
    tracep->declBit(c+4471,"i_i2c_scl", false,-1);
    tracep->declBit(c+4472,"o_i2c_sda", false,-1);
    tracep->declBit(c+4473,"o_i2c_scl", false,-1);
    tracep->declBit(c+4474,"cpu_sim_cyc", false,-1);
    tracep->declBit(c+4475,"cpu_sim_stb", false,-1);
    tracep->declBit(c+4476,"cpu_sim_we", false,-1);
    tracep->declBus(c+4477,"cpu_sim_addr", false,-1, 6,0);
    tracep->declBus(c+4478,"cpu_sim_data", false,-1, 31,0);
    tracep->declBit(c+4479,"cpu_sim_stall", false,-1);
    tracep->declBit(c+4480,"cpu_sim_ack", false,-1);
    tracep->declBus(c+4481,"cpu_sim_idata", false,-1, 31,0);
    tracep->declBit(c+4482,"cpu_prof_stb", false,-1);
    tracep->declBus(c+4483,"cpu_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4484,"cpu_prof_ticks", false,-1, 31,0);
    tracep->declBit(c+4485,"i_cpu_reset", false,-1);
    tracep->declBit(c+4486,"i_wbu_uart_rx", false,-1);
    tracep->declBit(c+4487,"o_wbu_uart_tx", false,-1);
    tracep->declBit(c+4488,"o_wbu_uart_cts_n", false,-1);
    tracep->declBus(c+4550,"NGPI", false,-1, 31,0);
    tracep->declBus(c+4544,"NGPO", false,-1, 31,0);
    tracep->declBus(c+4489,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4490,"o_gpio", false,-1, 7,0);
    tracep->declBus(c+4491,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4492,"i_btn", false,-1, 4,0);
    tracep->declBus(c+4493,"o_led", false,-1, 7,0);
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
    tracep->declBus(c+4295,"ddr3_controller_aux_out", false,-1, 0,0);
    tracep->declBus(c+4495,"ddr3_controller_debug1", false,-1, 31,0);
    tracep->declBus(c+4496,"ddr3_controller_debug2", false,-1, 31,0);
    tracep->declBus(c+4497,"ddr3_controller_debug3", false,-1, 31,0);
    tracep->declBit(c+147,"r_sirefclk_en", false,-1);
    tracep->declBus(c+148,"r_sirefclk_data", false,-1, 29,0);
    tracep->declBit(c+149,"w_sirefclk_unused_stb", false,-1);
    tracep->declBit(c+150,"r_sirefclk_ack", false,-1);
    tracep->declBit(c+151,"i2cdma_ready", false,-1);
    tracep->declBus(c+4498,"fan_debug", false,-1, 31,0);
    tracep->declBus(c+4555,"I2C_ID_WIDTH", false,-1, 31,0);
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
    tracep->declBus(c+4556,"zip_debug", false,-1, 31,0);
    tracep->declBit(c+4557,"zip_trigger", false,-1);
    tracep->declBus(c+165,"zip_int_vector", false,-1, 15,0);
    tracep->declBit(c+166,"zip_cpu_int", false,-1);
    tracep->declBit(c+4494,"i_clk200", false,-1);
    tracep->declBus(c+167,"wbu_rx_data", false,-1, 7,0);
    tracep->declBus(c+168,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+169,"wbu_rx_stb", false,-1);
    tracep->declBit(c+170,"wbu_tx_stb", false,-1);
    tracep->declBit(c+171,"wbu_tx_busy", false,-1);
    tracep->declBus(c+172,"wbubus_dbg", false,-1, 0,0);
    tracep->declBus(c+4556,"cfg_debug", false,-1, 31,0);
    tracep->declBus(c+173,"w_led", false,-1, 7,0);
    tracep->declBus(c+174,"sys_int_vector", false,-1, 14,0);
    tracep->declBus(c+175,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+176,"wbwide_i2cdma_cyc", false,-1);
    tracep->declBit(c+177,"wbwide_i2cdma_stb", false,-1);
    tracep->declBit(c+4558,"wbwide_i2cdma_we", false,-1);
    tracep->declBus(c+178,"wbwide_i2cdma_addr", false,-1, 24,0);
    tracep->declArray(c+179,"wbwide_i2cdma_data", false,-1, 511,0);
    tracep->declQuad(c+195,"wbwide_i2cdma_sel", false,-1, 63,0);
    tracep->declBit(c+197,"wbwide_i2cdma_stall", false,-1);
    tracep->declBit(c+198,"wbwide_i2cdma_ack", false,-1);
    tracep->declBit(c+199,"wbwide_i2cdma_err", false,-1);
    tracep->declArray(c+200,"wbwide_i2cdma_idata", false,-1, 511,0);
    tracep->declBit(c+216,"wbwide_i2cm_cyc", false,-1);
    tracep->declBit(c+217,"wbwide_i2cm_stb", false,-1);
    tracep->declBit(c+4557,"wbwide_i2cm_we", false,-1);
    tracep->declBus(c+218,"wbwide_i2cm_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"wbwide_i2cm_data", false,-1, 511,0);
    tracep->declQuad(c+4575,"wbwide_i2cm_sel", false,-1, 63,0);
    tracep->declBit(c+219,"wbwide_i2cm_stall", false,-1);
    tracep->declBit(c+220,"wbwide_i2cm_ack", false,-1);
    tracep->declBit(c+221,"wbwide_i2cm_err", false,-1);
    tracep->declArray(c+222,"wbwide_i2cm_idata", false,-1, 511,0);
    tracep->declBit(c+238,"wbwide_zip_cyc", false,-1);
    tracep->declBit(c+239,"wbwide_zip_stb", false,-1);
    tracep->declBit(c+240,"wbwide_zip_we", false,-1);
    tracep->declBus(c+241,"wbwide_zip_addr", false,-1, 24,0);
    tracep->declArray(c+242,"wbwide_zip_data", false,-1, 511,0);
    tracep->declQuad(c+258,"wbwide_zip_sel", false,-1, 63,0);
    tracep->declBit(c+260,"wbwide_zip_stall", false,-1);
    tracep->declBit(c+261,"wbwide_zip_ack", false,-1);
    tracep->declBit(c+262,"wbwide_zip_err", false,-1);
    tracep->declArray(c+263,"wbwide_zip_idata", false,-1, 511,0);
    tracep->declBit(c+279,"wbwide_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+280,"wbwide_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+281,"wbwide_wbu_arbiter_we", false,-1);
    tracep->declBus(c+282,"wbwide_wbu_arbiter_addr", false,-1, 24,0);
    tracep->declArray(c+283,"wbwide_wbu_arbiter_data", false,-1, 511,0);
    tracep->declQuad(c+299,"wbwide_wbu_arbiter_sel", false,-1, 63,0);
    tracep->declBit(c+301,"wbwide_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+302,"wbwide_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+303,"wbwide_wbu_arbiter_err", false,-1);
    tracep->declArray(c+304,"wbwide_wbu_arbiter_idata", false,-1, 511,0);
    tracep->declBit(c+3894,"wbwide_wbdown_cyc", false,-1);
    tracep->declBit(c+3895,"wbwide_wbdown_stb", false,-1);
    tracep->declBit(c+3896,"wbwide_wbdown_we", false,-1);
    tracep->declBus(c+3897,"wbwide_wbdown_addr", false,-1, 24,0);
    tracep->declArray(c+3898,"wbwide_wbdown_data", false,-1, 511,0);
    tracep->declQuad(c+3914,"wbwide_wbdown_sel", false,-1, 63,0);
    tracep->declBit(c+320,"wbwide_wbdown_stall", false,-1);
    tracep->declBit(c+321,"wbwide_wbdown_ack", false,-1);
    tracep->declBit(c+3916,"wbwide_wbdown_err", false,-1);
    tracep->declArray(c+322,"wbwide_wbdown_idata", false,-1, 511,0);
    tracep->declBit(c+3917,"wbwide_bkram_cyc", false,-1);
    tracep->declBit(c+3918,"wbwide_bkram_stb", false,-1);
    tracep->declBit(c+3919,"wbwide_bkram_we", false,-1);
    tracep->declBus(c+3920,"wbwide_bkram_addr", false,-1, 24,0);
    tracep->declArray(c+3921,"wbwide_bkram_data", false,-1, 511,0);
    tracep->declQuad(c+3937,"wbwide_bkram_sel", false,-1, 63,0);
    tracep->declBit(c+4557,"wbwide_bkram_stall", false,-1);
    tracep->declBit(c+338,"wbwide_bkram_ack", false,-1);
    tracep->declBit(c+4557,"wbwide_bkram_err", false,-1);
    tracep->declArray(c+339,"wbwide_bkram_idata", false,-1, 511,0);
    tracep->declBit(c+3939,"wbwide_ddr3_controller_cyc", false,-1);
    tracep->declBit(c+3940,"wbwide_ddr3_controller_stb", false,-1);
    tracep->declBit(c+3941,"wbwide_ddr3_controller_we", false,-1);
    tracep->declBus(c+3942,"wbwide_ddr3_controller_addr", false,-1, 24,0);
    tracep->declArray(c+3943,"wbwide_ddr3_controller_data", false,-1, 511,0);
    tracep->declQuad(c+3959,"wbwide_ddr3_controller_sel", false,-1, 63,0);
    tracep->declBit(c+3516,"wbwide_ddr3_controller_stall", false,-1);
    tracep->declBit(c+4499,"wbwide_ddr3_controller_ack", false,-1);
    tracep->declBit(c+4557,"wbwide_ddr3_controller_err", false,-1);
    tracep->declArray(c+4296,"wbwide_ddr3_controller_idata", false,-1, 511,0);
    tracep->declBit(c+3961,"wb32_wbdown_cyc", false,-1);
    tracep->declBit(c+355,"wb32_wbdown_stb", false,-1);
    tracep->declBit(c+356,"wb32_wbdown_we", false,-1);
    tracep->declBus(c+357,"wb32_wbdown_addr", false,-1, 7,0);
    tracep->declBus(c+358,"wb32_wbdown_data", false,-1, 31,0);
    tracep->declBus(c+359,"wb32_wbdown_sel", false,-1, 3,0);
    tracep->declBit(c+360,"wb32_wbdown_stall", false,-1);
    tracep->declBit(c+361,"wb32_wbdown_ack", false,-1);
    tracep->declBit(c+3962,"wb32_wbdown_err", false,-1);
    tracep->declBus(c+362,"wb32_wbdown_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_buildtime_cyc", false,-1);
    tracep->declBit(c+3964,"wb32_buildtime_stb", false,-1);
    tracep->declBit(c+3965,"wb32_buildtime_we", false,-1);
    tracep->declBus(c+4577,"wb32_buildtime_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_buildtime_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_buildtime_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_buildtime_stall", false,-1);
    tracep->declBit(c+3964,"wb32_buildtime_ack", false,-1);
    tracep->declBit(c+4578,"wb32_buildtime_err", false,-1);
    tracep->declBus(c+4579,"wb32_buildtime_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_gpio_cyc", false,-1);
    tracep->declBit(c+3968,"wb32_gpio_stb", false,-1);
    tracep->declBit(c+3965,"wb32_gpio_we", false,-1);
    tracep->declBus(c+4580,"wb32_gpio_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_gpio_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_gpio_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_gpio_stall", false,-1);
    tracep->declBit(c+3968,"wb32_gpio_ack", false,-1);
    tracep->declBit(c+4581,"wb32_gpio_err", false,-1);
    tracep->declBus(c+4500,"wb32_gpio_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_sirefclk_cyc", false,-1);
    tracep->declBit(c+3969,"wb32_sirefclk_stb", false,-1);
    tracep->declBit(c+3965,"wb32_sirefclk_we", false,-1);
    tracep->declBus(c+4582,"wb32_sirefclk_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_sirefclk_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_sirefclk_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_sirefclk_stall", false,-1);
    tracep->declBit(c+150,"wb32_sirefclk_ack", false,-1);
    tracep->declBit(c+4583,"wb32_sirefclk_err", false,-1);
    tracep->declBus(c+363,"wb32_sirefclk_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_spio_cyc", false,-1);
    tracep->declBit(c+3970,"wb32_spio_stb", false,-1);
    tracep->declBit(c+3965,"wb32_spio_we", false,-1);
    tracep->declBus(c+4584,"wb32_spio_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_spio_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_spio_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_spio_stall", false,-1);
    tracep->declBit(c+364,"wb32_spio_ack", false,-1);
    tracep->declBit(c+4585,"wb32_spio_err", false,-1);
    tracep->declBus(c+365,"wb32_spio_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_version_cyc", false,-1);
    tracep->declBit(c+3971,"wb32_version_stb", false,-1);
    tracep->declBit(c+3965,"wb32_version_we", false,-1);
    tracep->declBus(c+4586,"wb32_version_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_version_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_version_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_version_stall", false,-1);
    tracep->declBit(c+3971,"wb32_version_ack", false,-1);
    tracep->declBit(c+4587,"wb32_version_err", false,-1);
    tracep->declBus(c+4588,"wb32_version_idata", false,-1, 31,0);
    tracep->declBit(c+3972,"wb32_i2cscope_cyc", false,-1);
    tracep->declBit(c+3973,"wb32_i2cscope_stb", false,-1);
    tracep->declBit(c+3974,"wb32_i2cscope_we", false,-1);
    tracep->declBus(c+3975,"wb32_i2cscope_addr", false,-1, 7,0);
    tracep->declBus(c+3976,"wb32_i2cscope_data", false,-1, 31,0);
    tracep->declBus(c+3977,"wb32_i2cscope_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_i2cscope_stall", false,-1);
    tracep->declBit(c+366,"wb32_i2cscope_ack", false,-1);
    tracep->declBit(c+4557,"wb32_i2cscope_err", false,-1);
    tracep->declBus(c+367,"wb32_i2cscope_idata", false,-1, 31,0);
    tracep->declBit(c+3978,"wb32_scope1_ddr3_cyc", false,-1);
    tracep->declBit(c+3979,"wb32_scope1_ddr3_stb", false,-1);
    tracep->declBit(c+3980,"wb32_scope1_ddr3_we", false,-1);
    tracep->declBus(c+3981,"wb32_scope1_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+3982,"wb32_scope1_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3983,"wb32_scope1_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_scope1_ddr3_stall", false,-1);
    tracep->declBit(c+368,"wb32_scope1_ddr3_ack", false,-1);
    tracep->declBit(c+4557,"wb32_scope1_ddr3_err", false,-1);
    tracep->declBus(c+369,"wb32_scope1_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3984,"wb32_scope2_ddr3_cyc", false,-1);
    tracep->declBit(c+3985,"wb32_scope2_ddr3_stb", false,-1);
    tracep->declBit(c+3986,"wb32_scope2_ddr3_we", false,-1);
    tracep->declBus(c+3987,"wb32_scope2_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+3988,"wb32_scope2_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3989,"wb32_scope2_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_scope2_ddr3_stall", false,-1);
    tracep->declBit(c+370,"wb32_scope2_ddr3_ack", false,-1);
    tracep->declBit(c+4557,"wb32_scope2_ddr3_err", false,-1);
    tracep->declBus(c+371,"wb32_scope2_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3990,"wb32_scope3_ddr3_cyc", false,-1);
    tracep->declBit(c+3991,"wb32_scope3_ddr3_stb", false,-1);
    tracep->declBit(c+3992,"wb32_scope3_ddr3_we", false,-1);
    tracep->declBus(c+3993,"wb32_scope3_ddr3_addr", false,-1, 7,0);
    tracep->declBus(c+3994,"wb32_scope3_ddr3_data", false,-1, 31,0);
    tracep->declBus(c+3995,"wb32_scope3_ddr3_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_scope3_ddr3_stall", false,-1);
    tracep->declBit(c+372,"wb32_scope3_ddr3_ack", false,-1);
    tracep->declBit(c+4557,"wb32_scope3_ddr3_err", false,-1);
    tracep->declBus(c+373,"wb32_scope3_ddr3_idata", false,-1, 31,0);
    tracep->declBit(c+3996,"wb32_i2cs_cyc", false,-1);
    tracep->declBit(c+3997,"wb32_i2cs_stb", false,-1);
    tracep->declBit(c+3998,"wb32_i2cs_we", false,-1);
    tracep->declBus(c+3999,"wb32_i2cs_addr", false,-1, 7,0);
    tracep->declBus(c+4000,"wb32_i2cs_data", false,-1, 31,0);
    tracep->declBus(c+4001,"wb32_i2cs_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_i2cs_stall", false,-1);
    tracep->declBit(c+374,"wb32_i2cs_ack", false,-1);
    tracep->declBit(c+4557,"wb32_i2cs_err", false,-1);
    tracep->declBus(c+375,"wb32_i2cs_idata", false,-1, 31,0);
    tracep->declBit(c+4002,"wb32_i2cdma_cyc", false,-1);
    tracep->declBit(c+4003,"wb32_i2cdma_stb", false,-1);
    tracep->declBit(c+4004,"wb32_i2cdma_we", false,-1);
    tracep->declBus(c+4005,"wb32_i2cdma_addr", false,-1, 7,0);
    tracep->declBus(c+4006,"wb32_i2cdma_data", false,-1, 31,0);
    tracep->declBus(c+4007,"wb32_i2cdma_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_i2cdma_stall", false,-1);
    tracep->declBit(c+376,"wb32_i2cdma_ack", false,-1);
    tracep->declBit(c+4557,"wb32_i2cdma_err", false,-1);
    tracep->declBus(c+377,"wb32_i2cdma_idata", false,-1, 31,0);
    tracep->declBit(c+4008,"wb32_uart_cyc", false,-1);
    tracep->declBit(c+4009,"wb32_uart_stb", false,-1);
    tracep->declBit(c+4010,"wb32_uart_we", false,-1);
    tracep->declBus(c+4011,"wb32_uart_addr", false,-1, 7,0);
    tracep->declBus(c+4012,"wb32_uart_data", false,-1, 31,0);
    tracep->declBus(c+4013,"wb32_uart_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_uart_stall", false,-1);
    tracep->declBit(c+378,"wb32_uart_ack", false,-1);
    tracep->declBit(c+4557,"wb32_uart_err", false,-1);
    tracep->declBus(c+379,"wb32_uart_idata", false,-1, 31,0);
    tracep->declBit(c+4014,"wb32_fan_cyc", false,-1);
    tracep->declBit(c+4015,"wb32_fan_stb", false,-1);
    tracep->declBit(c+4016,"wb32_fan_we", false,-1);
    tracep->declBus(c+4017,"wb32_fan_addr", false,-1, 7,0);
    tracep->declBus(c+4018,"wb32_fan_data", false,-1, 31,0);
    tracep->declBus(c+4019,"wb32_fan_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_fan_stall", false,-1);
    tracep->declBit(c+380,"wb32_fan_ack", false,-1);
    tracep->declBit(c+4557,"wb32_fan_err", false,-1);
    tracep->declBus(c+381,"wb32_fan_idata", false,-1, 31,0);
    tracep->declBit(c+3963,"wb32_sio_cyc", false,-1);
    tracep->declBit(c+4020,"wb32_sio_stb", false,-1);
    tracep->declBit(c+3965,"wb32_sio_we", false,-1);
    tracep->declBus(c+4021,"wb32_sio_addr", false,-1, 7,0);
    tracep->declBus(c+3966,"wb32_sio_data", false,-1, 31,0);
    tracep->declBus(c+3967,"wb32_sio_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_sio_stall", false,-1);
    tracep->declBit(c+382,"wb32_sio_ack", false,-1);
    tracep->declBit(c+4557,"wb32_sio_err", false,-1);
    tracep->declBus(c+383,"wb32_sio_idata", false,-1, 31,0);
    tracep->declBit(c+4022,"wb32_cfg_cyc", false,-1);
    tracep->declBit(c+4023,"wb32_cfg_stb", false,-1);
    tracep->declBit(c+4024,"wb32_cfg_we", false,-1);
    tracep->declBus(c+4025,"wb32_cfg_addr", false,-1, 7,0);
    tracep->declBus(c+4026,"wb32_cfg_data", false,-1, 31,0);
    tracep->declBus(c+4027,"wb32_cfg_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"wb32_cfg_stall", false,-1);
    tracep->declBit(c+384,"wb32_cfg_ack", false,-1);
    tracep->declBit(c+4557,"wb32_cfg_err", false,-1);
    tracep->declBus(c+4556,"wb32_cfg_idata", false,-1, 31,0);
    tracep->declBit(c+4028,"wb32_ddr3_phy_cyc", false,-1);
    tracep->declBit(c+4029,"wb32_ddr3_phy_stb", false,-1);
    tracep->declBit(c+4030,"wb32_ddr3_phy_we", false,-1);
    tracep->declBus(c+4031,"wb32_ddr3_phy_addr", false,-1, 7,0);
    tracep->declBus(c+4032,"wb32_ddr3_phy_data", false,-1, 31,0);
    tracep->declBus(c+4033,"wb32_ddr3_phy_sel", false,-1, 3,0);
    tracep->declBit(c+3517,"wb32_ddr3_phy_stall", false,-1);
    tracep->declBit(c+3518,"wb32_ddr3_phy_ack", false,-1);
    tracep->declBit(c+4557,"wb32_ddr3_phy_err", false,-1);
    tracep->declBus(c+3519,"wb32_ddr3_phy_idata", false,-1, 31,0);
    tracep->declBit(c+385,"wbu_cyc", false,-1);
    tracep->declBit(c+386,"wbu_stb", false,-1);
    tracep->declBit(c+387,"wbu_we", false,-1);
    tracep->declBus(c+388,"wbu_addr", false,-1, 29,0);
    tracep->declBus(c+389,"wbu_data", false,-1, 31,0);
    tracep->declBus(c+4589,"wbu_sel", false,-1, 3,0);
    tracep->declBit(c+390,"wbu_stall", false,-1);
    tracep->declBit(c+391,"wbu_ack", false,-1);
    tracep->declBit(c+392,"wbu_err", false,-1);
    tracep->declBus(c+393,"wbu_idata", false,-1, 31,0);
    tracep->declBit(c+394,"wbu_wbu_arbiter_cyc", false,-1);
    tracep->declBit(c+395,"wbu_wbu_arbiter_stb", false,-1);
    tracep->declBit(c+396,"wbu_wbu_arbiter_we", false,-1);
    tracep->declBus(c+397,"wbu_wbu_arbiter_addr", false,-1, 29,0);
    tracep->declBus(c+398,"wbu_wbu_arbiter_data", false,-1, 31,0);
    tracep->declBus(c+399,"wbu_wbu_arbiter_sel", false,-1, 3,0);
    tracep->declBit(c+400,"wbu_wbu_arbiter_stall", false,-1);
    tracep->declBit(c+401,"wbu_wbu_arbiter_ack", false,-1);
    tracep->declBit(c+402,"wbu_wbu_arbiter_err", false,-1);
    tracep->declBus(c+403,"wbu_wbu_arbiter_idata", false,-1, 31,0);
    tracep->declBit(c+404,"wbu_zip_cyc", false,-1);
    tracep->declBit(c+405,"wbu_zip_stb", false,-1);
    tracep->declBit(c+406,"wbu_zip_we", false,-1);
    tracep->declBus(c+407,"wbu_zip_addr", false,-1, 29,0);
    tracep->declBus(c+408,"wbu_zip_data", false,-1, 31,0);
    tracep->declBus(c+409,"wbu_zip_sel", false,-1, 3,0);
    tracep->declBit(c+4501,"wbu_zip_stall", false,-1);
    tracep->declBit(c+4502,"wbu_zip_ack", false,-1);
    tracep->declBit(c+4557,"wbu_zip_err", false,-1);
    tracep->declBus(c+410,"wbu_zip_idata", false,-1, 31,0);
    tracep->declBit(c+382,"r_wb32_sio_ack", false,-1);
    tracep->declBus(c+383,"r_wb32_sio_data", false,-1, 31,0);
    tracep->declBit(c+4557,"zip_unused", false,-1);
    tracep->declBit(c+166,"w_bus_int", false,-1);
    tracep->declBus(c+388,"wbu_tmp_addr", false,-1, 29,0);
    tracep->declBit(c+384,"r_cfg_ack", false,-1);
    tracep->declBit(c+4557,"cfg_unused", false,-1);
    tracep->declBus(c+4590,"INITIAL_GPIO", false,-1, 7,0);
    tracep->pushNamePrefix("bkrami ");
    tracep->declBus(c+4591,"LGMEMSZ", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4545,"EXTRACLOCK", false,-1, 31,0);
    tracep->declBus(c+4593,"HEXFILE", false,-1, 7,0);
    tracep->declBus(c+4594,"OPT_ROM", false,-1, 0,0);
    tracep->declBus(c+4541,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+3917,"i_wb_cyc", false,-1);
    tracep->declBit(c+3918,"i_wb_stb", false,-1);
    tracep->declBit(c+3919,"i_wb_we", false,-1);
    tracep->declBus(c+4034,"i_wb_addr", false,-1, 13,0);
    tracep->declArray(c+3921,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+3937,"i_wb_sel", false,-1, 63,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+338,"o_wb_ack", false,-1);
    tracep->declArray(c+339,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+411,"w_wstb", false,-1);
    tracep->declBit(c+412,"w_stb", false,-1);
    tracep->declArray(c+413,"w_data", false,-1, 511,0);
    tracep->declBus(c+429,"w_addr", false,-1, 13,0);
    tracep->declQuad(c+430,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("EXTRA_MEM_CLOCK_CYCLE ");
    tracep->declBit(c+411,"last_wstb", false,-1);
    tracep->declBit(c+412,"last_stb", false,-1);
    tracep->declBus(c+429,"last_addr", false,-1, 13,0);
    tracep->declArray(c+413,"last_data", false,-1, 511,0);
    tracep->declQuad(c+430,"last_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WRITE_TO_MEMORY ");
    tracep->declBus(c+432,"ik", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clock_generator ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4544,"UPSAMPLE", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBus(c+433,"i_delay", false,-1, 31,0);
    tracep->declBus(c+4461,"o_word", false,-1, 7,0);
    tracep->declBit(c+149,"o_stb", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+434+i*1,"counter", true,(i+0), 31,0);
    }
    tracep->declBus(c+442,"r_delay", false,-1, 31,0);
    tracep->declBus(c+443,"times_three", false,-1, 31,0);
    tracep->declBus(c+444,"times_five", false,-1, 31,0);
    tracep->declBus(c+445,"times_seven", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console ");
    tracep->declBus(c+4596,"LGFLEN", false,-1, 3,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+4008,"i_wb_cyc", false,-1);
    tracep->declBit(c+4009,"i_wb_stb", false,-1);
    tracep->declBit(c+4010,"i_wb_we", false,-1);
    tracep->declBus(c+4035,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4012,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4013,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+378,"o_wb_ack", false,-1);
    tracep->declBus(c+379,"o_wb_data", false,-1, 31,0);
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
    tracep->declBus(c+4596,"LCLLGFLEN", false,-1, 3,0);
    tracep->declBus(c+4597,"UART_SETUP", false,-1, 1,0);
    tracep->declBus(c+4598,"UART_FIFO", false,-1, 1,0);
    tracep->declBus(c+4599,"UART_RXREG", false,-1, 1,0);
    tracep->declBus(c+4600,"UART_TXREG", false,-1, 1,0);
    tracep->declBit(c+446,"rx_uart_reset", false,-1);
    tracep->declBit(c+142,"rx_empty_n", false,-1);
    tracep->declBit(c+447,"rx_fifo_err", false,-1);
    tracep->declBus(c+448,"rxf_wb_data", false,-1, 6,0);
    tracep->declBus(c+449,"rxf_status", false,-1, 15,0);
    tracep->declBit(c+450,"rxf_wb_read", false,-1);
    tracep->declBus(c+451,"wb_rx_data", false,-1, 31,0);
    tracep->declBit(c+158,"tx_empty_n", false,-1);
    tracep->declBit(c+452,"txf_err", false,-1);
    tracep->declBus(c+453,"txf_status", false,-1, 15,0);
    tracep->declBit(c+454,"txf_wb_write", false,-1);
    tracep->declBit(c+455,"tx_uart_reset", false,-1);
    tracep->declBus(c+456,"txf_wb_data", false,-1, 6,0);
    tracep->declBus(c+457,"wb_tx_data", false,-1, 31,0);
    tracep->declBus(c+458,"wb_fifo_data", false,-1, 31,0);
    tracep->declBus(c+459,"r_wb_addr", false,-1, 1,0);
    tracep->declBit(c+460,"r_wb_ack", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("rxfifo ");
    tracep->declBus(c+4553,"BW", false,-1, 31,0);
    tracep->declBus(c+4596,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4551,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4601,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+446,"i_reset", false,-1);
    tracep->declBit(c+157,"i_wr", false,-1);
    tracep->declBus(c+160,"i_data", false,-1, 6,0);
    tracep->declBit(c+142,"o_empty_n", false,-1);
    tracep->declBit(c+450,"i_rd", false,-1);
    tracep->declBus(c+448,"o_data", false,-1, 6,0);
    tracep->declBus(c+449,"o_status", false,-1, 15,0);
    tracep->declBit(c+447,"o_err", false,-1);
    tracep->declBus(c+461,"r_data", false,-1, 6,0);
    tracep->declBus(c+462,"last_write", false,-1, 6,0);
    tracep->declBus(c+463,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+464,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+465,"r_next", false,-1, 5,0);
    tracep->declBit(c+466,"will_overflow", false,-1);
    tracep->declBit(c+467,"will_underflow", false,-1);
    tracep->declBit(c+468,"osrc", false,-1);
    tracep->declBus(c+469,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+470,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+471,"w_write", false,-1);
    tracep->declBit(c+472,"w_read", false,-1);
    tracep->declBus(c+473,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4596,"lglen", false,-1, 3,0);
    tracep->declBit(c+139,"w_half_full", false,-1);
    tracep->declBus(c+474,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("txfifo ");
    tracep->declBus(c+4553,"BW", false,-1, 31,0);
    tracep->declBus(c+4596,"LGFLEN", false,-1, 3,0);
    tracep->declBus(c+4594,"RXFIFO", false,-1, 0,0);
    tracep->declBus(c+4601,"FLEN", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+455,"i_reset", false,-1);
    tracep->declBit(c+454,"i_wr", false,-1);
    tracep->declBus(c+456,"i_data", false,-1, 6,0);
    tracep->declBit(c+158,"o_empty_n", false,-1);
    tracep->declBit(c+475,"i_rd", false,-1);
    tracep->declBus(c+161,"o_data", false,-1, 6,0);
    tracep->declBus(c+453,"o_status", false,-1, 15,0);
    tracep->declBit(c+452,"o_err", false,-1);
    tracep->declBus(c+476,"r_data", false,-1, 6,0);
    tracep->declBus(c+477,"last_write", false,-1, 6,0);
    tracep->declBus(c+478,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+479,"rd_addr", false,-1, 5,0);
    tracep->declBus(c+480,"r_next", false,-1, 5,0);
    tracep->declBit(c+481,"will_overflow", false,-1);
    tracep->declBit(c+482,"will_underflow", false,-1);
    tracep->declBit(c+483,"osrc", false,-1);
    tracep->declBus(c+484,"w_waddr_plus_one", false,-1, 5,0);
    tracep->declBus(c+485,"w_waddr_plus_two", false,-1, 5,0);
    tracep->declBit(c+486,"w_write", false,-1);
    tracep->declBit(c+487,"w_read", false,-1);
    tracep->declBus(c+488,"r_fill", false,-1, 5,0);
    tracep->declBus(c+4596,"lglen", false,-1, 3,0);
    tracep->declBit(c+141,"w_half_full", false,-1);
    tracep->declBus(c+489,"w_fill", false,-1, 9,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ddr3_controller_inst ");
    tracep->declDouble(c+4537,"CONTROLLER_CLK_PERIOD", false,-1);
    tracep->declDouble(c+4539,"DDR3_CLK_PERIOD", false,-1);
    tracep->declBus(c+4541,"ROW_BITS", false,-1, 31,0);
    tracep->declBus(c+4542,"COL_BITS", false,-1, 31,0);
    tracep->declBus(c+4543,"BA_BITS", false,-1, 31,0);
    tracep->declBus(c+4544,"DQ_BITS", false,-1, 31,0);
    tracep->declBus(c+4544,"LANES", false,-1, 31,0);
    tracep->declBus(c+4545,"AUX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4553,"WB2_ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+4595,"WB2_DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_BUS_ABORT", false,-1, 0,0);
    tracep->declBus(c+4594,"MICRON_SIM", false,-1, 0,0);
    tracep->declBus(c+4551,"ODELAY_SUPPORTED", false,-1, 0,0);
    tracep->declBus(c+4546,"serdes_ratio", false,-1, 31,0);
    tracep->declBus(c+4592,"wb_data_bits", false,-1, 31,0);
    tracep->declBus(c+4547,"wb_addr_bits", false,-1, 31,0);
    tracep->declBus(c+4601,"wb_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4546,"wb2_sel_bits", false,-1, 31,0);
    tracep->declBus(c+4547,"cmd_len", false,-1, 31,0);
    tracep->declBus(c+4543,"lanes_clog2", false,-1, 31,0);
    tracep->declBit(c+4405,"i_controller_clk", false,-1);
    tracep->declBit(c+4503,"i_rst_n", false,-1);
    tracep->declBit(c+3939,"i_wb_cyc", false,-1);
    tracep->declBit(c+3940,"i_wb_stb", false,-1);
    tracep->declBit(c+3941,"i_wb_we", false,-1);
    tracep->declBus(c+4036,"i_wb_addr", false,-1, 23,0);
    tracep->declArray(c+3943,"i_wb_data", false,-1, 511,0);
    tracep->declQuad(c+3959,"i_wb_sel", false,-1, 63,0);
    tracep->declBus(c+4557,"i_aux", false,-1, 0,0);
    tracep->declBit(c+3516,"o_wb_stall", false,-1);
    tracep->declBit(c+4499,"o_wb_ack", false,-1);
    tracep->declArray(c+4296,"o_wb_data", false,-1, 511,0);
    tracep->declBus(c+4295,"o_aux", false,-1, 0,0);
    tracep->declBit(c+4028,"i_wb2_cyc", false,-1);
    tracep->declBit(c+4029,"i_wb2_stb", false,-1);
    tracep->declBit(c+4030,"i_wb2_we", false,-1);
    tracep->declBus(c+4037,"i_wb2_addr", false,-1, 6,0);
    tracep->declBus(c+4033,"i_wb2_sel", false,-1, 3,0);
    tracep->declBus(c+4032,"i_wb2_data", false,-1, 31,0);
    tracep->declBit(c+3517,"o_wb2_stall", false,-1);
    tracep->declBit(c+3518,"o_wb2_ack", false,-1);
    tracep->declBus(c+3519,"o_wb2_data", false,-1, 31,0);
    tracep->declArray(c+4407,"i_phy_iserdes_data", false,-1, 511,0);
    tracep->declQuad(c+4423,"i_phy_iserdes_dqs", false,-1, 63,0);
    tracep->declQuad(c+4425,"i_phy_iserdes_bitslip_reference", false,-1, 63,0);
    tracep->declBit(c+4427,"i_phy_idelayctrl_rdy", false,-1);
    tracep->declArray(c+4428,"o_phy_cmd", false,-1, 95,0);
    tracep->declBit(c+4431,"o_phy_dqs_tri_control", false,-1);
    tracep->declBit(c+4432,"o_phy_dq_tri_control", false,-1);
    tracep->declBit(c+4433,"o_phy_toggle_dqs", false,-1);
    tracep->declArray(c+4434,"o_phy_data", false,-1, 511,0);
    tracep->declQuad(c+4450,"o_phy_dm", false,-1, 63,0);
    tracep->declBus(c+4452,"o_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4453,"o_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4454,"o_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4455,"o_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+4456,"o_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4457,"o_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4458,"o_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+4459,"o_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+4460,"o_phy_bitslip", false,-1, 7,0);
    tracep->declBus(c+4495,"o_debug1", false,-1, 31,0);
    tracep->declBus(c+4496,"o_debug2", false,-1, 31,0);
    tracep->declBus(c+4497,"o_debug3", false,-1, 31,0);
    tracep->declBus(c+4602,"CMD_MRS", false,-1, 3,0);
    tracep->declBus(c+4603,"CMD_REF", false,-1, 3,0);
    tracep->declBus(c+4604,"CMD_PRE", false,-1, 3,0);
    tracep->declBus(c+4605,"CMD_ACT", false,-1, 3,0);
    tracep->declBus(c+4606,"CMD_WR", false,-1, 3,0);
    tracep->declBus(c+4607,"CMD_RD", false,-1, 3,0);
    tracep->declBus(c+4608,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+4596,"CMD_ZQC", false,-1, 3,0);
    tracep->declBus(c+4609,"RST_DONE", false,-1, 31,0);
    tracep->declBus(c+4609,"REF_IDLE", false,-1, 31,0);
    tracep->declBus(c+4610,"USE_TIMER", false,-1, 31,0);
    tracep->declBus(c+4549,"A10_CONTROL", false,-1, 31,0);
    tracep->declBus(c+4547,"CLOCK_EN", false,-1, 31,0);
    tracep->declBus(c+4611,"RESET_N", false,-1, 31,0);
    tracep->declBus(c+4612,"DDR3_CMD_START", false,-1, 31,0);
    tracep->declBus(c+4554,"DDR3_CMD_END", false,-1, 31,0);
    tracep->declBus(c+4613,"MRS_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4611,"CMD_CS_N", false,-1, 31,0);
    tracep->declBus(c+4612,"CMD_RAS_N", false,-1, 31,0);
    tracep->declBus(c+4614,"CMD_CAS_N", false,-1, 31,0);
    tracep->declBus(c+4591,"CMD_WE_N", false,-1, 31,0);
    tracep->declBus(c+4554,"CMD_ODT", false,-1, 31,0);
    tracep->declBus(c+4613,"CMD_CKE", false,-1, 31,0);
    tracep->declBus(c+4615,"CMD_RESET_N", false,-1, 31,0);
    tracep->declBus(c+4550,"CMD_BANK_START", false,-1, 31,0);
    tracep->declBus(c+4616,"CMD_ADDRESS_START", false,-1, 31,0);
    tracep->declBus(c+4599,"READ_SLOT", false,-1, 1,0);
    tracep->declBus(c+4600,"WRITE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4597,"ACTIVATE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4598,"PRECHARGE_SLOT", false,-1, 1,0);
    tracep->declBus(c+4556,"DATA_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4544,"DQS_INITIAL_ODELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4556,"DATA_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4544,"DQS_INITIAL_IDELAY_TAP", false,-1, 31,0);
    tracep->declBus(c+4554,"DELAY_SLOT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4617,"POWER_ON_RESET_HIGH", false,-1, 31,0);
    tracep->declBus(c+4618,"INITIAL_CKE_LOW", false,-1, 31,0);
    tracep->declDouble(c+4619,"tRCD", false,-1);
    tracep->declDouble(c+4619,"tRP", false,-1);
    tracep->declBus(c+4621,"tRAS", false,-1, 31,0);
    tracep->declDouble(c+4622,"tRFC", false,-1);
    tracep->declBus(c+4624,"tREFI", false,-1, 31,0);
    tracep->declDouble(c+4625,"tXPR", false,-1);
    tracep->declDouble(c+4627,"tWR", false,-1);
    tracep->declDouble(c+4537,"tWTR", false,-1);
    tracep->declBus(c+4629,"tWLMRD", false,-1, 18,0);
    tracep->declDouble(c+4630,"tWLO", false,-1);
    tracep->declBus(c+4555,"tWLOE", false,-1, 31,0);
    tracep->declDouble(c+4537,"tRTP", false,-1);
    tracep->declBus(c+4546,"tCCD", false,-1, 31,0);
    tracep->declBus(c+4543,"tMOD", false,-1, 31,0);
    tracep->declBus(c+4632,"tZQinit", false,-1, 31,0);
    tracep->declBus(c+4633,"CL_nCK", false,-1, 31,0);
    tracep->declBus(c+4634,"CWL_nCK", false,-1, 31,0);
    tracep->declBus(c+4635,"DELAY_MAX_VALUE", false,-1, 18,0);
    tracep->declBus(c+4550,"DELAY_COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4555,"CALIBRATION_DELAY", false,-1, 31,0);
    tracep->declBus(c+4603,"PRECHARGE_TO_ACTIVATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4605,"ACTIVATE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4602,"ACTIVATE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4602,"ACTIVATE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4603,"READ_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4602,"READ_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4603,"READ_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4602,"WRITE_TO_WRITE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4605,"WRITE_TO_READ_DELAY", false,-1, 3,0);
    tracep->declBus(c+4606,"WRITE_TO_PRECHARGE_DELAY", false,-1, 3,0);
    tracep->declBus(c+4634,"PRE_REFRESH_DELAY", false,-1, 31,0);
    tracep->declBus(c+4607,"MARGIN_BEFORE_ANTICIPATE", false,-1, 3,0);
    tracep->declBus(c+4555,"STAGE2_DATA_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4556,"READ_DELAY", false,-1, 31,0);
    tracep->declBus(c+4634,"READ_ACK_PIPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4550,"MAX_ADDED_READ_ACK_DELAY", false,-1, 31,0);
    tracep->declBus(c+4616,"DELAY_BEFORE_WRITE_LEVEL_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4556,"IDLE", false,-1, 31,0);
    tracep->declBus(c+4545,"BITSLIP_DQS_TRAIN_1", false,-1, 31,0);
    tracep->declBus(c+4555,"MPR_READ", false,-1, 31,0);
    tracep->declBus(c+4543,"COLLECT_DQS", false,-1, 31,0);
    tracep->declBus(c+4546,"ANALYZE_DQS", false,-1, 31,0);
    tracep->declBus(c+4634,"CALIBRATE_DQS", false,-1, 31,0);
    tracep->declBus(c+4633,"BITSLIP_DQS_TRAIN_2", false,-1, 31,0);
    tracep->declBus(c+4553,"START_WRITE_LEVEL", false,-1, 31,0);
    tracep->declBus(c+4544,"WAIT_FOR_FEEDBACK", false,-1, 31,0);
    tracep->declBus(c+4636,"ISSUE_WRITE_1", false,-1, 31,0);
    tracep->declBus(c+4542,"ISSUE_WRITE_2", false,-1, 31,0);
    tracep->declBus(c+4637,"ISSUE_READ", false,-1, 31,0);
    tracep->declBus(c+4638,"READ_DATA", false,-1, 31,0);
    tracep->declBus(c+4616,"ANALYZE_DATA", false,-1, 31,0);
    tracep->declBus(c+4541,"CHECK_STARTING_DATA", false,-1, 31,0);
    tracep->declBus(c+4639,"BITSLIP_DQS_TRAIN_3", false,-1, 31,0);
    tracep->declBus(c+4550,"DONE_CALIBRATE", false,-1, 31,0);
    tracep->declBus(c+4634,"STORED_DQS_SIZE", false,-1, 31,0);
    tracep->declBus(c+4545,"REPEAT_DQS_ANALYZE", false,-1, 31,0);
    tracep->declBus(c+4591,"REPEAT_CLK_SAMPLING", false,-1, 31,0);
    tracep->declBus(c+4640,"PASR", false,-1, 2,0);
    tracep->declBus(c+4640,"CWL", false,-1, 2,0);
    tracep->declBus(c+4551,"ASR", false,-1, 0,0);
    tracep->declBus(c+4594,"SRT", false,-1, 0,0);
    tracep->declBus(c+4597,"RTT_WR", false,-1, 1,0);
    tracep->declBus(c+4641,"MR2_SEL", false,-1, 2,0);
    tracep->declBus(c+4642,"MR2", false,-1, 18,0);
    tracep->declBus(c+4597,"MPR_LOC", false,-1, 1,0);
    tracep->declBus(c+4551,"MPR_EN", false,-1, 0,0);
    tracep->declBus(c+4594,"MPR_DIS", false,-1, 0,0);
    tracep->declBus(c+4643,"MR3_SEL", false,-1, 2,0);
    tracep->declBus(c+4644,"MR3_MPR_EN", false,-1, 18,0);
    tracep->declBus(c+4645,"MR3_MPR_DIS", false,-1, 18,0);
    tracep->declBus(c+4594,"DLL_EN", false,-1, 0,0);
    tracep->declBus(c+4597,"DIC", false,-1, 1,0);
    tracep->declBus(c+4643,"RTT_NOM", false,-1, 2,0);
    tracep->declBus(c+4551,"WL_EN", false,-1, 0,0);
    tracep->declBus(c+4594,"WL_DIS", false,-1, 0,0);
    tracep->declBus(c+4597,"AL", false,-1, 1,0);
    tracep->declBus(c+4551,"TDQS", false,-1, 0,0);
    tracep->declBus(c+4594,"QOFF", false,-1, 0,0);
    tracep->declBus(c+4646,"MR1_SEL", false,-1, 2,0);
    tracep->declBus(c+4647,"MR1_WL_EN", false,-1, 18,0);
    tracep->declBus(c+4648,"MR1_WL_DIS", false,-1, 18,0);
    tracep->declBus(c+4597,"BL", false,-1, 1,0);
    tracep->declBus(c+4606,"CL", false,-1, 3,0);
    tracep->declBus(c+4594,"RBT", false,-1, 0,0);
    tracep->declBus(c+4551,"DLL_RST", false,-1, 0,0);
    tracep->declBus(c+4643,"WR", false,-1, 2,0);
    tracep->declBus(c+4594,"PPD", false,-1, 0,0);
    tracep->declBus(c+4640,"MR0_SEL", false,-1, 2,0);
    tracep->declBus(c+4649,"MR0", false,-1, 18,0);
    tracep->declBus(c+4650,"INITIAL_RESET_INSTRUCTION", false,-1, 27,0);
    tracep->declBus(c+3520,"index", false,-1, 31,0);
    tracep->declBus(c+3521,"instruction_address", false,-1, 4,0);
    tracep->declBus(c+3522,"instruction", false,-1, 27,0);
    tracep->declBus(c+3523,"delay_counter", false,-1, 15,0);
    tracep->declBit(c+3524,"delay_counter_is_zero", false,-1);
    tracep->declBit(c+3525,"reset_done", false,-1);
    tracep->declBit(c+3526,"pause_counter", false,-1);
    tracep->declBit(c+3527,"issue_read_command", false,-1);
    tracep->declBit(c+4557,"issue_write_command", false,-1);
    tracep->declBit(c+3528,"stage2_update", false,-1);
    tracep->declBit(c+4329,"stage2_stall", false,-1);
    tracep->declBit(c+4330,"stage1_stall", false,-1);
    tracep->declBus(c+3529,"bank_status_q", false,-1, 7,0);
    tracep->declBus(c+4331,"bank_status_d", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3530+i*1,"bank_active_row_q", true,(i+0), 13,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4332+i*1,"bank_active_row_d", true,(i+0), 13,0);
    }
    tracep->declBit(c+3538,"stage1_pending", false,-1);
    tracep->declBus(c+3539,"stage1_aux", false,-1, 0,0);
    tracep->declBit(c+3540,"stage1_we", false,-1);
    tracep->declArray(c+3541,"stage1_data", false,-1, 511,0);
    tracep->declQuad(c+3557,"stage1_dm", false,-1, 63,0);
    tracep->declBus(c+3559,"stage1_col", false,-1, 9,0);
    tracep->declBus(c+3560,"stage1_bank", false,-1, 2,0);
    tracep->declBus(c+3561,"stage1_row", false,-1, 13,0);
    tracep->declBus(c+3562,"stage1_next_bank", false,-1, 2,0);
    tracep->declBus(c+3563,"stage1_next_row", false,-1, 13,0);
    tracep->declBus(c+4038,"wb_addr_plus_anticipate", false,-1, 23,0);
    tracep->declBit(c+3564,"stage2_pending", false,-1);
    tracep->declBus(c+3565,"stage2_aux", false,-1, 0,0);
    tracep->declBit(c+3566,"stage2_we", false,-1);
    tracep->declQuad(c+3567,"stage2_dm_unaligned", false,-1, 63,0);
    tracep->declQuad(c+3569,"stage2_dm_unaligned_temp", false,-1, 63,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+3571+i*2,"stage2_dm", true,(i+0), 63,0);
    }
    tracep->declArray(c+3575,"stage2_data_unaligned", false,-1, 511,0);
    tracep->declArray(c+3591,"stage2_data_unaligned_temp", false,-1, 511,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3607+i*16,"stage2_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+3639+i*2,"unaligned_data", true,(i+0), 63,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3655+i*1,"unaligned_dm", true,(i+0), 7,0);
    }
    tracep->declBus(c+3663,"stage2_col", false,-1, 9,0);
    tracep->declBus(c+3664,"stage2_bank", false,-1, 2,0);
    tracep->declBus(c+3665,"stage2_row", false,-1, 13,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3666+i*1,"delay_before_precharge_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4340+i*1,"delay_before_precharge_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3674+i*1,"delay_before_activate_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4348+i*1,"delay_before_activate_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3682+i*1,"delay_before_write_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4356+i*1,"delay_before_write_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3690+i*1,"delay_before_read_counter_q", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+4364+i*1,"delay_before_read_counter_d", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4372+i*1,"cmd_d", true,(i+0), 23,0);
    }
    tracep->declBit(c+3698,"cmd_odt_q", false,-1);
    tracep->declBit(c+4376,"cmd_odt", false,-1);
    tracep->declBit(c+4377,"cmd_ck_en", false,-1);
    tracep->declBit(c+4378,"cmd_reset_n", false,-1);
    tracep->declBit(c+3699,"o_wb_stall_q", false,-1);
    tracep->declBit(c+4379,"o_wb_stall_d", false,-1);
    tracep->declBit(c+4380,"precharge_slot_busy", false,-1);
    tracep->declBit(c+4381,"activate_slot_busy", false,-1);
    tracep->declBus(c+3700,"write_dqs_q", false,-1, 1,0);
    tracep->declBit(c+3701,"write_dqs_d", false,-1);
    tracep->declBus(c+3702,"write_dqs", false,-1, 2,0);
    tracep->declBus(c+3703,"write_dqs_val", false,-1, 2,0);
    tracep->declBit(c+3704,"write_dq_q", false,-1);
    tracep->declBit(c+3705,"write_dq_d", false,-1);
    tracep->declBus(c+3706,"write_dq", false,-1, 3,0);
    tracep->declBus(c+3707,"state_calibrate", false,-1, 4,0);
    tracep->declQuad(c+3708,"dqs_store", false,-1, 39,0);
    tracep->declBus(c+3710,"dqs_count_repeat", false,-1, 3,0);
    tracep->declBus(c+3711,"dqs_start_index", false,-1, 5,0);
    tracep->declBus(c+3712,"dqs_start_index_stored", false,-1, 5,0);
    tracep->declBus(c+3713,"dqs_target_index", false,-1, 5,0);
    tracep->declBus(c+3714,"dqs_target_index_orig", false,-1, 5,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3715+i*1,"dq_target_index", true,(i+0), 5,0);
    }
    tracep->declBus(c+3723,"dqs_target_index_value", false,-1, 5,0);
    tracep->declBus(c+3724,"dqs_start_index_repeat", false,-1, 0,0);
    tracep->declBus(c+3725,"train_delay", false,-1, 1,0);
    tracep->declBus(c+3726,"delay_before_read_data", false,-1, 3,0);
    tracep->declBus(c+3727,"delay_before_write_level_feedback", false,-1, 4,0);
    tracep->declBit(c+3728,"initial_dqs", false,-1);
    tracep->declBus(c+3729,"lane", false,-1, 2,0);
    tracep->declBus(c+3730,"lane_times_8", false,-1, 5,0);
    tracep->declBus(c+3731,"dqs_bitslip_arrangement", false,-1, 15,0);
    tracep->declBus(c+3732,"added_read_pipe_max", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3733+i*1,"added_read_pipe", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3741+i*1,"shift_reg_read_pipe_q", true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+3746+i*1,"shift_reg_read_pipe_d", true,(i+0), 1,0);
    }
    tracep->declBit(c+3751,"index_read_pipe", false,-1);
    tracep->declBit(c+3752,"index_wb_data", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3753+i*1,"delay_read_pipe", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+3755+i*16,"o_wb_data_q", true,(i+0), 511,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4312+i*1,"o_wb_ack_read_q", true,(i+0), 1,0);
    }
    tracep->declBit(c+3787,"write_calib_stb", false,-1);
    tracep->declBus(c+3788,"write_calib_aux", false,-1, 0,0);
    tracep->declBit(c+3789,"write_calib_we", false,-1);
    tracep->declBus(c+3790,"write_calib_col", false,-1, 9,0);
    tracep->declArray(c+3791,"write_calib_data", false,-1, 511,0);
    tracep->declBit(c+3807,"write_calib_odt", false,-1);
    tracep->declBit(c+3808,"write_calib_dqs", false,-1);
    tracep->declBit(c+3809,"write_calib_dq", false,-1);
    tracep->declBit(c+3810,"prev_write_level_feedback", false,-1);
    tracep->declArray(c+3811,"read_data_store", false,-1, 511,0);
    tracep->declArray(c+3827,"write_pattern", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3831+i*1,"data_start_index", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3839+i*1,"odelay_data_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3847+i*1,"odelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3855+i*1,"idelay_data_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+3863,"idelay_data_cntvaluein_prev", false,-1, 4,0);
    tracep->declBus(c+3864,"odelay_data_cntvaluein_prev", false,-1, 4,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3865+i*1,"idelay_dqs_cntvaluein", true,(i+0), 4,0);
    }
    tracep->declBus(c+3873,"sample_clk_repeat", false,-1, 5,0);
    tracep->declBit(c+3874,"stored_write_level_feedback", false,-1);
    tracep->declBus(c+3875,"start_index_check", false,-1, 5,0);
    tracep->declQuad(c+3876,"read_lane_data", false,-1, 63,0);
    tracep->declBit(c+3878,"wb2_stb", false,-1);
    tracep->declBit(c+3879,"wb2_update", false,-1);
    tracep->declBit(c+3880,"wb2_we", false,-1);
    tracep->declBus(c+3881,"wb2_addr", false,-1, 6,0);
    tracep->declBus(c+3882,"wb2_data", false,-1, 31,0);
    tracep->declBus(c+3883,"wb2_sel", false,-1, 3,0);
    tracep->declBus(c+3884,"wb2_phy_odelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3885,"wb2_phy_odelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3886,"wb2_phy_idelay_data_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3887,"wb2_phy_idelay_dqs_cntvaluein", false,-1, 4,0);
    tracep->declBus(c+3888,"wb2_phy_odelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+3889,"wb2_phy_odelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+3890,"wb2_phy_idelay_data_ld", false,-1, 7,0);
    tracep->declBus(c+3891,"wb2_phy_idelay_dqs_ld", false,-1, 7,0);
    tracep->declBus(c+3892,"wb2_write_lane", false,-1, 2,0);
    tracep->declBus(c+4039,"wb_data_to_wb2", false,-1, 31,0);
    tracep->declBit(c+4328,"debug_trigger", false,-1);
    tracep->declBit(c+4504,"dq_all_zeroes", false,-1);
    tracep->declBus(c+4651,"get_slot__Vstatic__delay", false,-1, 31,0);
    tracep->declBus(c+4652,"get_slot__Vstatic__slot_number", false,-1, 1,0);
    tracep->declBus(c+4653,"get_slot__Vstatic__read_slot", false,-1, 1,0);
    tracep->declBus(c+4654,"get_slot__Vstatic__write_slot", false,-1, 1,0);
    tracep->declBus(c+4655,"get_slot__Vstatic__anticipate_activate_slot", false,-1, 1,0);
    tracep->declBus(c+4656,"get_slot__Vstatic__anticipate_precharge_slot", false,-1, 1,0);
    tracep->declBus(c+4657,"find_delay__Vstatic__k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genbus ");
    tracep->declBus(c+4554,"LGWATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4633,"LGINPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4542,"LGOUTPUT_FIFO", false,-1, 31,0);
    tracep->declBus(c+4594,"CMD_PORT_OFF_UNTIL_ACCESSED", false,-1, 0,0);
    tracep->declBus(c+4658,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+169,"i_rx_stb", false,-1);
    tracep->declBus(c+167,"i_rx_data", false,-1, 7,0);
    tracep->declBit(c+385,"o_wb_cyc", false,-1);
    tracep->declBit(c+386,"o_wb_stb", false,-1);
    tracep->declBit(c+387,"o_wb_we", false,-1);
    tracep->declBus(c+388,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+389,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+390,"i_wb_stall", false,-1);
    tracep->declBit(c+391,"i_wb_ack", false,-1);
    tracep->declBus(c+393,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+392,"i_wb_err", false,-1);
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
    tracep->declBit(c+490,"soft_reset", false,-1);
    tracep->declBit(c+172,"r_wdt_reset", false,-1);
    tracep->declBit(c+4558,"cmd_port_active", false,-1);
    tracep->declBit(c+491,"rx_valid", false,-1);
    tracep->declBus(c+492,"rx_data", false,-1, 7,0);
    tracep->declBit(c+493,"in_stb", false,-1);
    tracep->declBit(c+494,"in_active", false,-1);
    tracep->declQuad(c+495,"in_word", false,-1, 35,0);
    tracep->declBit(c+170,"ps_full", false,-1);
    tracep->declBus(c+168,"ps_data", false,-1, 7,0);
    tracep->declBit(c+497,"wbu_tx_stb", false,-1);
    tracep->declBus(c+498,"wbu_tx_data", false,-1, 7,0);
    tracep->declBit(c+499,"ififo_valid", false,-1);
    tracep->declQuad(c+500,"ififo_codword", false,-1, 35,0);
    tracep->declBit(c+502,"exec_stb", false,-1);
    tracep->declQuad(c+503,"exec_word", false,-1, 35,0);
    tracep->declBit(c+505,"ofifo_rd", false,-1);
    tracep->declQuad(c+506,"ofifo_codword", false,-1, 35,0);
    tracep->declBit(c+508,"ofifo_err", false,-1);
    tracep->declBit(c+509,"ofifo_empty_n", false,-1);
    tracep->declBit(c+510,"w_bus_busy", false,-1);
    tracep->declBit(c+172,"w_bus_reset", false,-1);
    tracep->declBus(c+511,"r_wdt_timer", false,-1, 18,0);
    tracep->declBit(c+512,"ign_input_busy", false,-1);
    tracep->declBit(c+513,"output_busy", false,-1);
    tracep->declBit(c+514,"out_active", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_OUTBOUND_FIFO ");
    tracep->pushNamePrefix("busoutfifo ");
    tracep->declBus(c+4659,"BW", false,-1, 31,0);
    tracep->declBus(c+4542,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+502,"i_wr", false,-1);
    tracep->declQuad(c+503,"i_data", false,-1, 35,0);
    tracep->declBit(c+505,"i_rd", false,-1);
    tracep->declQuad(c+506,"o_data", false,-1, 35,0);
    tracep->declBit(c+509,"o_empty_n", false,-1);
    tracep->declBit(c+508,"o_err", false,-1);
    tracep->declBus(c+4660,"FLEN", false,-1, 31,0);
    tracep->declBus(c+515,"r_wrptr", false,-1, 10,0);
    tracep->declBus(c+516,"r_rdptr", false,-1, 10,0);
    tracep->declBus(c+517,"nxt_wrptr", false,-1, 10,0);
    tracep->declBus(c+518,"nxt_rdptr", false,-1, 10,0);
    tracep->declBit(c+519,"will_overflow", false,-1);
    tracep->declBit(c+520,"will_underflow", false,-1);
    tracep->declBit(c+521,"r_empty_n", false,-1);
    tracep->declBit(c+522,"w_write", false,-1);
    tracep->declBit(c+523,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INPUT_FIFO ");
    tracep->declBit(c+499,"ififo_empty_n", false,-1);
    tracep->declBit(c+524,"ififo_err", false,-1);
    tracep->declBit(c+525,"ififo_rd", false,-1);
    tracep->declBit(c+4557,"gen_unused", false,-1);
    tracep->pushNamePrefix("padififo ");
    tracep->declBus(c+4659,"BW", false,-1, 31,0);
    tracep->declBus(c+4633,"LGFLEN", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+493,"i_wr", false,-1);
    tracep->declQuad(c+495,"i_data", false,-1, 35,0);
    tracep->declBit(c+525,"i_rd", false,-1);
    tracep->declQuad(c+500,"o_data", false,-1, 35,0);
    tracep->declBit(c+499,"o_empty_n", false,-1);
    tracep->declBit(c+524,"o_err", false,-1);
    tracep->declBus(c+4601,"FLEN", false,-1, 31,0);
    tracep->declBus(c+526,"r_wrptr", false,-1, 6,0);
    tracep->declBus(c+527,"r_rdptr", false,-1, 6,0);
    tracep->declBus(c+528,"nxt_wrptr", false,-1, 6,0);
    tracep->declBus(c+529,"nxt_rdptr", false,-1, 6,0);
    tracep->declBit(c+530,"will_overflow", false,-1);
    tracep->declBit(c+531,"will_underflow", false,-1);
    tracep->declBit(c+532,"r_empty_n", false,-1);
    tracep->declBit(c+533,"w_write", false,-1);
    tracep->declBit(c+534,"w_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("getinput ");
    tracep->declBus(c+4551,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+491,"i_stb", false,-1);
    tracep->declBit(c+512,"o_busy", false,-1);
    tracep->declBus(c+492,"i_byte", false,-1, 7,0);
    tracep->declBit(c+490,"o_soft_reset", false,-1);
    tracep->declBit(c+493,"o_stb", false,-1);
    tracep->declBit(c+4557,"i_busy", false,-1);
    tracep->declQuad(c+495,"o_codword", false,-1, 35,0);
    tracep->declBit(c+494,"o_active", false,-1);
    tracep->declBit(c+535,"hx_stb", false,-1);
    tracep->declBit(c+536,"hx_valid", false,-1);
    tracep->declBus(c+537,"hx_hexbits", false,-1, 5,0);
    tracep->declBit(c+538,"cw_stb", false,-1);
    tracep->declBit(c+539,"cw_busy", false,-1);
    tracep->declBit(c+540,"cw_active", false,-1);
    tracep->declQuad(c+541,"cw_word", false,-1, 35,0);
    tracep->declBit(c+543,"cod_busy", false,-1);
    tracep->declBit(c+544,"cod_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("unpack ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+538,"i_stb", false,-1);
    tracep->declBit(c+543,"o_busy", false,-1);
    tracep->declQuad(c+541,"i_word", false,-1, 35,0);
    tracep->declBit(c+493,"o_stb", false,-1);
    tracep->declBit(c+4557,"i_busy", false,-1);
    tracep->declQuad(c+495,"o_word", false,-1, 35,0);
    tracep->declBit(c+544,"o_active", false,-1);
    tracep->declBus(c+545,"wr_addr", false,-1, 7,0);
    tracep->declQuad(c+546,"r_word", false,-1, 35,0);
    tracep->declBus(c+548,"cmd_addr", false,-1, 7,0);
    tracep->declBus(c+549,"r_addr", false,-1, 24,0);
    tracep->declBus(c+550,"w_addr", false,-1, 31,0);
    tracep->declBus(c+551,"rd_len", false,-1, 9,0);
    tracep->declBus(c+552,"cword", false,-1, 31,0);
    tracep->declBus(c+553,"r_stb", false,-1, 2,0);
    tracep->declBit(c+554,"cmd_write_not_compressed", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("formcw ");
    tracep->declBus(c+4594,"OPT_SKIDBUFFER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+535,"i_stb", false,-1);
    tracep->declBit(c+539,"o_busy", false,-1);
    tracep->declBit(c+536,"i_valid", false,-1);
    tracep->declBus(c+537,"i_hexbits", false,-1, 5,0);
    tracep->declBit(c+538,"o_stb", false,-1);
    tracep->declBit(c+543,"i_busy", false,-1);
    tracep->declQuad(c+541,"o_codword", false,-1, 35,0);
    tracep->declBit(c+540,"o_active", false,-1);
    tracep->declBus(c+555,"r_len", false,-1, 2,0);
    tracep->declBus(c+556,"cw_len", false,-1, 2,0);
    tracep->declBus(c+557,"lastcw", false,-1, 1,0);
    tracep->declBit(c+558,"w_stb", false,-1);
    tracep->declQuad(c+559,"shiftreg", false,-1, 35,0);
    tracep->declBit(c+535,"skd_stb", false,-1);
    tracep->declBit(c+536,"skd_valid", false,-1);
    tracep->declBus(c+537,"skd_hexbits", false,-1, 5,0);
    tracep->declBit(c+539,"skd_busy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tobits ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+491,"i_stb", false,-1);
    tracep->declBit(c+512,"o_busy", false,-1);
    tracep->declBus(c+492,"i_byte", false,-1, 7,0);
    tracep->declBit(c+490,"o_soft_reset", false,-1);
    tracep->declBit(c+535,"o_stb", false,-1);
    tracep->declBit(c+536,"o_valid", false,-1);
    tracep->declBit(c+539,"i_busy", false,-1);
    tracep->declBus(c+537,"o_hexbits", false,-1, 5,0);
    tracep->declBus(c+1,"k", false,-1, 31,0);
    tracep->declBus(c+2,"newv", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("runwb ");
    tracep->declBus(c+4594,"OPT_COUNT_FIFO", false,-1, 0,0);
    tracep->declBus(c+4546,"LGFIFO", false,-1, 31,0);
    tracep->declBus(c+4658,"AW", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+499,"i_valid", false,-1);
    tracep->declQuad(c+500,"i_codword", false,-1, 35,0);
    tracep->declBit(c+510,"o_busy", false,-1);
    tracep->declBit(c+385,"o_wb_cyc", false,-1);
    tracep->declBit(c+386,"o_wb_stb", false,-1);
    tracep->declBit(c+387,"o_wb_we", false,-1);
    tracep->declBus(c+388,"o_wb_addr", false,-1, 29,0);
    tracep->declBus(c+389,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+390,"i_wb_stall", false,-1);
    tracep->declBit(c+391,"i_wb_ack", false,-1);
    tracep->declBus(c+393,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+392,"i_wb_err", false,-1);
    tracep->declBit(c+502,"o_stb", false,-1);
    tracep->declQuad(c+503,"o_codword", false,-1, 35,0);
    tracep->declBit(c+505,"i_fifo_rd", false,-1);
    tracep->declBus(c+4597,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+4598,"WB_READ_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4599,"WB_WRITE_REQUEST", false,-1, 1,0);
    tracep->declBus(c+4600,"WB_FLUSH_WRITE_REQUESTS", false,-1, 1,0);
    tracep->declBus(c+4598,"WRITE_PREFIX", false,-1, 1,0);
    tracep->declBus(c+561,"w_cod_data", false,-1, 31,0);
    tracep->declBus(c+562,"wb_state", false,-1, 1,0);
    tracep->declBus(c+563,"r_acks_needed", false,-1, 9,0);
    tracep->declBus(c+564,"r_len", false,-1, 9,0);
    tracep->declBit(c+565,"r_inc", false,-1);
    tracep->declBit(c+566,"r_new_addr", false,-1);
    tracep->declBit(c+567,"last_read_request", false,-1);
    tracep->declBit(c+568,"last_ack", false,-1);
    tracep->declBit(c+569,"zero_acks", false,-1);
    tracep->declBit(c+510,"r_busy", false,-1);
    tracep->declBus(c+570,"wide_addr", false,-1, 31,0);
    tracep->declBus(c+4661,"fifo_space_available", false,-1, 4,0);
    tracep->declBit(c+4558,"space_available", false,-1);
    tracep->pushNamePrefix("NO_FIFO ");
    tracep->declBit(c+4557,"unused_count", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wroutput ");
    tracep->declBus(c+4551,"OPT_COMPRESSION", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_IDLES", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+172,"i_soft_reset", false,-1);
    tracep->declBit(c+505,"i_stb", false,-1);
    tracep->declBit(c+513,"o_busy", false,-1);
    tracep->declQuad(c+506,"i_codword", false,-1, 35,0);
    tracep->declBit(c+385,"i_wb_cyc", false,-1);
    tracep->declBit(c+166,"i_int", false,-1);
    tracep->declBit(c+571,"i_bus_busy", false,-1);
    tracep->declBit(c+497,"o_stb", false,-1);
    tracep->declBit(c+514,"o_active", false,-1);
    tracep->declBus(c+498,"o_char", false,-1, 7,0);
    tracep->declBit(c+170,"i_tx_busy", false,-1);
    tracep->declBit(c+572,"dw_busy", false,-1);
    tracep->declBit(c+513,"cw_stb", false,-1);
    tracep->declBit(c+513,"cw_busy", false,-1);
    tracep->declBit(c+573,"cp_stb", false,-1);
    tracep->declBit(c+572,"dw_stb", false,-1);
    tracep->declBit(c+574,"ln_stb", false,-1);
    tracep->declBit(c+575,"ln_busy", false,-1);
    tracep->declBit(c+576,"cp_busy", false,-1);
    tracep->declBit(c+577,"byte_busy", false,-1);
    tracep->declBit(c+578,"cp_active", false,-1);
    tracep->declBit(c+579,"dw_active", false,-1);
    tracep->declBit(c+580,"ln_active", false,-1);
    tracep->declQuad(c+581,"cw_codword", false,-1, 35,0);
    tracep->declQuad(c+583,"cp_word", false,-1, 35,0);
    tracep->declBus(c+585,"dw_bits", false,-1, 6,0);
    tracep->declBus(c+586,"ln_bits", false,-1, 6,0);
    tracep->declBit(c+587,"r_active", false,-1);
    tracep->pushNamePrefix("GEN_COMPRESSION ");
    tracep->pushNamePrefix("packit ");
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declBus(c+4659,"CW", false,-1, 31,0);
    tracep->declBus(c+4542,"TBITS", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+513,"i_stb", false,-1);
    tracep->declQuad(c+581,"i_codword", false,-1, 35,0);
    tracep->declBit(c+572,"i_busy", false,-1);
    tracep->declBit(c+573,"o_stb", false,-1);
    tracep->declQuad(c+583,"o_cword", false,-1, 35,0);
    tracep->declBit(c+576,"o_busy", false,-1);
    tracep->declBit(c+578,"o_active", false,-1);
    tracep->declBit(c+588,"aword_valid", false,-1);
    tracep->declQuad(c+589,"a_addrword", false,-1, 35,0);
    tracep->declBus(c+591,"w_addr", false,-1, 31,0);
    tracep->declBus(c+592,"addr_zcheck", false,-1, 3,0);
    tracep->declBit(c+593,"tbl_busy", false,-1);
    tracep->declBit(c+594,"w_accepted", false,-1);
    tracep->declQuad(c+595,"r_word", false,-1, 35,0);
    tracep->declBus(c+597,"tbl_addr", false,-1, 9,0);
    tracep->declBit(c+598,"tbl_filled", false,-1);
    tracep->declBus(c+599,"rd_addr", false,-1, 9,0);
    tracep->declBit(c+600,"pmatch", false,-1);
    tracep->declBit(c+601,"dmatch", false,-1);
    tracep->declBit(c+602,"vaddr", false,-1);
    tracep->declBus(c+603,"cword", false,-1, 31,0);
    tracep->declBus(c+604,"maddr", false,-1, 9,0);
    tracep->declBit(c+605,"matched", false,-1);
    tracep->declBit(c+606,"zmatch", false,-1);
    tracep->declBit(c+607,"hmatch", false,-1);
    tracep->declBus(c+608,"adr_dbld", false,-1, 9,0);
    tracep->declBus(c+609,"adr_hlfd", false,-1, 2,0);
    tracep->declQuad(c+583,"r_cword", false,-1, 35,0);
    tracep->declBus(c+610,"dffaddr", false,-1, 9,0);
    tracep->declBit(c+611,"clear_table", false,-1);
    tracep->declBit(c+612,"addr_within_table", false,-1);
    tracep->declBit(c+613,"w_match", false,-1);
    tracep->declBus(c+3,"k", false,-1, 31,0);
    tracep->declBit(c+614,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_IDLES ");
    tracep->pushNamePrefix("buildcw ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+172,"i_reset", false,-1);
    tracep->declBit(c+505,"i_stb", false,-1);
    tracep->declQuad(c+506,"i_codword", false,-1, 35,0);
    tracep->declBit(c+385,"i_cyc", false,-1);
    tracep->declBit(c+571,"i_busy", false,-1);
    tracep->declBit(c+166,"i_int", false,-1);
    tracep->declBit(c+513,"o_stb", false,-1);
    tracep->declQuad(c+581,"o_codword", false,-1, 35,0);
    tracep->declBit(c+513,"o_busy", false,-1);
    tracep->declBit(c+615,"i_tx_busy", false,-1);
    tracep->declQuad(c+4662,"CW_INTERRUPT", false,-1, 35,0);
    tracep->declQuad(c+4664,"CW_BUSBUSY", false,-1, 35,0);
    tracep->declQuad(c+4666,"CW_IDLE", false,-1, 35,0);
    tracep->declBus(c+4612,"IDLEBITS", false,-1, 31,0);
    tracep->declBit(c+616,"int_request", false,-1);
    tracep->declBit(c+617,"int_sent", false,-1);
    tracep->declBit(c+618,"idle_expired", false,-1);
    tracep->declBit(c+619,"idle_state", false,-1);
    tracep->declBus(c+620,"idle_counter", false,-1, 21,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deword ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+573,"i_stb", false,-1);
    tracep->declQuad(c+583,"i_word", false,-1, 35,0);
    tracep->declBit(c+575,"i_tx_busy", false,-1);
    tracep->declBit(c+572,"o_stb", false,-1);
    tracep->declBus(c+585,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+572,"o_busy", false,-1);
    tracep->declBit(c+579,"o_active", false,-1);
    tracep->declBus(c+621,"w_len", false,-1, 2,0);
    tracep->declBus(c+622,"r_len", false,-1, 2,0);
    tracep->declBus(c+623,"r_word", false,-1, 29,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("linepacker ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+572,"i_stb", false,-1);
    tracep->declBus(c+585,"i_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+574,"o_stb", false,-1);
    tracep->declBus(c+586,"o_nl_hexbits", false,-1, 6,0);
    tracep->declBit(c+624,"i_bus_busy", false,-1);
    tracep->declBit(c+577,"i_tx_busy", false,-1);
    tracep->declBit(c+575,"o_busy", false,-1);
    tracep->declBit(c+580,"o_active", false,-1);
    tracep->declBus(c+4668,"MAX_LINE_LENGTH", false,-1, 6,0);
    tracep->declBus(c+4669,"TRIGGER_LENGTH", false,-1, 6,0);
    tracep->declBit(c+625,"last_out_nl", false,-1);
    tracep->declBit(c+626,"last_in_nl", false,-1);
    tracep->declBit(c+627,"full_line", false,-1);
    tracep->declBit(c+628,"r_busy", false,-1);
    tracep->declBus(c+629,"linelen", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mkbytes ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+574,"i_stb", false,-1);
    tracep->declBus(c+586,"i_bits", false,-1, 6,0);
    tracep->declBit(c+497,"o_stb", false,-1);
    tracep->declBus(c+498,"o_char", false,-1, 7,0);
    tracep->declBit(c+577,"o_busy", false,-1);
    tracep->declBit(c+170,"i_busy", false,-1);
    tracep->declBus(c+4,"newv", false,-1, 6,0);
    tracep->declBus(c+5,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gpioi ");
    tracep->declBus(c+4550,"NIN", false,-1, 31,0);
    tracep->declBus(c+4544,"NOUT", false,-1, 31,0);
    tracep->declBus(c+4590,"DEFAULT", false,-1, 7,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+3963,"i_wb_cyc", false,-1);
    tracep->declBit(c+3968,"i_wb_stb", false,-1);
    tracep->declBit(c+3965,"i_wb_we", false,-1);
    tracep->declBus(c+3966,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3967,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+3968,"o_wb_ack", false,-1);
    tracep->declBus(c+4500,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4489,"i_gpio", false,-1, 15,0);
    tracep->declBus(c+4490,"o_gpio", false,-1, 7,0);
    tracep->declBit(c+145,"o_int", false,-1);
    tracep->declBus(c+630,"r_gpio", false,-1, 15,0);
    tracep->declBus(c+631,"x_gpio", false,-1, 15,0);
    tracep->declBus(c+632,"q_gpio", false,-1, 15,0);
    tracep->declBus(c+630,"hi_bits", false,-1, 15,0);
    tracep->declBus(c+4505,"low_bits", false,-1, 15,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2ci ");
    tracep->declBus(c+4549,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4555,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4597,"DEF_CHANNEL", false,-1, 1,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4544,"RW", false,-1, 31,0);
    tracep->declBus(c+4670,"BAW", false,-1, 31,0);
    tracep->declBus(c+4671,"RESET_ADDRESS", false,-1, 30,0);
    tracep->declBus(c+4551,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4556,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4672,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+3996,"i_wb_cyc", false,-1);
    tracep->declBit(c+3997,"i_wb_stb", false,-1);
    tracep->declBit(c+3998,"i_wb_we", false,-1);
    tracep->declBus(c+4040,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4000,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4001,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+374,"o_wb_ack", false,-1);
    tracep->declBus(c+375,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+216,"o_pf_cyc", false,-1);
    tracep->declBit(c+217,"o_pf_stb", false,-1);
    tracep->declBit(c+4557,"o_pf_we", false,-1);
    tracep->declBus(c+218,"o_pf_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"o_pf_data", false,-1, 511,0);
    tracep->declQuad(c+4575,"o_pf_sel", false,-1, 63,0);
    tracep->declBit(c+219,"i_pf_stall", false,-1);
    tracep->declBit(c+220,"i_pf_ack", false,-1);
    tracep->declBit(c+221,"i_pf_err", false,-1);
    tracep->declArray(c+222,"i_pf_data", false,-1, 511,0);
    tracep->declBit(c+4470,"i_i2c_sda", false,-1);
    tracep->declBit(c+4471,"i_i2c_scl", false,-1);
    tracep->declBit(c+4472,"o_i2c_sda", false,-1);
    tracep->declBit(c+4473,"o_i2c_scl", false,-1);
    tracep->declBit(c+152,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+153,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+155,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+154,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+156,"M_AXIS_TID", false,-1, 1,0);
    tracep->declBit(c+4557,"i_sync_signal", false,-1);
    tracep->declBus(c+35,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4597,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4598,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4599,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4600,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4554,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4591,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4614,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4612,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4636,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4637,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4602,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4604,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4605,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4606,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4607,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4596,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4608,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4673,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4674,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4675,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4676,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4677,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4678,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+633,"cpu_reset", false,-1);
    tracep->declBit(c+4557,"cpu_clear_cache", false,-1);
    tracep->declBit(c+634,"cpu_new_pc", false,-1);
    tracep->declBus(c+635,"pf_jump_addr", false,-1, 30,0);
    tracep->declBit(c+636,"pf_valid", false,-1);
    tracep->declBit(c+637,"pf_ready", false,-1);
    tracep->declBus(c+638,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+639,"pf_insn_addr", false,-1, 30,0);
    tracep->declBit(c+640,"pf_illegal", false,-1);
    tracep->declBit(c+641,"half_valid", false,-1);
    tracep->declBit(c+642,"imm_cycle", false,-1);
    tracep->declBit(c+4041,"next_valid", false,-1);
    tracep->declBus(c+4042,"next_insn", false,-1, 7,0);
    tracep->declBit(c+643,"insn_ready", false,-1);
    tracep->declBit(c+644,"half_ready", false,-1);
    tracep->declBit(c+645,"i2c_abort", false,-1);
    tracep->declBit(c+646,"insn_valid", false,-1);
    tracep->declBus(c+647,"insn", false,-1, 11,0);
    tracep->declBus(c+648,"half_insn", false,-1, 3,0);
    tracep->declBit(c+649,"i2c_ckedge", false,-1);
    tracep->declBit(c+650,"i2c_stretch", false,-1);
    tracep->declBus(c+651,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+652,"ckcount", false,-1, 11,0);
    tracep->declBus(c+653,"abort_address", false,-1, 30,0);
    tracep->declBus(c+654,"jump_target", false,-1, 30,0);
    tracep->declBit(c+655,"r_wait", false,-1);
    tracep->declBit(c+656,"soft_halt_request", false,-1);
    tracep->declBit(c+633,"r_halted", false,-1);
    tracep->declBit(c+657,"r_err", false,-1);
    tracep->declBit(c+658,"r_aborted", false,-1);
    tracep->declBit(c+659,"r_manual", false,-1);
    tracep->declBit(c+660,"r_sda", false,-1);
    tracep->declBit(c+661,"r_scl", false,-1);
    tracep->declBit(c+662,"w_stopped", false,-1);
    tracep->declBit(c+663,"w_sda", false,-1);
    tracep->declBit(c+664,"w_scl", false,-1);
    tracep->declBit(c+4043,"bus_read", false,-1);
    tracep->declBit(c+4044,"bus_write", false,-1);
    tracep->declBit(c+4045,"bus_override", false,-1);
    tracep->declBit(c+4046,"bus_manual", false,-1);
    tracep->declBit(c+665,"ovw_ready", false,-1);
    tracep->declBit(c+4047,"bus_jump", false,-1);
    tracep->declBus(c+4040,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4040,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+4000,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+4001,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+375,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+666,"s_tvalid", false,-1);
    tracep->declBit(c+644,"s_tready", false,-1);
    tracep->declBus(c+667,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+36,"w_control", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+659,"manual", false,-1);
    tracep->declBit(c+661,"scl", false,-1);
    tracep->declBit(c+660,"sda", false,-1);
    tracep->declBit(c+668,"o_scl", false,-1);
    tracep->declBit(c+669,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_TID ");
    tracep->declBit(c+670,"mid_axis_pkt", false,-1);
    tracep->declBus(c+671,"r_channel", false,-1, 1,0);
    tracep->declBus(c+156,"axis_tid", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4556,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+37,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+666,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+643,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+672,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+152,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+153,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+155,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+154,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+649,"i_ckedge", false,-1);
    tracep->declBit(c+650,"o_stretch", false,-1);
    tracep->declBit(c+4471,"i_scl", false,-1);
    tracep->declBit(c+4470,"i_sda", false,-1);
    tracep->declBit(c+664,"o_scl", false,-1);
    tracep->declBit(c+663,"o_sda", false,-1);
    tracep->declBit(c+645,"o_abort", false,-1);
    tracep->declBus(c+4602,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4603,"START", false,-1, 3,0);
    tracep->declBus(c+4604,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4605,"STOP", false,-1, 3,0);
    tracep->declBus(c+4606,"DATA", false,-1, 3,0);
    tracep->declBus(c+4607,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4596,"ACK", false,-1, 3,0);
    tracep->declBus(c+4608,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4673,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4674,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4675,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4676,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4677,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4594,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4551,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4640,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4646,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4641,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4643,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4679,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4680,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4681,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4682,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4594,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+673,"last_byte", false,-1);
    tracep->declBit(c+674,"dir", false,-1);
    tracep->declBit(c+675,"will_ack", false,-1);
    tracep->declBus(c+676,"state", false,-1, 3,0);
    tracep->declBus(c+677,"nbits", false,-1, 2,0);
    tracep->declBus(c+678,"sreg", false,-1, 7,0);
    tracep->declBit(c+679,"q_scl", false,-1);
    tracep->declBit(c+680,"q_sda", false,-1);
    tracep->declBit(c+681,"ck_scl", false,-1);
    tracep->declBit(c+682,"ck_sda", false,-1);
    tracep->declBit(c+683,"lst_scl", false,-1);
    tracep->declBit(c+684,"lst_sda", false,-1);
    tracep->declBit(c+685,"stop_bit", false,-1);
    tracep->declBit(c+686,"channel_busy", false,-1);
    tracep->declBit(c+4557,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4670,"AW", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+38,"i_reset", false,-1);
    tracep->declBit(c+634,"i_new_pc", false,-1);
    tracep->declBit(c+4557,"i_clear_cache", false,-1);
    tracep->declBit(c+637,"i_ready", false,-1);
    tracep->declBus(c+635,"i_pc", false,-1, 30,0);
    tracep->declBit(c+636,"o_valid", false,-1);
    tracep->declBit(c+640,"o_illegal", false,-1);
    tracep->declBus(c+638,"o_insn", false,-1, 7,0);
    tracep->declBus(c+639,"o_pc", false,-1, 30,0);
    tracep->declBit(c+216,"o_wb_cyc", false,-1);
    tracep->declBit(c+217,"o_wb_stb", false,-1);
    tracep->declBit(c+4557,"o_wb_we", false,-1);
    tracep->declBus(c+218,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+219,"i_wb_stall", false,-1);
    tracep->declBit(c+220,"i_wb_ack", false,-1);
    tracep->declBit(c+221,"i_wb_err", false,-1);
    tracep->declArray(c+222,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+687,"last_stb", false,-1);
    tracep->declBit(c+688,"invalid_bus_cycle", false,-1);
    tracep->declArray(c+689,"cache_word", false,-1, 511,0);
    tracep->declBit(c+705,"cache_valid", false,-1);
    tracep->declBus(c+706,"inflight", false,-1, 1,0);
    tracep->declBit(c+707,"cache_illegal", false,-1);
    tracep->declBit(c+708,"r_valid", false,-1);
    tracep->declArray(c+709,"r_insn", false,-1, 511,0);
    tracep->declArray(c+725,"i_wb_shifted", false,-1, 511,0);
    tracep->pushNamePrefix("GEN_SUBSHIFT ");
    tracep->declBus(c+4633,"NSHIFT", false,-1, 31,0);
    tracep->declBit(c+708,"rg_valid", false,-1);
    tracep->declArray(c+709,"rg_insn", false,-1, 511,0);
    tracep->declBus(c+741,"r_count", false,-1, 6,0);
    tracep->declBus(c+742,"r_shift", false,-1, 5,0);
    tracep->declBit(c+4557,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i2cscopei ");
    tracep->declBus(c+4683,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4595,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4670,"NELM", false,-1, 31,0);
    tracep->declBus(c+4551,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4591,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4684,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4670,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4685,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4405,"i_data_clk", false,-1);
    tracep->declBit(c+4558,"i_ce", false,-1);
    tracep->declBit(c+658,"i_trigger", false,-1);
    tracep->declBus(c+39,"i_data", false,-1, 30,0);
    tracep->declBit(c+4405,"i_wb_clk", false,-1);
    tracep->declBit(c+3972,"i_wb_cyc", false,-1);
    tracep->declBit(c+3973,"i_wb_stb", false,-1);
    tracep->declBit(c+3974,"i_wb_we", false,-1);
    tracep->declBit(c+4048,"i_wb_addr", false,-1);
    tracep->declBus(c+3976,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3977,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+366,"o_wb_ack", false,-1);
    tracep->declBus(c+367,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+143,"o_interrupt", false,-1);
    tracep->declBit(c+4049,"write_stb", false,-1);
    tracep->declBit(c+4050,"read_from_data", false,-1);
    tracep->declBit(c+4051,"write_to_control", false,-1);
    tracep->declBus(c+367,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4405,"bus_clock", false,-1);
    tracep->declBit(c+743,"read_address", false,-1);
    tracep->declBus(c+3976,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+744,"raddr", false,-1, 9,0);
    tracep->declBus(c+745,"waddr", false,-1, 9,0);
    tracep->declBit(c+746,"bw_reset_request", false,-1);
    tracep->declBit(c+747,"bw_manual_trigger", false,-1);
    tracep->declBit(c+748,"bw_disable_trigger", false,-1);
    tracep->declBit(c+746,"bw_reset_complete", false,-1);
    tracep->declBus(c+749,"br_config", false,-1, 2,0);
    tracep->declBus(c+750,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+751,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+746,"dw_reset", false,-1);
    tracep->declBit(c+747,"dw_manual_trigger", false,-1);
    tracep->declBit(c+748,"dw_disable_trigger", false,-1);
    tracep->declBit(c+752,"dr_triggered", false,-1);
    tracep->declBit(c+753,"dr_primed", false,-1);
    tracep->declBit(c+754,"dw_trigger", false,-1);
    tracep->declBit(c+755,"dr_stopped", false,-1);
    tracep->declBus(c+4634,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+756,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+757,"dw_final_stop", false,-1);
    tracep->declBus(c+758,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+759,"qd_data", false,-1, 30,0);
    tracep->declBit(c+760,"dr_force_write", false,-1);
    tracep->declBit(c+761,"dr_run_timeout", false,-1);
    tracep->declBit(c+762,"new_data", false,-1);
    tracep->declBit(c+763,"dr_force_inhibit", false,-1);
    tracep->declBus(c+759,"w_data", false,-1, 30,0);
    tracep->declBit(c+764,"imm_adr", false,-1);
    tracep->declBit(c+765,"lst_adr", false,-1);
    tracep->declBus(c+766,"lst_val", false,-1, 30,0);
    tracep->declBus(c+767,"imm_val", false,-1, 30,0);
    tracep->declBit(c+768,"record_ce", false,-1);
    tracep->declBus(c+769,"r_data", false,-1, 31,0);
    tracep->declBit(c+757,"bw_stopped", false,-1);
    tracep->declBit(c+752,"bw_triggered", false,-1);
    tracep->declBit(c+753,"bw_primed", false,-1);
    tracep->declBit(c+366,"br_wb_ack", false,-1);
    tracep->declBit(c+770,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3973,"bw_cyc_stb", false,-1);
    tracep->declBus(c+771,"this_addr", false,-1, 9,0);
    tracep->declBus(c+772,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+750,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4683,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+773,"br_level_interrupt", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rcv ");
    tracep->declBus(c+4553,"TIMER_BITS", false,-1, 31,0);
    tracep->declBus(c+4686,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBus(c+4553,"TB", false,-1, 31,0);
    tracep->declBus(c+4602,"RXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4603,"RXUL_BIT_ONE", false,-1, 3,0);
    tracep->declBus(c+4604,"RXUL_BIT_TWO", false,-1, 3,0);
    tracep->declBus(c+4605,"RXUL_BIT_THREE", false,-1, 3,0);
    tracep->declBus(c+4606,"RXUL_BIT_FOUR", false,-1, 3,0);
    tracep->declBus(c+4607,"RXUL_BIT_FIVE", false,-1, 3,0);
    tracep->declBus(c+4596,"RXUL_BIT_SIX", false,-1, 3,0);
    tracep->declBus(c+4608,"RXUL_BIT_SEVEN", false,-1, 3,0);
    tracep->declBus(c+4673,"RXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4674,"RXUL_WAIT", false,-1, 3,0);
    tracep->declBus(c+4589,"RXUL_IDLE", false,-1, 3,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4486,"i_uart_rx", false,-1);
    tracep->declBit(c+169,"o_wr", false,-1);
    tracep->declBus(c+167,"o_data", false,-1, 7,0);
    tracep->declBus(c+4687,"half_baud", false,-1, 6,0);
    tracep->declBus(c+774,"state", false,-1, 3,0);
    tracep->declBus(c+775,"baud_counter", false,-1, 6,0);
    tracep->declBit(c+776,"zero_baud_counter", false,-1);
    tracep->declBit(c+777,"q_uart", false,-1);
    tracep->declBit(c+778,"qq_uart", false,-1);
    tracep->declBit(c+779,"ck_uart", false,-1);
    tracep->declBus(c+780,"chg_counter", false,-1, 6,0);
    tracep->declBit(c+781,"half_baud_time", false,-1);
    tracep->declBus(c+782,"data_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope1_ddr3i ");
    tracep->declBus(c+4683,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4595,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4670,"NELM", false,-1, 31,0);
    tracep->declBus(c+4551,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4591,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4684,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4670,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4685,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4405,"i_data_clk", false,-1);
    tracep->declBit(c+4558,"i_ce", false,-1);
    tracep->declBit(c+4328,"i_trigger", false,-1);
    tracep->declBus(c+4506,"i_data", false,-1, 30,0);
    tracep->declBit(c+4405,"i_wb_clk", false,-1);
    tracep->declBit(c+3978,"i_wb_cyc", false,-1);
    tracep->declBit(c+3979,"i_wb_stb", false,-1);
    tracep->declBit(c+3980,"i_wb_we", false,-1);
    tracep->declBit(c+4052,"i_wb_addr", false,-1);
    tracep->declBus(c+3982,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3983,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+368,"o_wb_ack", false,-1);
    tracep->declBus(c+369,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+137,"o_interrupt", false,-1);
    tracep->declBit(c+4053,"write_stb", false,-1);
    tracep->declBit(c+4054,"read_from_data", false,-1);
    tracep->declBit(c+4055,"write_to_control", false,-1);
    tracep->declBus(c+369,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4405,"bus_clock", false,-1);
    tracep->declBit(c+783,"read_address", false,-1);
    tracep->declBus(c+3982,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+784,"raddr", false,-1, 9,0);
    tracep->declBus(c+785,"waddr", false,-1, 9,0);
    tracep->declBit(c+786,"bw_reset_request", false,-1);
    tracep->declBit(c+787,"bw_manual_trigger", false,-1);
    tracep->declBit(c+788,"bw_disable_trigger", false,-1);
    tracep->declBit(c+786,"bw_reset_complete", false,-1);
    tracep->declBus(c+789,"br_config", false,-1, 2,0);
    tracep->declBus(c+790,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+791,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+786,"dw_reset", false,-1);
    tracep->declBit(c+787,"dw_manual_trigger", false,-1);
    tracep->declBit(c+788,"dw_disable_trigger", false,-1);
    tracep->declBit(c+792,"dr_triggered", false,-1);
    tracep->declBit(c+793,"dr_primed", false,-1);
    tracep->declBit(c+4382,"dw_trigger", false,-1);
    tracep->declBit(c+794,"dr_stopped", false,-1);
    tracep->declBus(c+4634,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+795,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+796,"dw_final_stop", false,-1);
    tracep->declBus(c+797,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+798,"qd_data", false,-1, 30,0);
    tracep->declBit(c+799,"dr_force_write", false,-1);
    tracep->declBit(c+800,"dr_run_timeout", false,-1);
    tracep->declBit(c+801,"new_data", false,-1);
    tracep->declBit(c+802,"dr_force_inhibit", false,-1);
    tracep->declBus(c+798,"w_data", false,-1, 30,0);
    tracep->declBit(c+803,"imm_adr", false,-1);
    tracep->declBit(c+804,"lst_adr", false,-1);
    tracep->declBus(c+805,"lst_val", false,-1, 30,0);
    tracep->declBus(c+806,"imm_val", false,-1, 30,0);
    tracep->declBit(c+807,"record_ce", false,-1);
    tracep->declBus(c+808,"r_data", false,-1, 31,0);
    tracep->declBit(c+796,"bw_stopped", false,-1);
    tracep->declBit(c+792,"bw_triggered", false,-1);
    tracep->declBit(c+793,"bw_primed", false,-1);
    tracep->declBit(c+368,"br_wb_ack", false,-1);
    tracep->declBit(c+809,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3979,"bw_cyc_stb", false,-1);
    tracep->declBus(c+810,"this_addr", false,-1, 9,0);
    tracep->declBus(c+811,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+790,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4683,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+812,"br_level_interrupt", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope2_ddr3i ");
    tracep->declBus(c+4683,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4595,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4670,"NELM", false,-1, 31,0);
    tracep->declBus(c+4551,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4591,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4684,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4670,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4685,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4405,"i_data_clk", false,-1);
    tracep->declBit(c+4558,"i_ce", false,-1);
    tracep->declBit(c+4328,"i_trigger", false,-1);
    tracep->declBus(c+4507,"i_data", false,-1, 30,0);
    tracep->declBit(c+4405,"i_wb_clk", false,-1);
    tracep->declBit(c+3984,"i_wb_cyc", false,-1);
    tracep->declBit(c+3985,"i_wb_stb", false,-1);
    tracep->declBit(c+3986,"i_wb_we", false,-1);
    tracep->declBit(c+4056,"i_wb_addr", false,-1);
    tracep->declBus(c+3988,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3989,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+370,"o_wb_ack", false,-1);
    tracep->declBus(c+371,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+138,"o_interrupt", false,-1);
    tracep->declBit(c+4057,"write_stb", false,-1);
    tracep->declBit(c+4058,"read_from_data", false,-1);
    tracep->declBit(c+4059,"write_to_control", false,-1);
    tracep->declBus(c+371,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4405,"bus_clock", false,-1);
    tracep->declBit(c+813,"read_address", false,-1);
    tracep->declBus(c+3988,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+814,"raddr", false,-1, 9,0);
    tracep->declBus(c+815,"waddr", false,-1, 9,0);
    tracep->declBit(c+816,"bw_reset_request", false,-1);
    tracep->declBit(c+817,"bw_manual_trigger", false,-1);
    tracep->declBit(c+818,"bw_disable_trigger", false,-1);
    tracep->declBit(c+816,"bw_reset_complete", false,-1);
    tracep->declBus(c+819,"br_config", false,-1, 2,0);
    tracep->declBus(c+820,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+821,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+816,"dw_reset", false,-1);
    tracep->declBit(c+817,"dw_manual_trigger", false,-1);
    tracep->declBit(c+818,"dw_disable_trigger", false,-1);
    tracep->declBit(c+822,"dr_triggered", false,-1);
    tracep->declBit(c+823,"dr_primed", false,-1);
    tracep->declBit(c+4383,"dw_trigger", false,-1);
    tracep->declBit(c+824,"dr_stopped", false,-1);
    tracep->declBus(c+4634,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+825,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+826,"dw_final_stop", false,-1);
    tracep->declBus(c+827,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+828,"qd_data", false,-1, 30,0);
    tracep->declBit(c+829,"dr_force_write", false,-1);
    tracep->declBit(c+830,"dr_run_timeout", false,-1);
    tracep->declBit(c+831,"new_data", false,-1);
    tracep->declBit(c+832,"dr_force_inhibit", false,-1);
    tracep->declBus(c+828,"w_data", false,-1, 30,0);
    tracep->declBit(c+833,"imm_adr", false,-1);
    tracep->declBit(c+834,"lst_adr", false,-1);
    tracep->declBus(c+835,"lst_val", false,-1, 30,0);
    tracep->declBus(c+836,"imm_val", false,-1, 30,0);
    tracep->declBit(c+837,"record_ce", false,-1);
    tracep->declBus(c+838,"r_data", false,-1, 31,0);
    tracep->declBit(c+826,"bw_stopped", false,-1);
    tracep->declBit(c+822,"bw_triggered", false,-1);
    tracep->declBit(c+823,"bw_primed", false,-1);
    tracep->declBit(c+370,"br_wb_ack", false,-1);
    tracep->declBit(c+839,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3985,"bw_cyc_stb", false,-1);
    tracep->declBus(c+840,"this_addr", false,-1, 9,0);
    tracep->declBus(c+841,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+820,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4683,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+842,"br_level_interrupt", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scope3_ddr3i ");
    tracep->declBus(c+4683,"LGMEM", false,-1, 4,0);
    tracep->declBus(c+4595,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4670,"NELM", false,-1, 31,0);
    tracep->declBus(c+4551,"SYNCHRONOUS", false,-1, 0,0);
    tracep->declBus(c+4591,"HOLDOFFBITS", false,-1, 31,0);
    tracep->declBus(c+4684,"DEFAULT_HOLDOFF", false,-1, 19,0);
    tracep->declBus(c+4670,"STEP_BITS", false,-1, 31,0);
    tracep->declBus(c+4685,"MAX_STEP", false,-1, 30,0);
    tracep->declBit(c+4405,"i_data_clk", false,-1);
    tracep->declBit(c+4558,"i_ce", false,-1);
    tracep->declBit(c+4328,"i_trigger", false,-1);
    tracep->declBus(c+4508,"i_data", false,-1, 30,0);
    tracep->declBit(c+4405,"i_wb_clk", false,-1);
    tracep->declBit(c+3990,"i_wb_cyc", false,-1);
    tracep->declBit(c+3991,"i_wb_stb", false,-1);
    tracep->declBit(c+3992,"i_wb_we", false,-1);
    tracep->declBit(c+4060,"i_wb_addr", false,-1);
    tracep->declBus(c+3994,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3995,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+372,"o_wb_ack", false,-1);
    tracep->declBus(c+373,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+144,"o_interrupt", false,-1);
    tracep->declBit(c+4061,"write_stb", false,-1);
    tracep->declBit(c+4062,"read_from_data", false,-1);
    tracep->declBit(c+4063,"write_to_control", false,-1);
    tracep->declBus(c+373,"o_bus_data", false,-1, 31,0);
    tracep->declBit(c+4405,"bus_clock", false,-1);
    tracep->declBit(c+843,"read_address", false,-1);
    tracep->declBus(c+3994,"i_bus_data", false,-1, 31,0);
    tracep->declBus(c+844,"raddr", false,-1, 9,0);
    tracep->declBus(c+845,"waddr", false,-1, 9,0);
    tracep->declBit(c+846,"bw_reset_request", false,-1);
    tracep->declBit(c+847,"bw_manual_trigger", false,-1);
    tracep->declBit(c+848,"bw_disable_trigger", false,-1);
    tracep->declBit(c+846,"bw_reset_complete", false,-1);
    tracep->declBus(c+849,"br_config", false,-1, 2,0);
    tracep->declBus(c+850,"br_holdoff", false,-1, 19,0);
    tracep->declBus(c+851,"holdoff_counter", false,-1, 19,0);
    tracep->declBit(c+846,"dw_reset", false,-1);
    tracep->declBit(c+847,"dw_manual_trigger", false,-1);
    tracep->declBit(c+848,"dw_disable_trigger", false,-1);
    tracep->declBit(c+852,"dr_triggered", false,-1);
    tracep->declBit(c+853,"dr_primed", false,-1);
    tracep->declBit(c+4384,"dw_trigger", false,-1);
    tracep->declBit(c+854,"dr_stopped", false,-1);
    tracep->declBus(c+4634,"DLYSTOP", false,-1, 31,0);
    tracep->declBus(c+855,"dr_stop_pipe", false,-1, 4,0);
    tracep->declBit(c+856,"dw_final_stop", false,-1);
    tracep->declBus(c+857,"ck_addr", false,-1, 30,0);
    tracep->declBus(c+858,"qd_data", false,-1, 30,0);
    tracep->declBit(c+859,"dr_force_write", false,-1);
    tracep->declBit(c+860,"dr_run_timeout", false,-1);
    tracep->declBit(c+861,"new_data", false,-1);
    tracep->declBit(c+862,"dr_force_inhibit", false,-1);
    tracep->declBus(c+858,"w_data", false,-1, 30,0);
    tracep->declBit(c+863,"imm_adr", false,-1);
    tracep->declBit(c+864,"lst_adr", false,-1);
    tracep->declBus(c+865,"lst_val", false,-1, 30,0);
    tracep->declBus(c+866,"imm_val", false,-1, 30,0);
    tracep->declBit(c+867,"record_ce", false,-1);
    tracep->declBus(c+868,"r_data", false,-1, 31,0);
    tracep->declBit(c+856,"bw_stopped", false,-1);
    tracep->declBit(c+852,"bw_triggered", false,-1);
    tracep->declBit(c+853,"bw_primed", false,-1);
    tracep->declBit(c+372,"br_wb_ack", false,-1);
    tracep->declBit(c+869,"br_pre_wb_ack", false,-1);
    tracep->declBit(c+3991,"bw_cyc_stb", false,-1);
    tracep->declBus(c+870,"this_addr", false,-1, 9,0);
    tracep->declBus(c+871,"nxt_mem", false,-1, 31,0);
    tracep->declBus(c+850,"full_holdoff", false,-1, 19,0);
    tracep->declBus(c+4683,"bw_lgmem", false,-1, 4,0);
    tracep->declBit(c+872,"br_level_interrupt", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spioi ");
    tracep->declBus(c+4544,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4634,"NBTN", false,-1, 31,0);
    tracep->declBus(c+4544,"NSW", false,-1, 31,0);
    tracep->declBus(c+4555,"NFF", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+3963,"i_wb_cyc", false,-1);
    tracep->declBit(c+3970,"i_wb_stb", false,-1);
    tracep->declBit(c+3965,"i_wb_we", false,-1);
    tracep->declBus(c+3966,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+3967,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+364,"o_wb_ack", false,-1);
    tracep->declBus(c+365,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+4491,"i_sw", false,-1, 7,0);
    tracep->declBus(c+4492,"i_btn", false,-1, 4,0);
    tracep->declBus(c+173,"o_led", false,-1, 7,0);
    tracep->declBit(c+146,"o_int", false,-1);
    tracep->declBit(c+873,"led_demo", false,-1);
    tracep->declBus(c+874,"r_led", false,-1, 7,0);
    tracep->declBus(c+875,"w_btn", false,-1, 7,0);
    tracep->declBus(c+876,"bounced", false,-1, 7,0);
    tracep->declBus(c+877,"r_sw", false,-1, 7,0);
    tracep->declBit(c+878,"sw_int", false,-1);
    tracep->declBit(c+879,"btn_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_BUTTON ");
    tracep->declBus(c+4064,"next_btn", false,-1, 4,0);
    tracep->declBus(c+880,"s_btn", false,-1, 4,0);
    tracep->declBus(c+881,"r_btn", false,-1, 4,0);
    tracep->declBus(c+882,"btn_pipe", false,-1, 9,0);
    tracep->declBit(c+879,"r_btn_int", false,-1);
    tracep->declBit(c+4065,"next_int", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SWITCHES ");
    tracep->declBus(c+883,"sw_pipe", false,-1, 15,0);
    tracep->declBus(c+877,"rr_sw", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("knightrider ");
    tracep->declBus(c+4544,"NLEDS", false,-1, 31,0);
    tracep->declBus(c+4549,"CTRBITS", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBus(c+876,"o_leds", false,-1, 7,0);
    tracep->declBus(c+884,"led_owner", false,-1, 7,0);
    tracep->declBit(c+885,"led_dir", false,-1);
    tracep->declBus(c+886,"led_ctr", false,-1, 24,0);
    tracep->declBit(c+887,"led_clk", false,-1);
    tracep->declBus(c+888,"br_ctr", false,-1, 4,0);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[0] ");
    tracep->declBus(c+889,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[1] ");
    tracep->declBus(c+890,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[2] ");
    tracep->declBus(c+891,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[3] ");
    tracep->declBus(c+892,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[4] ");
    tracep->declBus(c+893,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[5] ");
    tracep->declBus(c+894,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[6] ");
    tracep->declBus(c+895,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_BRIGHTNESS[7] ");
    tracep->declBus(c+896,"brightness", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("swic ");
    tracep->declBus(c+4548,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4595,"DBG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4638,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4638,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4551,"START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4550,"EXTERNAL_INTERRUPTS", false,-1, 31,0);
    tracep->declBus(c+4543,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DMA", false,-1, 0,0);
    tracep->declBus(c+4542,"DMA_LGMEM", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_ACCOUNTING", false,-1, 0,0);
    tracep->declBus(c+4551,"DELAY_DBG_BUS", false,-1, 0,0);
    tracep->declBus(c+4594,"DELAY_EXT_BUS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4591,"RESET_DURATION", false,-1, 31,0);
    tracep->declBus(c+4549,"PAW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4509,"i_reset", false,-1);
    tracep->declBit(c+238,"o_wb_cyc", false,-1);
    tracep->declBit(c+239,"o_wb_stb", false,-1);
    tracep->declBit(c+240,"o_wb_we", false,-1);
    tracep->declBus(c+241,"o_wb_addr", false,-1, 24,0);
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
    tracep->declBus(c+4510,"i_dbg_sel", false,-1, 3,0);
    tracep->declBit(c+163,"o_dbg_stall", false,-1);
    tracep->declBit(c+164,"o_dbg_ack", false,-1);
    tracep->declBus(c+410,"o_dbg_data", false,-1, 31,0);
    tracep->declBus(c+4556,"o_cpu_debug", false,-1, 31,0);
    tracep->declBit(c+4482,"o_prof_stb", false,-1);
    tracep->declBus(c+4483,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4484,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4688,"PERIPHBASE", false,-1, 31,0);
    tracep->declBus(c+4593,"INTCTRL", false,-1, 7,0);
    tracep->declBus(c+4689,"WATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4690,"BUSWATCHDOG", false,-1, 7,0);
    tracep->declBus(c+4691,"CTRINT", false,-1, 7,0);
    tracep->declBus(c+4692,"TIMER_A", false,-1, 7,0);
    tracep->declBus(c+4693,"TIMER_B", false,-1, 7,0);
    tracep->declBus(c+4694,"TIMER_C", false,-1, 7,0);
    tracep->declBus(c+4695,"JIFFIES", false,-1, 7,0);
    tracep->declBus(c+4696,"MSTR_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4697,"MSTR_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4698,"MSTR_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4699,"MSTR_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4700,"USER_TASK_CTR", false,-1, 7,0);
    tracep->declBus(c+4701,"USER_MSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4702,"USER_PSTL_CTR", false,-1, 7,0);
    tracep->declBus(c+4703,"USER_INST_CTR", false,-1, 7,0);
    tracep->declBus(c+4704,"MMU_ADDR", false,-1, 7,0);
    tracep->declBus(c+4705,"DMAC_ADDR", false,-1, 7,0);
    tracep->declBus(c+4556,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4555,"STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4543,"RESET_BIT", false,-1, 31,0);
    tracep->declBus(c+4546,"CLEAR_CACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4634,"CATCH_BIT", false,-1, 31,0);
    tracep->declBus(c+4549,"VIRTUAL_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4597,"DBG_ADDR_CTRL", false,-1, 1,0);
    tracep->declBus(c+4598,"DBG_ADDR_CPU", false,-1, 1,0);
    tracep->declBus(c+4599,"DBG_ADDR_SYS", false,-1, 1,0);
    tracep->declBus(c+897,"main_int_vector", false,-1, 14,0);
    tracep->declBus(c+898,"alt_int_vector", false,-1, 14,0);
    tracep->declBit(c+899,"ctri_int", false,-1);
    tracep->declBit(c+900,"tma_int", false,-1);
    tracep->declBit(c+901,"tmb_int", false,-1);
    tracep->declBit(c+902,"tmc_int", false,-1);
    tracep->declBit(c+903,"jif_int", false,-1);
    tracep->declBit(c+904,"dmac_int", false,-1);
    tracep->declBit(c+905,"mtc_int", false,-1);
    tracep->declBit(c+906,"moc_int", false,-1);
    tracep->declBit(c+907,"mpc_int", false,-1);
    tracep->declBit(c+908,"mic_int", false,-1);
    tracep->declBit(c+909,"utc_int", false,-1);
    tracep->declBit(c+910,"uoc_int", false,-1);
    tracep->declBit(c+911,"upc_int", false,-1);
    tracep->declBit(c+912,"uic_int", false,-1);
    tracep->declBus(c+913,"actr_data", false,-1, 31,0);
    tracep->declBit(c+914,"actr_ack", false,-1);
    tracep->declBit(c+4557,"actr_stall", false,-1);
    tracep->declBit(c+915,"cpu_clken", false,-1);
    tracep->declBit(c+916,"sys_cyc", false,-1);
    tracep->declBit(c+917,"sys_stb", false,-1);
    tracep->declBit(c+918,"sys_we", false,-1);
    tracep->declBus(c+919,"sys_addr", false,-1, 7,0);
    tracep->declBus(c+920,"sys_data", false,-1, 31,0);
    tracep->declBus(c+921,"cpu_addr", false,-1, 24,0);
    tracep->declBus(c+922,"sys_idata", false,-1, 31,0);
    tracep->declBit(c+923,"sys_ack", false,-1);
    tracep->declBit(c+4557,"sys_stall", false,-1);
    tracep->declBit(c+914,"sel_counter", false,-1);
    tracep->declBit(c+924,"sel_timer", false,-1);
    tracep->declBit(c+925,"sel_pic", false,-1);
    tracep->declBit(c+926,"sel_apic", false,-1);
    tracep->declBit(c+927,"sel_watchdog", false,-1);
    tracep->declBit(c+928,"sel_bus_watchdog", false,-1);
    tracep->declBit(c+929,"sel_dmac", false,-1);
    tracep->declBit(c+930,"sel_mmus", false,-1);
    tracep->declBit(c+931,"dbg_cyc", false,-1);
    tracep->declBit(c+932,"dbg_stb", false,-1);
    tracep->declBit(c+933,"dbg_we", false,-1);
    tracep->declBus(c+934,"dbg_addr", false,-1, 6,0);
    tracep->declBus(c+935,"dbg_idata", false,-1, 31,0);
    tracep->declBit(c+936,"dbg_ack", false,-1);
    tracep->declBit(c+937,"dbg_stall", false,-1);
    tracep->declBus(c+938,"dbg_odata", false,-1, 31,0);
    tracep->declBus(c+939,"dbg_sel", false,-1, 3,0);
    tracep->declBit(c+940,"no_dbg_err", false,-1);
    tracep->declBit(c+941,"cpu_break", false,-1);
    tracep->declBit(c+942,"dbg_cmd_write", false,-1);
    tracep->declBit(c+943,"dbg_cpu_write", false,-1);
    tracep->declBit(c+944,"dbg_cpu_read", false,-1);
    tracep->declBus(c+935,"dbg_cmd_data", false,-1, 31,0);
    tracep->declBus(c+939,"dbg_cmd_strb", false,-1, 3,0);
    tracep->declBit(c+945,"reset_hold", false,-1);
    tracep->declBit(c+946,"halt_on_fault", false,-1);
    tracep->declBit(c+946,"dbg_catch", false,-1);
    tracep->declBit(c+947,"reset_request", false,-1);
    tracep->declBit(c+948,"release_request", false,-1);
    tracep->declBit(c+949,"halt_request", false,-1);
    tracep->declBit(c+950,"step_request", false,-1);
    tracep->declBit(c+951,"clear_cache_request", false,-1);
    tracep->declBit(c+952,"cmd_reset", false,-1);
    tracep->declBit(c+953,"cmd_halt", false,-1);
    tracep->declBit(c+954,"cmd_step", false,-1);
    tracep->declBit(c+955,"cmd_clear_cache", false,-1);
    tracep->declBit(c+956,"cmd_write", false,-1);
    tracep->declBit(c+957,"cmd_read", false,-1);
    tracep->declBus(c+958,"cmd_waddr", false,-1, 4,0);
    tracep->declBus(c+959,"cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+960,"cpu_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+952,"cpu_reset", false,-1);
    tracep->declBit(c+953,"cpu_halt", false,-1);
    tracep->declBit(c+961,"cpu_has_halted", false,-1);
    tracep->declBit(c+962,"cpu_dbg_stall", false,-1);
    tracep->declBus(c+963,"cpu_status", false,-1, 31,0);
    tracep->declBit(c+964,"cpu_gie", false,-1);
    tracep->declBit(c+4557,"wdt_stall", false,-1);
    tracep->declBit(c+965,"wdt_ack", false,-1);
    tracep->declBit(c+966,"wdt_reset", false,-1);
    tracep->declBus(c+967,"wdt_data", false,-1, 31,0);
    tracep->declBit(c+968,"wdbus_ack", false,-1);
    tracep->declBus(c+969,"r_wdbus_data", false,-1, 24,0);
    tracep->declBus(c+970,"pic_data", false,-1, 31,0);
    tracep->declBus(c+971,"wdbus_data", false,-1, 31,0);
    tracep->declBit(c+972,"reset_wdbus_timer", false,-1);
    tracep->declBit(c+973,"wdbus_int", false,-1);
    tracep->declBit(c+45,"cpu_op_stall", false,-1);
    tracep->declBit(c+974,"cpu_pf_stall", false,-1);
    tracep->declBit(c+975,"cpu_i_count", false,-1);
    tracep->declBit(c+976,"dmac_stb", false,-1);
    tracep->declBit(c+977,"dc_err", false,-1);
    tracep->declBus(c+978,"dmac_data", false,-1, 31,0);
    tracep->declBit(c+4557,"dmac_stall", false,-1);
    tracep->declBit(c+979,"dmac_ack", false,-1);
    tracep->declBit(c+980,"dc_cyc", false,-1);
    tracep->declBit(c+981,"dc_stb", false,-1);
    tracep->declBit(c+982,"dc_we", false,-1);
    tracep->declBit(c+983,"dc_stall", false,-1);
    tracep->declBit(c+984,"dc_ack", false,-1);
    tracep->declBus(c+985,"dc_addr", false,-1, 24,0);
    tracep->declArray(c+986,"dc_data", false,-1, 511,0);
    tracep->declQuad(c+1002,"dc_sel", false,-1, 63,0);
    tracep->declBit(c+1004,"cpu_gbl_cyc", false,-1);
    tracep->declBus(c+1005,"dmac_int_vec", false,-1, 31,0);
    tracep->declBit(c+1006,"ctri_sel", false,-1);
    tracep->declBit(c+4557,"ctri_stall", false,-1);
    tracep->declBit(c+1006,"ctri_ack", false,-1);
    tracep->declBus(c+1007,"ctri_data", false,-1, 31,0);
    tracep->declBit(c+4557,"tma_stall", false,-1);
    tracep->declBit(c+1008,"tma_ack", false,-1);
    tracep->declBit(c+4557,"tmb_stall", false,-1);
    tracep->declBit(c+1009,"tmb_ack", false,-1);
    tracep->declBit(c+4557,"tmc_stall", false,-1);
    tracep->declBit(c+1010,"tmc_ack", false,-1);
    tracep->declBit(c+4557,"jif_stall", false,-1);
    tracep->declBit(c+1011,"jif_ack", false,-1);
    tracep->declBus(c+1012,"tma_data", false,-1, 31,0);
    tracep->declBus(c+1013,"tmb_data", false,-1, 31,0);
    tracep->declBus(c+1014,"tmc_data", false,-1, 31,0);
    tracep->declBus(c+1015,"jif_data", false,-1, 31,0);
    tracep->declBit(c+4557,"pic_stall", false,-1);
    tracep->declBit(c+1016,"pic_ack", false,-1);
    tracep->declBit(c+1017,"cpu_gbl_stb", false,-1);
    tracep->declBit(c+1018,"cpu_lcl_cyc", false,-1);
    tracep->declBit(c+1019,"cpu_lcl_stb", false,-1);
    tracep->declBit(c+1020,"cpu_we", false,-1);
    tracep->declArray(c+1021,"cpu_data", false,-1, 511,0);
    tracep->declQuad(c+1037,"cpu_sel", false,-1, 63,0);
    tracep->declQuad(c+1037,"mmu_sel", false,-1, 63,0);
    tracep->declArray(c+1039,"cpu_idata", false,-1, 511,0);
    tracep->declBit(c+1055,"cpu_stall", false,-1);
    tracep->declBit(c+1056,"pic_interrupt", false,-1);
    tracep->declBit(c+1057,"cpu_ack", false,-1);
    tracep->declBit(c+1058,"cpu_err", false,-1);
    tracep->declBus(c+1059,"cpu_dbg_data", false,-1, 31,0);
    tracep->declBit(c+260,"ext_stall", false,-1);
    tracep->declBit(c+261,"ext_ack", false,-1);
    tracep->declBit(c+1004,"mmu_cyc", false,-1);
    tracep->declBit(c+1017,"mmu_stb", false,-1);
    tracep->declBit(c+1020,"mmu_we", false,-1);
    tracep->declBit(c+1060,"mmu_stall", false,-1);
    tracep->declBit(c+1061,"mmu_ack", false,-1);
    tracep->declBit(c+1062,"mmu_err", false,-1);
    tracep->declBit(c+4557,"mmus_stall", false,-1);
    tracep->declBit(c+1063,"mmus_ack", false,-1);
    tracep->declBus(c+921,"mmu_addr", false,-1, 24,0);
    tracep->declArray(c+1021,"mmu_data", false,-1, 511,0);
    tracep->declArray(c+263,"mmu_idata", false,-1, 511,0);
    tracep->declBus(c+4556,"mmus_data", false,-1, 31,0);
    tracep->declBit(c+4557,"cpu_miss", false,-1);
    tracep->declBit(c+1060,"mmu_cpu_stall", false,-1);
    tracep->declBit(c+1061,"mmu_cpu_ack", false,-1);
    tracep->declArray(c+263,"mmu_cpu_idata", false,-1, 511,0);
    tracep->declBit(c+4557,"pf_return_stb", false,-1);
    tracep->declBit(c+4557,"pf_return_we", false,-1);
    tracep->declBit(c+4557,"pf_return_cachable", false,-1);
    tracep->declBus(c+4706,"pf_return_v", false,-1, 19,0);
    tracep->declBus(c+4706,"pf_return_p", false,-1, 19,0);
    tracep->declBit(c+238,"ext_cyc", false,-1);
    tracep->declBit(c+239,"ext_stb", false,-1);
    tracep->declBit(c+240,"ext_we", false,-1);
    tracep->declBit(c+1064,"ext_err", false,-1);
    tracep->declBus(c+241,"ext_addr", false,-1, 24,0);
    tracep->declArray(c+242,"ext_odata", false,-1, 511,0);
    tracep->declQuad(c+258,"ext_sel", false,-1, 63,0);
    tracep->declArray(c+263,"ext_idata", false,-1, 511,0);
    tracep->declBus(c+1065,"tmr_data", false,-1, 31,0);
    tracep->declBus(c+1066,"w_ack_idx", false,-1, 2,0);
    tracep->declBus(c+1067,"ack_idx", false,-1, 2,0);
    tracep->declBit(c+1068,"last_sys_stb", false,-1);
    tracep->declBit(c+1069,"cmd_read_ack", false,-1);
    tracep->declBit(c+1063,"r_mmus_ack", false,-1);
    tracep->declBit(c+1070,"dbg_pre_ack", false,-1);
    tracep->declBus(c+1071,"dbg_pre_addr", false,-1, 1,0);
    tracep->declBus(c+1072,"dbg_cpu_status", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("ACCOUNTING_COUNTERS ");
    tracep->declBit(c+4557,"mtc_stall", false,-1);
    tracep->declBit(c+1073,"mtc_ack", false,-1);
    tracep->declBit(c+4557,"moc_stall", false,-1);
    tracep->declBit(c+1074,"moc_ack", false,-1);
    tracep->declBit(c+4557,"mpc_stall", false,-1);
    tracep->declBit(c+1075,"mpc_ack", false,-1);
    tracep->declBit(c+4557,"mic_stall", false,-1);
    tracep->declBit(c+1076,"mic_ack", false,-1);
    tracep->declBit(c+4557,"utc_stall", false,-1);
    tracep->declBit(c+1077,"utc_ack", false,-1);
    tracep->declBit(c+4557,"uoc_stall", false,-1);
    tracep->declBit(c+1078,"uoc_ack", false,-1);
    tracep->declBit(c+4557,"upc_stall", false,-1);
    tracep->declBit(c+1079,"upc_ack", false,-1);
    tracep->declBit(c+4557,"uic_stall", false,-1);
    tracep->declBit(c+1080,"uic_ack", false,-1);
    tracep->declBus(c+1081,"mtc_data", false,-1, 31,0);
    tracep->declBus(c+1082,"moc_data", false,-1, 31,0);
    tracep->declBus(c+1083,"mpc_data", false,-1, 31,0);
    tracep->declBus(c+1084,"mic_data", false,-1, 31,0);
    tracep->declBus(c+1085,"utc_data", false,-1, 31,0);
    tracep->declBus(c+1086,"uoc_data", false,-1, 31,0);
    tracep->declBus(c+1087,"upc_data", false,-1, 31,0);
    tracep->declBus(c+1088,"uic_data", false,-1, 31,0);
    tracep->declBus(c+913,"r_actr_data", false,-1, 31,0);
    tracep->pushNamePrefix("mins_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+975,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1089,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1076,"o_wb_ack", false,-1);
    tracep->declBus(c+1084,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+908,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmstall_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+45,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1090,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1074,"o_wb_ack", false,-1);
    tracep->declBus(c+1082,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+906,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mpstall_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+974,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1091,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1075,"o_wb_ack", false,-1);
    tracep->declBus(c+1083,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+907,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtask_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1093,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1073,"o_wb_ack", false,-1);
    tracep->declBus(c+1081,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+905,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uins_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+1094,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1095,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1080,"o_wb_ack", false,-1);
    tracep->declBus(c+1088,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+912,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("umstall_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+46,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1096,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1078,"o_wb_ack", false,-1);
    tracep->declBus(c+1086,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+910,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("upstall_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+1097,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1098,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1079,"o_wb_ack", false,-1);
    tracep->declBus(c+1087,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+911,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("utask_ctr ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4557,"i_reset", false,-1);
    tracep->declBit(c+1099,"i_event", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1100,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1077,"o_wb_ack", false,-1);
    tracep->declBus(c+1085,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+909,"o_int", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DELAY_THE_DEBUG_BUS ");
    tracep->declBit(c+4557,"dbg_err", false,-1);
    tracep->pushNamePrefix("wbdelay ");
    tracep->declBus(c+4553,"AW", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"DELAY_STALL", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4509,"i_reset", false,-1);
    tracep->declBit(c+40,"i_wb_cyc", false,-1);
    tracep->declBit(c+41,"i_wb_stb", false,-1);
    tracep->declBit(c+42,"i_wb_we", false,-1);
    tracep->declBus(c+43,"i_wb_addr", false,-1, 6,0);
    tracep->declBus(c+44,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+163,"o_wb_stall", false,-1);
    tracep->declBit(c+164,"o_wb_ack", false,-1);
    tracep->declBus(c+410,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+940,"o_wb_err", false,-1);
    tracep->declBit(c+931,"o_dly_cyc", false,-1);
    tracep->declBit(c+932,"o_dly_stb", false,-1);
    tracep->declBit(c+933,"o_dly_we", false,-1);
    tracep->declBus(c+934,"o_dly_addr", false,-1, 6,0);
    tracep->declBus(c+935,"o_dly_data", false,-1, 31,0);
    tracep->declBus(c+939,"o_dly_sel", false,-1, 3,0);
    tracep->declBit(c+937,"i_dly_stall", false,-1);
    tracep->declBit(c+936,"i_dly_ack", false,-1);
    tracep->declBus(c+938,"i_dly_data", false,-1, 31,0);
    tracep->declBit(c+4557,"i_dly_err", false,-1);
    tracep->pushNamePrefix("SKIDBUFFER ");
    tracep->declBit(c+163,"r_stb", false,-1);
    tracep->declBit(c+1101,"r_we", false,-1);
    tracep->declBus(c+1102,"r_addr", false,-1, 6,0);
    tracep->declBus(c+1103,"r_data", false,-1, 31,0);
    tracep->declBus(c+1104,"r_sel", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DMA ");
    tracep->pushNamePrefix("dma_controller ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4542,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4670,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4595,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_REGISTER_RAM", false,-1, 0,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+916,"i_swb_cyc", false,-1);
    tracep->declBit(c+976,"i_swb_stb", false,-1);
    tracep->declBit(c+918,"i_swb_we", false,-1);
    tracep->declBus(c+1105,"i_swb_addr", false,-1, 1,0);
    tracep->declBus(c+920,"i_swb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_swb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_swb_stall", false,-1);
    tracep->declBit(c+979,"o_swb_ack", false,-1);
    tracep->declBus(c+978,"o_swb_data", false,-1, 31,0);
    tracep->declBit(c+980,"o_mwb_cyc", false,-1);
    tracep->declBit(c+981,"o_mwb_stb", false,-1);
    tracep->declBit(c+982,"o_mwb_we", false,-1);
    tracep->declBus(c+985,"o_mwb_addr", false,-1, 24,0);
    tracep->declArray(c+986,"o_mwb_data", false,-1, 511,0);
    tracep->declQuad(c+1002,"o_mwb_sel", false,-1, 63,0);
    tracep->declBit(c+983,"i_mwb_stall", false,-1);
    tracep->declBit(c+984,"i_mwb_ack", false,-1);
    tracep->declArray(c+263,"i_mwb_data", false,-1, 511,0);
    tracep->declBit(c+977,"i_mwb_err", false,-1);
    tracep->declBus(c+1005,"i_dev_ints", false,-1, 31,0);
    tracep->declBit(c+904,"o_interrupt", false,-1);
    tracep->declBus(c+4707,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4546,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+1106,"dma_request", false,-1);
    tracep->declBit(c+1107,"dma_abort", false,-1);
    tracep->declBit(c+1108,"dma_busy", false,-1);
    tracep->declBit(c+1109,"dma_err", false,-1);
    tracep->declBus(c+1110,"dma_src", false,-1, 30,0);
    tracep->declBus(c+1111,"dma_dst", false,-1, 30,0);
    tracep->declBus(c+1112,"read_addr", false,-1, 30,0);
    tracep->declBus(c+1113,"write_addr", false,-1, 30,0);
    tracep->declBus(c+1114,"dma_length", false,-1, 30,0);
    tracep->declBus(c+1115,"remaining_len", false,-1, 30,0);
    tracep->declBus(c+1116,"dma_transferlen", false,-1, 10,0);
    tracep->declBit(c+1117,"dma_trigger", false,-1);
    tracep->declBit(c+1118,"mm2s_request", false,-1);
    tracep->declBit(c+1119,"s2mm_request", false,-1);
    tracep->declBit(c+1120,"mm2s_busy", false,-1);
    tracep->declBit(c+1121,"s2mm_busy", false,-1);
    tracep->declBit(c+1122,"mm2s_err", false,-1);
    tracep->declBit(c+1123,"s2mm_err", false,-1);
    tracep->declBit(c+1124,"mm2s_inc", false,-1);
    tracep->declBit(c+1125,"s2mm_inc", false,-1);
    tracep->declBus(c+1126,"mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1127,"s2mm_size", false,-1, 1,0);
    tracep->declBus(c+1128,"mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1129,"s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1130,"mm2s_transferlen", false,-1, 10,0);
    tracep->declBus(c+1130,"s2mm_transferlen", false,-1, 10,0);
    tracep->declBit(c+1131,"mm2s_rd_cyc", false,-1);
    tracep->declBit(c+1132,"mm2s_rd_stb", false,-1);
    tracep->declBit(c+4557,"mm2s_rd_we", false,-1);
    tracep->declBit(c+1133,"mm2s_rd_stall", false,-1);
    tracep->declBit(c+1134,"mm2s_rd_ack", false,-1);
    tracep->declBit(c+1135,"mm2s_rd_err", false,-1);
    tracep->declBus(c+1136,"mm2s_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"mm2s_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1137,"mm2s_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1139,"mm2s_valid", false,-1);
    tracep->declBit(c+1140,"mm2s_ready", false,-1);
    tracep->declBit(c+1141,"mm2s_last", false,-1);
    tracep->declArray(c+1142,"mm2s_data", false,-1, 511,0);
    tracep->declBus(c+1158,"mm2s_bytes", false,-1, 6,0);
    tracep->declBit(c+1159,"rx_valid", false,-1);
    tracep->declBit(c+1160,"rx_ready", false,-1);
    tracep->declBit(c+1161,"rx_last", false,-1);
    tracep->declArray(c+1162,"rx_data", false,-1, 511,0);
    tracep->declBus(c+1178,"rx_bytes", false,-1, 6,0);
    tracep->declBit(c+1179,"tx_valid", false,-1);
    tracep->declBit(c+1180,"tx_ready", false,-1);
    tracep->declBit(c+1181,"tx_last", false,-1);
    tracep->declArray(c+1182,"tx_data", false,-1, 511,0);
    tracep->declBus(c+1198,"tx_bytes", false,-1, 6,0);
    tracep->declBit(c+1199,"sfifo_full", false,-1);
    tracep->declBit(c+1200,"sfifo_empty", false,-1);
    tracep->declBus(c+1201,"ign_sfifo_fill", false,-1, 4,0);
    tracep->declBit(c+1202,"s2mm_valid", false,-1);
    tracep->declBit(c+1203,"s2mm_ready", false,-1);
    tracep->declBit(c+1204,"s2mm_last", false,-1);
    tracep->declArray(c+1205,"s2mm_data", false,-1, 511,0);
    tracep->declBus(c+1221,"s2mm_bytes", false,-1, 6,0);
    tracep->declBit(c+1222,"s2mm_wr_cyc", false,-1);
    tracep->declBit(c+1223,"s2mm_wr_stb", false,-1);
    tracep->declBit(c+4558,"s2mm_wr_we", false,-1);
    tracep->declBit(c+1224,"s2mm_wr_stall", false,-1);
    tracep->declBit(c+1225,"s2mm_wr_ack", false,-1);
    tracep->declBit(c+1226,"s2mm_wr_err", false,-1);
    tracep->declBus(c+1227,"s2mm_wr_addr", false,-1, 24,0);
    tracep->declArray(c+986,"s2mm_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1228,"s2mm_wr_sel", false,-1, 63,0);
    tracep->declBit(c+980,"wb_cyc", false,-1);
    tracep->declBit(c+981,"wb_stb", false,-1);
    tracep->declBit(c+982,"wb_we", false,-1);
    tracep->declBit(c+983,"wb_stall", false,-1);
    tracep->declBit(c+984,"wb_ack", false,-1);
    tracep->declBit(c+977,"wb_err", false,-1);
    tracep->declBus(c+985,"wb_addr", false,-1, 24,0);
    tracep->declArray(c+986,"wb_data", false,-1, 511,0);
    tracep->declArray(c+263,"wb_idata", false,-1, 511,0);
    tracep->declQuad(c+1002,"wb_sel", false,-1, 63,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declArray(c+4708,"SCHEME", false,-1, 87,0);
    tracep->declBus(c+4594,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1131,"i_a_cyc", false,-1);
    tracep->declBit(c+1132,"i_a_stb", false,-1);
    tracep->declBit(c+4557,"i_a_we", false,-1);
    tracep->declBus(c+1136,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+986,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1137,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1133,"o_a_stall", false,-1);
    tracep->declBit(c+1134,"o_a_ack", false,-1);
    tracep->declBit(c+1135,"o_a_err", false,-1);
    tracep->declBit(c+1222,"i_b_cyc", false,-1);
    tracep->declBit(c+1223,"i_b_stb", false,-1);
    tracep->declBit(c+4558,"i_b_we", false,-1);
    tracep->declBus(c+1227,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+986,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1228,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1224,"o_b_stall", false,-1);
    tracep->declBit(c+1225,"o_b_ack", false,-1);
    tracep->declBit(c+1226,"o_b_err", false,-1);
    tracep->declBit(c+980,"o_cyc", false,-1);
    tracep->declBit(c+981,"o_stb", false,-1);
    tracep->declBit(c+982,"o_we", false,-1);
    tracep->declBus(c+985,"o_adr", false,-1, 24,0);
    tracep->declArray(c+986,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1002,"o_sel", false,-1, 63,0);
    tracep->declBit(c+983,"i_stall", false,-1);
    tracep->declBit(c+984,"i_ack", false,-1);
    tracep->declBit(c+977,"i_err", false,-1);
    tracep->declBit(c+1230,"r_a_owner", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("ALT ");
    tracep->declBit(c+1231,"last_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_controller ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4542,"LGMEMLEN", false,-1, 31,0);
    tracep->declBus(c+4595,"SLV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4670,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4711,"ABORT_KEY", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4670,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+916,"i_cyc", false,-1);
    tracep->declBit(c+976,"i_stb", false,-1);
    tracep->declBit(c+918,"i_we", false,-1);
    tracep->declBus(c+1105,"i_addr", false,-1, 1,0);
    tracep->declBus(c+920,"i_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_stall", false,-1);
    tracep->declBit(c+979,"o_ack", false,-1);
    tracep->declBus(c+978,"o_data", false,-1, 31,0);
    tracep->declBit(c+1106,"o_dma_request", false,-1);
    tracep->declBit(c+1107,"o_dma_abort", false,-1);
    tracep->declBit(c+1108,"i_dma_busy", false,-1);
    tracep->declBit(c+1109,"i_dma_err", false,-1);
    tracep->declBus(c+1110,"o_src_addr", false,-1, 30,0);
    tracep->declBus(c+1111,"o_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1114,"o_length", false,-1, 30,0);
    tracep->declBus(c+1116,"o_transferlen", false,-1, 10,0);
    tracep->declBit(c+1124,"o_mm2s_inc", false,-1);
    tracep->declBit(c+1125,"o_s2mm_inc", false,-1);
    tracep->declBus(c+1126,"o_mm2s_size", false,-1, 1,0);
    tracep->declBus(c+1127,"o_s2mm_size", false,-1, 1,0);
    tracep->declBit(c+1117,"o_trigger", false,-1);
    tracep->declBus(c+1112,"i_current_src", false,-1, 30,0);
    tracep->declBus(c+1113,"i_current_dst", false,-1, 30,0);
    tracep->declBus(c+1115,"i_remaining_len", false,-1, 30,0);
    tracep->declBus(c+1005,"i_dma_int", false,-1, 31,0);
    tracep->declBit(c+904,"o_interrupt", false,-1);
    tracep->declBit(c+1232,"int_trigger", false,-1);
    tracep->declBit(c+1233,"r_err", false,-1);
    tracep->declBit(c+1234,"r_zero_len", false,-1);
    tracep->declBit(c+1235,"r_busy", false,-1);
    tracep->declBus(c+1236,"int_sel", false,-1, 4,0);
    tracep->declBus(c+1237,"next_src", false,-1, 31,0);
    tracep->declBus(c+1238,"next_dst", false,-1, 31,0);
    tracep->declBus(c+1239,"next_len", false,-1, 31,0);
    tracep->declBus(c+1240,"next_tlen", false,-1, 31,0);
    tracep->declBus(c+1241,"w_control_reg", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("UNUSED_LEN ");
    tracep->declBit(c+4557,"unused_len", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_WIDE_ADDR ");
    tracep->declBit(c+4557,"unused_addr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_dma_fsm ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4670,"LGDMALENGTH", false,-1, 31,0);
    tracep->declBus(c+4542,"LGSUBLENGTH", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1107,"i_soft_reset", false,-1);
    tracep->declBit(c+1106,"i_dma_request", false,-1);
    tracep->declBit(c+1108,"o_dma_busy", false,-1);
    tracep->declBit(c+1109,"o_dma_err", false,-1);
    tracep->declBus(c+1110,"i_src_addr", false,-1, 30,0);
    tracep->declBus(c+1111,"i_dst_addr", false,-1, 30,0);
    tracep->declBus(c+1114,"i_length", false,-1, 30,0);
    tracep->declBus(c+1116,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1115,"o_remaining_len", false,-1, 30,0);
    tracep->declBit(c+1117,"i_trigger", false,-1);
    tracep->declBit(c+1118,"o_mm2s_request", false,-1);
    tracep->declBit(c+1120,"i_mm2s_busy", false,-1);
    tracep->declBit(c+1122,"i_mm2s_err", false,-1);
    tracep->declBit(c+1124,"i_mm2s_inc", false,-1);
    tracep->declBus(c+1128,"o_mm2s_addr", false,-1, 30,0);
    tracep->declBus(c+1130,"o_mm2s_transferlen", false,-1, 10,0);
    tracep->declBit(c+1119,"o_s2mm_request", false,-1);
    tracep->declBit(c+1121,"i_s2mm_busy", false,-1);
    tracep->declBit(c+1123,"i_s2mm_err", false,-1);
    tracep->declBit(c+1125,"i_s2mm_inc", false,-1);
    tracep->declBus(c+1129,"o_s2mm_addr", false,-1, 30,0);
    tracep->declBus(c+1130,"o_s2mm_transferlen", false,-1, 10,0);
    tracep->declBus(c+4597,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+4598,"S_WAIT", false,-1, 1,0);
    tracep->declBus(c+4599,"S_READ", false,-1, 1,0);
    tracep->declBus(c+4600,"S_WRITE", false,-1, 1,0);
    tracep->declBus(c+1115,"r_length", false,-1, 30,0);
    tracep->declBus(c+1130,"r_transferlen", false,-1, 10,0);
    tracep->declBus(c+1242,"fsm_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mm2s ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4542,"LGLENGTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+1243,"i_reset", false,-1);
    tracep->declBit(c+1118,"i_request", false,-1);
    tracep->declBit(c+1120,"o_busy", false,-1);
    tracep->declBit(c+1122,"o_err", false,-1);
    tracep->declBit(c+1124,"i_inc", false,-1);
    tracep->declBus(c+1126,"i_size", false,-1, 1,0);
    tracep->declBus(c+1130,"i_transferlen", false,-1, 10,0);
    tracep->declBus(c+1128,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1131,"o_rd_cyc", false,-1);
    tracep->declBit(c+1132,"o_rd_stb", false,-1);
    tracep->declBit(c+4557,"o_rd_we", false,-1);
    tracep->declBus(c+1136,"o_rd_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"o_rd_data", false,-1, 511,0);
    tracep->declQuad(c+1137,"o_rd_sel", false,-1, 63,0);
    tracep->declBit(c+1133,"i_rd_stall", false,-1);
    tracep->declBit(c+1134,"i_rd_ack", false,-1);
    tracep->declArray(c+263,"i_rd_data", false,-1, 511,0);
    tracep->declBit(c+1135,"i_rd_err", false,-1);
    tracep->declBit(c+1139,"M_VALID", false,-1);
    tracep->declBit(c+1140,"M_READY", false,-1);
    tracep->declArray(c+1142,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1158,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1141,"M_LAST", false,-1);
    tracep->declBus(c+4600,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4599,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4598,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4597,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+1244,"nxtstb_size", false,-1, 6,0);
    tracep->declBus(c+1245,"rdstb_size", false,-1, 6,0);
    tracep->declBus(c+1246,"rdack_size", false,-1, 6,0);
    tracep->declBus(c+1247,"first_size", false,-1, 6,0);
    tracep->declBus(c+1248,"next_addr", false,-1, 30,0);
    tracep->declBus(c+1249,"last_request_addr", false,-1, 30,0);
    tracep->declBus(c+1250,"subaddr", false,-1, 5,0);
    tracep->declBus(c+1251,"rdack_subaddr", false,-1, 5,0);
    tracep->declQuad(c+1252,"nxtstb_sel", false,-1, 63,0);
    tracep->declQuad(c+1254,"first_sel", false,-1, 63,0);
    tracep->declQuad(c+1256,"base_sel", false,-1, 63,0);
    tracep->declQuad(c+1258,"ibase_sel", false,-1, 63,0);
    tracep->declBus(c+1260,"wb_outstanding", false,-1, 10,0);
    tracep->declBus(c+1261,"fill", false,-1, 7,0);
    tracep->declBus(c+1262,"next_fill", false,-1, 7,0);
    tracep->declBit(c+1139,"m_valid", false,-1);
    tracep->declBit(c+1141,"m_last", false,-1);
    tracep->declArray(c+1142,"sreg", false,-1, 511,0);
    tracep->declBus(c+1158,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1263,"rdstb_len", false,-1, 10,0);
    tracep->declBus(c+1264,"rdack_len", false,-1, 10,0);
    tracep->declBus(c+1265,"pre_shift", false,-1, 5,0);
    tracep->declArray(c+1266,"pre_shifted_data", false,-1, 511,0);
    tracep->declBit(c+1282,"r_inc", false,-1);
    tracep->declBus(c+1283,"r_size", false,-1, 1,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rxgears ");
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1107,"i_soft_reset", false,-1);
    tracep->declBit(c+1139,"S_VALID", false,-1);
    tracep->declBit(c+1140,"S_READY", false,-1);
    tracep->declArray(c+1142,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1158,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1141,"S_LAST", false,-1);
    tracep->declBit(c+1159,"M_VALID", false,-1);
    tracep->declBit(c+1160,"M_READY", false,-1);
    tracep->declArray(c+1162,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1178,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1161,"M_LAST", false,-1);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declArray(c+1284,"sreg", false,-1, 1023,0);
    tracep->declBus(c+1316,"next_fill", false,-1, 7,0);
    tracep->declBus(c+1317,"fill", false,-1, 7,0);
    tracep->declBit(c+1159,"m_valid", false,-1);
    tracep->declBit(c+1161,"m_last", false,-1);
    tracep->declBit(c+1318,"next_last", false,-1);
    tracep->declBit(c+1319,"r_last", false,-1);
    tracep->declBit(c+1320,"r_full", false,-1);
    tracep->declBus(c+1178,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1321,"shift", false,-1, 5,0);
    tracep->declArray(c+1322,"s_data", false,-1, 511,0);
    tracep->declBus(c+4712,"ik", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_s2mm ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4542,"LGPIPE", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+1243,"i_reset", false,-1);
    tracep->declBit(c+1119,"i_request", false,-1);
    tracep->declBit(c+1121,"o_busy", false,-1);
    tracep->declBit(c+1123,"o_err", false,-1);
    tracep->declBit(c+1125,"i_inc", false,-1);
    tracep->declBus(c+1127,"i_size", false,-1, 1,0);
    tracep->declBus(c+1129,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1202,"S_VALID", false,-1);
    tracep->declBit(c+1203,"S_READY", false,-1);
    tracep->declArray(c+1205,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1221,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1204,"S_LAST", false,-1);
    tracep->declBit(c+1222,"o_wr_cyc", false,-1);
    tracep->declBit(c+1223,"o_wr_stb", false,-1);
    tracep->declBit(c+4558,"o_wr_we", false,-1);
    tracep->declBus(c+1227,"o_wr_addr", false,-1, 24,0);
    tracep->declArray(c+986,"o_wr_data", false,-1, 511,0);
    tracep->declQuad(c+1228,"o_wr_sel", false,-1, 63,0);
    tracep->declBit(c+1224,"i_wr_stall", false,-1);
    tracep->declBit(c+1225,"i_wr_ack", false,-1);
    tracep->declArray(c+263,"i_wr_data", false,-1, 511,0);
    tracep->declBit(c+1226,"i_wr_err", false,-1);
    tracep->declBus(c+4600,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4599,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4598,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4597,"SZ_BUS", false,-1, 1,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+6,"ik", false,-1, 31,0);
    tracep->declBit(c+1338,"r_inc", false,-1);
    tracep->declBus(c+1339,"r_size", false,-1, 1,0);
    tracep->declBus(c+1340,"next_addr", false,-1, 31,0);
    tracep->declBus(c+1341,"subaddr", false,-1, 5,0);
    tracep->declArray(c+1342,"next_data", false,-1, 1023,0);
    tracep->declArray(c+1374,"r_data", false,-1, 511,0);
    tracep->declArray(c+1390,"next_sel", false,-1, 127,0);
    tracep->declArray(c+1394,"pre_sel", false,-1, 127,0);
    tracep->declQuad(c+1398,"r_sel", false,-1, 63,0);
    tracep->declBit(c+1400,"r_last", false,-1);
    tracep->declBus(c+1401,"wb_outstanding", false,-1, 9,0);
    tracep->declBit(c+1402,"wb_pipeline_full", false,-1);
    tracep->declBit(c+1403,"addr_overflow", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sfifo ");
    tracep->declBus(c+4707,"BW", false,-1, 31,0);
    tracep->declBus(c+4546,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+1243,"i_reset", false,-1);
    tracep->declBit(c+1159,"i_wr", false,-1);
    tracep->declArray(c+1404,"i_data", false,-1, 519,0);
    tracep->declBit(c+1199,"o_full", false,-1);
    tracep->declBus(c+1201,"o_fill", false,-1, 4,0);
    tracep->declBit(c+1180,"i_rd", false,-1);
    tracep->declArray(c+1421,"o_data", false,-1, 519,0);
    tracep->declBit(c+1200,"o_empty", false,-1);
    tracep->declBus(c+4550,"FLEN", false,-1, 31,0);
    tracep->declBit(c+1199,"r_full", false,-1);
    tracep->declBit(c+1200,"r_empty", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+1438+i*17,"mem", true,(i+0), 519,0);
    }
    tracep->declBus(c+1710,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+1711,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1712,"w_wr", false,-1);
    tracep->declBit(c+1713,"w_rd", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_txgears ");
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1107,"i_soft_reset", false,-1);
    tracep->declBus(c+1127,"i_size", false,-1, 1,0);
    tracep->declBit(c+1179,"S_VALID", false,-1);
    tracep->declBit(c+1180,"S_READY", false,-1);
    tracep->declArray(c+1182,"S_DATA", false,-1, 511,0);
    tracep->declBus(c+1198,"S_BYTES", false,-1, 6,0);
    tracep->declBit(c+1181,"S_LAST", false,-1);
    tracep->declBit(c+1202,"M_VALID", false,-1);
    tracep->declBit(c+1203,"M_READY", false,-1);
    tracep->declArray(c+1205,"M_DATA", false,-1, 511,0);
    tracep->declBus(c+1221,"M_BYTES", false,-1, 6,0);
    tracep->declBit(c+1204,"M_LAST", false,-1);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4600,"SZ_BYTE", false,-1, 1,0);
    tracep->declBus(c+4599,"SZ_16B", false,-1, 1,0);
    tracep->declBus(c+4598,"SZ_32B", false,-1, 1,0);
    tracep->declBus(c+4597,"SZ_BUS", false,-1, 1,0);
    tracep->declBit(c+1202,"m_valid", false,-1);
    tracep->declBit(c+1204,"m_last", false,-1);
    tracep->declBit(c+1714,"r_last", false,-1);
    tracep->declBit(c+1715,"r_next", false,-1);
    tracep->declArray(c+1205,"sreg", false,-1, 511,0);
    tracep->declBus(c+1221,"m_bytes", false,-1, 6,0);
    tracep->declBus(c+1716,"fill", false,-1, 6,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GEN_DBG_CATCH ");
    tracep->declBit(c+946,"r_dbg_catch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("INITIAL_RESET_HOLD ");
    tracep->declBus(c+1717,"reset_counter", false,-1, 4,0);
    tracep->declBit(c+945,"r_reset_hold", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MAIN_PIC ");
    tracep->pushNamePrefix("pic ");
    tracep->declBus(c+4639,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1016,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1016,"o_wb_ack", false,-1);
    tracep->declBus(c+970,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+897,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+1056,"o_interrupt", false,-1);
    tracep->declBus(c+1718,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1719,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1720,"r_mie", false,-1);
    tracep->declBit(c+1721,"w_any", false,-1);
    tracep->declBit(c+1722,"wb_write", false,-1);
    tracep->declBit(c+1723,"enable_ints", false,-1);
    tracep->declBit(c+1724,"disable_ints", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PIC_WITH_ACCOUNTING ");
    tracep->pushNamePrefix("ALT_PIC ");
    tracep->pushNamePrefix("ctri ");
    tracep->declBus(c+4639,"IUSED", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+1006,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1006,"o_wb_ack", false,-1);
    tracep->declBus(c+1007,"o_wb_data", false,-1, 31,0);
    tracep->declBus(c+898,"i_brd_ints", false,-1, 14,0);
    tracep->declBit(c+899,"o_interrupt", false,-1);
    tracep->declBus(c+1725,"r_int_state", false,-1, 14,0);
    tracep->declBus(c+1726,"r_int_enable", false,-1, 14,0);
    tracep->declBit(c+1727,"r_mie", false,-1);
    tracep->declBit(c+1728,"w_any", false,-1);
    tracep->declBit(c+1729,"wb_write", false,-1);
    tracep->declBit(c+1730,"enable_ints", false,-1);
    tracep->declBit(c+1731,"disable_ints", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmacvcpu ");
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+1004,"i_a_cyc", false,-1);
    tracep->declBit(c+1017,"i_a_stb", false,-1);
    tracep->declBit(c+1020,"i_a_we", false,-1);
    tracep->declBus(c+921,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1021,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1037,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1060,"o_a_stall", false,-1);
    tracep->declBit(c+1061,"o_a_ack", false,-1);
    tracep->declBit(c+1062,"o_a_err", false,-1);
    tracep->declBit(c+980,"i_b_cyc", false,-1);
    tracep->declBit(c+981,"i_b_stb", false,-1);
    tracep->declBit(c+982,"i_b_we", false,-1);
    tracep->declBus(c+985,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+986,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+1002,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+983,"o_b_stall", false,-1);
    tracep->declBit(c+984,"o_b_ack", false,-1);
    tracep->declBit(c+977,"o_b_err", false,-1);
    tracep->declBit(c+238,"o_cyc", false,-1);
    tracep->declBit(c+239,"o_stb", false,-1);
    tracep->declBit(c+240,"o_we", false,-1);
    tracep->declBus(c+241,"o_adr", false,-1, 24,0);
    tracep->declArray(c+242,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+258,"o_sel", false,-1, 63,0);
    tracep->declBit(c+260,"i_stall", false,-1);
    tracep->declBit(c+261,"i_ack", false,-1);
    tracep->declBit(c+1064,"i_err", false,-1);
    tracep->declBit(c+1732,"r_a_owner", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thecpu ");
    tracep->declBus(c+4548,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4549,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4638,"OPT_LGICACHE", false,-1, 31,0);
    tracep->declBus(c+4595,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4543,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4594,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4638,"OPT_LGDCACHE", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4551,"WITH_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1056,"i_interrupt", false,-1);
    tracep->declBit(c+915,"i_cpu_clken", false,-1);
    tracep->declBit(c+953,"i_halt", false,-1);
    tracep->declBit(c+955,"i_clear_cache", false,-1);
    tracep->declBus(c+958,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+956,"i_dbg_we", false,-1);
    tracep->declBus(c+959,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1733,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+962,"o_dbg_stall", false,-1);
    tracep->declBit(c+961,"o_halted", false,-1);
    tracep->declBus(c+1059,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+960,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+941,"o_break", false,-1);
    tracep->declBit(c+1004,"o_wb_gbl_cyc", false,-1);
    tracep->declBit(c+1017,"o_wb_gbl_stb", false,-1);
    tracep->declBit(c+1018,"o_wb_lcl_cyc", false,-1);
    tracep->declBit(c+1019,"o_wb_lcl_stb", false,-1);
    tracep->declBit(c+1020,"o_wb_we", false,-1);
    tracep->declBus(c+921,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1021,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1037,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1055,"i_wb_stall", false,-1);
    tracep->declBit(c+1057,"i_wb_ack", false,-1);
    tracep->declArray(c+1039,"i_wb_data", false,-1, 511,0);
    tracep->declBit(c+1058,"i_wb_err", false,-1);
    tracep->declBit(c+45,"o_op_stall", false,-1);
    tracep->declBit(c+974,"o_pf_stall", false,-1);
    tracep->declBit(c+975,"o_i_count", false,-1);
    tracep->declBus(c+4556,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4482,"o_prof_stb", false,-1);
    tracep->declBus(c+4483,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4484,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4595,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4558,"cpu_clken", false,-1);
    tracep->declBit(c+4405,"cpu_clock", false,-1);
    tracep->declBit(c+4558,"clk_gate", false,-1);
    tracep->declBus(c+4556,"cpu_debug", false,-1, 31,0);
    tracep->declBit(c+1734,"pf_new_pc", false,-1);
    tracep->declBit(c+1735,"clear_icache", false,-1);
    tracep->declBit(c+47,"pf_ready", false,-1);
    tracep->declBus(c+1736,"pf_request_address", false,-1, 30,0);
    tracep->declBus(c+1737,"pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1738,"pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+1739,"pf_valid", false,-1);
    tracep->declBit(c+1740,"pf_illegal", false,-1);
    tracep->declBit(c+1741,"pf_cyc", false,-1);
    tracep->declBit(c+1742,"pf_stb", false,-1);
    tracep->declBit(c+1743,"pf_stall", false,-1);
    tracep->declBit(c+1744,"pf_ack", false,-1);
    tracep->declBit(c+1745,"pf_err", false,-1);
    tracep->declBus(c+1746,"pf_addr", false,-1, 24,0);
    tracep->declBit(c+4557,"pf_we", false,-1);
    tracep->declArray(c+4559,"pf_data", false,-1, 511,0);
    tracep->declBit(c+1747,"clear_dcache", false,-1);
    tracep->declBit(c+48,"mem_ce", false,-1);
    tracep->declBit(c+1748,"bus_lock", false,-1);
    tracep->declBus(c+1749,"mem_op", false,-1, 2,0);
    tracep->declBus(c+1750,"mem_cpu_addr", false,-1, 31,0);
    tracep->declBus(c+1751,"mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+1752,"mem_wdata", false,-1, 31,0);
    tracep->declArray(c+1021,"mem_data", false,-1, 511,0);
    tracep->declBus(c+1753,"mem_reg", false,-1, 4,0);
    tracep->declBit(c+1754,"mem_busy", false,-1);
    tracep->declBit(c+1755,"mem_rdbusy", false,-1);
    tracep->declBit(c+1756,"mem_pipe_stalled", false,-1);
    tracep->declBit(c+1757,"mem_valid", false,-1);
    tracep->declBit(c+1758,"mem_bus_err", false,-1);
    tracep->declBus(c+1759,"mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1760,"mem_result", false,-1, 31,0);
    tracep->declBit(c+1761,"mem_stb_lcl", false,-1);
    tracep->declBit(c+1762,"mem_stb_gbl", false,-1);
    tracep->declBit(c+1763,"mem_cyc_lcl", false,-1);
    tracep->declBit(c+1764,"mem_cyc_gbl", false,-1);
    tracep->declBus(c+1765,"mem_bus_addr", false,-1, 24,0);
    tracep->declBit(c+1766,"mem_we", false,-1);
    tracep->declBit(c+1767,"mem_stall", false,-1);
    tracep->declBit(c+1768,"mem_ack", false,-1);
    tracep->declBit(c+1769,"mem_err", false,-1);
    tracep->declQuad(c+1770,"mem_sel", false,-1, 63,0);
    tracep->declBit(c+962,"w_dbg_stall", false,-1);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("DATA_CACHE ");
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+4633,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4549,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4543,"LGNLINES", false,-1, 31,0);
    tracep->declBus(c+4634,"NAUX", false,-1, 31,0);
    tracep->declBus(c+4595,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_LOCAL_BUS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DUAL_READ_PORT", false,-1, 0,0);
    tracep->declBus(c+4546,"OPT_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4633,"CS", false,-1, 31,0);
    tracep->declBus(c+4543,"LS", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4546,"DP", false,-1, 31,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4597,"DC_IDLE", false,-1, 1,0);
    tracep->declBus(c+4598,"DC_WRITE", false,-1, 1,0);
    tracep->declBus(c+4599,"DC_READS", false,-1, 1,0);
    tracep->declBus(c+4600,"DC_READC", false,-1, 1,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1747,"i_clear", false,-1);
    tracep->declBit(c+48,"i_pipe_stb", false,-1);
    tracep->declBit(c+1748,"i_lock", false,-1);
    tracep->declBus(c+1749,"i_op", false,-1, 2,0);
    tracep->declBus(c+1750,"i_addr", false,-1, 31,0);
    tracep->declBus(c+1752,"i_data", false,-1, 31,0);
    tracep->declBus(c+1753,"i_oreg", false,-1, 4,0);
    tracep->declBit(c+1754,"o_busy", false,-1);
    tracep->declBit(c+1755,"o_rdbusy", false,-1);
    tracep->declBit(c+1756,"o_pipe_stalled", false,-1);
    tracep->declBit(c+1757,"o_valid", false,-1);
    tracep->declBit(c+1758,"o_err", false,-1);
    tracep->declBus(c+1759,"o_wreg", false,-1, 4,0);
    tracep->declBus(c+1760,"o_data", false,-1, 31,0);
    tracep->declBit(c+1764,"o_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1763,"o_wb_cyc_lcl", false,-1);
    tracep->declBit(c+1762,"o_wb_stb_gbl", false,-1);
    tracep->declBit(c+1761,"o_wb_stb_lcl", false,-1);
    tracep->declBit(c+1766,"o_wb_we", false,-1);
    tracep->declBus(c+1765,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+1021,"o_wb_data", false,-1, 511,0);
    tracep->declQuad(c+1770,"o_wb_sel", false,-1, 63,0);
    tracep->declBit(c+1767,"i_wb_stall", false,-1);
    tracep->declBit(c+1768,"i_wb_ack", false,-1);
    tracep->declBit(c+1769,"i_wb_err", false,-1);
    tracep->declArray(c+1039,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4638,"FIF_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1772,"ik", false,-1, 31,0);
    tracep->declBit(c+1773,"cyc", false,-1);
    tracep->declBit(c+1774,"stb", false,-1);
    tracep->declBit(c+1775,"last_ack", false,-1);
    tracep->declBit(c+1776,"end_of_line", false,-1);
    tracep->declBit(c+1777,"last_line_stb", false,-1);
    tracep->declBit(c+1778,"r_wb_cyc_gbl", false,-1);
    tracep->declBit(c+1779,"r_wb_cyc_lcl", false,-1);
    tracep->declBus(c+1780,"npending", false,-1, 4,0);
    tracep->declBus(c+1781,"c_v", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1782+i*1,"c_vtags", true,(i+0), 21,0);
    }
    tracep->declBit(c+1790,"set_vflag", false,-1);
    tracep->declBus(c+1791,"state", false,-1, 1,0);
    tracep->declBus(c+1792,"wr_addr", false,-1, 5,0);
    tracep->declArray(c+1793,"cached_iword", false,-1, 511,0);
    tracep->declArray(c+1809,"cached_rword", false,-1, 511,0);
    tracep->declBit(c+1825,"lock_gbl", false,-1);
    tracep->declBit(c+1826,"lock_lcl", false,-1);
    tracep->declBit(c+1827,"c_wr", false,-1);
    tracep->declArray(c+1828,"c_wdata", false,-1, 511,0);
    tracep->declQuad(c+1844,"c_wsel", false,-1, 63,0);
    tracep->declBus(c+1846,"c_waddr", false,-1, 5,0);
    tracep->declBus(c+1847,"last_tag", false,-1, 21,0);
    tracep->declBit(c+1848,"last_tag_valid", false,-1);
    tracep->declBus(c+1849,"i_cline", false,-1, 2,0);
    tracep->declBus(c+1850,"i_caddr", false,-1, 5,0);
    tracep->declBit(c+1851,"cache_miss_inow", false,-1);
    tracep->declBit(c+1852,"w_cachable", false,-1);
    tracep->declBit(c+1853,"raw_cachable_address", false,-1);
    tracep->declBit(c+1854,"r_cachable", false,-1);
    tracep->declBit(c+1855,"r_svalid", false,-1);
    tracep->declBit(c+1856,"r_dvalid", false,-1);
    tracep->declBit(c+1857,"r_rd", false,-1);
    tracep->declBit(c+1858,"r_cache_miss", false,-1);
    tracep->declBit(c+1859,"r_rd_pending", false,-1);
    tracep->declBus(c+1860,"r_addr", false,-1, 24,0);
    tracep->declBus(c+1861,"r_cline", false,-1, 2,0);
    tracep->declBus(c+1862,"r_caddr", false,-1, 5,0);
    tracep->declBus(c+1863,"r_ctag", false,-1, 21,0);
    tracep->declBit(c+1864,"wr_cstb", false,-1);
    tracep->declBit(c+1865,"r_iv", false,-1);
    tracep->declBit(c+1866,"in_cache", false,-1);
    tracep->declBus(c+1867,"r_itag", false,-1, 21,0);
    tracep->declBus(c+1868,"req_data", false,-1, 12,0);
    tracep->declBit(c+1869,"gie", false,-1);
    tracep->declArray(c+1870,"pre_data", false,-1, 511,0);
    tracep->declArray(c+1886,"pre_shifted", false,-1, 511,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_SEL ");
    tracep->declBus(c+1902,"pre_sel", false,-1, 3,0);
    tracep->declQuad(c+1903,"full_sel", false,-1, 63,0);
    tracep->declQuad(c+1770,"r_wb_sel", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_WIDE_BUS ");
    tracep->declBus(c+1905,"pre_shift", false,-1, 31,0);
    tracep->declArray(c+1906,"wide_preshift", false,-1, 511,0);
    tracep->declArray(c+1922,"shifted_data", false,-1, 511,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_PIPE_FIFO ");
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1938+i*1,"fifo_data", true,(i+0), 11,0);
    }
    tracep->declBus(c+1954,"wraddr", false,-1, 4,0);
    tracep->declBus(c+1955,"rdaddr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_BITS ");
    tracep->declBit(c+4713,"unused_aw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("chkaddress ");
    tracep->declBus(c+1956,"i_addr", false,-1, 30,0);
    tracep->declBit(c+1853,"o_cachable", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("NO_CLOCK_GATE ");
    tracep->declBit(c+4557,"unused_clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PFCACHE ");
    tracep->pushNamePrefix("pf ");
    tracep->declBus(c+4633,"LGCACHELEN", false,-1, 31,0);
    tracep->declBus(c+4549,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4543,"LGLINES", false,-1, 31,0);
    tracep->declBus(c+4592,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4601,"CACHELEN", false,-1, 31,0);
    tracep->declBus(c+4633,"CW", false,-1, 31,0);
    tracep->declBus(c+4543,"LS", false,-1, 31,0);
    tracep->declBus(c+4592,"BUSW", false,-1, 31,0);
    tracep->declBus(c+4595,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1734,"i_new_pc", false,-1);
    tracep->declBit(c+1735,"i_clear_cache", false,-1);
    tracep->declBit(c+47,"i_ready", false,-1);
    tracep->declBus(c+1736,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1739,"o_valid", false,-1);
    tracep->declBit(c+1740,"o_illegal", false,-1);
    tracep->declBus(c+1737,"o_insn", false,-1, 31,0);
    tracep->declBus(c+1738,"o_pc", false,-1, 30,0);
    tracep->declBit(c+1741,"o_wb_cyc", false,-1);
    tracep->declBit(c+1742,"o_wb_stb", false,-1);
    tracep->declBit(c+4557,"o_wb_we", false,-1);
    tracep->declBus(c+1746,"o_wb_addr", false,-1, 24,0);
    tracep->declArray(c+4559,"o_wb_data", false,-1, 511,0);
    tracep->declBit(c+1743,"i_wb_stall", false,-1);
    tracep->declBit(c+1744,"i_wb_ack", false,-1);
    tracep->declBit(c+1745,"i_wb_err", false,-1);
    tracep->declArray(c+1039,"i_wb_data", false,-1, 511,0);
    tracep->declBus(c+4555,"INLSB", false,-1, 31,0);
    tracep->declBit(c+1957,"r_v", false,-1);
    tracep->declArray(c+1958,"cache_word", false,-1, 511,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1974+i*1,"cache_tags", true,(i+0), 18,0);
    }
    tracep->declBus(c+1982,"valid_mask", false,-1, 7,0);
    tracep->declBit(c+1983,"r_v_from_pc", false,-1);
    tracep->declBit(c+1984,"r_v_from_last", false,-1);
    tracep->declBit(c+1985,"rvsrc", false,-1);
    tracep->declBit(c+1986,"w_v_from_pc", false,-1);
    tracep->declBit(c+1987,"w_v_from_last", false,-1);
    tracep->declBus(c+1988,"lastpc", false,-1, 30,0);
    tracep->declBus(c+1989,"wraddr", false,-1, 5,0);
    tracep->declBus(c+1990,"pc_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+1991,"last_tag_lookup", false,-1, 24,3);
    tracep->declBus(c+1992,"tag_lookup", false,-1, 24,3);
    tracep->declBus(c+1993,"pc_tag", false,-1, 24,3);
    tracep->declBus(c+1994,"lasttag", false,-1, 24,3);
    tracep->declBit(c+1995,"illegal_valid", false,-1);
    tracep->declBus(c+1996,"illegal_cache", false,-1, 24,3);
    tracep->declArray(c+1997,"r_pc_cache", false,-1, 511,0);
    tracep->declArray(c+2013,"r_last_cache", false,-1, 511,0);
    tracep->declBus(c+1738,"r_pc", false,-1, 30,0);
    tracep->declBit(c+2029,"isrc", false,-1);
    tracep->declBus(c+2030,"delay", false,-1, 1,0);
    tracep->declBit(c+2031,"svmask", false,-1);
    tracep->declBit(c+2032,"last_ack", false,-1);
    tracep->declBit(c+2033,"needload", false,-1);
    tracep->declBit(c+2034,"last_addr", false,-1);
    tracep->declBit(c+2035,"bus_abort", false,-1);
    tracep->declBus(c+2036,"saddr", false,-1, 2,0);
    tracep->declBit(c+49,"w_advance", false,-1);
    tracep->declBit(c+2037,"w_invalidate_result", false,-1);
    tracep->declBus(c+2038,"pc_line", false,-1, 2,0);
    tracep->declBus(c+2039,"last_line", false,-1, 2,0);
    tracep->pushNamePrefix("SHIFT_INSN ");
    tracep->declArray(c+2040,"shifted", false,-1, 511,0);
    tracep->declBus(c+2056,"shift", false,-1, 3,0);
    tracep->declBit(c+4557,"unused_shift", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PRIORITY_DATA ");
    tracep->pushNamePrefix("pformem ");
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_ZERO_ON_IDLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1764,"i_a_cyc_a", false,-1);
    tracep->declBit(c+1763,"i_a_cyc_b", false,-1);
    tracep->declBit(c+1762,"i_a_stb_a", false,-1);
    tracep->declBit(c+1761,"i_a_stb_b", false,-1);
    tracep->declBit(c+1766,"i_a_we", false,-1);
    tracep->declBus(c+1765,"i_a_adr", false,-1, 24,0);
    tracep->declArray(c+1021,"i_a_dat", false,-1, 511,0);
    tracep->declQuad(c+1770,"i_a_sel", false,-1, 63,0);
    tracep->declBit(c+1767,"o_a_stall", false,-1);
    tracep->declBit(c+1768,"o_a_ack", false,-1);
    tracep->declBit(c+1769,"o_a_err", false,-1);
    tracep->declBit(c+1741,"i_b_cyc_a", false,-1);
    tracep->declBit(c+4557,"i_b_cyc_b", false,-1);
    tracep->declBit(c+1742,"i_b_stb_a", false,-1);
    tracep->declBit(c+4557,"i_b_stb_b", false,-1);
    tracep->declBit(c+4557,"i_b_we", false,-1);
    tracep->declBus(c+1746,"i_b_adr", false,-1, 24,0);
    tracep->declArray(c+1021,"i_b_dat", false,-1, 511,0);
    tracep->declQuad(c+4575,"i_b_sel", false,-1, 63,0);
    tracep->declBit(c+1743,"o_b_stall", false,-1);
    tracep->declBit(c+1744,"o_b_ack", false,-1);
    tracep->declBit(c+1745,"o_b_err", false,-1);
    tracep->declBit(c+1004,"o_cyc_a", false,-1);
    tracep->declBit(c+1018,"o_cyc_b", false,-1);
    tracep->declBit(c+1017,"o_stb_a", false,-1);
    tracep->declBit(c+1019,"o_stb_b", false,-1);
    tracep->declBit(c+1020,"o_we", false,-1);
    tracep->declBus(c+921,"o_adr", false,-1, 24,0);
    tracep->declArray(c+1021,"o_dat", false,-1, 511,0);
    tracep->declQuad(c+1037,"o_sel", false,-1, 63,0);
    tracep->declBit(c+1055,"i_stall", false,-1);
    tracep->declBit(c+1057,"i_ack", false,-1);
    tracep->declBit(c+1058,"i_err", false,-1);
    tracep->declBit(c+2057,"r_a_owner", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+4714,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4548,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+4543,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DIV", false,-1, 0,0);
    tracep->declBus(c+4594,"IMPLEMENT_FPU", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DISTRIBUTED_REGS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPELINED_BUS_ACCESS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DCACHE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_CLKGATE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBGPORT", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_TRACE_PORT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PROFILER", false,-1, 0,0);
    tracep->declBus(c+4714,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1056,"i_interrupt", false,-1);
    tracep->declBit(c+4558,"o_clken", false,-1);
    tracep->declBit(c+953,"i_halt", false,-1);
    tracep->declBit(c+955,"i_clear_cache", false,-1);
    tracep->declBus(c+958,"i_dbg_wreg", false,-1, 4,0);
    tracep->declBit(c+956,"i_dbg_we", false,-1);
    tracep->declBus(c+959,"i_dbg_data", false,-1, 31,0);
    tracep->declBus(c+1733,"i_dbg_rreg", false,-1, 4,0);
    tracep->declBit(c+962,"o_dbg_stall", false,-1);
    tracep->declBus(c+1059,"o_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+960,"o_dbg_cc", false,-1, 2,0);
    tracep->declBit(c+941,"o_break", false,-1);
    tracep->declBit(c+1734,"o_pf_new_pc", false,-1);
    tracep->declBit(c+1735,"o_clear_icache", false,-1);
    tracep->declBit(c+47,"o_pf_ready", false,-1);
    tracep->declBus(c+1736,"o_pf_request_address", false,-1, 30,0);
    tracep->declBit(c+1739,"i_pf_valid", false,-1);
    tracep->declBit(c+1740,"i_pf_illegal", false,-1);
    tracep->declBus(c+1737,"i_pf_instruction", false,-1, 31,0);
    tracep->declBus(c+1738,"i_pf_instruction_pc", false,-1, 30,0);
    tracep->declBit(c+1747,"o_clear_dcache", false,-1);
    tracep->declBit(c+48,"o_mem_ce", false,-1);
    tracep->declBit(c+1748,"o_bus_lock", false,-1);
    tracep->declBus(c+1749,"o_mem_op", false,-1, 2,0);
    tracep->declBus(c+1750,"o_mem_addr", false,-1, 31,0);
    tracep->declBus(c+1752,"o_mem_data", false,-1, 31,0);
    tracep->declBus(c+1751,"o_mem_lock_pc", false,-1, 30,0);
    tracep->declBus(c+1753,"o_mem_reg", false,-1, 4,0);
    tracep->declBit(c+1754,"i_mem_busy", false,-1);
    tracep->declBit(c+1755,"i_mem_rdbusy", false,-1);
    tracep->declBit(c+1756,"i_mem_pipe_stalled", false,-1);
    tracep->declBit(c+1757,"i_mem_valid", false,-1);
    tracep->declBit(c+1758,"i_bus_err", false,-1);
    tracep->declBus(c+1759,"i_mem_wreg", false,-1, 4,0);
    tracep->declBus(c+1760,"i_mem_result", false,-1, 31,0);
    tracep->declBit(c+45,"o_op_stall", false,-1);
    tracep->declBit(c+974,"o_pf_stall", false,-1);
    tracep->declBit(c+975,"o_i_count", false,-1);
    tracep->declBus(c+4556,"o_debug", false,-1, 31,0);
    tracep->declBit(c+4482,"o_prof_stb", false,-1);
    tracep->declBus(c+4483,"o_prof_addr", false,-1, 30,0);
    tracep->declBus(c+4484,"o_prof_ticks", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_MEMPIPE", false,-1, 0,0);
    tracep->declBus(c+4715,"RESET_BUS_ADDRESS", false,-1, 28,0);
    tracep->declBus(c+4716,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4589,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4602,"CPU_SUB_OP", false,-1, 3,0);
    tracep->declBus(c+4603,"CPU_AND_OP", false,-1, 3,0);
    tracep->declBus(c+4673,"CPU_BREV_OP", false,-1, 3,0);
    tracep->declBus(c+4678,"CPU_MOV_OP", false,-1, 3,0);
    tracep->declBus(c+4639,"CPU_CLRDCACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4541,"CPU_CLRICACHE_BIT", false,-1, 31,0);
    tracep->declBus(c+4616,"CPU_PHASE_BIT", false,-1, 31,0);
    tracep->declBus(c+4638,"CPU_FPUERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4637,"CPU_DIVERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4542,"CPU_BUSERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4636,"CPU_TRAP_BIT", false,-1, 31,0);
    tracep->declBus(c+4544,"CPU_ILL_BIT", false,-1, 31,0);
    tracep->declBus(c+4553,"CPU_BREAK_BIT", false,-1, 31,0);
    tracep->declBus(c+4633,"CPU_STEP_BIT", false,-1, 31,0);
    tracep->declBus(c+4634,"CPU_GIE_BIT", false,-1, 31,0);
    tracep->declBus(c+4546,"CPU_SLEEP_BIT", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2058+i*1,"regset", true,(i+0), 31,0);
    }
    tracep->declBus(c+2090,"flags", false,-1, 3,0);
    tracep->declBus(c+2091,"iflags", false,-1, 3,0);
    tracep->declBus(c+2092,"w_uflags", false,-1, 15,0);
    tracep->declBus(c+2093,"w_iflags", false,-1, 15,0);
    tracep->declBit(c+2094,"break_en", false,-1);
    tracep->declBit(c+2095,"user_step", false,-1);
    tracep->declBit(c+2096,"sleep", false,-1);
    tracep->declBit(c+2097,"r_halted", false,-1);
    tracep->declBit(c+2098,"break_pending", false,-1);
    tracep->declBit(c+2099,"trap", false,-1);
    tracep->declBit(c+2100,"gie", false,-1);
    tracep->declBit(c+2101,"ubreak", false,-1);
    tracep->declBit(c+2102,"pending_interrupt", false,-1);
    tracep->declBit(c+2103,"stepped", false,-1);
    tracep->declBit(c+2104,"step", false,-1);
    tracep->declBit(c+2105,"ill_err_u", false,-1);
    tracep->declBit(c+2106,"ill_err_i", false,-1);
    tracep->declBit(c+2107,"ibus_err_flag", false,-1);
    tracep->declBit(c+2108,"ubus_err_flag", false,-1);
    tracep->declBit(c+2109,"idiv_err_flag", false,-1);
    tracep->declBit(c+2110,"udiv_err_flag", false,-1);
    tracep->declBit(c+4557,"ifpu_err_flag", false,-1);
    tracep->declBit(c+4557,"ufpu_err_flag", false,-1);
    tracep->declBit(c+2111,"ihalt_phase", false,-1);
    tracep->declBit(c+2112,"uhalt_phase", false,-1);
    tracep->declBit(c+2113,"master_ce", false,-1);
    tracep->declBit(c+50,"master_stall", false,-1);
    tracep->declBus(c+2114,"pf_pc", false,-1, 30,0);
    tracep->declBit(c+2115,"new_pc", false,-1);
    tracep->declBit(c+2115,"clear_pipeline", false,-1);
    tracep->declBit(c+51,"dcd_stalled", false,-1);
    tracep->declBit(c+2100,"pf_gie", false,-1);
    tracep->declBus(c+2116,"dcd_opn", false,-1, 3,0);
    tracep->declBit(c+52,"dcd_ce", false,-1);
    tracep->declBit(c+2117,"dcd_phase", false,-1);
    tracep->declBus(c+2118,"dcd_A", false,-1, 4,0);
    tracep->declBus(c+2119,"dcd_B", false,-1, 4,0);
    tracep->declBus(c+2120,"dcd_R", false,-1, 4,0);
    tracep->declBus(c+2121,"dcd_preA", false,-1, 4,0);
    tracep->declBus(c+2122,"dcd_preB", false,-1, 4,0);
    tracep->declBit(c+2123,"dcd_Acc", false,-1);
    tracep->declBit(c+2124,"dcd_Bcc", false,-1);
    tracep->declBit(c+2125,"dcd_Apc", false,-1);
    tracep->declBit(c+2126,"dcd_Bpc", false,-1);
    tracep->declBit(c+2127,"dcd_Rcc", false,-1);
    tracep->declBit(c+2128,"dcd_Rpc", false,-1);
    tracep->declBus(c+2129,"dcd_F", false,-1, 3,0);
    tracep->declBit(c+2130,"dcd_wR", false,-1);
    tracep->declBit(c+2131,"dcd_rA", false,-1);
    tracep->declBit(c+2132,"dcd_rB", false,-1);
    tracep->declBit(c+2133,"dcd_ALU", false,-1);
    tracep->declBit(c+2134,"dcd_M", false,-1);
    tracep->declBit(c+2135,"dcd_DIV", false,-1);
    tracep->declBit(c+2136,"dcd_FP", false,-1);
    tracep->declBit(c+2137,"dcd_wF", false,-1);
    tracep->declBit(c+2100,"dcd_gie", false,-1);
    tracep->declBit(c+2138,"dcd_break", false,-1);
    tracep->declBit(c+2139,"dcd_lock", false,-1);
    tracep->declBit(c+2140,"dcd_pipe", false,-1);
    tracep->declBit(c+2141,"dcd_ljmp", false,-1);
    tracep->declBit(c+2142,"dcd_valid", false,-1);
    tracep->declBus(c+4511,"dcd_pc", false,-1, 30,0);
    tracep->declBus(c+2143,"dcd_I", false,-1, 31,0);
    tracep->declBit(c+2144,"dcd_zI", false,-1);
    tracep->declBit(c+53,"dcd_A_stall", false,-1);
    tracep->declBit(c+54,"dcd_B_stall", false,-1);
    tracep->declBit(c+4512,"dcd_F_stall", false,-1);
    tracep->declBit(c+2145,"dcd_illegal", false,-1);
    tracep->declBit(c+2146,"dcd_early_branch", false,-1);
    tracep->declBit(c+2147,"dcd_early_branch_stb", false,-1);
    tracep->declBus(c+2148,"dcd_branch_pc", false,-1, 30,0);
    tracep->declBit(c+4513,"dcd_sim", false,-1);
    tracep->declBus(c+4514,"dcd_sim_immv", false,-1, 22,0);
    tracep->declBit(c+2149,"prelock_stall", false,-1);
    tracep->declBit(c+2150,"last_lock_insn", false,-1);
    tracep->declBit(c+2151,"cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2152,"pending_sreg_write", false,-1);
    tracep->declBit(c+4515,"op_valid", false,-1);
    tracep->declBit(c+2153,"op_valid_mem", false,-1);
    tracep->declBit(c+2154,"op_valid_alu", false,-1);
    tracep->declBit(c+2155,"op_valid_div", false,-1);
    tracep->declBit(c+2156,"op_valid_fpu", false,-1);
    tracep->declBit(c+55,"op_stall", false,-1);
    tracep->declBus(c+2157,"op_opn", false,-1, 3,0);
    tracep->declBus(c+1753,"op_R", false,-1, 4,0);
    tracep->declBit(c+2158,"op_Rcc", false,-1);
    tracep->declBus(c+2159,"op_Aid", false,-1, 4,0);
    tracep->declBus(c+2160,"op_Bid", false,-1, 4,0);
    tracep->declBit(c+2161,"op_rA", false,-1);
    tracep->declBit(c+2162,"op_rB", false,-1);
    tracep->declBus(c+2163,"r_op_Av", false,-1, 31,0);
    tracep->declBus(c+2164,"r_op_Bv", false,-1, 31,0);
    tracep->declBus(c+2165,"op_pc", false,-1, 30,0);
    tracep->declBus(c+2166,"w_op_Av", false,-1, 31,0);
    tracep->declBus(c+2167,"w_op_Bv", false,-1, 31,0);
    tracep->declBus(c+1752,"op_Av", false,-1, 31,0);
    tracep->declBus(c+1750,"op_Bv", false,-1, 31,0);
    tracep->declBus(c+56,"w_pcB_v", false,-1, 31,0);
    tracep->declBus(c+57,"w_pcA_v", false,-1, 31,0);
    tracep->declBus(c+2168,"w_op_BnI", false,-1, 31,0);
    tracep->declBit(c+2169,"op_wR", false,-1);
    tracep->declBit(c+2170,"op_wF", false,-1);
    tracep->declBit(c+2100,"op_gie", false,-1);
    tracep->declBus(c+2171,"op_Fl", false,-1, 3,0);
    tracep->declBus(c+2172,"r_op_F", false,-1, 6,0);
    tracep->declBus(c+2173,"op_F", false,-1, 7,0);
    tracep->declBit(c+58,"op_ce", false,-1);
    tracep->declBit(c+2174,"op_phase", false,-1);
    tracep->declBit(c+2175,"op_pipe", false,-1);
    tracep->declBit(c+2176,"r_op_break", false,-1);
    tracep->declBit(c+2177,"w_op_valid", false,-1);
    tracep->declBit(c+4557,"op_lowpower_clear", false,-1);
    tracep->declBus(c+4717,"w_cpu_info", false,-1, 8,0);
    tracep->declBit(c+2178,"op_illegal", false,-1);
    tracep->declBit(c+2176,"op_break", false,-1);
    tracep->declBit(c+2179,"op_lock", false,-1);
    tracep->declBit(c+4516,"op_sim", false,-1);
    tracep->declBus(c+4517,"op_sim_immv", false,-1, 22,0);
    tracep->declBit(c+4518,"alu_sim", false,-1);
    tracep->declBus(c+4519,"alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2180,"alu_pc", false,-1, 30,0);
    tracep->declBus(c+2181,"alu_reg", false,-1, 4,0);
    tracep->declBit(c+2182,"r_alu_pc_valid", false,-1);
    tracep->declBit(c+2183,"mem_pc_valid", false,-1);
    tracep->declBit(c+2184,"alu_pc_valid", false,-1);
    tracep->declBit(c+2185,"alu_phase", false,-1);
    tracep->declBit(c+4520,"alu_ce", false,-1);
    tracep->declBit(c+59,"alu_stall", false,-1);
    tracep->declBus(c+2186,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2187,"alu_flags", false,-1, 3,0);
    tracep->declBit(c+2188,"alu_valid", false,-1);
    tracep->declBit(c+2189,"alu_busy", false,-1);
    tracep->declBit(c+2190,"set_cond", false,-1);
    tracep->declBit(c+2191,"alu_wR", false,-1);
    tracep->declBit(c+2192,"alu_wF", false,-1);
    tracep->declBit(c+2100,"alu_gie", false,-1);
    tracep->declBit(c+2193,"alu_illegal", false,-1);
    tracep->declBit(c+60,"mem_ce", false,-1);
    tracep->declBit(c+61,"mem_stalled", false,-1);
    tracep->declBit(c+62,"div_ce", false,-1);
    tracep->declBit(c+2194,"div_error", false,-1);
    tracep->declBit(c+2195,"div_busy", false,-1);
    tracep->declBit(c+2196,"div_valid", false,-1);
    tracep->declBus(c+2197,"div_result", false,-1, 31,0);
    tracep->declBus(c+2198,"div_flags", false,-1, 3,0);
    tracep->declBit(c+4557,"fpu_ce", false,-1);
    tracep->declBit(c+4557,"fpu_error", false,-1);
    tracep->declBit(c+4557,"fpu_busy", false,-1);
    tracep->declBit(c+4557,"fpu_valid", false,-1);
    tracep->declBus(c+4556,"fpu_result", false,-1, 31,0);
    tracep->declBus(c+4602,"fpu_flags", false,-1, 3,0);
    tracep->declBit(c+63,"adf_ce_unconditional", false,-1);
    tracep->declBit(c+2199,"dbgv", false,-1);
    tracep->declBit(c+2200,"dbg_clear_pipe", false,-1);
    tracep->declBus(c+2201,"dbg_val", false,-1, 31,0);
    tracep->declBus(c+2202,"debug_pc", false,-1, 31,0);
    tracep->declBit(c+2203,"r_dbg_stall", false,-1);
    tracep->declBit(c+2204,"wr_write_pc", false,-1);
    tracep->declBit(c+2205,"wr_write_cc", false,-1);
    tracep->declBit(c+2206,"wr_write_scc", false,-1);
    tracep->declBit(c+2207,"wr_write_ucc", false,-1);
    tracep->declBit(c+2208,"wr_reg_ce", false,-1);
    tracep->declBit(c+2209,"wr_flags_ce", false,-1);
    tracep->declBus(c+2210,"wr_flags", false,-1, 3,0);
    tracep->declBus(c+2211,"wr_index", false,-1, 2,0);
    tracep->declBus(c+2212,"wr_reg_id", false,-1, 4,0);
    tracep->declBus(c+2213,"wr_gpreg_vl", false,-1, 31,0);
    tracep->declBus(c+2214,"wr_spreg_vl", false,-1, 31,0);
    tracep->declBit(c+2215,"w_switch_to_interrupt", false,-1);
    tracep->declBit(c+2216,"w_release_from_interrupt", false,-1);
    tracep->declBus(c+2217,"ipc", false,-1, 30,0);
    tracep->declBus(c+2218,"upc", false,-1, 30,0);
    tracep->declBit(c+2219,"last_write_to_cc", false,-1);
    tracep->declBit(c+2220,"cc_write_hold", false,-1);
    tracep->declBit(c+1735,"r_clear_icache", false,-1);
    tracep->declBit(c+64,"pfpcset", false,-1);
    tracep->declBus(c+65,"pfpcsrc", false,-1, 2,0);
    tracep->declBit(c+4558,"w_clken", false,-1);
    tracep->declBus(c+2221,"dcd_full_R", false,-1, 6,0);
    tracep->declBus(c+2222,"dcd_full_A", false,-1, 6,0);
    tracep->declBus(c+2223,"dcd_full_B", false,-1, 6,0);
    tracep->declBus(c+66,"avsrc", false,-1, 2,0);
    tracep->declBus(c+67,"bvsrc", false,-1, 2,0);
    tracep->declBus(c+2224,"bisrc", false,-1, 1,0);
    tracep->declBit(c+68,"cpu_sim", false,-1);
    tracep->declBus(c+4594,"OPT_SIM_DEBUG", false,-1, 0,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("ALU_SIM ");
    tracep->declBit(c+2225,"r_alu_sim", false,-1);
    tracep->declBus(c+2226,"r_alu_sim_immv", false,-1, 22,0);
    tracep->declBus(c+2227,"regid", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BUSLOCK ");
    tracep->declBit(c+2149,"r_prelock_stall", false,-1);
    tracep->declBus(c+2228,"r_bus_lock", false,-1, 1,0);
    tracep->declBus(c+1751,"r_lock_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLEAR_DCACHE ");
    tracep->declBit(c+1747,"r_clear_dcache", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DIVERR ");
    tracep->declBit(c+2109,"r_idiv_err_flag", false,-1);
    tracep->pushNamePrefix("USER_DIVERR ");
    tracep->declBit(c+2110,"r_udiv_err_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DIVIDE ");
    tracep->pushNamePrefix("thedivide ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4634,"LGBW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+2229,"i_reset", false,-1);
    tracep->declBit(c+62,"i_wr", false,-1);
    tracep->declBit(c+2230,"i_signed", false,-1);
    tracep->declBus(c+1752,"i_numerator", false,-1, 31,0);
    tracep->declBus(c+1750,"i_denominator", false,-1, 31,0);
    tracep->declBit(c+2195,"o_busy", false,-1);
    tracep->declBit(c+2196,"o_valid", false,-1);
    tracep->declBit(c+2194,"o_err", false,-1);
    tracep->declBus(c+2197,"o_quotient", false,-1, 31,0);
    tracep->declBus(c+2198,"o_flags", false,-1, 3,0);
    tracep->declBit(c+2231,"r_busy", false,-1);
    tracep->declBus(c+2232,"r_divisor", false,-1, 31,0);
    tracep->declQuad(c+2233,"r_dividend", false,-1, 62,0);
    tracep->declQuad(c+2235,"diff", false,-1, 32,0);
    tracep->declBit(c+2237,"r_sign", false,-1);
    tracep->declBit(c+2238,"pre_sign", false,-1);
    tracep->declBit(c+2239,"r_z", false,-1);
    tracep->declBit(c+2240,"r_c", false,-1);
    tracep->declBit(c+2241,"last_bit", false,-1);
    tracep->declBus(c+2242,"r_bit", false,-1, 4,0);
    tracep->declBit(c+2243,"zero_divisor", false,-1);
    tracep->declBit(c+2244,"w_n", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FWD_OPERATION ");
    tracep->declBus(c+2157,"r_op_opn", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PC ");
    tracep->declBus(c+2180,"r_alu_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_PHASE ");
    tracep->declBit(c+2185,"r_alu_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_ALU_STALL ");
    tracep->declBit(c+4557,"unused_alu_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_DISTRIBUTED_REGS ");
    tracep->declBit(c+4557,"unused_prereg_addrs", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_IHALT_PHASE ");
    tracep->declBit(c+2111,"r_ihalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPLOCK ");
    tracep->declBit(c+2179,"r_op_lock", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_PIPE ");
    tracep->declBit(c+2175,"r_op_pipe", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_STALL ");
    tracep->declBit(c+2151,"r_cc_invalid_for_dcd", false,-1);
    tracep->declBit(c+2152,"r_pending_sreg_write", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OP_WR ");
    tracep->declBit(c+2169,"r_op_wR", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_BREAK ");
    tracep->declBit(c+2098,"r_break_pending", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PENDING_INTERRUPT ");
    tracep->declBit(c+2245,"r_pending_interrupt", false,-1);
    tracep->declBit(c+2103,"r_user_stepped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_PROFILER ");
    tracep->declBit(c+2246,"prof_stb", false,-1);
    tracep->declBus(c+2247,"prof_addr", false,-1, 30,0);
    tracep->declBus(c+2248,"prof_ticks", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_UHALT_PHASE ");
    tracep->declBit(c+2112,"r_uhalt_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_CIS_OP_PHASE ");
    tracep->declBit(c+2174,"r_op_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_REG_ADVANEC ");
    tracep->declBus(c+1753,"r_op_R", false,-1, 4,0);
    tracep->declBus(c+2159,"r_op_Aid", false,-1, 4,0);
    tracep->declBus(c+2160,"r_op_Bid", false,-1, 4,0);
    tracep->declBit(c+2161,"r_op_rA", false,-1);
    tracep->declBit(c+2162,"r_op_rB", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OP_SIM ");
    tracep->declBit(c+2249,"r_op_sim", false,-1);
    tracep->declBus(c+2250,"r_op_sim_immv", false,-1, 22,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SETDBG ");
    tracep->declBus(c+2251,"pre_dbg_reg", false,-1, 31,0);
    tracep->declBus(c+1059,"r_dbg_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_ALU_ILLEGAL ");
    tracep->declBit(c+2193,"r_alu_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_GIE ");
    tracep->declBit(c+2100,"r_gie", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_OP_PC ");
    tracep->declBus(c+2165,"r_op_pc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_TRAP_N_UBREAK ");
    tracep->declBit(c+2099,"r_trap", false,-1);
    tracep->declBit(c+2101,"r_ubreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_BUSERR ");
    tracep->declBit(c+2108,"r_ubus_err_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_ILLEGAL_INSN ");
    tracep->declBit(c+2105,"r_ill_err_u", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SET_USER_PC ");
    tracep->declBus(c+2218,"r_upc", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UNUSED_AW ");
    tracep->declBit(c+4557,"generic_ignore", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("doalu ");
    tracep->declBus(c+4543,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+2229,"i_reset", false,-1);
    tracep->declBit(c+4520,"i_stb", false,-1);
    tracep->declBus(c+2157,"i_op", false,-1, 3,0);
    tracep->declBus(c+1752,"i_a", false,-1, 31,0);
    tracep->declBus(c+1750,"i_b", false,-1, 31,0);
    tracep->declBus(c+2186,"o_c", false,-1, 31,0);
    tracep->declBus(c+2187,"o_f", false,-1, 3,0);
    tracep->declBit(c+2188,"o_valid", false,-1);
    tracep->declBit(c+2189,"o_busy", false,-1);
    tracep->declBus(c+2252,"w_brev_result", false,-1, 31,0);
    tracep->declBit(c+2253,"z", false,-1);
    tracep->declBit(c+2254,"n", false,-1);
    tracep->declBit(c+2255,"v", false,-1);
    tracep->declBit(c+2256,"vx", false,-1);
    tracep->declBit(c+2257,"c", false,-1);
    tracep->declBit(c+2258,"pre_sign", false,-1);
    tracep->declBit(c+2259,"set_ovfl", false,-1);
    tracep->declBit(c+2260,"keep_sgn_on_ovfl", false,-1);
    tracep->declQuad(c+2261,"w_lsr_result", false,-1, 32,0);
    tracep->declQuad(c+2263,"w_asr_result", false,-1, 32,0);
    tracep->declQuad(c+2265,"w_lsl_result", false,-1, 32,0);
    tracep->declQuad(c+2267,"mpy_result", false,-1, 63,0);
    tracep->declBit(c+2269,"mpyhi", false,-1);
    tracep->declBit(c+2270,"mpybusy", false,-1);
    tracep->declBit(c+2271,"mpydone", false,-1);
    tracep->declBit(c+69,"this_is_a_multiply_op", false,-1);
    tracep->declBit(c+2189,"r_busy", false,-1);
    tracep->pushNamePrefix("IMPLEMENT_SHIFTS ");
    tracep->declQuad(c+2272,"w_pre_asr_input", false,-1, 32,0);
    tracep->declQuad(c+2274,"w_pre_asr_shifted", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("thempy ");
    tracep->declBus(c+4543,"OPT_MPY", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+2229,"i_reset", false,-1);
    tracep->declBit(c+69,"i_stb", false,-1);
    tracep->declBus(c+2276,"i_op", false,-1, 1,0);
    tracep->declBus(c+1752,"i_a", false,-1, 31,0);
    tracep->declBus(c+1750,"i_b", false,-1, 31,0);
    tracep->declBit(c+2271,"o_valid", false,-1);
    tracep->declBit(c+2270,"o_busy", false,-1);
    tracep->declQuad(c+2267,"o_result", false,-1, 63,0);
    tracep->declBit(c+2269,"o_hi", false,-1);
    tracep->pushNamePrefix("IMPY ");
    tracep->pushNamePrefix("MPN1 ");
    tracep->pushNamePrefix("MPN2 ");
    tracep->pushNamePrefix("MPY3CK ");
    tracep->declQuad(c+2277,"r_smpy_result", false,-1, 63,0);
    tracep->declQuad(c+2279,"r_umpy_result", false,-1, 63,0);
    tracep->declBus(c+2281,"r_mpy_a_input", false,-1, 31,0);
    tracep->declBus(c+2282,"r_mpy_b_input", false,-1, 31,0);
    tracep->declBus(c+2283,"mpypipe", false,-1, 1,0);
    tracep->declBus(c+2284,"r_sgn", false,-1, 1,0);
    tracep->declBit(c+2269,"r_hi", false,-1);
    tracep->declQuad(c+2285,"s_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2287,"s_mpy_b_input", false,-1, 63,0);
    tracep->declQuad(c+2289,"u_mpy_a_input", false,-1, 63,0);
    tracep->declQuad(c+2291,"u_mpy_b_input", false,-1, 63,0);
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("instruction_decoder ");
    tracep->declBus(c+4714,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_MPY", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SHIFTS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_EARLY_BRANCHING", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_PIPELINED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DIVIDE", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_FPU", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_CIS", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOCK", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_OPIPE", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_SIM", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_SUPPRESS_NULL_BRANCHES", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_USERMODE", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4714,"AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+2293,"i_reset", false,-1);
    tracep->declBit(c+52,"i_ce", false,-1);
    tracep->declBit(c+51,"i_stalled", false,-1);
    tracep->declBus(c+1737,"i_instruction", false,-1, 31,0);
    tracep->declBit(c+2100,"i_gie", false,-1);
    tracep->declBus(c+1738,"i_pc", false,-1, 30,0);
    tracep->declBit(c+1739,"i_pf_valid", false,-1);
    tracep->declBit(c+1740,"i_illegal", false,-1);
    tracep->declBit(c+2142,"o_valid", false,-1);
    tracep->declBit(c+2117,"o_phase", false,-1);
    tracep->declBit(c+2145,"o_illegal", false,-1);
    tracep->declBus(c+4511,"o_pc", false,-1, 30,0);
    tracep->declBus(c+2221,"o_dcdR", false,-1, 6,0);
    tracep->declBus(c+2222,"o_dcdA", false,-1, 6,0);
    tracep->declBus(c+2223,"o_dcdB", false,-1, 6,0);
    tracep->declBus(c+2121,"o_preA", false,-1, 4,0);
    tracep->declBus(c+2122,"o_preB", false,-1, 4,0);
    tracep->declBus(c+2143,"o_I", false,-1, 31,0);
    tracep->declBit(c+2144,"o_zI", false,-1);
    tracep->declBus(c+2129,"o_cond", false,-1, 3,0);
    tracep->declBit(c+2137,"o_wF", false,-1);
    tracep->declBus(c+2116,"o_op", false,-1, 3,0);
    tracep->declBit(c+2133,"o_ALU", false,-1);
    tracep->declBit(c+2134,"o_M", false,-1);
    tracep->declBit(c+2135,"o_DV", false,-1);
    tracep->declBit(c+2136,"o_FP", false,-1);
    tracep->declBit(c+2138,"o_break", false,-1);
    tracep->declBit(c+2139,"o_lock", false,-1);
    tracep->declBit(c+2130,"o_wR", false,-1);
    tracep->declBit(c+2131,"o_rA", false,-1);
    tracep->declBit(c+2132,"o_rB", false,-1);
    tracep->declBit(c+2146,"o_early_branch", false,-1);
    tracep->declBit(c+2147,"o_early_branch_stb", false,-1);
    tracep->declBus(c+2148,"o_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2141,"o_ljmp", false,-1);
    tracep->declBit(c+2140,"o_pipe", false,-1);
    tracep->declBit(c+4513,"o_sim", false,-1);
    tracep->declBus(c+4514,"o_sim_immv", false,-1, 22,0);
    tracep->declBus(c+4678,"CPU_SP_REG", false,-1, 3,0);
    tracep->declBus(c+4716,"CPU_CC_REG", false,-1, 3,0);
    tracep->declBus(c+4589,"CPU_PC_REG", false,-1, 3,0);
    tracep->declBus(c+4670,"CISBIT", false,-1, 31,0);
    tracep->declBus(c+4611,"CISIMMSEL", false,-1, 31,0);
    tracep->declBus(c+4613,"IMMSEL", false,-1, 31,0);
    tracep->declBus(c+2294,"w_op", false,-1, 4,0);
    tracep->declBit(c+2295,"w_ldi", false,-1);
    tracep->declBit(c+2296,"w_mov", false,-1);
    tracep->declBit(c+2297,"w_cmptst", false,-1);
    tracep->declBit(c+2298,"w_ldilo", false,-1);
    tracep->declBit(c+2299,"w_ALU", false,-1);
    tracep->declBit(c+2300,"w_brev", false,-1);
    tracep->declBit(c+2301,"w_noop", false,-1);
    tracep->declBit(c+2302,"w_lock", false,-1);
    tracep->declBit(c+2303,"w_sim", false,-1);
    tracep->declBit(c+2304,"w_break", false,-1);
    tracep->declBit(c+2305,"w_special", false,-1);
    tracep->declBit(c+2306,"w_add", false,-1);
    tracep->declBit(c+2307,"w_mpy", false,-1);
    tracep->declBus(c+2121,"w_dcdR", false,-1, 4,0);
    tracep->declBus(c+2122,"w_dcdB", false,-1, 4,0);
    tracep->declBus(c+2121,"w_dcdA", false,-1, 4,0);
    tracep->declBit(c+2308,"w_dcdR_pc", false,-1);
    tracep->declBit(c+2309,"w_dcdR_cc", false,-1);
    tracep->declBit(c+2308,"w_dcdA_pc", false,-1);
    tracep->declBit(c+2309,"w_dcdA_cc", false,-1);
    tracep->declBit(c+2310,"w_dcdB_pc", false,-1);
    tracep->declBit(c+2311,"w_dcdB_cc", false,-1);
    tracep->declBus(c+2312,"w_cond", false,-1, 3,0);
    tracep->declBit(c+2313,"w_wF", false,-1);
    tracep->declBit(c+2314,"w_mem", false,-1);
    tracep->declBit(c+2315,"w_sto", false,-1);
    tracep->declBit(c+2316,"w_div", false,-1);
    tracep->declBit(c+2317,"w_fpu", false,-1);
    tracep->declBit(c+2318,"w_wR", false,-1);
    tracep->declBit(c+2319,"w_rA", false,-1);
    tracep->declBit(c+2320,"w_rB", false,-1);
    tracep->declBit(c+2321,"w_wR_n", false,-1);
    tracep->declBit(c+2322,"w_ljmp", false,-1);
    tracep->declBit(c+2141,"w_ljmp_dly", false,-1);
    tracep->declBit(c+2323,"w_cis_ljmp", false,-1);
    tracep->declBus(c+2324,"iword", false,-1, 31,0);
    tracep->declBit(c+2325,"pf_valid", false,-1);
    tracep->declBus(c+2326,"r_nxt_half", false,-1, 14,0);
    tracep->declBus(c+2327,"w_cis_op", false,-1, 4,0);
    tracep->declBus(c+2328,"r_I", false,-1, 22,0);
    tracep->declBus(c+2329,"w_fullI", false,-1, 22,0);
    tracep->declBus(c+2330,"w_I", false,-1, 22,0);
    tracep->declBit(c+2331,"w_Iz", false,-1);
    tracep->declBus(c+2332,"w_immsrc", false,-1, 1,0);
    tracep->declBit(c+2142,"r_valid", false,-1);
    tracep->declBit(c+2333,"insn_is_pipeable", false,-1);
    tracep->declBit(c+4557,"illegal_shift", false,-1);
    tracep->declBit(c+4557,"possibly_unused", false,-1);
    tracep->pushNamePrefix("GEN_CIS_IMMEDIATE ");
    tracep->declBus(c+2334,"w_halfI", false,-1, 7,0);
    tracep->declBus(c+2335,"w_halfbits", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_CIS_PHASE ");
    tracep->declBit(c+2117,"r_phase", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_EARLY_BRANCH_LOGIC ");
    tracep->declBit(c+2146,"r_early_branch", false,-1);
    tracep->declBit(c+2147,"r_early_branch_stb", false,-1);
    tracep->declBit(c+2141,"r_ljmp", false,-1);
    tracep->declBus(c+2148,"r_branch_pc", false,-1, 30,0);
    tracep->declBit(c+2336,"w_add_to_pc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_OPIPE ");
    tracep->declBit(c+2140,"r_pipe", false,-1);
    tracep->declBit(c+2333,"r_insn_is_pipeable", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_jiffies ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_ce", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+2337,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1011,"o_wb_ack", false,-1);
    tracep->declBus(c+1015,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+903,"o_int", false,-1);
    tracep->declBus(c+1015,"r_counter", false,-1, 31,0);
    tracep->declBit(c+2338,"int_set", false,-1);
    tracep->declBit(c+2339,"new_set", false,-1);
    tracep->declBit(c+2340,"int_now", false,-1);
    tracep->declBus(c+2341,"int_when", false,-1, 31,0);
    tracep->declBus(c+2342,"new_when", false,-1, 31,0);
    tracep->declBus(c+2343,"till_wb", false,-1, 31,0);
    tracep->declBus(c+2344,"till_when", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_timer_a ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4670,"VW", false,-1, 31,0);
    tracep->declBus(c+4551,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_ce", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+2345,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1008,"o_wb_ack", false,-1);
    tracep->declBus(c+1012,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+900,"o_int", false,-1);
    tracep->declBit(c+2346,"r_running", false,-1);
    tracep->declBit(c+2347,"r_zero", false,-1);
    tracep->declBus(c+2348,"r_value", false,-1, 30,0);
    tracep->declBit(c+2349,"wb_write", false,-1);
    tracep->declBit(c+2350,"auto_reload", false,-1);
    tracep->declBus(c+2351,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2350,"r_auto_reload", false,-1);
    tracep->declBus(c+2351,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_b ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4670,"VW", false,-1, 31,0);
    tracep->declBus(c+4551,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_ce", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+2352,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1009,"o_wb_ack", false,-1);
    tracep->declBus(c+1013,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+901,"o_int", false,-1);
    tracep->declBit(c+2353,"r_running", false,-1);
    tracep->declBit(c+2354,"r_zero", false,-1);
    tracep->declBus(c+2355,"r_value", false,-1, 30,0);
    tracep->declBit(c+2356,"wb_write", false,-1);
    tracep->declBit(c+2357,"auto_reload", false,-1);
    tracep->declBus(c+2358,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2357,"r_auto_reload", false,-1);
    tracep->declBus(c+2358,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer_c ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4670,"VW", false,-1, 31,0);
    tracep->declBus(c+4551,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_ce", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+2359,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+1010,"o_wb_ack", false,-1);
    tracep->declBus(c+1014,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+902,"o_int", false,-1);
    tracep->declBit(c+2360,"r_running", false,-1);
    tracep->declBit(c+2361,"r_zero", false,-1);
    tracep->declBus(c+2362,"r_value", false,-1, 30,0);
    tracep->declBit(c+2363,"wb_write", false,-1);
    tracep->declBit(c+2364,"auto_reload", false,-1);
    tracep->declBus(c+2365,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_RELOAD ");
    tracep->declBit(c+2364,"r_auto_reload", false,-1);
    tracep->declBus(c+2365,"r_interval_count", false,-1, 30,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_watchbus ");
    tracep->declBus(c+4541,"BW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+2366,"i_reset", false,-1);
    tracep->declBus(c+4718,"i_timeout", false,-1, 13,0);
    tracep->declBit(c+973,"o_int", false,-1);
    tracep->declBus(c+2367,"r_value", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_watchdog ");
    tracep->declBus(c+4595,"BW", false,-1, 31,0);
    tracep->declBus(c+4670,"VW", false,-1, 31,0);
    tracep->declBus(c+4594,"RELOADABLE", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+952,"i_reset", false,-1);
    tracep->declBit(c+1092,"i_ce", false,-1);
    tracep->declBit(c+916,"i_wb_cyc", false,-1);
    tracep->declBit(c+2368,"i_wb_stb", false,-1);
    tracep->declBit(c+918,"i_wb_we", false,-1);
    tracep->declBus(c+920,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4589,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+965,"o_wb_ack", false,-1);
    tracep->declBus(c+967,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+966,"o_int", false,-1);
    tracep->declBit(c+2369,"r_running", false,-1);
    tracep->declBit(c+2370,"r_zero", false,-1);
    tracep->declBus(c+2371,"r_value", false,-1, 30,0);
    tracep->declBit(c+2372,"wb_write", false,-1);
    tracep->declBit(c+4557,"auto_reload", false,-1);
    tracep->declBus(c+4671,"interval_count", false,-1, 30,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("txv ");
    tracep->declBus(c+4719,"TIMING_BITS", false,-1, 4,0);
    tracep->declBus(c+4719,"TB", false,-1, 4,0);
    tracep->declBus(c+4686,"CLOCKS_PER_BAUD", false,-1, 6,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+170,"i_wr", false,-1);
    tracep->declBus(c+168,"i_data", false,-1, 7,0);
    tracep->declBit(c+4487,"o_uart_tx", false,-1);
    tracep->declBit(c+171,"o_busy", false,-1);
    tracep->declBus(c+4602,"TXUL_BIT_ZERO", false,-1, 3,0);
    tracep->declBus(c+4673,"TXUL_STOP", false,-1, 3,0);
    tracep->declBus(c+4589,"TXUL_IDLE", false,-1, 3,0);
    tracep->declBus(c+2373,"baud_counter", false,-1, 6,0);
    tracep->declBus(c+2374,"state", false,-1, 3,0);
    tracep->declBus(c+2375,"lcl_data", false,-1, 7,0);
    tracep->declBit(c+171,"r_busy", false,-1);
    tracep->declBit(c+2376,"zero_baud_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fan ");
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+4014,"i_wb_cyc", false,-1);
    tracep->declBit(c+4015,"i_wb_stb", false,-1);
    tracep->declBit(c+4016,"i_wb_we", false,-1);
    tracep->declBus(c+4066,"i_wb_addr", false,-1, 2,0);
    tracep->declBus(c+4018,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4019,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+380,"o_wb_ack", false,-1);
    tracep->declBus(c+381,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+4463,"i_temp_sda", false,-1);
    tracep->declBit(c+4464,"i_temp_scl", false,-1);
    tracep->declBit(c+4465,"o_temp_sda", false,-1);
    tracep->declBit(c+4466,"o_temp_scl", false,-1);
    tracep->declBit(c+4467,"o_fpga_pwm", false,-1);
    tracep->declBit(c+4468,"o_sys_pwm", false,-1);
    tracep->declBit(c+4469,"i_fan_tach", false,-1);
    tracep->declBus(c+4498,"temp_debug", false,-1, 31,0);
    tracep->declBus(c+4720,"CK_PER_SECOND", false,-1, 31,0);
    tracep->declBus(c+4721,"CK_PER_MS", false,-1, 31,0);
    tracep->declBus(c+4722,"PWM_HZ", false,-1, 31,0);
    tracep->declBus(c+4723,"MAX_PWM", false,-1, 31,0);
    tracep->declBus(c+4616,"LGPWM", false,-1, 31,0);
    tracep->declBus(c+2377,"pwm_counter", false,-1, 12,0);
    tracep->declBus(c+2378,"ctl_fpga", false,-1, 12,0);
    tracep->declBus(c+2379,"ctl_sys", false,-1, 12,0);
    tracep->declBit(c+2380,"ck_tach", false,-1);
    tracep->declBit(c+2381,"last_tach", false,-1);
    tracep->declBus(c+2382,"pipe_tach", false,-1, 1,0);
    tracep->declBit(c+2383,"tach_reset", false,-1);
    tracep->declBus(c+2384,"tach_count", false,-1, 26,0);
    tracep->declBus(c+2385,"tach_counter", false,-1, 26,0);
    tracep->declBus(c+2386,"tach_timer", false,-1, 26,0);
    tracep->declBit(c+4557,"i2c_wb_stall", false,-1);
    tracep->declBit(c+2387,"i2c_wb_ack", false,-1);
    tracep->declBus(c+2388,"i2c_wb_data", false,-1, 31,0);
    tracep->declBit(c+2389,"ign_mem_cyc", false,-1);
    tracep->declBit(c+2390,"mem_stb", false,-1);
    tracep->declBit(c+4557,"ign_mem_we", false,-1);
    tracep->declBit(c+4551,"ign_mem_sel", false,-1);
    tracep->declBus(c+2391,"mem_addr", false,-1, 4,0);
    tracep->declBus(c+4593,"ign_mem_data", false,-1, 7,0);
    tracep->declBus(c+2392,"mem_data", false,-1, 7,0);
    tracep->declBit(c+2393,"mem_ack", false,-1);
    tracep->declBit(c+2394,"i2cd_valid", false,-1);
    tracep->declBit(c+2395,"i2cd_last", false,-1);
    tracep->declBit(c+4557,"ign_i2cd_id", false,-1);
    tracep->declBus(c+2396,"i2cd_data", false,-1, 7,0);
    tracep->declBit(c+2397,"pp_ms", false,-1);
    tracep->declBus(c+2398,"trigger_counter", false,-1, 16,0);
    tracep->declBus(c+2399,"temp_tmp", false,-1, 23,0);
    tracep->declBus(c+2400,"temp_data", false,-1, 31,0);
    tracep->declBit(c+2401,"pre_ack", false,-1);
    tracep->declBus(c+2402,"pre_data", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("u_i2ccpu ");
    tracep->declBus(c+4634,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"I2C_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4556,"AXIS_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4594,"DEF_CHANNEL", false,-1, 0,0);
    tracep->declBus(c+4634,"AW", false,-1, 31,0);
    tracep->declBus(c+4544,"DW", false,-1, 31,0);
    tracep->declBus(c+4544,"RW", false,-1, 31,0);
    tracep->declBus(c+4634,"BAW", false,-1, 31,0);
    tracep->declBus(c+4661,"RESET_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+4594,"OPT_START_HALTED", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_MANUAL", false,-1, 0,0);
    tracep->declBus(c+4556,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4724,"DEF_CKCOUNT", false,-1, 11,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+4014,"i_wb_cyc", false,-1);
    tracep->declBit(c+4067,"i_wb_stb", false,-1);
    tracep->declBit(c+4016,"i_wb_we", false,-1);
    tracep->declBus(c+4068,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4018,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4019,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+2387,"o_wb_ack", false,-1);
    tracep->declBus(c+2388,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2389,"o_pf_cyc", false,-1);
    tracep->declBit(c+2390,"o_pf_stb", false,-1);
    tracep->declBit(c+4557,"o_pf_we", false,-1);
    tracep->declBus(c+2391,"o_pf_addr", false,-1, 4,0);
    tracep->declBus(c+4593,"o_pf_data", false,-1, 7,0);
    tracep->declBus(c+4551,"o_pf_sel", false,-1, 0,0);
    tracep->declBit(c+4557,"i_pf_stall", false,-1);
    tracep->declBit(c+2393,"i_pf_ack", false,-1);
    tracep->declBit(c+4557,"i_pf_err", false,-1);
    tracep->declBus(c+2392,"i_pf_data", false,-1, 7,0);
    tracep->declBit(c+4463,"i_i2c_sda", false,-1);
    tracep->declBit(c+4464,"i_i2c_scl", false,-1);
    tracep->declBit(c+4465,"o_i2c_sda", false,-1);
    tracep->declBit(c+4466,"o_i2c_scl", false,-1);
    tracep->declBit(c+2394,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4558,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2396,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2395,"M_AXIS_TLAST", false,-1);
    tracep->declBus(c+4557,"M_AXIS_TID", false,-1, 0,0);
    tracep->declBit(c+2397,"i_sync_signal", false,-1);
    tracep->declBus(c+4498,"o_debug", false,-1, 31,0);
    tracep->declBus(c+4597,"ADR_CONTROL", false,-1, 1,0);
    tracep->declBus(c+4598,"ADR_OVERRIDE", false,-1, 1,0);
    tracep->declBus(c+4599,"ADR_ADDRESS", false,-1, 1,0);
    tracep->declBus(c+4600,"ADR_CKCOUNT", false,-1, 1,0);
    tracep->declBus(c+4554,"HALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4591,"ERR_BIT", false,-1, 31,0);
    tracep->declBus(c+4614,"ABORT_BIT", false,-1, 31,0);
    tracep->declBus(c+4612,"SOFTHALT_BIT", false,-1, 31,0);
    tracep->declBus(c+4636,"OVW_VALID", false,-1, 31,0);
    tracep->declBus(c+4637,"MANUAL_BIT", false,-1, 31,0);
    tracep->declBus(c+4602,"CMD_NOOP", false,-1, 3,0);
    tracep->declBus(c+4604,"CMD_STOP", false,-1, 3,0);
    tracep->declBus(c+4605,"CMD_SEND", false,-1, 3,0);
    tracep->declBus(c+4606,"CMD_RXK", false,-1, 3,0);
    tracep->declBus(c+4607,"CMD_RXN", false,-1, 3,0);
    tracep->declBus(c+4596,"CMD_RXLK", false,-1, 3,0);
    tracep->declBus(c+4608,"CMD_RXLN", false,-1, 3,0);
    tracep->declBus(c+4673,"CMD_WAIT", false,-1, 3,0);
    tracep->declBus(c+4674,"CMD_HALT", false,-1, 3,0);
    tracep->declBus(c+4675,"CMD_ABORT", false,-1, 3,0);
    tracep->declBus(c+4676,"CMD_TARGET", false,-1, 3,0);
    tracep->declBus(c+4677,"CMD_JUMP", false,-1, 3,0);
    tracep->declBus(c+4678,"CMD_CHANNEL", false,-1, 3,0);
    tracep->declBit(c+2403,"cpu_reset", false,-1);
    tracep->declBit(c+4557,"cpu_clear_cache", false,-1);
    tracep->declBit(c+2404,"cpu_new_pc", false,-1);
    tracep->declBus(c+2405,"pf_jump_addr", false,-1, 4,0);
    tracep->declBit(c+2406,"pf_valid", false,-1);
    tracep->declBit(c+2407,"pf_ready", false,-1);
    tracep->declBus(c+2408,"pf_insn", false,-1, 7,0);
    tracep->declBus(c+2409,"pf_insn_addr", false,-1, 4,0);
    tracep->declBit(c+2410,"pf_illegal", false,-1);
    tracep->declBit(c+2411,"half_valid", false,-1);
    tracep->declBit(c+2412,"imm_cycle", false,-1);
    tracep->declBit(c+4069,"next_valid", false,-1);
    tracep->declBus(c+4070,"next_insn", false,-1, 7,0);
    tracep->declBit(c+2413,"insn_ready", false,-1);
    tracep->declBit(c+2414,"half_ready", false,-1);
    tracep->declBit(c+2415,"i2c_abort", false,-1);
    tracep->declBit(c+2416,"insn_valid", false,-1);
    tracep->declBus(c+2417,"insn", false,-1, 11,0);
    tracep->declBus(c+2418,"half_insn", false,-1, 3,0);
    tracep->declBit(c+2419,"i2c_ckedge", false,-1);
    tracep->declBit(c+2420,"i2c_stretch", false,-1);
    tracep->declBus(c+2421,"i2c_ckcount", false,-1, 11,0);
    tracep->declBus(c+2422,"ckcount", false,-1, 11,0);
    tracep->declBus(c+2423,"abort_address", false,-1, 4,0);
    tracep->declBus(c+2424,"jump_target", false,-1, 4,0);
    tracep->declBit(c+2425,"r_wait", false,-1);
    tracep->declBit(c+2426,"soft_halt_request", false,-1);
    tracep->declBit(c+2403,"r_halted", false,-1);
    tracep->declBit(c+2427,"r_err", false,-1);
    tracep->declBit(c+2428,"r_aborted", false,-1);
    tracep->declBit(c+2429,"r_manual", false,-1);
    tracep->declBit(c+2430,"r_sda", false,-1);
    tracep->declBit(c+2431,"r_scl", false,-1);
    tracep->declBit(c+2432,"w_stopped", false,-1);
    tracep->declBit(c+2433,"w_sda", false,-1);
    tracep->declBit(c+2434,"w_scl", false,-1);
    tracep->declBit(c+4071,"bus_read", false,-1);
    tracep->declBit(c+4072,"bus_write", false,-1);
    tracep->declBit(c+4073,"bus_override", false,-1);
    tracep->declBit(c+4074,"bus_manual", false,-1);
    tracep->declBit(c+2435,"ovw_ready", false,-1);
    tracep->declBit(c+4075,"bus_jump", false,-1);
    tracep->declBus(c+4068,"bus_write_addr", false,-1, 1,0);
    tracep->declBus(c+4068,"bus_read_addr", false,-1, 1,0);
    tracep->declBus(c+4018,"bus_write_data", false,-1, 31,0);
    tracep->declBus(c+4019,"bus_write_strb", false,-1, 3,0);
    tracep->declBus(c+2388,"bus_read_data", false,-1, 31,0);
    tracep->declBit(c+2436,"s_tvalid", false,-1);
    tracep->declBit(c+2414,"s_tready", false,-1);
    tracep->declBus(c+2437,"ovw_data", false,-1, 9,0);
    tracep->declBus(c+4521,"w_control", false,-1, 31,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("GEN_MANUAL ");
    tracep->declBit(c+2429,"manual", false,-1);
    tracep->declBit(c+2431,"scl", false,-1);
    tracep->declBit(c+2430,"sda", false,-1);
    tracep->declBit(c+2438,"o_scl", false,-1);
    tracep->declBit(c+2439,"o_sda", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_axisi2c ");
    tracep->declBus(c+4556,"OPT_WATCHDOG", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"S_AXI_ACLK", false,-1);
    tracep->declBit(c+70,"S_AXI_ARESETN", false,-1);
    tracep->declBit(c+2436,"S_AXIS_TVALID", false,-1);
    tracep->declBit(c+2413,"S_AXIS_TREADY", false,-1);
    tracep->declBus(c+2440,"S_AXIS_TDATA", false,-1, 10,0);
    tracep->declBit(c+2394,"M_AXIS_TVALID", false,-1);
    tracep->declBit(c+4558,"M_AXIS_TREADY", false,-1);
    tracep->declBus(c+2396,"M_AXIS_TDATA", false,-1, 7,0);
    tracep->declBit(c+2395,"M_AXIS_TLAST", false,-1);
    tracep->declBit(c+2419,"i_ckedge", false,-1);
    tracep->declBit(c+2420,"o_stretch", false,-1);
    tracep->declBit(c+4464,"i_scl", false,-1);
    tracep->declBit(c+4463,"i_sda", false,-1);
    tracep->declBit(c+2434,"o_scl", false,-1);
    tracep->declBit(c+2433,"o_sda", false,-1);
    tracep->declBit(c+2415,"o_abort", false,-1);
    tracep->declBus(c+4602,"IDLE_STOPPED", false,-1, 3,0);
    tracep->declBus(c+4603,"START", false,-1, 3,0);
    tracep->declBus(c+4604,"IDLE_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+4605,"STOP", false,-1, 3,0);
    tracep->declBus(c+4606,"DATA", false,-1, 3,0);
    tracep->declBus(c+4607,"CLOCK", false,-1, 3,0);
    tracep->declBus(c+4596,"ACK", false,-1, 3,0);
    tracep->declBus(c+4608,"CKACKLO", false,-1, 3,0);
    tracep->declBus(c+4673,"CKACKHI", false,-1, 3,0);
    tracep->declBus(c+4674,"RXNAK", false,-1, 3,0);
    tracep->declBus(c+4675,"ABORT", false,-1, 3,0);
    tracep->declBus(c+4676,"REPEAT_START", false,-1, 3,0);
    tracep->declBus(c+4677,"REPEAT_START2", false,-1, 3,0);
    tracep->declBus(c+4594,"D_RD", false,-1, 0,0);
    tracep->declBus(c+4551,"D_WR", false,-1, 0,0);
    tracep->declBus(c+4640,"CMD_NOOP", false,-1, 2,0);
    tracep->declBus(c+4646,"CMD_START", false,-1, 2,0);
    tracep->declBus(c+4641,"CMD_STOP", false,-1, 2,0);
    tracep->declBus(c+4643,"CMD_SEND", false,-1, 2,0);
    tracep->declBus(c+4679,"CMD_RXK", false,-1, 2,0);
    tracep->declBus(c+4680,"CMD_RXN", false,-1, 2,0);
    tracep->declBus(c+4681,"CMD_RXLK", false,-1, 2,0);
    tracep->declBus(c+4682,"CMD_RXLN", false,-1, 2,0);
    tracep->declBus(c+4594,"OPT_ABORT_REQUEST", false,-1, 0,0);
    tracep->declBit(c+2441,"last_byte", false,-1);
    tracep->declBit(c+2442,"dir", false,-1);
    tracep->declBit(c+2443,"will_ack", false,-1);
    tracep->declBus(c+2444,"state", false,-1, 3,0);
    tracep->declBus(c+2445,"nbits", false,-1, 2,0);
    tracep->declBus(c+2446,"sreg", false,-1, 7,0);
    tracep->declBit(c+2447,"q_scl", false,-1);
    tracep->declBit(c+2448,"q_sda", false,-1);
    tracep->declBit(c+2449,"ck_scl", false,-1);
    tracep->declBit(c+2450,"ck_sda", false,-1);
    tracep->declBit(c+2451,"lst_scl", false,-1);
    tracep->declBit(c+2452,"lst_sda", false,-1);
    tracep->declBit(c+2453,"stop_bit", false,-1);
    tracep->declBit(c+2454,"channel_busy", false,-1);
    tracep->declBit(c+4557,"watchdog_timeout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+4634,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"INSN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4544,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4634,"AW", false,-1, 31,0);
    tracep->declBus(c+4544,"DW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+71,"i_reset", false,-1);
    tracep->declBit(c+2404,"i_new_pc", false,-1);
    tracep->declBit(c+4557,"i_clear_cache", false,-1);
    tracep->declBit(c+2407,"i_ready", false,-1);
    tracep->declBus(c+2405,"i_pc", false,-1, 4,0);
    tracep->declBit(c+2406,"o_valid", false,-1);
    tracep->declBit(c+2410,"o_illegal", false,-1);
    tracep->declBus(c+2408,"o_insn", false,-1, 7,0);
    tracep->declBus(c+2409,"o_pc", false,-1, 4,0);
    tracep->declBit(c+2389,"o_wb_cyc", false,-1);
    tracep->declBit(c+2390,"o_wb_stb", false,-1);
    tracep->declBit(c+4557,"o_wb_we", false,-1);
    tracep->declBus(c+2391,"o_wb_addr", false,-1, 4,0);
    tracep->declBus(c+4593,"o_wb_data", false,-1, 7,0);
    tracep->declBit(c+4557,"i_wb_stall", false,-1);
    tracep->declBit(c+2393,"i_wb_ack", false,-1);
    tracep->declBit(c+4557,"i_wb_err", false,-1);
    tracep->declBus(c+2392,"i_wb_data", false,-1, 7,0);
    tracep->declBit(c+2455,"last_stb", false,-1);
    tracep->declBit(c+2456,"invalid_bus_cycle", false,-1);
    tracep->declBus(c+2457,"cache_word", false,-1, 7,0);
    tracep->declBit(c+2458,"cache_valid", false,-1);
    tracep->declBus(c+2459,"inflight", false,-1, 1,0);
    tracep->declBit(c+2460,"cache_illegal", false,-1);
    tracep->declBit(c+4557,"r_valid", false,-1);
    tracep->declBus(c+4593,"r_insn", false,-1, 7,0);
    tracep->declBus(c+2392,"i_wb_shifted", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_i2cdma ");
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declBus(c+4544,"SW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+4002,"i_wb_cyc", false,-1);
    tracep->declBit(c+4003,"i_wb_stb", false,-1);
    tracep->declBit(c+4004,"i_wb_we", false,-1);
    tracep->declBus(c+4076,"i_wb_addr", false,-1, 1,0);
    tracep->declBus(c+4006,"i_wb_data", false,-1, 31,0);
    tracep->declBus(c+4007,"i_wb_sel", false,-1, 3,0);
    tracep->declBit(c+4557,"o_wb_stall", false,-1);
    tracep->declBit(c+376,"o_wb_ack", false,-1);
    tracep->declBus(c+377,"o_wb_data", false,-1, 31,0);
    tracep->declBit(c+2461,"S_VALID", false,-1);
    tracep->declBit(c+151,"S_READY", false,-1);
    tracep->declBus(c+155,"S_DATA", false,-1, 7,0);
    tracep->declBit(c+154,"S_LAST", false,-1);
    tracep->declBit(c+176,"o_dma_cyc", false,-1);
    tracep->declBit(c+177,"o_dma_stb", false,-1);
    tracep->declBit(c+4558,"o_dma_we", false,-1);
    tracep->declBus(c+178,"o_dma_addr", false,-1, 24,0);
    tracep->declArray(c+179,"o_dma_data", false,-1, 511,0);
    tracep->declQuad(c+195,"o_dma_sel", false,-1, 63,0);
    tracep->declBit(c+197,"i_dma_stall", false,-1);
    tracep->declBit(c+198,"i_dma_ack", false,-1);
    tracep->declArray(c+200,"i_dma_data", false,-1, 511,0);
    tracep->declBit(c+199,"i_dma_err", false,-1);
    tracep->declBus(c+4556,"SUBLSB", false,-1, 31,0);
    tracep->declBus(c+4633,"WBLSB", false,-1, 31,0);
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2462,"r_baseaddr", false,-1, 30,0);
    tracep->declBus(c+2463,"r_memlen", false,-1, 30,0);
    tracep->declBus(c+2464,"subaddr", false,-1, 5,0);
    tracep->declBus(c+2465,"current_addr", false,-1, 30,0);
    tracep->declBus(c+4077,"next_baseaddr", false,-1, 31,0);
    tracep->declBus(c+4078,"next_memlen", false,-1, 31,0);
    tracep->declBit(c+2466,"wb_last", false,-1);
    tracep->declBit(c+2467,"bus_err", false,-1);
    tracep->declBit(c+2468,"r_reset", false,-1);
    tracep->declBit(c+2469,"r_overflow", false,-1);
    tracep->declBit(c+2470,"skd_valid", false,-1);
    tracep->declBit(c+2471,"skd_ready", false,-1);
    tracep->declBit(c+2472,"skd_last", false,-1);
    tracep->declBus(c+2473,"skd_data", false,-1, 7,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("sskd ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4636,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+2461,"i_valid", false,-1);
    tracep->declBit(c+151,"o_ready", false,-1);
    tracep->declBus(c+2474,"i_data", false,-1, 8,0);
    tracep->declBit(c+2470,"o_valid", false,-1);
    tracep->declBit(c+2471,"i_ready", false,-1);
    tracep->declBus(c+2475,"o_data", false,-1, 8,0);
    tracep->declBus(c+2476,"w_data", false,-1, 8,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+2477,"r_valid", false,-1);
    tracep->declBus(c+2476,"r_data", false,-1, 8,0);
    tracep->pushNamePrefix("REG_OUTPUT ");
    tracep->declBit(c+2470,"ro_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_wbdown ");
    tracep->declBus(c+4542,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4595,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWLOGIC", false,-1, 0,0);
    tracep->declBus(c+4546,"WIDE_AW", false,-1, 31,0);
    tracep->declBus(c+4544,"SMALL_AW", false,-1, 31,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+3894,"i_wcyc", false,-1);
    tracep->declBit(c+3895,"i_wstb", false,-1);
    tracep->declBit(c+3896,"i_wwe", false,-1);
    tracep->declBus(c+4079,"i_waddr", false,-1, 3,0);
    tracep->declArray(c+3898,"i_wdata", false,-1, 511,0);
    tracep->declQuad(c+3914,"i_wsel", false,-1, 63,0);
    tracep->declBit(c+320,"o_wstall", false,-1);
    tracep->declBit(c+321,"o_wack", false,-1);
    tracep->declArray(c+322,"o_wdata", false,-1, 511,0);
    tracep->declBit(c+3916,"o_werr", false,-1);
    tracep->declBit(c+3961,"o_scyc", false,-1);
    tracep->declBit(c+355,"o_sstb", false,-1);
    tracep->declBit(c+356,"o_swe", false,-1);
    tracep->declBus(c+357,"o_saddr", false,-1, 7,0);
    tracep->declBus(c+358,"o_sdata", false,-1, 31,0);
    tracep->declBus(c+359,"o_ssel", false,-1, 3,0);
    tracep->declBit(c+360,"i_sstall", false,-1);
    tracep->declBit(c+361,"i_sack", false,-1);
    tracep->declBus(c+362,"i_sdata", false,-1, 31,0);
    tracep->declBit(c+3962,"i_serr", false,-1);
    tracep->declBus(c+4546,"WBLSB", false,-1, 31,0);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4634,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+3961,"r_cyc", false,-1);
    tracep->declBit(c+2478,"r_stb", false,-1);
    tracep->declBit(c+356,"r_we", false,-1);
    tracep->declBit(c+321,"r_ack", false,-1);
    tracep->declBit(c+3916,"r_err", false,-1);
    tracep->declBit(c+2479,"r_first", false,-1);
    tracep->declBus(c+357,"r_addr", false,-1, 7,0);
    tracep->declBit(c+2480,"s_null", false,-1);
    tracep->declBit(c+2481,"s_last", false,-1);
    tracep->declArray(c+2482,"s_data", false,-1, 511,0);
    tracep->declArray(c+322,"r_data", false,-1, 511,0);
    tracep->declArray(c+2498,"nxt_data", false,-1, 511,0);
    tracep->declQuad(c+2514,"s_sel", false,-1, 63,0);
    tracep->declQuad(c+2516,"nxt_sel", false,-1, 63,0);
    tracep->declBus(c+2518,"r_shift", false,-1, 3,0);
    tracep->declBus(c+2519,"fifo_addr", false,-1, 3,0);
    tracep->declBus(c+4080,"i_subaddr", false,-1, 3,0);
    tracep->declBit(c+2520,"fifo_full", false,-1);
    tracep->declBit(c+2521,"fifo_empty", false,-1);
    tracep->declBit(c+2522,"fifo_ack", false,-1);
    tracep->declBus(c+2523,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("DOWNSIZE ");
    tracep->declBus(c+4725,"subaddr_fn__Vstatic__fnk", false,-1, 31,0);
    tracep->declBus(c+4081,"subaddr_fn__Vstatic__fm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4634,"BW", false,-1, 31,0);
    tracep->declBus(c+4634,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+111,"i_reset", false,-1);
    tracep->declBit(c+2524,"i_wr", false,-1);
    tracep->declBus(c+2525,"i_data", false,-1, 4,0);
    tracep->declBit(c+2520,"o_full", false,-1);
    tracep->declBus(c+2523,"o_fill", false,-1, 5,0);
    tracep->declBit(c+361,"i_rd", false,-1);
    tracep->declBus(c+2526,"o_data", false,-1, 4,0);
    tracep->declBit(c+2521,"o_empty", false,-1);
    tracep->declBus(c+4595,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2527,"r_full", false,-1);
    tracep->declBit(c+2528,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2529+i*1,"mem", true,(i+0), 4,0);
    }
    tracep->declBus(c+2561,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2562,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2563,"w_wr", false,-1);
    tracep->declBit(c+2564,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wb32_xbar ");
    tracep->declBus(c+4545,"NM", false,-1, 31,0);
    tracep->declBus(c+4637,"NS", false,-1, 31,0);
    tracep->declBus(c+4544,"AW", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declArray(c+4726,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4729,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4633,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4556,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBus(c+3961,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+355,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+356,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+357,"i_maddr", false,-1, 7,0);
    tracep->declBus(c+358,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+359,"i_msel", false,-1, 3,0);
    tracep->declBus(c+360,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+361,"o_mack", false,-1, 0,0);
    tracep->declBus(c+362,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+3962,"o_merr", false,-1, 0,0);
    tracep->declBus(c+4082,"o_scyc", false,-1, 10,0);
    tracep->declBus(c+4083,"o_sstb", false,-1, 10,0);
    tracep->declBus(c+4084,"o_swe", false,-1, 10,0);
    tracep->declArray(c+4085,"o_saddr", false,-1, 87,0);
    tracep->declArray(c+4088,"o_sdata", false,-1, 351,0);
    tracep->declQuad(c+4099,"o_ssel", false,-1, 43,0);
    tracep->declBus(c+3893,"i_sstall", false,-1, 10,0);
    tracep->declBus(c+3375,"i_sack", false,-1, 10,0);
    tracep->declArray(c+3376,"i_sdata", false,-1, 351,0);
    tracep->declBus(c+4732,"i_serr", false,-1, 10,0);
    tracep->declBus(c+4556,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4545,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4546,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4101+i*1,"request", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+7+i*1,"requested", true,(i+0), 10,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2565+i*1,"grant", true,(i+0), 11,0);
    }
    tracep->declBus(c+2566,"mgrant", false,-1, 0,0);
    tracep->declBus(c+4102,"sgrant", false,-1, 10,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2567+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2568,"mfull", false,-1, 0,0);
    tracep->declBus(c+2569,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2570,"mempty", false,-1, 0,0);
    tracep->declBus(c+4594,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4545,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4550,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4103+i*1,"mindex", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+3961,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+4104,"m_stb", false,-1, 0,0);
    tracep->declBus(c+4105,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4106+i*1,"m_addr", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4107+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4108+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+4385,"m_stall", false,-1, 0,0);
    tracep->declBus(c+4386,"s_stall", false,-1, 15,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+3387+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4522,"s_ack", false,-1, 15,0);
    tracep->declBus(c+4733,"s_err", false,-1, 15,0);
    tracep->declBus(c+4109,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2571,"iN", false,-1, 31,0);
    tracep->declBus(c+4523,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4110,"regrant", false,-1, 11,0);
    tracep->declBus(c+4524,"reindex", false,-1, 3,0);
    tracep->declBit(c+4111,"stay_on_channel", false,-1);
    tracep->declBit(c+4112,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4113,"r_mindex", false,-1, 3,0);
    tracep->declBus(c+4110,"r_regrant", false,-1, 11,0);
    tracep->declBus(c+4524,"r_reindex", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2572,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+112,"skd_stb", false,-1);
    tracep->declBit(c+4387,"skd_stall", false,-1);
    tracep->declBit(c+4114,"skd_we", false,-1);
    tracep->declBus(c+4115,"skd_addr", false,-1, 7,0);
    tracep->declBus(c+4116,"skd_data", false,-1, 31,0);
    tracep->declBus(c+4117,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2573,"decoded", false,-1, 11,0);
    tracep->declBit(c+2574,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4637,"NS", false,-1, 31,0);
    tracep->declBus(c+4544,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declArray(c+4726,"SLAVE_ADDR", false,-1, 87,0);
    tracep->declArray(c+4729,"SLAVE_MASK", false,-1, 87,0);
    tracep->declBus(c+4735,"ACCESS_ALLOWED", false,-1, 10,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+113,"i_valid", false,-1);
    tracep->declBit(c+4387,"o_stall", false,-1);
    tracep->declBus(c+4115,"i_addr", false,-1, 7,0);
    tracep->declQuad(c+4118,"i_data", false,-1, 36,0);
    tracep->declBit(c+4109,"o_valid", false,-1);
    tracep->declBit(c+4388,"i_stall", false,-1);
    tracep->declBus(c+2573,"o_decode", false,-1, 11,0);
    tracep->declBus(c+2575,"o_addr", false,-1, 7,0);
    tracep->declQuad(c+4120,"o_data", false,-1, 36,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+114,"request", false,-1, 11,0);
    tracep->declBus(c+4122,"prerequest", false,-1, 10,0);
    tracep->declBus(c+24,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+115,"r_request", false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+116,"r_request_NS", false,-1);
    tracep->declBit(c+117,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4736,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+118,"i_reset", false,-1);
    tracep->declBit(c+355,"i_valid", false,-1);
    tracep->declBit(c+2574,"o_ready", false,-1);
    tracep->declQuad(c+2576,"i_data", false,-1, 44,0);
    tracep->declBit(c+112,"o_valid", false,-1);
    tracep->declBit(c+4389,"i_ready", false,-1);
    tracep->declQuad(c+4123,"o_data", false,-1, 44,0);
    tracep->declQuad(c+2578,"w_data", false,-1, 44,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+360,"r_valid", false,-1);
    tracep->declQuad(c+2578,"r_data", false,-1, 44,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+361,"r_mack", false,-1, 0,0);
    tracep->declBus(c+3962,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+119,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[10] ");
    tracep->declBit(c+120,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+121,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
    tracep->declBit(c+122,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[3] ");
    tracep->declBit(c+123,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[4] ");
    tracep->declBit(c+124,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[5] ");
    tracep->declBit(c+125,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[6] ");
    tracep->declBit(c+126,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[7] ");
    tracep->declBit(c+127,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[8] ");
    tracep->declBit(c+128,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[9] ");
    tracep->declBit(c+129,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbu_arbiter_upsz ");
    tracep->declBus(c+4670,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4592,"WIDE_DW", false,-1, 31,0);
    tracep->declBus(c+4595,"SMALL_DW", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_LITTLE_ENDIAN", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+394,"i_scyc", false,-1);
    tracep->declBit(c+395,"i_sstb", false,-1);
    tracep->declBit(c+396,"i_swe", false,-1);
    tracep->declBus(c+2580,"i_saddr", false,-1, 28,0);
    tracep->declBus(c+398,"i_sdata", false,-1, 31,0);
    tracep->declBus(c+399,"i_ssel", false,-1, 3,0);
    tracep->declBit(c+400,"o_sstall", false,-1);
    tracep->declBit(c+401,"o_sack", false,-1);
    tracep->declBus(c+403,"o_sdata", false,-1, 31,0);
    tracep->declBit(c+402,"o_serr", false,-1);
    tracep->declBit(c+279,"o_wcyc", false,-1);
    tracep->declBit(c+280,"o_wstb", false,-1);
    tracep->declBit(c+281,"o_wwe", false,-1);
    tracep->declBus(c+282,"o_waddr", false,-1, 24,0);
    tracep->declArray(c+283,"o_wdata", false,-1, 511,0);
    tracep->declQuad(c+299,"o_wsel", false,-1, 63,0);
    tracep->declBit(c+301,"i_wstall", false,-1);
    tracep->declBit(c+302,"i_wack", false,-1);
    tracep->declArray(c+304,"i_wdata", false,-1, 511,0);
    tracep->declBit(c+303,"i_werr", false,-1);
    tracep->pushNamePrefix("UPSIZE ");
    tracep->declBus(c+4634,"LGFIFO", false,-1, 31,0);
    tracep->declBit(c+279,"r_cyc", false,-1);
    tracep->declBit(c+2581,"r_stb", false,-1);
    tracep->declBit(c+281,"r_we", false,-1);
    tracep->declBit(c+401,"r_ack", false,-1);
    tracep->declBit(c+402,"r_err", false,-1);
    tracep->declBus(c+282,"r_addr", false,-1, 24,0);
    tracep->declArray(c+283,"r_data", false,-1, 511,0);
    tracep->declArray(c+2582,"rtn_data", false,-1, 511,0);
    tracep->declQuad(c+299,"r_sel", false,-1, 63,0);
    tracep->declBus(c+2598,"r_shift", false,-1, 3,0);
    tracep->declBit(c+2599,"fifo_full", false,-1);
    tracep->declBit(c+2600,"ign_fifo_empty", false,-1);
    tracep->declBus(c+2601,"ign_fifo_fill", false,-1, 5,0);
    tracep->declBus(c+2602,"w_shift", false,-1, 3,0);
    tracep->declBus(c+2603,"fifo_shift", false,-1, 3,0);
    tracep->declArray(c+2604,"w_data", false,-1, 511,0);
    tracep->declQuad(c+2620,"w_sel", false,-1, 63,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBus(c+4546,"BW", false,-1, 31,0);
    tracep->declBus(c+4634,"LGFLEN", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_ASYNC_READ", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_WRITE_ON_FULL", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_READ_ON_EMPTY", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+72,"i_reset", false,-1);
    tracep->declBit(c+2622,"i_wr", false,-1);
    tracep->declBus(c+2598,"i_data", false,-1, 3,0);
    tracep->declBit(c+2599,"o_full", false,-1);
    tracep->declBus(c+2601,"o_fill", false,-1, 5,0);
    tracep->declBit(c+302,"i_rd", false,-1);
    tracep->declBus(c+2603,"o_data", false,-1, 3,0);
    tracep->declBit(c+2600,"o_empty", false,-1);
    tracep->declBus(c+4595,"FLEN", false,-1, 31,0);
    tracep->declBit(c+2599,"r_full", false,-1);
    tracep->declBit(c+2600,"r_empty", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2623+i*1,"mem", true,(i+0), 3,0);
    }
    tracep->declBus(c+2655,"wr_addr", false,-1, 5,0);
    tracep->declBus(c+2656,"rd_addr", false,-1, 5,0);
    tracep->declBit(c+2657,"w_wr", false,-1);
    tracep->declBit(c+2658,"w_rd", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("wbu_xbar ");
    tracep->declBus(c+4545,"NM", false,-1, 31,0);
    tracep->declBus(c+4555,"NS", false,-1, 31,0);
    tracep->declBus(c+4658,"AW", false,-1, 31,0);
    tracep->declBus(c+4595,"DW", false,-1, 31,0);
    tracep->declQuad(c+4737,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4739,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4633,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4556,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBus(c+385,"i_mcyc", false,-1, 0,0);
    tracep->declBus(c+386,"i_mstb", false,-1, 0,0);
    tracep->declBus(c+387,"i_mwe", false,-1, 0,0);
    tracep->declBus(c+388,"i_maddr", false,-1, 29,0);
    tracep->declBus(c+389,"i_mdata", false,-1, 31,0);
    tracep->declBus(c+4589,"i_msel", false,-1, 3,0);
    tracep->declBus(c+390,"o_mstall", false,-1, 0,0);
    tracep->declBus(c+391,"o_mack", false,-1, 0,0);
    tracep->declBus(c+393,"o_mdata", false,-1, 31,0);
    tracep->declBus(c+392,"o_merr", false,-1, 0,0);
    tracep->declBus(c+2659,"o_scyc", false,-1, 1,0);
    tracep->declBus(c+2660,"o_sstb", false,-1, 1,0);
    tracep->declBus(c+2661,"o_swe", false,-1, 1,0);
    tracep->declQuad(c+2662,"o_saddr", false,-1, 59,0);
    tracep->declQuad(c+2664,"o_sdata", false,-1, 63,0);
    tracep->declBus(c+2666,"o_ssel", false,-1, 7,0);
    tracep->declBus(c+4525,"i_sstall", false,-1, 1,0);
    tracep->declBus(c+4526,"i_sack", false,-1, 1,0);
    tracep->declQuad(c+2667,"i_sdata", false,-1, 63,0);
    tracep->declBus(c+2669,"i_serr", false,-1, 1,0);
    tracep->declBus(c+4556,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4545,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4555,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2670+i*1,"request", true,(i+0), 2,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"requested", true,(i+0), 1,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2671+i*1,"grant", true,(i+0), 2,0);
    }
    tracep->declBus(c+2672,"mgrant", false,-1, 0,0);
    tracep->declBus(c+2673,"sgrant", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2674+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2675,"mfull", false,-1, 0,0);
    tracep->declBus(c+2676,"mnearfull", false,-1, 0,0);
    tracep->declBus(c+2677,"mempty", false,-1, 0,0);
    tracep->declBus(c+4594,"timed_out", false,-1, 0,0);
    tracep->declBus(c+4545,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4546,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+4125+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"sindex", true,(i+0), 0,0);
    }
    tracep->declBus(c+385,"m_cyc", false,-1, 0,0);
    tracep->declBus(c+2678,"m_stb", false,-1, 0,0);
    tracep->declBus(c+2679,"m_we", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2680+i*1,"m_addr", true,(i+0), 29,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2681+i*1,"m_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+2682+i*1,"m_sel", true,(i+0), 3,0);
    }
    tracep->declBus(c+130,"m_stall", false,-1, 0,0);
    tracep->declBus(c+73,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2683+i*1,"s_data", true,(i+0), 31,0);
    }
    tracep->declBus(c+4527,"s_ack", false,-1, 3,0);
    tracep->declBus(c+2687,"s_err", false,-1, 3,0);
    tracep->declBus(c+2688,"dcd_stb", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+2689,"iN", false,-1, 31,0);
    tracep->declBus(c+4528,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4126,"regrant", false,-1, 2,0);
    tracep->declBus(c+4529,"reindex", false,-1, 1,0);
    tracep->declBit(c+2690,"stay_on_channel", false,-1);
    tracep->declBit(c+2691,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4127,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4126,"r_regrant", false,-1, 2,0);
    tracep->declBus(c+4529,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2692,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+74,"skd_stb", false,-1);
    tracep->declBit(c+131,"skd_stall", false,-1);
    tracep->declBit(c+2693,"skd_we", false,-1);
    tracep->declBus(c+2694,"skd_addr", false,-1, 29,0);
    tracep->declBus(c+2695,"skd_data", false,-1, 31,0);
    tracep->declBus(c+2696,"skd_sel", false,-1, 3,0);
    tracep->declBus(c+2697,"decoded", false,-1, 2,0);
    tracep->declBit(c+2698,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4555,"NS", false,-1, 31,0);
    tracep->declBus(c+4658,"AW", false,-1, 31,0);
    tracep->declBus(c+4734,"DW", false,-1, 31,0);
    tracep->declQuad(c+4737,"SLAVE_ADDR", false,-1, 59,0);
    tracep->declQuad(c+4739,"SLAVE_MASK", false,-1, 59,0);
    tracep->declBus(c+4600,"ACCESS_ALLOWED", false,-1, 1,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+75,"i_valid", false,-1);
    tracep->declBit(c+131,"o_stall", false,-1);
    tracep->declBus(c+2694,"i_addr", false,-1, 29,0);
    tracep->declQuad(c+2699,"i_data", false,-1, 36,0);
    tracep->declBit(c+2688,"o_valid", false,-1);
    tracep->declBit(c+132,"i_stall", false,-1);
    tracep->declBus(c+2697,"o_decode", false,-1, 2,0);
    tracep->declBus(c+2701,"o_addr", false,-1, 29,0);
    tracep->declQuad(c+2702,"o_data", false,-1, 36,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+76,"request", false,-1, 2,0);
    tracep->declBus(c+2704,"prerequest", false,-1, 1,0);
    tracep->declBus(c+30,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+77,"r_request", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+78,"r_request_NS", false,-1);
    tracep->declBit(c+79,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4741,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+80,"i_reset", false,-1);
    tracep->declBit(c+386,"i_valid", false,-1);
    tracep->declBit(c+2698,"o_ready", false,-1);
    tracep->declArray(c+2705,"i_data", false,-1, 66,0);
    tracep->declBit(c+74,"o_valid", false,-1);
    tracep->declBit(c+133,"i_ready", false,-1);
    tracep->declArray(c+2708,"o_data", false,-1, 66,0);
    tracep->declArray(c+2711,"w_data", false,-1, 66,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+390,"r_valid", false,-1);
    tracep->declArray(c+2711,"r_data", false,-1, 66,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+391,"r_mack", false,-1, 0,0);
    tracep->declBus(c+392,"r_merr", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+81,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+82,"drop_sgrant", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbwide_xbar ");
    tracep->declBus(c+4546,"NM", false,-1, 31,0);
    tracep->declBus(c+4543,"NS", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4592,"DW", false,-1, 31,0);
    tracep->declArray(c+4742,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4745,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4633,"LGMAXBURST", false,-1, 31,0);
    tracep->declBus(c+4556,"OPT_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+4594,"OPT_STARVATION_TIMEOUT", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_DBLBUFFER", false,-1, 0,0);
    tracep->declBus(c+4551,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBus(c+4128,"i_mcyc", false,-1, 3,0);
    tracep->declBus(c+2714,"i_mstb", false,-1, 3,0);
    tracep->declBus(c+2715,"i_mwe", false,-1, 3,0);
    tracep->declArray(c+2716,"i_maddr", false,-1, 99,0);
    tracep->declArray(c+2720,"i_mdata", false,-1, 2047,0);
    tracep->declArray(c+2784,"i_msel", false,-1, 255,0);
    tracep->declBus(c+2792,"o_mstall", false,-1, 3,0);
    tracep->declBus(c+2793,"o_mack", false,-1, 3,0);
    tracep->declArray(c+2794,"o_mdata", false,-1, 2047,0);
    tracep->declBus(c+2858,"o_merr", false,-1, 3,0);
    tracep->declBus(c+4129,"o_scyc", false,-1, 2,0);
    tracep->declBus(c+4130,"o_sstb", false,-1, 2,0);
    tracep->declBus(c+4131,"o_swe", false,-1, 2,0);
    tracep->declArray(c+4132,"o_saddr", false,-1, 74,0);
    tracep->declArray(c+4135,"o_sdata", false,-1, 1535,0);
    tracep->declArray(c+4183,"o_ssel", false,-1, 191,0);
    tracep->declBus(c+3403,"i_sstall", false,-1, 2,0);
    tracep->declBus(c+4530,"i_sack", false,-1, 2,0);
    tracep->declArray(c+3468,"i_sdata", false,-1, 1535,0);
    tracep->declBus(c+4189,"i_serr", false,-1, 2,0);
    tracep->declBus(c+4556,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4555,"LGNM", false,-1, 31,0);
    tracep->declBus(c+4555,"LGNS", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2859+i*1,"request", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2863+i*1,"requested", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2867+i*1,"grant", true,(i+0), 3,0);
    }
    tracep->declBus(c+2871,"mgrant", false,-1, 3,0);
    tracep->declBus(c+4190,"sgrant", false,-1, 2,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2872+i*1,"w_mpending", true,(i+0), 5,0);
    }
    tracep->declBus(c+2876,"mfull", false,-1, 3,0);
    tracep->declBus(c+2877,"mnearfull", false,-1, 3,0);
    tracep->declBus(c+2878,"mempty", false,-1, 3,0);
    tracep->declBus(c+4602,"timed_out", false,-1, 3,0);
    tracep->declBus(c+4546,"NMFULL", false,-1, 31,0);
    tracep->declBus(c+4546,"NSFULL", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4191+i*1,"mindex", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4195+i*1,"sindex", true,(i+0), 1,0);
    }
    tracep->declBus(c+4128,"m_cyc", false,-1, 3,0);
    tracep->declBus(c+2879,"m_stb", false,-1, 3,0);
    tracep->declBus(c+4199,"m_we", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4200+i*1,"m_addr", true,(i+0), 24,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+4204+i*16,"m_data", true,(i+0), 511,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+4268+i*2,"m_sel", true,(i+0), 63,0);
    }
    tracep->declBus(c+4390,"m_stall", false,-1, 3,0);
    tracep->declBus(c+4391,"s_stall", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+3404+i*16,"s_data", true,(i+0), 511,0);
    }
    tracep->declBus(c+4392,"s_ack", false,-1, 3,0);
    tracep->declBus(c+4276,"s_err", false,-1, 3,0);
    tracep->declBus(c+2880,"dcd_stb", false,-1, 3,0);
    tracep->declBus(c+4551,"OPT_BUFFER_DECODER", false,-1, 0,0);
    tracep->declBus(c+4531,"iN", false,-1, 31,0);
    tracep->declBus(c+4532,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[0] ");
    tracep->declBus(c+4277,"regrant", false,-1, 3,0);
    tracep->declBus(c+4533,"reindex", false,-1, 1,0);
    tracep->declBit(c+2881,"stay_on_channel", false,-1);
    tracep->declBit(c+4278,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4279,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4277,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4533,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[1] ");
    tracep->declBus(c+4280,"regrant", false,-1, 3,0);
    tracep->declBus(c+4534,"reindex", false,-1, 1,0);
    tracep->declBit(c+2882,"stay_on_channel", false,-1);
    tracep->declBit(c+4281,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4282,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4280,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4534,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[2] ");
    tracep->declBus(c+4283,"regrant", false,-1, 3,0);
    tracep->declBus(c+4535,"reindex", false,-1, 1,0);
    tracep->declBit(c+2883,"stay_on_channel", false,-1);
    tracep->declBit(c+4284,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4285,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4283,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4535,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ARBITRATE_REQUESTS[3] ");
    tracep->declBus(c+4286,"regrant", false,-1, 3,0);
    tracep->declBus(c+4536,"reindex", false,-1, 1,0);
    tracep->declBit(c+2884,"stay_on_channel", false,-1);
    tracep->declBit(c+4287,"requested_channel_is_available", false,-1);
    tracep->pushNamePrefix("MINDEX_MULTIPLE_SLAVES ");
    tracep->declBus(c+4288,"r_mindex", false,-1, 1,0);
    tracep->declBus(c+4286,"r_regrant", false,-1, 3,0);
    tracep->declBus(c+4536,"r_reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[0] ");
    tracep->declBus(c+2885,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[1] ");
    tracep->declBus(c+2886,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[2] ");
    tracep->declBus(c+2887,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("COUNT_PENDING_TRANSACTIONS[3] ");
    tracep->declBus(c+2888,"lclpending", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODE_REQUEST[0] ");
    tracep->declBit(c+83,"skd_stb", false,-1);
    tracep->declBit(c+4393,"skd_stall", false,-1);
    tracep->declBit(c+2889,"skd_we", false,-1);
    tracep->declBus(c+2890,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+2891,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+2907,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+2909,"decoded", false,-1, 3,0);
    tracep->declBit(c+2910,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4543,"NS", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4748,"DW", false,-1, 31,0);
    tracep->declArray(c+4742,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4745,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4682,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+84,"i_valid", false,-1);
    tracep->declBit(c+4393,"o_stall", false,-1);
    tracep->declBus(c+2890,"i_addr", false,-1, 24,0);
    tracep->declArray(c+2911,"i_data", false,-1, 576,0);
    tracep->declBit(c+2930,"o_valid", false,-1);
    tracep->declBit(c+4394,"i_stall", false,-1);
    tracep->declBus(c+2909,"o_decode", false,-1, 3,0);
    tracep->declBus(c+2931,"o_addr", false,-1, 24,0);
    tracep->declArray(c+2932,"o_data", false,-1, 576,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+85,"request", false,-1, 3,0);
    tracep->declBus(c+2951,"prerequest", false,-1, 2,0);
    tracep->declBus(c+31,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+86,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+87,"r_request_NS", false,-1);
    tracep->declBit(c+88,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4749,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+89,"i_reset", false,-1);
    tracep->declBit(c+177,"i_valid", false,-1);
    tracep->declBit(c+2910,"o_ready", false,-1);
    tracep->declArray(c+2952,"i_data", false,-1, 601,0);
    tracep->declBit(c+83,"o_valid", false,-1);
    tracep->declBit(c+4395,"i_ready", false,-1);
    tracep->declArray(c+2971,"o_data", false,-1, 601,0);
    tracep->declArray(c+2990,"w_data", false,-1, 601,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3009,"r_valid", false,-1);
    tracep->declArray(c+2990,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[1] ");
    tracep->declBit(c+90,"skd_stb", false,-1);
    tracep->declBit(c+4396,"skd_stall", false,-1);
    tracep->declBit(c+3010,"skd_we", false,-1);
    tracep->declBus(c+3011,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3012,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3028,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3030,"decoded", false,-1, 3,0);
    tracep->declBit(c+3031,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4543,"NS", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4748,"DW", false,-1, 31,0);
    tracep->declArray(c+4742,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4745,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4682,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+91,"i_valid", false,-1);
    tracep->declBit(c+4396,"o_stall", false,-1);
    tracep->declBus(c+3011,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3032,"i_data", false,-1, 576,0);
    tracep->declBit(c+3051,"o_valid", false,-1);
    tracep->declBit(c+4397,"i_stall", false,-1);
    tracep->declBus(c+3030,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3052,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3053,"o_data", false,-1, 576,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+92,"request", false,-1, 3,0);
    tracep->declBus(c+3072,"prerequest", false,-1, 2,0);
    tracep->declBus(c+32,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+93,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+94,"r_request_NS", false,-1);
    tracep->declBit(c+95,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4749,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+96,"i_reset", false,-1);
    tracep->declBit(c+217,"i_valid", false,-1);
    tracep->declBit(c+3031,"o_ready", false,-1);
    tracep->declArray(c+3073,"i_data", false,-1, 601,0);
    tracep->declBit(c+90,"o_valid", false,-1);
    tracep->declBit(c+4398,"i_ready", false,-1);
    tracep->declArray(c+3092,"o_data", false,-1, 601,0);
    tracep->declArray(c+3111,"w_data", false,-1, 601,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3130,"r_valid", false,-1);
    tracep->declArray(c+3111,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[2] ");
    tracep->declBit(c+97,"skd_stb", false,-1);
    tracep->declBit(c+4399,"skd_stall", false,-1);
    tracep->declBit(c+3131,"skd_we", false,-1);
    tracep->declBus(c+3132,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3133,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3149,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3151,"decoded", false,-1, 3,0);
    tracep->declBit(c+3152,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4543,"NS", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4748,"DW", false,-1, 31,0);
    tracep->declArray(c+4742,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4745,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4682,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+98,"i_valid", false,-1);
    tracep->declBit(c+4399,"o_stall", false,-1);
    tracep->declBus(c+3132,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3153,"i_data", false,-1, 576,0);
    tracep->declBit(c+3172,"o_valid", false,-1);
    tracep->declBit(c+4400,"i_stall", false,-1);
    tracep->declBus(c+3151,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3173,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3174,"o_data", false,-1, 576,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+99,"request", false,-1, 3,0);
    tracep->declBus(c+3193,"prerequest", false,-1, 2,0);
    tracep->declBus(c+33,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+100,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+101,"r_request_NS", false,-1);
    tracep->declBit(c+102,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4749,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+103,"i_reset", false,-1);
    tracep->declBit(c+239,"i_valid", false,-1);
    tracep->declBit(c+3152,"o_ready", false,-1);
    tracep->declArray(c+3194,"i_data", false,-1, 601,0);
    tracep->declBit(c+97,"o_valid", false,-1);
    tracep->declBit(c+4401,"i_ready", false,-1);
    tracep->declArray(c+3213,"o_data", false,-1, 601,0);
    tracep->declArray(c+3232,"w_data", false,-1, 601,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+3251,"r_valid", false,-1);
    tracep->declArray(c+3232,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DECODE_REQUEST[3] ");
    tracep->declBit(c+104,"skd_stb", false,-1);
    tracep->declBit(c+4402,"skd_stall", false,-1);
    tracep->declBit(c+3252,"skd_we", false,-1);
    tracep->declBus(c+3253,"skd_addr", false,-1, 24,0);
    tracep->declArray(c+3254,"skd_data", false,-1, 511,0);
    tracep->declQuad(c+3270,"skd_sel", false,-1, 63,0);
    tracep->declBus(c+3272,"decoded", false,-1, 3,0);
    tracep->declBit(c+3273,"iskd_ready", false,-1);
    tracep->pushNamePrefix("adcd ");
    tracep->declBus(c+4543,"NS", false,-1, 31,0);
    tracep->declBus(c+4549,"AW", false,-1, 31,0);
    tracep->declBus(c+4748,"DW", false,-1, 31,0);
    tracep->declArray(c+4742,"SLAVE_ADDR", false,-1, 74,0);
    tracep->declArray(c+4745,"SLAVE_MASK", false,-1, 74,0);
    tracep->declBus(c+4682,"ACCESS_ALLOWED", false,-1, 2,0);
    tracep->declBus(c+4551,"OPT_REGISTERED", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+4406,"i_reset", false,-1);
    tracep->declBit(c+105,"i_valid", false,-1);
    tracep->declBit(c+4402,"o_stall", false,-1);
    tracep->declBus(c+3253,"i_addr", false,-1, 24,0);
    tracep->declArray(c+3274,"i_data", false,-1, 576,0);
    tracep->declBit(c+3293,"o_valid", false,-1);
    tracep->declBit(c+4403,"i_stall", false,-1);
    tracep->declBus(c+3272,"o_decode", false,-1, 3,0);
    tracep->declBus(c+3294,"o_addr", false,-1, 24,0);
    tracep->declArray(c+3295,"o_data", false,-1, 576,0);
    tracep->declBus(c+4551,"OPT_NONESEL", false,-1, 0,0);
    tracep->declBus(c+106,"request", false,-1, 3,0);
    tracep->declBus(c+3314,"prerequest", false,-1, 2,0);
    tracep->declBus(c+34,"iM", false,-1, 31,0);
    tracep->pushNamePrefix("NO_DEFAULT_REQUEST ");
    tracep->declBus(c+107,"r_request", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("OPT_NONESEL_REQUEST ");
    tracep->declBit(c+108,"r_request_NS", false,-1);
    tracep->declBit(c+109,"r_none_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("iskid ");
    tracep->declBus(c+4594,"OPT_LOWPOWER", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_OUTREG", false,-1, 0,0);
    tracep->declBus(c+4594,"OPT_PASSTHROUGH", false,-1, 0,0);
    tracep->declBus(c+4749,"DW", false,-1, 31,0);
    tracep->declBus(c+4551,"OPT_INITIAL", false,-1, 0,0);
    tracep->declBit(c+4405,"i_clk", false,-1);
    tracep->declBit(c+110,"i_reset", false,-1);
    tracep->declBit(c+280,"i_valid", false,-1);
    tracep->declBit(c+3273,"o_ready", false,-1);
    tracep->declArray(c+3315,"i_data", false,-1, 601,0);
    tracep->declBit(c+104,"o_valid", false,-1);
    tracep->declBit(c+4404,"i_ready", false,-1);
    tracep->declArray(c+3334,"o_data", false,-1, 601,0);
    tracep->declArray(c+3353,"w_data", false,-1, 601,0);
    tracep->declBit(c+4557,"unused", false,-1);
    tracep->pushNamePrefix("LOGIC ");
    tracep->declBit(c+301,"r_valid", false,-1);
    tracep->declArray(c+3353,"r_data", false,-1, 601,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DOUBLE_BUFFERRED_STALL ");
    tracep->declBus(c+2793,"r_mack", false,-1, 3,0);
    tracep->declBus(c+2858,"r_merr", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GEN_SINDEX[0] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3372,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4289,"regrant", false,-1, 3,0);
    tracep->declBus(c+4290,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[1] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3373,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4291,"regrant", false,-1, 3,0);
    tracep->declBus(c+4292,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GEN_SINDEX[2] ");
    tracep->pushNamePrefix("SINDEX_MORE_THAN_ONE_MASTER ");
    tracep->declBus(c+3374,"r_sindex", false,-1, 1,0);
    tracep->declBus(c+4293,"regrant", false,-1, 3,0);
    tracep->declBus(c+4294,"reindex", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SLAVE_GRANT[0] ");
    tracep->declBit(c+134,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[1] ");
    tracep->declBit(c+135,"drop_sgrant", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SLAVE_GRANT[2] ");
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
    VlWide<48>/*1535:0*/ __Vtemp_h9e08da6e__0;
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
                               << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+86,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+87,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+88,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+89,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+90,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stb));
    bufp->fullBit(oldp+91,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+92,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+93,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+94,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+95,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+96,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+97,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stb));
    bufp->fullBit(oldp+98,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+99,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                               << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+100,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+101,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+102,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+103,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+104,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stb));
    bufp->fullBit(oldp+105,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_valid));
    bufp->fullCData(oldp+106,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 3U) | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),4);
    bufp->fullCData(oldp+107,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),3);
    bufp->fullBit(oldp+108,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+109,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+110,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+111,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_reset));
    bufp->fullBit(oldp+112,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stb));
    bufp->fullBit(oldp+113,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_valid));
    bufp->fullSData(oldp+114,((((IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS) 
                                << 0xbU) | (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request))),12);
    bufp->fullSData(oldp+115,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__NO_DEFAULT_REQUEST__DOT__r_request),11);
    bufp->fullBit(oldp+116,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_request_NS));
    bufp->fullBit(oldp+117,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__OPT_NONESEL_REQUEST__DOT__r_none_sel));
    bufp->fullBit(oldp+118,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_reset));
    bufp->fullBit(oldp+119,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+120,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__10__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+121,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+122,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+123,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__3__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+124,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__4__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+125,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__5__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+126,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__6__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+127,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__7__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+128,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__8__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+129,(vlSelf->main__DOT__wb32_xbar__DOT__SLAVE_GRANT__BRA__9__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+130,(vlSelf->main__DOT__wbu_xbar__DOT__m_stall));
    bufp->fullBit(oldp+131,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+132,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+134,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__0__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+135,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__1__KET____DOT__drop_sgrant));
    bufp->fullBit(oldp+136,(vlSelf->main__DOT__wbwide_xbar__DOT__SLAVE_GRANT__BRA__2__KET____DOT__drop_sgrant));
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
    bufp->fullIData(oldp+178,(vlSelf->main__DOT__wbwide_i2cdma_addr),25);
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
    bufp->fullIData(oldp+218,(vlSelf->main__DOT__wbwide_i2cm_addr),25);
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
    bufp->fullIData(oldp+241,(vlSelf->main__DOT__wbwide_zip_addr),25);
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
    bufp->fullIData(oldp+282,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_addr),25);
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
    bufp->fullBit(oldp+320,(vlSelf->main__DOT__wbwide_wbdown_stall));
    bufp->fullBit(oldp+321,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack));
    bufp->fullWData(oldp+322,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_data),512);
    bufp->fullBit(oldp+338,(vlSelf->main__DOT__wbwide_bkram_ack));
    bufp->fullWData(oldp+339,(vlSelf->main__DOT__wbwide_bkram_idata),512);
    bufp->fullBit(oldp+355,(vlSelf->main__DOT__wb32_wbdown_stb));
    bufp->fullBit(oldp+356,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_we));
    bufp->fullCData(oldp+357,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_addr),8);
    bufp->fullIData(oldp+358,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data[0xfU]),32);
    bufp->fullCData(oldp+359,((0xfU & (IData)((vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+360,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+361,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullIData(oldp+362,(vlSelf->main__DOT__wb32_wbdown_idata),32);
    bufp->fullIData(oldp+363,((((~ (IData)(vlSelf->main__DOT__r_sirefclk_en)) 
                                << 0x1fU) | vlSelf->main__DOT__r_sirefclk_data)),32);
    bufp->fullBit(oldp+364,(vlSelf->main__DOT__wb32_spio_ack));
    bufp->fullIData(oldp+365,((((IData)(vlSelf->main__DOT__spioi__DOT__led_demo) 
                                << 0x18U) | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw) 
                                                 << 8U) 
                                                | (IData)(vlSelf->main__DOT__spioi__DOT__r_led))))),32);
    bufp->fullBit(oldp+366,(vlSelf->main__DOT__i2cscopei__DOT__br_wb_ack));
    bufp->fullIData(oldp+367,(vlSelf->main__DOT__i2cscopei__DOT__o_bus_data),32);
    bufp->fullBit(oldp+368,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+369,(vlSelf->main__DOT__scope1_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+370,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+371,(vlSelf->main__DOT__scope2_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+372,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_wb_ack));
    bufp->fullIData(oldp+373,(vlSelf->main__DOT__scope3_ddr3i__DOT__o_bus_data),32);
    bufp->fullBit(oldp+374,(vlSelf->main__DOT__wb32_i2cs_ack));
    bufp->fullIData(oldp+375,(vlSelf->main__DOT__i2ci__DOT__bus_read_data),32);
    bufp->fullBit(oldp+376,(vlSelf->main__DOT__wb32_i2cdma_ack));
    bufp->fullIData(oldp+377,(vlSelf->main__DOT__wb32_i2cdma_idata),32);
    bufp->fullBit(oldp+378,(vlSelf->main__DOT__wb32_uart_ack));
    bufp->fullIData(oldp+379,(vlSelf->main__DOT__wb32_uart_idata),32);
    bufp->fullBit(oldp+380,(vlSelf->main__DOT__wb32_fan_ack));
    bufp->fullIData(oldp+381,(vlSelf->main__DOT__wb32_fan_idata),32);
    bufp->fullBit(oldp+382,(vlSelf->main__DOT__r_wb32_sio_ack));
    bufp->fullIData(oldp+383,(vlSelf->main__DOT__r_wb32_sio_data),32);
    bufp->fullBit(oldp+384,(vlSelf->main__DOT__r_cfg_ack));
    bufp->fullBit(oldp+385,(vlSelf->main__DOT__wbu_cyc));
    bufp->fullBit(oldp+386,(vlSelf->main__DOT__wbu_stb));
    bufp->fullBit(oldp+387,(vlSelf->main__DOT__wbu_we));
    bufp->fullIData(oldp+388,((0x3fffffffU & vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr)),30);
    bufp->fullIData(oldp+389,(vlSelf->main__DOT__wbu_data),32);
    bufp->fullBit(oldp+390,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+391,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack));
    bufp->fullBit(oldp+392,(vlSelf->main__DOT__wbu_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullIData(oldp+393,(vlSelf->main__DOT__wbu_idata),32);
    bufp->fullBit(oldp+394,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc))));
    bufp->fullBit(oldp+395,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb))));
    bufp->fullBit(oldp+396,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe))));
    bufp->fullIData(oldp+397,((0x3fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),30);
    bufp->fullIData(oldp+398,((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata)),32);
    bufp->fullCData(oldp+399,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel))),4);
    bufp->fullBit(oldp+400,(vlSelf->main__DOT__wbu_wbu_arbiter_stall));
    bufp->fullBit(oldp+401,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack));
    bufp->fullBit(oldp+402,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err));
    bufp->fullIData(oldp+403,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU]),32);
    bufp->fullBit(oldp+404,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   >> 1U))));
    bufp->fullBit(oldp+405,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb) 
                                   >> 1U))));
    bufp->fullBit(oldp+406,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe) 
                                   >> 1U))));
    bufp->fullIData(oldp+407,((0x3fffffffU & (IData)(
                                                     (vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr 
                                                      >> 0x1eU)))),30);
    bufp->fullIData(oldp+408,((IData)((vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+409,((0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+410,(vlSelf->main__DOT__wbu_zip_idata),32);
    bufp->fullBit(oldp+411,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_wstb));
    bufp->fullBit(oldp+412,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_stb));
    bufp->fullWData(oldp+413,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_data),512);
    bufp->fullSData(oldp+429,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_addr),14);
    bufp->fullQData(oldp+430,(vlSelf->main__DOT__bkrami__DOT__EXTRA_MEM_CLOCK_CYCLE__DOT__last_sel),64);
    bufp->fullIData(oldp+432,(vlSelf->main__DOT__bkrami__DOT__WRITE_TO_MEMORY__DOT__ik),32);
    bufp->fullIData(oldp+433,(vlSelf->main__DOT__r_sirefclk_data),32);
    bufp->fullIData(oldp+434,(vlSelf->main__DOT__clock_generator__DOT__counter[0]),32);
    bufp->fullIData(oldp+435,(vlSelf->main__DOT__clock_generator__DOT__counter[1]),32);
    bufp->fullIData(oldp+436,(vlSelf->main__DOT__clock_generator__DOT__counter[2]),32);
    bufp->fullIData(oldp+437,(vlSelf->main__DOT__clock_generator__DOT__counter[3]),32);
    bufp->fullIData(oldp+438,(vlSelf->main__DOT__clock_generator__DOT__counter[4]),32);
    bufp->fullIData(oldp+439,(vlSelf->main__DOT__clock_generator__DOT__counter[5]),32);
    bufp->fullIData(oldp+440,(vlSelf->main__DOT__clock_generator__DOT__counter[6]),32);
    bufp->fullIData(oldp+441,(vlSelf->main__DOT__clock_generator__DOT__counter[7]),32);
    bufp->fullIData(oldp+442,(vlSelf->main__DOT__clock_generator__DOT__r_delay),32);
    bufp->fullIData(oldp+443,(vlSelf->main__DOT__clock_generator__DOT__times_three),32);
    bufp->fullIData(oldp+444,(vlSelf->main__DOT__clock_generator__DOT__times_five),32);
    bufp->fullIData(oldp+445,(vlSelf->main__DOT__clock_generator__DOT__times_seven),32);
    bufp->fullBit(oldp+446,(vlSelf->main__DOT__console__DOT__rx_uart_reset));
    bufp->fullBit(oldp+447,(((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__w_console_rx_stb))));
    bufp->fullCData(oldp+448,(vlSelf->main__DOT__console__DOT__rxf_wb_data),7);
    bufp->fullSData(oldp+449,(vlSelf->main__DOT__console__DOT__rxf_status),16);
    bufp->fullBit(oldp+450,(vlSelf->main__DOT__console__DOT__rxf_wb_read));
    bufp->fullIData(oldp+451,(((((~ (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write)) 
                                 & (IData)(vlSelf->main__DOT__w_console_rx_stb)) 
                                << 0xcU) | (((IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow) 
                                             << 8U) 
                                            | (IData)(vlSelf->main__DOT__console__DOT__rxf_wb_data)))),32);
    bufp->fullBit(oldp+452,(((~ (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write)) 
                             & (IData)(vlSelf->main__DOT__console__DOT__txf_wb_write))));
    bufp->fullSData(oldp+453,(vlSelf->main__DOT__console__DOT__txf_status),16);
    bufp->fullBit(oldp+454,(vlSelf->main__DOT__console__DOT__txf_wb_write));
    bufp->fullBit(oldp+455,(vlSelf->main__DOT__console__DOT__tx_uart_reset));
    bufp->fullCData(oldp+456,(vlSelf->main__DOT__console__DOT__txf_wb_data),7);
    bufp->fullIData(oldp+457,((((IData)(vlSelf->__VdfgTmp_ha46ae6a3__0) 
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
    bufp->fullIData(oldp+458,((((IData)(vlSelf->main__DOT__console__DOT__txf_status) 
                                << 0x10U) | (IData)(vlSelf->main__DOT__console__DOT__rxf_status))),32);
    bufp->fullCData(oldp+459,(vlSelf->main__DOT__console__DOT__r_wb_addr),2);
    bufp->fullBit(oldp+460,(vlSelf->main__DOT__console__DOT__r_wb_ack));
    bufp->fullCData(oldp+461,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_data),7);
    bufp->fullCData(oldp+462,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__last_write),7);
    bufp->fullCData(oldp+463,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+464,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+465,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_next),6);
    bufp->fullBit(oldp+466,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_overflow));
    bufp->fullBit(oldp+467,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__will_underflow));
    bufp->fullBit(oldp+468,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__osrc));
    bufp->fullCData(oldp+469,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+470,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__rxfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+471,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_write));
    bufp->fullBit(oldp+472,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_read));
    bufp->fullCData(oldp+473,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+474,(vlSelf->main__DOT__console__DOT__rxfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+475,(vlSelf->main__DOT__console__DOT____Vcellinp__txfifo____pinNumber6));
    bufp->fullCData(oldp+476,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_data),7);
    bufp->fullCData(oldp+477,(vlSelf->main__DOT__console__DOT__txfifo__DOT__last_write),7);
    bufp->fullCData(oldp+478,(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+479,(vlSelf->main__DOT__console__DOT__txfifo__DOT__rd_addr),6);
    bufp->fullCData(oldp+480,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_next),6);
    bufp->fullBit(oldp+481,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_overflow));
    bufp->fullBit(oldp+482,(vlSelf->main__DOT__console__DOT__txfifo__DOT__will_underflow));
    bufp->fullBit(oldp+483,(vlSelf->main__DOT__console__DOT__txfifo__DOT__osrc));
    bufp->fullCData(oldp+484,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullCData(oldp+485,((0x3fU & ((IData)(2U) 
                                        + (IData)(vlSelf->main__DOT__console__DOT__txfifo__DOT__wr_addr)))),6);
    bufp->fullBit(oldp+486,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_write));
    bufp->fullBit(oldp+487,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_read));
    bufp->fullCData(oldp+488,(vlSelf->main__DOT__console__DOT__txfifo__DOT__r_fill),6);
    bufp->fullSData(oldp+489,(vlSelf->main__DOT__console__DOT__txfifo__DOT__w_fill),10);
    bufp->fullBit(oldp+490,(vlSelf->main__DOT__genbus__DOT__soft_reset));
    bufp->fullBit(oldp+491,(vlSelf->main__DOT__genbus__DOT__rx_valid));
    bufp->fullCData(oldp+492,((0x7fU & (IData)(vlSelf->main__DOT__wbu_rx_data))),8);
    bufp->fullBit(oldp+493,(vlSelf->main__DOT__genbus__DOT__in_stb));
    bufp->fullBit(oldp+494,(((IData)(vlSelf->main__DOT__genbus__DOT__rx_valid) 
                             | ((((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                                  | (IData)(vlSelf->main__DOT__genbus__DOT__in_stb)) 
                                 | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))) 
                                | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len))))));
    bufp->fullQData(oldp+495,(vlSelf->main__DOT__genbus__DOT__in_word),36);
    bufp->fullBit(oldp+497,(vlSelf->main__DOT__genbus__DOT__wbu_tx_stb));
    bufp->fullCData(oldp+498,(vlSelf->main__DOT__genbus__DOT__wbu_tx_data),8);
    bufp->fullBit(oldp+499,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n));
    bufp->fullQData(oldp+500,(vlSelf->main__DOT__genbus__DOT__ififo_codword),36);
    bufp->fullBit(oldp+502,(vlSelf->main__DOT__genbus__DOT__exec_stb));
    bufp->fullQData(oldp+503,(vlSelf->main__DOT__genbus__DOT__exec_word),36);
    bufp->fullBit(oldp+505,(vlSelf->main__DOT__genbus__DOT__ofifo_rd));
    bufp->fullQData(oldp+506,(vlSelf->main__DOT__genbus__DOT__ofifo_codword),36);
    bufp->fullBit(oldp+508,((((IData)(vlSelf->main__DOT__genbus__DOT__exec_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__ofifo_rd)))));
    bufp->fullBit(oldp+509,(vlSelf->main__DOT__genbus__DOT__ofifo_empty_n));
    bufp->fullBit(oldp+510,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_busy));
    bufp->fullIData(oldp+511,(vlSelf->main__DOT__genbus__DOT__r_wdt_timer),19);
    bufp->fullBit(oldp+512,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb))));
    bufp->fullBit(oldp+513,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active))));
    bufp->fullSData(oldp+515,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr),11);
    bufp->fullSData(oldp+516,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr),11);
    bufp->fullSData(oldp+517,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_wrptr)))),11);
    bufp->fullSData(oldp+518,((0x7ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__r_rdptr)))),11);
    bufp->fullBit(oldp+519,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_overflow));
    bufp->fullBit(oldp+520,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__will_underflow)))));
    bufp->fullBit(oldp+522,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_write));
    bufp->fullBit(oldp+523,(vlSelf->main__DOT__genbus__DOT__GEN_OUTBOUND_FIFO__DOT__busoutfifo__DOT__w_read));
    bufp->fullBit(oldp+524,((((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                              & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)) 
                                 & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow))) 
                             | ((~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_empty_n)) 
                                & (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd)))));
    bufp->fullBit(oldp+525,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__ififo_rd));
    bufp->fullCData(oldp+526,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr),7);
    bufp->fullCData(oldp+527,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr),7);
    bufp->fullCData(oldp+528,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_wrptr)))),7);
    bufp->fullCData(oldp+529,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__r_rdptr)))),7);
    bufp->fullBit(oldp+530,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_overflow));
    bufp->fullBit(oldp+531,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__will_underflow)))));
    bufp->fullBit(oldp+533,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_write));
    bufp->fullBit(oldp+534,(vlSelf->main__DOT__genbus__DOT__INPUT_FIFO__DOT__padififo__DOT__w_read));
    bufp->fullBit(oldp+535,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb));
    bufp->fullBit(oldp+536,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_valid));
    bufp->fullCData(oldp+537,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_hexbits),6);
    bufp->fullBit(oldp+538,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_stb));
    bufp->fullBit(oldp+539,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__skd_busy));
    bufp->fullBit(oldp+540,(((IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__hx_stb) 
                             | (0U < (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len)))));
    bufp->fullQData(oldp+541,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word),36);
    bufp->fullBit(oldp+543,((0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->main__DOT__genbus__DOT__in_stb) 
                             | (0U != (IData)(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb)))));
    bufp->fullCData(oldp+545,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__wr_addr),8);
    bufp->fullQData(oldp+546,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_word),36);
    bufp->fullCData(oldp+548,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cmd_addr),8);
    bufp->fullIData(oldp+549,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_addr),25);
    bufp->fullIData(oldp+550,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__w_addr),32);
    bufp->fullSData(oldp+551,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__rd_len),10);
    bufp->fullIData(oldp+552,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__cword),32);
    bufp->fullCData(oldp+553,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__GEN_COMPRESSION__DOT__unpack__DOT__r_stb),3);
    bufp->fullBit(oldp+554,((3U == (7U & (IData)((vlSelf->main__DOT__genbus__DOT__getinput__DOT__cw_word 
                                                  >> 0x21U))))));
    bufp->fullCData(oldp+555,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__r_len),3);
    bufp->fullCData(oldp+556,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__cw_len),3);
    bufp->fullCData(oldp+557,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__lastcw),2);
    bufp->fullBit(oldp+558,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__w_stb));
    bufp->fullQData(oldp+559,(vlSelf->main__DOT__genbus__DOT__getinput__DOT__formcw__DOT__shiftreg),36);
    bufp->fullIData(oldp+561,((((IData)((vlSelf->main__DOT__genbus__DOT__ififo_codword 
                                         >> 0x1fU)) 
                                << 0x1eU) | (0x3fffffffU 
                                             & (IData)(vlSelf->main__DOT__genbus__DOT__ififo_codword)))),32);
    bufp->fullCData(oldp+562,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wb_state),2);
    bufp->fullSData(oldp+563,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_acks_needed),10);
    bufp->fullSData(oldp+564,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_len),10);
    bufp->fullBit(oldp+565,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_inc));
    bufp->fullBit(oldp+566,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__r_new_addr));
    bufp->fullBit(oldp+567,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_read_request));
    bufp->fullBit(oldp+568,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__last_ack));
    bufp->fullBit(oldp+569,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__zero_acks));
    bufp->fullIData(oldp+570,(vlSelf->main__DOT__genbus__DOT__runwb__DOT__wide_addr),32);
    bufp->fullBit(oldp+571,(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy));
    bufp->fullBit(oldp+572,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb));
    bufp->fullBit(oldp+573,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb));
    bufp->fullBit(oldp+574,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_stb));
    bufp->fullBit(oldp+575,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_busy));
    bufp->fullBit(oldp+576,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_busy));
    bufp->fullBit(oldp+577,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb)))));
    bufp->fullBit(oldp+579,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb) 
                             | (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb))));
    bufp->fullBit(oldp+580,(((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_stb) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__byte_busy) 
                                & ((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl)) 
                                   & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl))))));
    bufp->fullQData(oldp+581,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword),36);
    bufp->fullQData(oldp+583,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_cword),36);
    bufp->fullCData(oldp+585,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__dw_bits),7);
    bufp->fullCData(oldp+586,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__ln_bits),7);
    bufp->fullBit(oldp+587,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__r_active));
    bufp->fullBit(oldp+588,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__aword_valid));
    bufp->fullQData(oldp+589,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__a_addrword),36);
    bufp->fullIData(oldp+591,((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_codword)),32);
    bufp->fullCData(oldp+592,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_zcheck),4);
    bufp->fullBit(oldp+593,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy));
    bufp->fullBit(oldp+594,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_busy)) 
                             & (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cp_stb))));
    bufp->fullQData(oldp+595,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__r_word),36);
    bufp->fullSData(oldp+597,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_addr),10);
    bufp->fullBit(oldp+598,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__tbl_filled));
    bufp->fullSData(oldp+599,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__rd_addr),10);
    bufp->fullBit(oldp+600,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__pmatch));
    bufp->fullBit(oldp+601,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dmatch));
    bufp->fullBit(oldp+602,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__vaddr));
    bufp->fullIData(oldp+603,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__cword),32);
    bufp->fullSData(oldp+604,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__maddr),10);
    bufp->fullBit(oldp+605,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__matched));
    bufp->fullBit(oldp+606,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__zmatch));
    bufp->fullBit(oldp+607,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__hmatch));
    bufp->fullSData(oldp+608,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld),10);
    bufp->fullCData(oldp+609,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_hlfd),3);
    bufp->fullSData(oldp+610,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__dffaddr),10);
    bufp->fullBit(oldp+611,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__clear_table));
    bufp->fullBit(oldp+612,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__addr_within_table));
    bufp->fullBit(oldp+613,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__w_match));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_COMPRESSION__DOT__packit__DOT__adr_dbld) 
                                   >> 9U))));
    bufp->fullBit(oldp+615,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT____Vcellinp__GEN_IDLES__DOT__buildcw__i_tx_busy));
    bufp->fullBit(oldp+616,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_request));
    bufp->fullBit(oldp+617,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__int_sent));
    bufp->fullBit(oldp+618,(((~ (IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state)) 
                             & (vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter 
                                >> 0x15U))));
    bufp->fullBit(oldp+619,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_state));
    bufp->fullIData(oldp+620,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__GEN_IDLES__DOT__buildcw__DOT__idle_counter),22);
    bufp->fullCData(oldp+621,(((0U == (7U & (IData)(
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
    bufp->fullCData(oldp+622,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_len),3);
    bufp->fullIData(oldp+623,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__deword__DOT__r_word),30);
    bufp->fullBit(oldp+624,(((IData)(vlSelf->main__DOT__wbu_cyc) 
                             | ((IData)(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__cw_stb) 
                                | (IData)(vlSelf->main__DOT__genbus__DOT____Vcellinp__wroutput__i_bus_busy)))));
    bufp->fullBit(oldp+625,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_out_nl));
    bufp->fullBit(oldp+626,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__last_in_nl));
    bufp->fullBit(oldp+627,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__full_line));
    bufp->fullBit(oldp+628,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__r_busy));
    bufp->fullCData(oldp+629,(vlSelf->main__DOT__genbus__DOT__wroutput__DOT__linepacker__DOT__linelen),7);
    bufp->fullSData(oldp+630,(vlSelf->main__DOT__gpioi__DOT__r_gpio),16);
    bufp->fullSData(oldp+631,(vlSelf->main__DOT__gpioi__DOT__x_gpio),16);
    bufp->fullSData(oldp+632,(vlSelf->main__DOT__gpioi__DOT__q_gpio),16);
    bufp->fullBit(oldp+633,(vlSelf->main__DOT__i2ci__DOT__r_halted));
    bufp->fullBit(oldp+634,(vlSelf->main__DOT__i2ci__DOT__cpu_new_pc));
    bufp->fullIData(oldp+635,(vlSelf->main__DOT__i2ci__DOT__pf_jump_addr),31);
    bufp->fullBit(oldp+636,(vlSelf->main__DOT__i2ci__DOT__pf_valid));
    bufp->fullBit(oldp+637,(vlSelf->main__DOT__i2ci__DOT__pf_ready));
    bufp->fullCData(oldp+638,(vlSelf->main__DOT__i2ci__DOT__pf_insn),8);
    bufp->fullIData(oldp+639,(vlSelf->main__DOT__i2ci__DOT__pf_insn_addr),31);
    bufp->fullBit(oldp+640,(vlSelf->main__DOT__i2ci__DOT__pf_illegal));
    bufp->fullBit(oldp+641,(vlSelf->main__DOT__i2ci__DOT__half_valid));
    bufp->fullBit(oldp+642,(vlSelf->main__DOT__i2ci__DOT__imm_cycle));
    bufp->fullBit(oldp+643,(vlSelf->main__DOT__i2ci__DOT__insn_ready));
    bufp->fullBit(oldp+644,(vlSelf->main__DOT__i2ci__DOT__half_ready));
    bufp->fullBit(oldp+645,(vlSelf->main__DOT__i2ci__DOT__i2c_abort));
    bufp->fullBit(oldp+646,(vlSelf->main__DOT__i2ci__DOT__insn_valid));
    bufp->fullSData(oldp+647,(vlSelf->main__DOT__i2ci__DOT__insn),12);
    bufp->fullCData(oldp+648,(vlSelf->main__DOT__i2ci__DOT__half_insn),4);
    bufp->fullBit(oldp+649,(vlSelf->main__DOT__i2ci__DOT__i2c_ckedge));
    bufp->fullBit(oldp+650,(vlSelf->main__DOT__i2ci__DOT__i2c_stretch));
    bufp->fullSData(oldp+651,(vlSelf->main__DOT__i2ci__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+652,(vlSelf->main__DOT__i2ci__DOT__ckcount),12);
    bufp->fullIData(oldp+653,(vlSelf->main__DOT__i2ci__DOT__abort_address),31);
    bufp->fullIData(oldp+654,(vlSelf->main__DOT__i2ci__DOT__jump_target),31);
    bufp->fullBit(oldp+655,(vlSelf->main__DOT__i2ci__DOT__r_wait));
    bufp->fullBit(oldp+656,(vlSelf->main__DOT__i2ci__DOT__soft_halt_request));
    bufp->fullBit(oldp+657,(vlSelf->main__DOT__i2ci__DOT__r_err));
    bufp->fullBit(oldp+658,(vlSelf->main__DOT__i2ci__DOT__r_aborted));
    bufp->fullBit(oldp+659,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+660,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+661,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+662,(((IData)(vlSelf->main__DOT__i2ci__DOT__r_halted) 
                             | (IData)(vlSelf->main__DOT__i2ci__DOT__r_wait))));
    bufp->fullBit(oldp+663,(vlSelf->main__DOT__i2ci__DOT__w_sda));
    bufp->fullBit(oldp+664,(vlSelf->main__DOT__i2ci__DOT__w_scl));
    bufp->fullBit(oldp+665,(vlSelf->main__DOT__i2ci__DOT__ovw_ready));
    bufp->fullBit(oldp+666,(vlSelf->main__DOT__i2ci__DOT__s_tvalid));
    bufp->fullSData(oldp+667,(vlSelf->main__DOT__i2ci__DOT__ovw_data),10);
    bufp->fullBit(oldp+668,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+669,(vlSelf->main__DOT__i2ci__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullBit(oldp+670,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__mid_axis_pkt));
    bufp->fullCData(oldp+671,(vlSelf->main__DOT__i2ci__DOT__GEN_TID__DOT__r_channel),2);
    bufp->fullSData(oldp+672,((0x7ffU & (IData)(vlSelf->main__DOT__i2ci__DOT__insn))),11);
    bufp->fullBit(oldp+673,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+674,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+675,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+676,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+677,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+678,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+679,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+680,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+681,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+682,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+683,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+684,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+685,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+686,(vlSelf->main__DOT__i2ci__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+687,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+688,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullWData(oldp+689,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_word),512);
    bufp->fullBit(oldp+705,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+706,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+707,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+708,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_valid));
    bufp->fullWData(oldp+709,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__rg_insn),512);
    bufp->fullWData(oldp+725,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__i_wb_shifted),512);
    bufp->fullCData(oldp+741,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_count),7);
    bufp->fullCData(oldp+742,(vlSelf->main__DOT__i2ci__DOT__u_fetch__DOT__GEN_SUBSHIFT__DOT__r_shift),6);
    bufp->fullBit(oldp+743,(vlSelf->main__DOT__i2cscopei__DOT__read_address));
    bufp->fullSData(oldp+744,(vlSelf->main__DOT__i2cscopei__DOT__raddr),10);
    bufp->fullSData(oldp+745,(vlSelf->main__DOT__i2cscopei__DOT__waddr),10);
    bufp->fullBit(oldp+746,((1U & (~ ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+747,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+748,((1U & (IData)(vlSelf->main__DOT__i2cscopei__DOT__br_config))));
    bufp->fullCData(oldp+749,(vlSelf->main__DOT__i2cscopei__DOT__br_config),3);
    bufp->fullIData(oldp+750,(vlSelf->main__DOT__i2cscopei__DOT__br_holdoff),20);
    bufp->fullIData(oldp+751,(vlSelf->main__DOT__i2cscopei__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+752,(vlSelf->main__DOT__i2cscopei__DOT__dr_triggered));
    bufp->fullBit(oldp+753,(vlSelf->main__DOT__i2cscopei__DOT__dr_primed));
    bufp->fullBit(oldp+754,(vlSelf->main__DOT__i2cscopei__DOT__dw_trigger));
    bufp->fullBit(oldp+755,(vlSelf->main__DOT__i2cscopei__DOT__dr_stopped));
    bufp->fullCData(oldp+756,(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelf->main__DOT__i2cscopei__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+758,(vlSelf->main__DOT__i2cscopei__DOT__ck_addr),31);
    bufp->fullIData(oldp+759,(vlSelf->main__DOT__i2cscopei__DOT__qd_data),31);
    bufp->fullBit(oldp+760,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_write));
    bufp->fullBit(oldp+761,(vlSelf->main__DOT__i2cscopei__DOT__dr_run_timeout));
    bufp->fullBit(oldp+762,(vlSelf->main__DOT__i2cscopei__DOT__new_data));
    bufp->fullBit(oldp+763,(vlSelf->main__DOT__i2cscopei__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+764,(vlSelf->main__DOT__i2cscopei__DOT__imm_adr));
    bufp->fullBit(oldp+765,(vlSelf->main__DOT__i2cscopei__DOT__lst_adr));
    bufp->fullIData(oldp+766,(vlSelf->main__DOT__i2cscopei__DOT__lst_val),31);
    bufp->fullIData(oldp+767,(vlSelf->main__DOT__i2cscopei__DOT__imm_val),31);
    bufp->fullBit(oldp+768,(vlSelf->main__DOT__i2cscopei__DOT__record_ce));
    bufp->fullIData(oldp+769,(vlSelf->main__DOT__i2cscopei__DOT__r_data),32);
    bufp->fullBit(oldp+770,(vlSelf->main__DOT__i2cscopei__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+771,(vlSelf->main__DOT__i2cscopei__DOT__this_addr),10);
    bufp->fullIData(oldp+772,(vlSelf->main__DOT__i2cscopei__DOT__nxt_mem),32);
    bufp->fullBit(oldp+773,(vlSelf->main__DOT__i2cscopei__DOT__br_level_interrupt));
    bufp->fullCData(oldp+774,(vlSelf->main__DOT__rcv__DOT__state),4);
    bufp->fullCData(oldp+775,(vlSelf->main__DOT__rcv__DOT__baud_counter),7);
    bufp->fullBit(oldp+776,(vlSelf->main__DOT__rcv__DOT__zero_baud_counter));
    bufp->fullBit(oldp+777,(vlSelf->main__DOT__rcv__DOT__q_uart));
    bufp->fullBit(oldp+778,(vlSelf->main__DOT__rcv__DOT__qq_uart));
    bufp->fullBit(oldp+779,(vlSelf->main__DOT__rcv__DOT__ck_uart));
    bufp->fullCData(oldp+780,(vlSelf->main__DOT__rcv__DOT__chg_counter),7);
    bufp->fullBit(oldp+781,(vlSelf->main__DOT__rcv__DOT__half_baud_time));
    bufp->fullCData(oldp+782,(vlSelf->main__DOT__rcv__DOT__data_reg),8);
    bufp->fullBit(oldp+783,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+784,(vlSelf->main__DOT__scope1_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+785,(vlSelf->main__DOT__scope1_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+786,((1U & (~ ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+787,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+788,((1U & (IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+789,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+790,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+791,(vlSelf->main__DOT__scope1_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+792,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+793,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+794,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+795,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+796,((1U & ((IData)(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+797,(vlSelf->main__DOT__scope1_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+798,(vlSelf->main__DOT__scope1_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+799,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+800,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+801,(vlSelf->main__DOT__scope1_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+802,(vlSelf->main__DOT__scope1_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+803,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+804,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+805,(vlSelf->main__DOT__scope1_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+806,(vlSelf->main__DOT__scope1_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+807,(vlSelf->main__DOT__scope1_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+808,(vlSelf->main__DOT__scope1_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+809,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+810,(vlSelf->main__DOT__scope1_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+811,(vlSelf->main__DOT__scope1_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+812,(vlSelf->main__DOT__scope1_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+813,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+814,(vlSelf->main__DOT__scope2_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+815,(vlSelf->main__DOT__scope2_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+816,((1U & (~ ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+817,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+818,((1U & (IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+819,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+820,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+821,(vlSelf->main__DOT__scope2_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+822,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+823,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+824,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+825,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+827,(vlSelf->main__DOT__scope2_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+828,(vlSelf->main__DOT__scope2_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+829,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+830,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+831,(vlSelf->main__DOT__scope2_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+832,(vlSelf->main__DOT__scope2_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+833,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+834,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+835,(vlSelf->main__DOT__scope2_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+836,(vlSelf->main__DOT__scope2_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+837,(vlSelf->main__DOT__scope2_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+838,(vlSelf->main__DOT__scope2_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+839,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+840,(vlSelf->main__DOT__scope2_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+841,(vlSelf->main__DOT__scope2_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+842,(vlSelf->main__DOT__scope2_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+843,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_address));
    bufp->fullSData(oldp+844,(vlSelf->main__DOT__scope3_ddr3i__DOT__raddr),10);
    bufp->fullSData(oldp+845,(vlSelf->main__DOT__scope3_ddr3i__DOT__waddr),10);
    bufp->fullBit(oldp+846,((1U & (~ ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                      >> 2U)))));
    bufp->fullBit(oldp+847,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config) 
                                   >> 1U))));
    bufp->fullBit(oldp+848,((1U & (IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config))));
    bufp->fullCData(oldp+849,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_config),3);
    bufp->fullIData(oldp+850,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_holdoff),20);
    bufp->fullIData(oldp+851,(vlSelf->main__DOT__scope3_ddr3i__DOT__holdoff_counter),20);
    bufp->fullBit(oldp+852,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_triggered));
    bufp->fullBit(oldp+853,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_primed));
    bufp->fullBit(oldp+854,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stopped));
    bufp->fullCData(oldp+855,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe),5);
    bufp->fullBit(oldp+856,((1U & ((IData)(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_stop_pipe) 
                                   >> 4U))));
    bufp->fullIData(oldp+857,(vlSelf->main__DOT__scope3_ddr3i__DOT__ck_addr),31);
    bufp->fullIData(oldp+858,(vlSelf->main__DOT__scope3_ddr3i__DOT__qd_data),31);
    bufp->fullBit(oldp+859,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_write));
    bufp->fullBit(oldp+860,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_run_timeout));
    bufp->fullBit(oldp+861,(vlSelf->main__DOT__scope3_ddr3i__DOT__new_data));
    bufp->fullBit(oldp+862,(vlSelf->main__DOT__scope3_ddr3i__DOT__dr_force_inhibit));
    bufp->fullBit(oldp+863,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_adr));
    bufp->fullBit(oldp+864,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_adr));
    bufp->fullIData(oldp+865,(vlSelf->main__DOT__scope3_ddr3i__DOT__lst_val),31);
    bufp->fullIData(oldp+866,(vlSelf->main__DOT__scope3_ddr3i__DOT__imm_val),31);
    bufp->fullBit(oldp+867,(vlSelf->main__DOT__scope3_ddr3i__DOT__record_ce));
    bufp->fullIData(oldp+868,(vlSelf->main__DOT__scope3_ddr3i__DOT__r_data),32);
    bufp->fullBit(oldp+869,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_pre_wb_ack));
    bufp->fullSData(oldp+870,(vlSelf->main__DOT__scope3_ddr3i__DOT__this_addr),10);
    bufp->fullIData(oldp+871,(vlSelf->main__DOT__scope3_ddr3i__DOT__nxt_mem),32);
    bufp->fullBit(oldp+872,(vlSelf->main__DOT__scope3_ddr3i__DOT__br_level_interrupt));
    bufp->fullBit(oldp+873,(vlSelf->main__DOT__spioi__DOT__led_demo));
    bufp->fullCData(oldp+874,(vlSelf->main__DOT__spioi__DOT__r_led),8);
    bufp->fullCData(oldp+875,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),8);
    bufp->fullCData(oldp+876,(vlSelf->main__DOT__spioi__DOT__bounced),8);
    bufp->fullCData(oldp+877,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__rr_sw),8);
    bufp->fullBit(oldp+878,(vlSelf->main__DOT__spioi__DOT__sw_int));
    bufp->fullBit(oldp+879,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn_int));
    bufp->fullCData(oldp+880,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__s_btn),5);
    bufp->fullCData(oldp+881,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__r_btn),5);
    bufp->fullSData(oldp+882,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__btn_pipe),10);
    bufp->fullSData(oldp+883,(vlSelf->main__DOT__spioi__DOT__GEN_SWITCHES__DOT__sw_pipe),16);
    bufp->fullCData(oldp+884,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_owner),8);
    bufp->fullBit(oldp+885,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_dir));
    bufp->fullIData(oldp+886,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_ctr),25);
    bufp->fullBit(oldp+887,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__led_clk));
    bufp->fullCData(oldp+888,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__br_ctr),5);
    bufp->fullCData(oldp+889,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__0__KET____DOT__brightness),5);
    bufp->fullCData(oldp+890,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__1__KET____DOT__brightness),5);
    bufp->fullCData(oldp+891,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__2__KET____DOT__brightness),5);
    bufp->fullCData(oldp+892,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__3__KET____DOT__brightness),5);
    bufp->fullCData(oldp+893,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__4__KET____DOT__brightness),5);
    bufp->fullCData(oldp+894,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__5__KET____DOT__brightness),5);
    bufp->fullCData(oldp+895,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__6__KET____DOT__brightness),5);
    bufp->fullCData(oldp+896,(vlSelf->main__DOT__spioi__DOT__knightrider__DOT__GEN_BRIGHTNESS__BRA__7__KET____DOT__brightness),5);
    bufp->fullSData(oldp+897,(vlSelf->main__DOT__swic__DOT__main_int_vector),15);
    bufp->fullSData(oldp+898,(vlSelf->main__DOT__swic__DOT__alt_int_vector),15);
    bufp->fullBit(oldp+899,(vlSelf->main__DOT__swic__DOT__ctri_int));
    bufp->fullBit(oldp+900,(vlSelf->main__DOT__swic__DOT__tma_int));
    bufp->fullBit(oldp+901,(vlSelf->main__DOT__swic__DOT__tmb_int));
    bufp->fullBit(oldp+902,(vlSelf->main__DOT__swic__DOT__tmc_int));
    bufp->fullBit(oldp+903,(vlSelf->main__DOT__swic__DOT__jif_int));
    bufp->fullBit(oldp+904,(vlSelf->main__DOT__swic__DOT__dmac_int));
    bufp->fullBit(oldp+905,(vlSelf->main__DOT__swic__DOT__mtc_int));
    bufp->fullBit(oldp+906,(vlSelf->main__DOT__swic__DOT__moc_int));
    bufp->fullBit(oldp+907,(vlSelf->main__DOT__swic__DOT__mpc_int));
    bufp->fullBit(oldp+908,(vlSelf->main__DOT__swic__DOT__mic_int));
    bufp->fullBit(oldp+909,(vlSelf->main__DOT__swic__DOT__utc_int));
    bufp->fullBit(oldp+910,(vlSelf->main__DOT__swic__DOT__uoc_int));
    bufp->fullBit(oldp+911,(vlSelf->main__DOT__swic__DOT__upc_int));
    bufp->fullBit(oldp+912,(vlSelf->main__DOT__swic__DOT__uic_int));
    bufp->fullIData(oldp+913,(((4U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullBit(oldp+914,(vlSelf->main__DOT__swic__DOT__actr_ack));
    bufp->fullBit(oldp+915,(((IData)(vlSelf->main__DOT__swic__DOT__cmd_write) 
                             | ((IData)(vlSelf->main__DOT__swic__DOT__cmd_read) 
                                | ((~ ((IData)(vlSelf->main__DOT__swic__DOT__dbg_addr) 
                                       >> 6U)) & (IData)(vlSelf->main__DOT__swic__DOT__dbg_stb))))));
    bufp->fullBit(oldp+916,(vlSelf->main__DOT__swic__DOT__sys_cyc));
    bufp->fullBit(oldp+917,(vlSelf->main__DOT__swic__DOT__sys_stb));
    bufp->fullBit(oldp+918,(vlSelf->main__DOT__swic__DOT__sys_we));
    bufp->fullCData(oldp+919,(vlSelf->main__DOT__swic__DOT__sys_addr),8);
    bufp->fullIData(oldp+920,(vlSelf->main__DOT__swic__DOT__sys_data),32);
    bufp->fullIData(oldp+921,(vlSelf->main__DOT__swic__DOT__cpu_addr),25);
    bufp->fullIData(oldp+922,(vlSelf->main__DOT__swic__DOT__sys_idata),32);
    bufp->fullBit(oldp+923,(vlSelf->main__DOT__swic__DOT__sys_ack));
    bufp->fullBit(oldp+924,(vlSelf->main__DOT__swic__DOT__sel_timer));
    bufp->fullBit(oldp+925,(vlSelf->main__DOT__swic__DOT__sel_pic));
    bufp->fullBit(oldp+926,(vlSelf->main__DOT__swic__DOT__sel_apic));
    bufp->fullBit(oldp+927,(vlSelf->main__DOT__swic__DOT__sel_watchdog));
    bufp->fullBit(oldp+928,(vlSelf->main__DOT__swic__DOT__sel_bus_watchdog));
    bufp->fullBit(oldp+929,(vlSelf->main__DOT__swic__DOT__sel_dmac));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                             & ((IData)(vlSelf->main__DOT__swic__DOT__sys_addr) 
                                >> 7U))));
    bufp->fullBit(oldp+931,(vlSelf->main__DOT__swic__DOT__dbg_cyc));
    bufp->fullBit(oldp+932,(vlSelf->main__DOT__swic__DOT__dbg_stb));
    bufp->fullBit(oldp+933,(vlSelf->main__DOT__swic__DOT__dbg_we));
    bufp->fullCData(oldp+934,(vlSelf->main__DOT__swic__DOT__dbg_addr),7);
    bufp->fullIData(oldp+935,(vlSelf->main__DOT__swic__DOT__dbg_idata),32);
    bufp->fullBit(oldp+936,(vlSelf->main__DOT__swic__DOT__dbg_ack));
    bufp->fullBit(oldp+937,(vlSelf->main__DOT__swic__DOT__dbg_stall));
    bufp->fullIData(oldp+938,(vlSelf->main__DOT__swic__DOT__dbg_odata),32);
    bufp->fullCData(oldp+939,(vlSelf->main__DOT__swic__DOT__dbg_sel),4);
    bufp->fullBit(oldp+940,(vlSelf->main__DOT__swic__DOT__no_dbg_err));
    bufp->fullBit(oldp+941,(vlSelf->main__DOT__swic__DOT__cpu_break));
    bufp->fullBit(oldp+942,(vlSelf->main__DOT__swic__DOT__dbg_cmd_write));
    bufp->fullBit(oldp+943,(vlSelf->main__DOT__swic__DOT__dbg_cpu_write));
    bufp->fullBit(oldp+944,(vlSelf->main__DOT__swic__DOT__dbg_cpu_read));
    bufp->fullBit(oldp+945,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__r_reset_hold));
    bufp->fullBit(oldp+946,(vlSelf->main__DOT__swic__DOT__GEN_DBG_CATCH__DOT__r_dbg_catch));
    bufp->fullBit(oldp+947,(vlSelf->main__DOT__swic__DOT__reset_request));
    bufp->fullBit(oldp+948,(((~ vlSelf->main__DOT__swic__DOT__dbg_idata) 
                             & (IData)(vlSelf->main__DOT__swic__DOT____VdfgTmp_h145b7951__0))));
    bufp->fullBit(oldp+949,(vlSelf->main__DOT__swic__DOT__halt_request));
    bufp->fullBit(oldp+950,(vlSelf->main__DOT__swic__DOT__step_request));
    bufp->fullBit(oldp+951,(vlSelf->main__DOT__swic__DOT__clear_cache_request));
    bufp->fullBit(oldp+952,(vlSelf->main__DOT__swic__DOT__cmd_reset));
    bufp->fullBit(oldp+953,(vlSelf->main__DOT__swic__DOT__cmd_halt));
    bufp->fullBit(oldp+954,(vlSelf->main__DOT__swic__DOT__cmd_step));
    bufp->fullBit(oldp+955,(vlSelf->main__DOT__swic__DOT__cmd_clear_cache));
    bufp->fullBit(oldp+956,(vlSelf->main__DOT__swic__DOT__cmd_write));
    bufp->fullBit(oldp+957,(vlSelf->main__DOT__swic__DOT__cmd_read));
    bufp->fullCData(oldp+958,(vlSelf->main__DOT__swic__DOT__cmd_waddr),5);
    bufp->fullIData(oldp+959,(vlSelf->main__DOT__swic__DOT__cmd_wdata),32);
    bufp->fullCData(oldp+960,(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc),3);
    bufp->fullBit(oldp+961,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall)))));
    bufp->fullBit(oldp+962,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__w_dbg_stall));
    bufp->fullIData(oldp+963,(((((IData)(vlSelf->main__DOT__gpio_int) 
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
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                   >> 1U))));
    bufp->fullBit(oldp+965,(vlSelf->main__DOT__swic__DOT__wdt_ack));
    bufp->fullBit(oldp+966,(vlSelf->main__DOT__swic__DOT__wdt_reset));
    bufp->fullIData(oldp+967,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),32);
    bufp->fullBit(oldp+968,(vlSelf->main__DOT__swic__DOT__wdbus_ack));
    bufp->fullIData(oldp+969,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),25);
    bufp->fullIData(oldp+970,(vlSelf->main__DOT__swic__DOT__pic_data),32);
    bufp->fullIData(oldp+971,(vlSelf->main__DOT__swic__DOT__r_wdbus_data),32);
    bufp->fullBit(oldp+972,((1U & ((~ (IData)(vlSelf->main__DOT__wbwide_zip_cyc)) 
                                   | ((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                      | ((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                                         >> 2U))))));
    bufp->fullBit(oldp+973,(vlSelf->main__DOT__swic__DOT__wdbus_int));
    bufp->fullBit(oldp+974,(vlSelf->main__DOT__swic__DOT__cpu_pf_stall));
    bufp->fullBit(oldp+975,(vlSelf->main__DOT__swic__DOT__cpu_i_count));
    bufp->fullBit(oldp+976,(vlSelf->main__DOT__swic__DOT__dmac_stb));
    bufp->fullBit(oldp+977,(vlSelf->main__DOT__swic__DOT__dc_err));
    bufp->fullIData(oldp+978,(vlSelf->main__DOT__swic__DOT__dmac_data),32);
    bufp->fullBit(oldp+979,(vlSelf->main__DOT__swic__DOT__dmac_ack));
    bufp->fullBit(oldp+980,(vlSelf->main__DOT__swic__DOT__dc_cyc));
    bufp->fullBit(oldp+981,(vlSelf->main__DOT__swic__DOT__dc_stb));
    bufp->fullBit(oldp+982,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)))));
    bufp->fullBit(oldp+983,(vlSelf->main__DOT__swic__DOT__dc_stall));
    bufp->fullBit(oldp+984,(vlSelf->main__DOT__swic__DOT__dc_ack));
    bufp->fullIData(oldp+985,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr
                                : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr)),25);
    bufp->fullWData(oldp+986,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_data),512);
    bufp->fullQData(oldp+1002,(((IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel
                                 : vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel)),64);
    bufp->fullBit(oldp+1004,(vlSelf->main__DOT__swic__DOT__cpu_gbl_cyc));
    bufp->fullIData(oldp+1005,((((IData)(vlSelf->main__DOT__swic__DOT__alt_int_vector) 
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
    bufp->fullBit(oldp+1006,(((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__sel_apic))));
    bufp->fullIData(oldp+1007,(vlSelf->main__DOT__swic__DOT__ctri_data),32);
    bufp->fullBit(oldp+1008,(vlSelf->main__DOT__swic__DOT__tma_ack));
    bufp->fullBit(oldp+1009,(vlSelf->main__DOT__swic__DOT__tmb_ack));
    bufp->fullBit(oldp+1010,(vlSelf->main__DOT__swic__DOT__tmc_ack));
    bufp->fullBit(oldp+1011,(vlSelf->main__DOT__swic__DOT__jif_ack));
    bufp->fullIData(oldp+1012,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value)),32);
    bufp->fullIData(oldp+1013,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value)),32);
    bufp->fullIData(oldp+1014,((((IData)(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload) 
                                 << 0x1fU) | vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value)),32);
    bufp->fullIData(oldp+1015,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__r_counter),32);
    bufp->fullBit(oldp+1016,(((IData)(vlSelf->main__DOT__swic__DOT__sys_cyc) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__sys_stb) 
                                 & (IData)(vlSelf->main__DOT__swic__DOT__sel_pic)))));
    bufp->fullBit(oldp+1017,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                               ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl)
                               : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb))));
    bufp->fullBit(oldp+1018,(vlSelf->main__DOT__swic__DOT__cpu_lcl_cyc));
    bufp->fullBit(oldp+1019,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl))));
    bufp->fullBit(oldp+1020,(vlSelf->main__DOT__swic__DOT__cpu_we));
    bufp->fullWData(oldp+1021,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_data),512);
    bufp->fullQData(oldp+1037,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner)
                                 ? vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel
                                 : 0xffffffffffffffffULL)),64);
    bufp->fullWData(oldp+1039,(vlSelf->main__DOT__swic__DOT__cpu_idata),512);
    bufp->fullBit(oldp+1055,(vlSelf->main__DOT__swic__DOT__cpu_stall));
    bufp->fullBit(oldp+1056,(vlSelf->main__DOT__swic__DOT__pic_interrupt));
    bufp->fullBit(oldp+1057,(vlSelf->main__DOT__swic__DOT__cpu_ack));
    bufp->fullBit(oldp+1058,(vlSelf->main__DOT__swic__DOT__cpu_err));
    bufp->fullIData(oldp+1059,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SETDBG__DOT__r_dbg_reg),32);
    bufp->fullBit(oldp+1060,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner)) 
                                    | ((IData)(vlSelf->__VdfgTmp_h503d14d1__0) 
                                       >> 2U)))));
    bufp->fullBit(oldp+1061,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack) 
                               >> 2U) & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1062,(((IData)(vlSelf->main__DOT__swic__DOT__ext_err) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner))));
    bufp->fullBit(oldp+1063,(vlSelf->main__DOT__swic__DOT__r_mmus_ack));
    bufp->fullBit(oldp+1064,(vlSelf->main__DOT__swic__DOT__ext_err));
    bufp->fullIData(oldp+1065,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))
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
    bufp->fullCData(oldp+1066,(vlSelf->main__DOT__swic__DOT__w_ack_idx),3);
    bufp->fullCData(oldp+1067,(vlSelf->main__DOT__swic__DOT__ack_idx),3);
    bufp->fullBit(oldp+1068,(vlSelf->main__DOT__swic__DOT__last_sys_stb));
    bufp->fullBit(oldp+1069,(vlSelf->main__DOT__swic__DOT__cmd_read_ack));
    bufp->fullBit(oldp+1070,(vlSelf->main__DOT__swic__DOT__dbg_pre_ack));
    bufp->fullCData(oldp+1071,(vlSelf->main__DOT__swic__DOT__dbg_pre_addr),2);
    bufp->fullIData(oldp+1072,(vlSelf->main__DOT__swic__DOT__dbg_cpu_status),32);
    bufp->fullBit(oldp+1073,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_ack));
    bufp->fullBit(oldp+1074,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_ack));
    bufp->fullBit(oldp+1075,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_ack));
    bufp->fullBit(oldp+1076,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_ack));
    bufp->fullBit(oldp+1077,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_ack));
    bufp->fullBit(oldp+1078,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_ack));
    bufp->fullBit(oldp+1079,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_ack));
    bufp->fullBit(oldp+1080,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_ack));
    bufp->fullIData(oldp+1081,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mtc_data),32);
    bufp->fullIData(oldp+1082,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__moc_data),32);
    bufp->fullIData(oldp+1083,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mpc_data),32);
    bufp->fullIData(oldp+1084,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__mic_data),32);
    bufp->fullIData(oldp+1085,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__utc_data),32);
    bufp->fullIData(oldp+1086,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uoc_data),32);
    bufp->fullIData(oldp+1087,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__upc_data),32);
    bufp->fullIData(oldp+1088,(vlSelf->main__DOT__swic__DOT__ACCOUNTING_COUNTERS__DOT__uic_data),32);
    bufp->fullBit(oldp+1089,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mins_ctr____pinNumber5));
    bufp->fullBit(oldp+1090,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mmstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1091,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mpstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1092,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)))));
    bufp->fullBit(oldp+1093,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__mtask_ctr____pinNumber5));
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_i_count) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1095,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__uins_ctr____pinNumber5));
    bufp->fullBit(oldp+1096,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__umstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1097,(((IData)(vlSelf->main__DOT__swic__DOT__cpu_pf_stall) 
                              & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                 >> 1U))));
    bufp->fullBit(oldp+1098,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__upstall_ctr____pinNumber5));
    bufp->fullBit(oldp+1099,((1U & ((~ (IData)(vlSelf->main__DOT__swic__DOT__cmd_halt)) 
                                    & ((IData)(vlSelf->main__DOT__swic__DOT__cpu_dbg_cc) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1100,(vlSelf->main__DOT__swic__DOT____Vcellinp__ACCOUNTING_COUNTERS__DOT__utask_ctr____pinNumber5));
    bufp->fullBit(oldp+1101,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_we));
    bufp->fullCData(oldp+1102,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_addr),7);
    bufp->fullIData(oldp+1103,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_data),32);
    bufp->fullCData(oldp+1104,(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_sel),4);
    bufp->fullCData(oldp+1105,((3U & (IData)(vlSelf->main__DOT__swic__DOT__sys_addr))),2);
    bufp->fullBit(oldp+1106,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_request));
    bufp->fullBit(oldp+1107,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_abort));
    bufp->fullBit(oldp+1108,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_busy));
    bufp->fullBit(oldp+1109,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_err));
    bufp->fullIData(oldp+1110,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_src),31);
    bufp->fullIData(oldp+1111,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_dst),31);
    bufp->fullIData(oldp+1112,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1113,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr 
                                << 6U)),31);
    bufp->fullIData(oldp+1114,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_length),31);
    bufp->fullIData(oldp+1115,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_length),31);
    bufp->fullSData(oldp+1116,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_transferlen),11);
    bufp->fullBit(oldp+1117,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__dma_trigger));
    bufp->fullBit(oldp+1118,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_request));
    bufp->fullBit(oldp+1119,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_request));
    bufp->fullBit(oldp+1120,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_busy));
    bufp->fullBit(oldp+1121,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_busy));
    bufp->fullBit(oldp+1122,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_err));
    bufp->fullBit(oldp+1123,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_err));
    bufp->fullBit(oldp+1124,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_inc));
    bufp->fullBit(oldp+1125,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_inc));
    bufp->fullCData(oldp+1126,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size),2);
    bufp->fullCData(oldp+1127,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_size),2);
    bufp->fullIData(oldp+1128,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr),31);
    bufp->fullIData(oldp+1129,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_addr),31);
    bufp->fullSData(oldp+1130,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__r_transferlen),11);
    bufp->fullBit(oldp+1131,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_cyc));
    bufp->fullBit(oldp+1132,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stb));
    bufp->fullBit(oldp+1133,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_stall));
    bufp->fullBit(oldp+1134,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_ack));
    bufp->fullBit(oldp+1135,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_err));
    bufp->fullIData(oldp+1136,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_addr),25);
    bufp->fullQData(oldp+1137,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_rd_sel),64);
    bufp->fullBit(oldp+1139,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_valid));
    bufp->fullBit(oldp+1140,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_ready));
    bufp->fullBit(oldp+1141,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_last));
    bufp->fullWData(oldp+1142,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__sreg),512);
    bufp->fullCData(oldp+1158,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__m_bytes),7);
    bufp->fullBit(oldp+1159,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_valid));
    bufp->fullBit(oldp+1160,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full)))));
    bufp->fullBit(oldp+1161,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_last));
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
    bufp->fullWData(oldp+1162,(__Vtemp_hd1e4c677__0),512);
    bufp->fullCData(oldp+1178,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1179,((1U & (~ (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty)))));
    bufp->fullBit(oldp+1180,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__tx_ready));
    bufp->fullBit(oldp+1181,((1U & (vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U] 
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
    bufp->fullWData(oldp+1182,(__Vtemp_h6ddae8d1__0),512);
    bufp->fullCData(oldp+1198,((0x7fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data[0x10U])),7);
    bufp->fullBit(oldp+1199,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_full));
    bufp->fullBit(oldp+1200,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__r_empty));
    bufp->fullCData(oldp+1201,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__ign_sfifo_fill),5);
    bufp->fullBit(oldp+1202,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_valid));
    bufp->fullBit(oldp+1203,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_ready));
    bufp->fullBit(oldp+1204,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_last));
    bufp->fullWData(oldp+1205,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__sreg),512);
    bufp->fullCData(oldp+1221,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__m_bytes),7);
    bufp->fullBit(oldp+1222,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_cyc));
    bufp->fullBit(oldp+1223,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stb));
    bufp->fullBit(oldp+1224,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_stall));
    bufp->fullBit(oldp+1225,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_ack));
    bufp->fullBit(oldp+1226,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_err));
    bufp->fullIData(oldp+1227,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_addr),25);
    bufp->fullQData(oldp+1228,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__s2mm_wr_sel),64);
    bufp->fullBit(oldp+1230,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__r_a_owner));
    bufp->fullBit(oldp+1231,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_arbiter__DOT__ALT__DOT__last_owner));
    bufp->fullBit(oldp+1232,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_trigger));
    bufp->fullBit(oldp+1233,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_err));
    bufp->fullBit(oldp+1234,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_zero_len));
    bufp->fullBit(oldp+1235,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__r_busy));
    bufp->fullCData(oldp+1236,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__int_sel),5);
    bufp->fullIData(oldp+1237,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_src),32);
    bufp->fullIData(oldp+1238,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_dst),32);
    bufp->fullIData(oldp+1239,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_len),32);
    bufp->fullIData(oldp+1240,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__next_tlen),32);
    bufp->fullIData(oldp+1241,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_controller__DOT__w_control_reg),32);
    bufp->fullCData(oldp+1242,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_dma_fsm__DOT__fsm_state),2);
    bufp->fullBit(oldp+1243,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellinp__u_sfifo__i_reset));
    bufp->fullCData(oldp+1244,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_size),7);
    bufp->fullCData(oldp+1245,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_size),7);
    bufp->fullCData(oldp+1246,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_size),7);
    bufp->fullCData(oldp+1247,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__first_size),7);
    bufp->fullIData(oldp+1248,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_addr),31);
    bufp->fullIData(oldp+1249,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__last_request_addr),31);
    bufp->fullCData(oldp+1250,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__subaddr),6);
    bufp->fullCData(oldp+1251,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_subaddr),6);
    bufp->fullQData(oldp+1252,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__nxtstb_sel),64);
    bufp->fullQData(oldp+1254,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
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
    bufp->fullQData(oldp+1256,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__base_sel),64);
    bufp->fullQData(oldp+1258,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                 ? ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0x8000000000000000ULL 
                                        >> (0x3fU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : (0xc000000000000000ULL 
                                        >> (0x3eU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr)))
                                 : ((1U & (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_size))
                                     ? (0xf000000000000000ULL 
                                        >> (0x3cU & vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__mm2s_addr))
                                     : 0xffffffffffffffffULL))),64);
    bufp->fullSData(oldp+1260,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__wb_outstanding),11);
    bufp->fullCData(oldp+1261,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__fill),8);
    bufp->fullCData(oldp+1262,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__next_fill),8);
    bufp->fullSData(oldp+1263,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdstb_len),11);
    bufp->fullSData(oldp+1264,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__rdack_len),11);
    bufp->fullCData(oldp+1265,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__pre_shift),6);
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
    bufp->fullWData(oldp+1266,(__Vtemp_h6d0d1506__0),512);
    bufp->fullBit(oldp+1282,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_inc));
    bufp->fullCData(oldp+1283,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_mm2s__DOT__r_size),2);
    bufp->fullWData(oldp+1284,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__sreg),1024);
    bufp->fullCData(oldp+1316,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_fill),8);
    bufp->fullCData(oldp+1317,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill),8);
    bufp->fullBit(oldp+1318,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__next_last));
    bufp->fullBit(oldp+1319,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__r_last));
    bufp->fullBit(oldp+1320,((0x40U <= (IData)(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__fill))));
    bufp->fullCData(oldp+1321,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__shift),6);
    bufp->fullWData(oldp+1322,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_rxgears__DOT__s_data),512);
    bufp->fullBit(oldp+1338,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_inc));
    bufp->fullCData(oldp+1339,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_size),2);
    bufp->fullIData(oldp+1340,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr),32);
    bufp->fullCData(oldp+1341,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__subaddr),6);
    bufp->fullWData(oldp+1342,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_data),1024);
    bufp->fullWData(oldp+1374,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_data),512);
    bufp->fullWData(oldp+1390,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_sel),128);
    bufp->fullWData(oldp+1394,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__pre_sel),128);
    bufp->fullQData(oldp+1398,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_sel),64);
    bufp->fullBit(oldp+1400,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__r_last));
    bufp->fullSData(oldp+1401,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_outstanding),10);
    bufp->fullBit(oldp+1402,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__wb_pipeline_full));
    bufp->fullBit(oldp+1403,((vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_s2mm__DOT__next_addr 
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
    bufp->fullWData(oldp+1404,(__Vtemp_h6b3f223d__0),520);
    bufp->fullWData(oldp+1421,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT____Vcellout__u_sfifo__o_data),520);
    bufp->fullWData(oldp+1438,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[0]),520);
    bufp->fullWData(oldp+1455,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[1]),520);
    bufp->fullWData(oldp+1472,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[2]),520);
    bufp->fullWData(oldp+1489,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[3]),520);
    bufp->fullWData(oldp+1506,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[4]),520);
    bufp->fullWData(oldp+1523,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[5]),520);
    bufp->fullWData(oldp+1540,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[6]),520);
    bufp->fullWData(oldp+1557,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[7]),520);
    bufp->fullWData(oldp+1574,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[8]),520);
    bufp->fullWData(oldp+1591,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[9]),520);
    bufp->fullWData(oldp+1608,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[10]),520);
    bufp->fullWData(oldp+1625,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[11]),520);
    bufp->fullWData(oldp+1642,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[12]),520);
    bufp->fullWData(oldp+1659,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[13]),520);
    bufp->fullWData(oldp+1676,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[14]),520);
    bufp->fullWData(oldp+1693,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__mem[15]),520);
    bufp->fullCData(oldp+1710,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__wr_addr),5);
    bufp->fullCData(oldp+1711,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__rd_addr),5);
    bufp->fullBit(oldp+1712,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_wr));
    bufp->fullBit(oldp+1713,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_sfifo__DOT__w_rd));
    bufp->fullBit(oldp+1714,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_last));
    bufp->fullBit(oldp+1715,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__r_next));
    bufp->fullCData(oldp+1716,(vlSelf->main__DOT__swic__DOT__DMA__DOT__dma_controller__DOT__u_txgears__DOT__fill),7);
    bufp->fullCData(oldp+1717,(vlSelf->main__DOT__swic__DOT__INITIAL_RESET_HOLD__DOT__reset_counter),5);
    bufp->fullSData(oldp+1718,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_state),15);
    bufp->fullSData(oldp+1719,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1720,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__r_mie));
    bufp->fullBit(oldp+1721,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__w_any));
    bufp->fullBit(oldp+1722,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__wb_write));
    bufp->fullBit(oldp+1723,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__enable_ints));
    bufp->fullBit(oldp+1724,(vlSelf->main__DOT__swic__DOT__MAIN_PIC__DOT__pic__DOT__disable_ints));
    bufp->fullSData(oldp+1725,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_state),15);
    bufp->fullSData(oldp+1726,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_int_enable),15);
    bufp->fullBit(oldp+1727,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__r_mie));
    bufp->fullBit(oldp+1728,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__w_any));
    bufp->fullBit(oldp+1729,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__wb_write));
    bufp->fullBit(oldp+1730,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__enable_ints));
    bufp->fullBit(oldp+1731,(vlSelf->main__DOT__swic__DOT__PIC_WITH_ACCOUNTING__DOT__ALT_PIC__DOT__ctri__DOT__disable_ints));
    bufp->fullBit(oldp+1732,(vlSelf->main__DOT__swic__DOT__dmacvcpu__DOT__r_a_owner));
    bufp->fullCData(oldp+1733,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))),5);
    bufp->fullBit(oldp+1734,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_new_pc));
    bufp->fullBit(oldp+1735,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_clear_icache));
    bufp->fullIData(oldp+1736,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address),31);
    bufp->fullIData(oldp+1737,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]),32);
    bufp->fullIData(oldp+1738,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc),31);
    bufp->fullBit(oldp+1739,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_valid));
    bufp->fullBit(oldp+1740,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_illegal));
    bufp->fullBit(oldp+1741,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_cyc));
    bufp->fullBit(oldp+1742,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stb));
    bufp->fullBit(oldp+1743,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_stall));
    bufp->fullBit(oldp+1744,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_ack));
    bufp->fullBit(oldp+1745,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_err));
    bufp->fullIData(oldp+1746,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_addr),25);
    bufp->fullBit(oldp+1747,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__CLEAR_DCACHE__DOT__r_clear_dcache));
    bufp->fullBit(oldp+1748,((0U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullCData(oldp+1749,((7U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),3);
    bufp->fullIData(oldp+1750,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr),32);
    bufp->fullIData(oldp+1751,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_lock_pc),31);
    bufp->fullIData(oldp+1752,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata),32);
    bufp->fullCData(oldp+1753,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_R),5);
    bufp->fullBit(oldp+1754,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_busy));
    bufp->fullBit(oldp+1755,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_rdbusy));
    bufp->fullBit(oldp+1756,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_pipe_stalled));
    bufp->fullBit(oldp+1757,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_valid));
    bufp->fullBit(oldp+1758,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_err));
    bufp->fullCData(oldp+1759,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wreg),5);
    bufp->fullIData(oldp+1760,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_result),32);
    bufp->fullBit(oldp+1761,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_lcl));
    bufp->fullBit(oldp+1762,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stb_gbl));
    bufp->fullBit(oldp+1763,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_lcl));
    bufp->fullBit(oldp+1764,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cyc_gbl));
    bufp->fullIData(oldp+1765,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_bus_addr),25);
    bufp->fullBit(oldp+1766,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_we));
    bufp->fullBit(oldp+1767,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_stall));
    bufp->fullBit(oldp+1768,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_ack));
    bufp->fullBit(oldp+1769,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_err));
    bufp->fullQData(oldp+1770,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__r_wb_sel),64);
    bufp->fullIData(oldp+1772,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__ik),32);
    bufp->fullBit(oldp+1773,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cyc));
    bufp->fullBit(oldp+1774,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__stb));
    bufp->fullBit(oldp+1775,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_ack));
    bufp->fullBit(oldp+1776,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__end_of_line));
    bufp->fullBit(oldp+1777,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_line_stb));
    bufp->fullBit(oldp+1778,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_gbl));
    bufp->fullBit(oldp+1779,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_wb_cyc_lcl));
    bufp->fullCData(oldp+1780,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__npending),5);
    bufp->fullCData(oldp+1781,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_v),8);
    bufp->fullIData(oldp+1782,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[0]),22);
    bufp->fullIData(oldp+1783,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[1]),22);
    bufp->fullIData(oldp+1784,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[2]),22);
    bufp->fullIData(oldp+1785,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[3]),22);
    bufp->fullIData(oldp+1786,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[4]),22);
    bufp->fullIData(oldp+1787,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[5]),22);
    bufp->fullIData(oldp+1788,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[6]),22);
    bufp->fullIData(oldp+1789,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_vtags[7]),22);
    bufp->fullBit(oldp+1790,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__set_vflag));
    bufp->fullCData(oldp+1791,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+1792,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_addr),6);
    bufp->fullWData(oldp+1793,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_iword),512);
    bufp->fullWData(oldp+1809,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cached_rword),512);
    bufp->fullBit(oldp+1825,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_gbl));
    bufp->fullBit(oldp+1826,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__lock_lcl));
    bufp->fullBit(oldp+1827,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wr));
    bufp->fullWData(oldp+1828,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wdata),512);
    bufp->fullQData(oldp+1844,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_wsel),64);
    bufp->fullCData(oldp+1846,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__c_waddr),6);
    bufp->fullIData(oldp+1847,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag),22);
    bufp->fullBit(oldp+1848,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__last_tag_valid));
    bufp->fullCData(oldp+1849,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                      >> 9U))),3);
    bufp->fullCData(oldp+1850,((0x3fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                         >> 6U))),6);
    bufp->fullBit(oldp+1851,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__cache_miss_inow));
    bufp->fullBit(oldp+1852,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__w_cachable));
    bufp->fullBit(oldp+1853,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__raw_cachable_address));
    bufp->fullBit(oldp+1854,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cachable));
    bufp->fullBit(oldp+1855,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_svalid));
    bufp->fullBit(oldp+1856,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_dvalid));
    bufp->fullBit(oldp+1857,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd));
    bufp->fullBit(oldp+1858,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_cache_miss));
    bufp->fullBit(oldp+1859,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_rd_pending));
    bufp->fullIData(oldp+1860,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr),25);
    bufp->fullCData(oldp+1861,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1862,((0x3fU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr)),6);
    bufp->fullIData(oldp+1863,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_addr 
                                             >> 3U))),22);
    bufp->fullBit(oldp+1864,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__wr_cstb));
    bufp->fullBit(oldp+1865,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_iv));
    bufp->fullBit(oldp+1866,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__in_cache));
    bufp->fullIData(oldp+1867,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__r_itag),22);
    bufp->fullSData(oldp+1868,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__req_data),13);
    bufp->fullBit(oldp+1869,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__gie));
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
    bufp->fullWData(oldp+1870,(__Vtemp_h01ff8f7b__0),512);
    bufp->fullWData(oldp+1886,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__pre_shifted),512);
    bufp->fullCData(oldp+1902,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel),4);
    bufp->fullQData(oldp+1903,(((0xffU == (vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr 
                                           >> 0x18U))
                                 ? ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                    >> (3U & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr))
                                 : (((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_SEL__DOT__pre_sel)) 
                                     << 0x3cU) >> (0x3fU 
                                                   & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),64);
    bufp->fullIData(oldp+1905,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__pre_shift),32);
    bufp->fullWData(oldp+1906,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__wide_preshift),512);
    bufp->fullWData(oldp+1922,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__GEN_WIDE_BUS__DOT__shifted_data),512);
    bufp->fullSData(oldp+1938,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[0]),12);
    bufp->fullSData(oldp+1939,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[1]),12);
    bufp->fullSData(oldp+1940,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[2]),12);
    bufp->fullSData(oldp+1941,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[3]),12);
    bufp->fullSData(oldp+1942,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[4]),12);
    bufp->fullSData(oldp+1943,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[5]),12);
    bufp->fullSData(oldp+1944,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[6]),12);
    bufp->fullSData(oldp+1945,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[7]),12);
    bufp->fullSData(oldp+1946,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[8]),12);
    bufp->fullSData(oldp+1947,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[9]),12);
    bufp->fullSData(oldp+1948,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[10]),12);
    bufp->fullSData(oldp+1949,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[11]),12);
    bufp->fullSData(oldp+1950,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[12]),12);
    bufp->fullSData(oldp+1951,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[13]),12);
    bufp->fullSData(oldp+1952,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[14]),12);
    bufp->fullSData(oldp+1953,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__fifo_data[15]),12);
    bufp->fullCData(oldp+1954,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__wraddr),5);
    bufp->fullCData(oldp+1955,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__OPT_PIPE_FIFO__DOT__rdaddr),5);
    bufp->fullIData(oldp+1956,((0x7fffffffU & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)),31);
    bufp->fullBit(oldp+1957,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v));
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
    bufp->fullWData(oldp+1958,(__Vtemp_he3c3974d__0),512);
    bufp->fullIData(oldp+1974,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[0]),19);
    bufp->fullIData(oldp+1975,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[1]),19);
    bufp->fullIData(oldp+1976,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[2]),19);
    bufp->fullIData(oldp+1977,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[3]),19);
    bufp->fullIData(oldp+1978,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[4]),19);
    bufp->fullIData(oldp+1979,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[5]),19);
    bufp->fullIData(oldp+1980,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[6]),19);
    bufp->fullIData(oldp+1981,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__cache_tags[7]),19);
    bufp->fullCData(oldp+1982,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask),8);
    bufp->fullBit(oldp+1983,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_pc));
    bufp->fullBit(oldp+1984,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_v_from_last));
    bufp->fullBit(oldp+1985,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__rvsrc));
    bufp->fullBit(oldp+1986,((((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U)) 
                               == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                                >> 9U))) 
                              & ((vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup 
                                  == (0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                                   >> 9U))) 
                                 & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__valid_mask) 
                                    >> (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                              >> 9U)))))));
    bufp->fullBit(oldp+1987,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_v_from_last));
    bufp->fullIData(oldp+1988,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc),31);
    bufp->fullCData(oldp+1989,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__wraddr),6);
    bufp->fullIData(oldp+1990,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__pc_tag_lookup),22);
    bufp->fullIData(oldp+1991,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_tag_lookup),22);
    bufp->fullIData(oldp+1992,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__tag_lookup),22);
    bufp->fullIData(oldp+1993,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                             >> 9U))),22);
    bufp->fullIData(oldp+1994,((0x3fffffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                             >> 9U))),22);
    bufp->fullBit(oldp+1995,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_valid));
    bufp->fullIData(oldp+1996,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__illegal_cache),22);
    bufp->fullWData(oldp+1997,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc_cache),512);
    bufp->fullWData(oldp+2013,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_last_cache),512);
    bufp->fullBit(oldp+2029,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__isrc));
    bufp->fullCData(oldp+2030,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__delay),2);
    bufp->fullBit(oldp+2031,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__svmask));
    bufp->fullBit(oldp+2032,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_ack));
    bufp->fullBit(oldp+2033,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__needload));
    bufp->fullBit(oldp+2034,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__last_addr));
    bufp->fullBit(oldp+2035,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__bus_abort));
    bufp->fullCData(oldp+2036,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__saddr),3);
    bufp->fullBit(oldp+2037,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__w_invalidate_result));
    bufp->fullCData(oldp+2038,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__pf_request_address 
                                      >> 9U))),3);
    bufp->fullCData(oldp+2039,((7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__lastpc 
                                      >> 9U))),3);
    bufp->fullWData(oldp+2040,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted),512);
    bufp->fullCData(oldp+2056,((0xfU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__r_pc 
                                        >> 2U))),4);
    bufp->fullBit(oldp+2057,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__PRIORITY_DATA__DOT__pformem__DOT__r_a_owner));
    bufp->fullIData(oldp+2058,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[0]),32);
    bufp->fullIData(oldp+2059,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[1]),32);
    bufp->fullIData(oldp+2060,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[2]),32);
    bufp->fullIData(oldp+2061,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[3]),32);
    bufp->fullIData(oldp+2062,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[4]),32);
    bufp->fullIData(oldp+2063,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[5]),32);
    bufp->fullIData(oldp+2064,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[6]),32);
    bufp->fullIData(oldp+2065,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[7]),32);
    bufp->fullIData(oldp+2066,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[8]),32);
    bufp->fullIData(oldp+2067,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[9]),32);
    bufp->fullIData(oldp+2068,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[10]),32);
    bufp->fullIData(oldp+2069,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[11]),32);
    bufp->fullIData(oldp+2070,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[12]),32);
    bufp->fullIData(oldp+2071,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[13]),32);
    bufp->fullIData(oldp+2072,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[14]),32);
    bufp->fullIData(oldp+2073,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[15]),32);
    bufp->fullIData(oldp+2074,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[16]),32);
    bufp->fullIData(oldp+2075,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[17]),32);
    bufp->fullIData(oldp+2076,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[18]),32);
    bufp->fullIData(oldp+2077,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[19]),32);
    bufp->fullIData(oldp+2078,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[20]),32);
    bufp->fullIData(oldp+2079,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[21]),32);
    bufp->fullIData(oldp+2080,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[22]),32);
    bufp->fullIData(oldp+2081,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[23]),32);
    bufp->fullIData(oldp+2082,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[24]),32);
    bufp->fullIData(oldp+2083,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[25]),32);
    bufp->fullIData(oldp+2084,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[26]),32);
    bufp->fullIData(oldp+2085,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[27]),32);
    bufp->fullIData(oldp+2086,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[28]),32);
    bufp->fullIData(oldp+2087,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[29]),32);
    bufp->fullIData(oldp+2088,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[30]),32);
    bufp->fullIData(oldp+2089,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset[31]),32);
    bufp->fullCData(oldp+2090,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__flags),4);
    bufp->fullCData(oldp+2091,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__iflags),4);
    bufp->fullSData(oldp+2092,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_uflags),16);
    bufp->fullSData(oldp+2093,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_iflags),16);
    bufp->fullBit(oldp+2094,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__break_en));
    bufp->fullBit(oldp+2095,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__user_step));
    bufp->fullBit(oldp+2096,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__sleep));
    bufp->fullBit(oldp+2097,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_halted));
    bufp->fullBit(oldp+2098,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_BREAK__DOT__r_break_pending));
    bufp->fullBit(oldp+2099,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_trap));
    bufp->fullBit(oldp+2100,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie));
    bufp->fullBit(oldp+2101,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_TRAP_N_UBREAK__DOT__r_ubreak));
    bufp->fullBit(oldp+2102,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pending_interrupt));
    bufp->fullBit(oldp+2103,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_user_stepped));
    bufp->fullBit(oldp+2104,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__step));
    bufp->fullBit(oldp+2105,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_ILLEGAL_INSN__DOT__r_ill_err_u));
    bufp->fullBit(oldp+2106,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ill_err_i));
    bufp->fullBit(oldp+2107,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ibus_err_flag));
    bufp->fullBit(oldp+2108,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_BUSERR__DOT__r_ubus_err_flag));
    bufp->fullBit(oldp+2109,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__r_idiv_err_flag));
    bufp->fullBit(oldp+2110,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVERR__DOT__USER_DIVERR__DOT__r_udiv_err_flag));
    bufp->fullBit(oldp+2111,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_IHALT_PHASE__DOT__r_ihalt_phase));
    bufp->fullBit(oldp+2112,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_UHALT_PHASE__DOT__r_uhalt_phase));
    bufp->fullBit(oldp+2113,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__master_ce));
    bufp->fullIData(oldp+2114,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__pf_pc),31);
    bufp->fullBit(oldp+2115,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__new_pc));
    bufp->fullCData(oldp+2116,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_opn),4);
    bufp->fullBit(oldp+2117,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase));
    bufp->fullCData(oldp+2118,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A))),5);
    bufp->fullCData(oldp+2119,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B))),5);
    bufp->fullCData(oldp+2120,((0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R))),5);
    bufp->fullCData(oldp+2121,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preA),5);
    bufp->fullCData(oldp+2122,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_preB),5);
    bufp->fullBit(oldp+2123,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 6U))));
    bufp->fullBit(oldp+2124,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 6U))));
    bufp->fullBit(oldp+2125,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A) 
                                    >> 5U))));
    bufp->fullBit(oldp+2126,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B) 
                                    >> 5U))));
    bufp->fullBit(oldp+2127,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 6U))));
    bufp->fullBit(oldp+2128,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R) 
                                    >> 5U))));
    bufp->fullCData(oldp+2129,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F),4);
    bufp->fullBit(oldp+2130,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wR));
    bufp->fullBit(oldp+2131,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rA));
    bufp->fullBit(oldp+2132,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_rB));
    bufp->fullBit(oldp+2133,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_ALU));
    bufp->fullBit(oldp+2134,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_M));
    bufp->fullBit(oldp+2135,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_DIV));
    bufp->fullBit(oldp+2136,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_FP));
    bufp->fullBit(oldp+2137,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_wF));
    bufp->fullBit(oldp+2138,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_break));
    bufp->fullBit(oldp+2139,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_lock));
    bufp->fullBit(oldp+2140,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_pipe));
    bufp->fullBit(oldp+2141,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_ljmp));
    bufp->fullBit(oldp+2142,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_valid));
    bufp->fullIData(oldp+2143,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_I),32);
    bufp->fullBit(oldp+2144,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_zI));
    bufp->fullBit(oldp+2145,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_illegal));
    bufp->fullBit(oldp+2146,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch));
    bufp->fullBit(oldp+2147,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_early_branch_stb));
    bufp->fullIData(oldp+2148,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_EARLY_BRANCH_LOGIC__DOT__r_branch_pc),31);
    bufp->fullBit(oldp+2149,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_prelock_stall));
    bufp->fullBit(oldp+2150,((1U >= (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock))));
    bufp->fullBit(oldp+2151,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_cc_invalid_for_dcd));
    bufp->fullBit(oldp+2152,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_STALL__DOT__r_pending_sreg_write));
    bufp->fullBit(oldp+2153,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_mem));
    bufp->fullBit(oldp+2154,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_alu));
    bufp->fullBit(oldp+2155,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_div));
    bufp->fullBit(oldp+2156,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid_fpu));
    bufp->fullCData(oldp+2157,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn),4);
    bufp->fullBit(oldp+2158,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_Rcc));
    bufp->fullCData(oldp+2159,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Aid),5);
    bufp->fullCData(oldp+2160,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_Bid),5);
    bufp->fullBit(oldp+2161,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rA));
    bufp->fullBit(oldp+2162,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_REG_ADVANEC__DOT__r_op_rB));
    bufp->fullIData(oldp+2163,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Av),32);
    bufp->fullIData(oldp+2164,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_Bv),32);
    bufp->fullIData(oldp+2165,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_OP_PC__DOT__r_op_pc),31);
    bufp->fullIData(oldp+2166,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Av),32);
    bufp->fullIData(oldp+2167,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_Bv),32);
    bufp->fullIData(oldp+2168,(((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc))
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
    bufp->fullBit(oldp+2169,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_WR__DOT__r_op_wR));
    bufp->fullBit(oldp+2170,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_wF));
    bufp->fullCData(oldp+2171,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_GIE__DOT__r_gie)
                                 ? (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hefd95ffe__0)
                                 : (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_hb0e009d2__0))),4);
    bufp->fullCData(oldp+2172,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F),7);
    bufp->fullCData(oldp+2173,(((0x80U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F) 
                                          << 4U)) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_F))),8);
    bufp->fullBit(oldp+2174,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OPT_CIS_OP_PHASE__DOT__r_op_phase));
    bufp->fullBit(oldp+2175,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OP_PIPE__DOT__r_op_pipe));
    bufp->fullBit(oldp+2176,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_op_break));
    bufp->fullBit(oldp+2177,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_op_valid));
    bufp->fullBit(oldp+2178,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_illegal));
    bufp->fullBit(oldp+2179,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_OPLOCK__DOT__r_op_lock));
    bufp->fullIData(oldp+2180,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PC__DOT__r_alu_pc),31);
    bufp->fullCData(oldp+2181,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_reg),5);
    bufp->fullBit(oldp+2182,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_alu_pc_valid));
    bufp->fullBit(oldp+2183,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__mem_pc_valid));
    bufp->fullBit(oldp+2184,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_pc_valid));
    bufp->fullBit(oldp+2185,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_ALU_PHASE__DOT__r_alu_phase));
    bufp->fullIData(oldp+2186,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result),32);
    bufp->fullCData(oldp+2187,(((((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
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
    bufp->fullBit(oldp+2188,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_valid));
    bufp->fullBit(oldp+2189,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__r_busy));
    bufp->fullBit(oldp+2190,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__set_cond));
    bufp->fullBit(oldp+2191,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wR));
    bufp->fullBit(oldp+2192,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_wF));
    bufp->fullBit(oldp+2193,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_ALU_ILLEGAL__DOT__r_alu_illegal));
    bufp->fullBit(oldp+2194,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_error));
    bufp->fullBit(oldp+2195,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_busy));
    bufp->fullBit(oldp+2196,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_valid));
    bufp->fullIData(oldp+2197,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result),32);
    bufp->fullCData(oldp+2198,(((4U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                                       >> 0x1dU)) | 
                                (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c) 
                                  << 1U) | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z)))),4);
    bufp->fullBit(oldp+2199,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbgv));
    bufp->fullBit(oldp+2200,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_clear_pipe));
    bufp->fullIData(oldp+2201,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dbg_val),32);
    bufp->fullIData(oldp+2202,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__debug_pc),32);
    bufp->fullBit(oldp+2203,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__r_dbg_stall));
    bufp->fullBit(oldp+2204,((0xfU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2205,((0xeU == (0xfU & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id)))));
    bufp->fullBit(oldp+2206,((0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2207,((0x1eU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id))));
    bufp->fullBit(oldp+2208,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_ce));
    bufp->fullBit(oldp+2209,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags_ce));
    bufp->fullCData(oldp+2210,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_flags),4);
    bufp->fullCData(oldp+2211,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_index),3);
    bufp->fullCData(oldp+2212,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_reg_id),5);
    bufp->fullIData(oldp+2213,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_gpreg_vl),32);
    bufp->fullIData(oldp+2214,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__wr_spreg_vl),32);
    bufp->fullBit(oldp+2215,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_switch_to_interrupt));
    bufp->fullBit(oldp+2216,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__w_release_from_interrupt));
    bufp->fullIData(oldp+2217,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ipc),31);
    bufp->fullIData(oldp+2218,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__SET_USER_PC__DOT__r_upc),31);
    bufp->fullBit(oldp+2219,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc));
    bufp->fullBit(oldp+2220,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____VdfgTmp_ha62fb8d9__0) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__last_write_to_cc))));
    bufp->fullCData(oldp+2221,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_R),7);
    bufp->fullCData(oldp+2222,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_A),7);
    bufp->fullCData(oldp+2223,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_full_B),7);
    bufp->fullCData(oldp+2224,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__bisrc),2);
    bufp->fullBit(oldp+2225,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim));
    bufp->fullIData(oldp+2226,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__r_alu_sim_immv),23);
    bufp->fullCData(oldp+2227,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__ALU_SIM__DOT__regid),5);
    bufp->fullCData(oldp+2228,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__BUSLOCK__DOT__r_bus_lock),2);
    bufp->fullBit(oldp+2229,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__doalu__i_reset));
    bufp->fullBit(oldp+2230,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))));
    bufp->fullBit(oldp+2231,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_busy));
    bufp->fullIData(oldp+2232,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_divisor),32);
    bufp->fullQData(oldp+2233,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_dividend),63);
    bufp->fullQData(oldp+2235,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__diff),33);
    bufp->fullBit(oldp+2237,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_sign));
    bufp->fullBit(oldp+2238,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__pre_sign));
    bufp->fullBit(oldp+2239,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_z));
    bufp->fullBit(oldp+2240,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_c));
    bufp->fullBit(oldp+2241,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__last_bit));
    bufp->fullCData(oldp+2242,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__r_bit),5);
    bufp->fullBit(oldp+2243,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__DIVIDE__DOT__thedivide__DOT__zero_divisor));
    bufp->fullBit(oldp+2244,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__div_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2245,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PENDING_INTERRUPT__DOT__r_pending_interrupt));
    bufp->fullBit(oldp+2246,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_stb));
    bufp->fullIData(oldp+2247,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_addr),31);
    bufp->fullIData(oldp+2248,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__GEN_PROFILER__DOT__prof_ticks),32);
    bufp->fullBit(oldp+2249,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim));
    bufp->fullIData(oldp+2250,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__OP_SIM__DOT__r_op_sim_immv),23);
    bufp->fullIData(oldp+2251,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__regset
                               [(0x1fU & (IData)(vlSelf->main__DOT__swic__DOT__dbg_addr))]),32);
    bufp->fullIData(oldp+2252,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_brev_result),32);
    bufp->fullBit(oldp+2253,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result)));
    bufp->fullBit(oldp+2254,((vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_result 
                              >> 0x1fU)));
    bufp->fullBit(oldp+2255,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2256,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl) 
                              & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT____VdfgTmp_heed50945__0))));
    bufp->fullBit(oldp+2257,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__c));
    bufp->fullBit(oldp+2258,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__pre_sign));
    bufp->fullBit(oldp+2259,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__set_ovfl));
    bufp->fullBit(oldp+2260,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__keep_sgn_on_ovfl));
    bufp->fullQData(oldp+2261,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsr_result),33);
    bufp->fullQData(oldp+2263,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_asr_result),33);
    bufp->fullQData(oldp+2265,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__w_lsl_result),33);
    bufp->fullQData(oldp+2267,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__mpy_result),64);
    bufp->fullBit(oldp+2269,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_hi));
    bufp->fullBit(oldp+2270,((1U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe))));
    bufp->fullBit(oldp+2271,((1U & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe) 
                                    >> 1U))));
    bufp->fullQData(oldp+2272,(((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                << 1U)),33);
    bufp->fullQData(oldp+2274,((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                                ((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_wdata)) 
                                                                 << 1U), 
                                                                (0x1fU 
                                                                 & vlSelf->main__DOT__swic__DOT__thecpu__DOT__mem_cpu_addr)))),33);
    bufp->fullCData(oldp+2276,((3U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__FWD_OPERATION__DOT__r_op_opn))),2);
    bufp->fullQData(oldp+2277,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_smpy_result),64);
    bufp->fullQData(oldp+2279,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_umpy_result),64);
    bufp->fullIData(oldp+2281,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input),32);
    bufp->fullIData(oldp+2282,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input),32);
    bufp->fullCData(oldp+2283,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__mpypipe),2);
    bufp->fullCData(oldp+2284,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_sgn),2);
    bufp->fullQData(oldp+2285,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input)))),64);
    bufp->fullQData(oldp+2287,((((QData)((IData)((- (IData)(
                                                            (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input)))),64);
    bufp->fullQData(oldp+2289,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_a_input))),64);
    bufp->fullQData(oldp+2291,((QData)((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__doalu__DOT__thempy__DOT__IMPY__DOT__MPN1__DOT__MPN2__DOT__MPY3CK__DOT__r_mpy_b_input))),64);
    bufp->fullBit(oldp+2293,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT____Vcellinp__instruction_decoder__i_reset));
    bufp->fullCData(oldp+2294,((0x1fU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x16U))),5);
    bufp->fullBit(oldp+2295,((0xcU == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                               >> 1U)))));
    bufp->fullBit(oldp+2296,((0xdU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2297,((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                             >> 1U)))));
    bufp->fullBit(oldp+2298,((9U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2299,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU));
    bufp->fullBit(oldp+2300,((8U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2301,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_noop));
    bufp->fullBit(oldp+2302,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_lock));
    bufp->fullBit(oldp+2303,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7800000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2304,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                              & (0x7000000U == (0x7c00000U 
                                                & vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)))));
    bufp->fullBit(oldp+2305,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special));
    bufp->fullBit(oldp+2306,((2U == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op))));
    bufp->fullBit(oldp+2307,(((5U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                              >> 1U))) 
                              | (0xcU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))));
    bufp->fullBit(oldp+2308,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_pc));
    bufp->fullBit(oldp+2309,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_dcdR_cc));
    bufp->fullBit(oldp+2310,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xfU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullBit(oldp+2311,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB) 
                              & (0xeU == (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h20660d0e__0)))));
    bufp->fullCData(oldp+2312,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_h9ed30f6d__0)
                                 ? 8U : (((0U == (7U 
                                                  & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                     >> 0x13U))) 
                                          << 3U) | 
                                         (7U & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                                >> 0x13U))))),4);
    bufp->fullBit(oldp+2313,(((8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
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
    bufp->fullBit(oldp+2314,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_mem));
    bufp->fullBit(oldp+2315,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto));
    bufp->fullBit(oldp+2316,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_div));
    bufp->fullBit(oldp+2317,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_fpu));
    bufp->fullBit(oldp+2318,((1U & (~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                       | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                          | (8U == 
                                             (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+2319,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT____VdfgTmp_he52a0fcf__0) 
                              | (((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_ALU) 
                                  & ((8U != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)) 
                                     & (0xdU != (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op)))) 
                                 | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                                    | (8U == (0xfU 
                                              & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                 >> 1U))))))));
    bufp->fullBit(oldp+2320,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_rB));
    bufp->fullBit(oldp+2321,(((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_sto) 
                              | ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_special) 
                                 | (8U == (0xfU & ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op) 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+2322,((0x7c87c000U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword)));
    bufp->fullBit(oldp+2323,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_ljmp));
    bufp->fullIData(oldp+2324,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword),32);
    bufp->fullBit(oldp+2325,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__pf_valid));
    bufp->fullSData(oldp+2326,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_nxt_half),15);
    bufp->fullCData(oldp+2327,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_cis_op),5);
    bufp->fullIData(oldp+2328,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__r_I),23);
    bufp->fullIData(oldp+2329,((0x7fffffU & ((2U & (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc))
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
    bufp->fullIData(oldp+2330,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I),23);
    bufp->fullBit(oldp+2331,((0U == vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_I)));
    bufp->fullCData(oldp+2332,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__w_immsrc),2);
    bufp->fullBit(oldp+2333,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_OPIPE__DOT__r_insn_is_pipeable));
    bufp->fullCData(oldp+2334,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_IMMEDIATE__DOT__w_halfI),8);
    bufp->fullCData(oldp+2335,((0xffU & (vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__iword 
                                         >> 0x10U))),8);
    bufp->fullBit(oldp+2336,(((~ (IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__GEN_CIS_PHASE__DOT__r_phase)) 
                              & (IData)((0x78800000U 
                                         == (0xfffc0000U 
                                             & vlSelf->main__DOT__swic__DOT__thecpu__DOT__PFCACHE__DOT__pf__DOT__SHIFT_INSN__DOT__shifted[0xfU]))))));
    bufp->fullBit(oldp+2337,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_jiffies__i_wb_stb));
    bufp->fullBit(oldp+2338,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_set));
    bufp->fullBit(oldp+2339,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_set));
    bufp->fullBit(oldp+2340,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_now));
    bufp->fullIData(oldp+2341,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__int_when),32);
    bufp->fullIData(oldp+2342,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__new_when),32);
    bufp->fullIData(oldp+2343,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_wb),32);
    bufp->fullIData(oldp+2344,(vlSelf->main__DOT__swic__DOT__u_jiffies__DOT__till_when),32);
    bufp->fullBit(oldp+2345,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_a__i_wb_stb));
    bufp->fullBit(oldp+2346,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_running));
    bufp->fullBit(oldp+2347,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_zero));
    bufp->fullIData(oldp+2348,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__r_value),31);
    bufp->fullBit(oldp+2349,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__wb_write));
    bufp->fullBit(oldp+2350,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2351,(vlSelf->main__DOT__swic__DOT__u_timer_a__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2352,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_b__i_wb_stb));
    bufp->fullBit(oldp+2353,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_running));
    bufp->fullBit(oldp+2354,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_zero));
    bufp->fullIData(oldp+2355,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__r_value),31);
    bufp->fullBit(oldp+2356,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__wb_write));
    bufp->fullBit(oldp+2357,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2358,(vlSelf->main__DOT__swic__DOT__u_timer_b__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2359,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_timer_c__i_wb_stb));
    bufp->fullBit(oldp+2360,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_running));
    bufp->fullBit(oldp+2361,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_zero));
    bufp->fullIData(oldp+2362,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__r_value),31);
    bufp->fullBit(oldp+2363,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__wb_write));
    bufp->fullBit(oldp+2364,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_auto_reload));
    bufp->fullIData(oldp+2365,(vlSelf->main__DOT__swic__DOT__u_timer_c__DOT__GEN_RELOAD__DOT__r_interval_count),31);
    bufp->fullBit(oldp+2366,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchbus____pinNumber2));
    bufp->fullSData(oldp+2367,(vlSelf->main__DOT__swic__DOT__u_watchbus__DOT__r_value),14);
    bufp->fullBit(oldp+2368,(vlSelf->main__DOT__swic__DOT____Vcellinp__u_watchdog__i_wb_stb));
    bufp->fullBit(oldp+2369,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_running));
    bufp->fullBit(oldp+2370,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_zero));
    bufp->fullIData(oldp+2371,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__r_value),31);
    bufp->fullBit(oldp+2372,(vlSelf->main__DOT__swic__DOT__u_watchdog__DOT__wb_write));
    bufp->fullCData(oldp+2373,(vlSelf->main__DOT__txv__DOT__baud_counter),7);
    bufp->fullCData(oldp+2374,(vlSelf->main__DOT__txv__DOT__state),4);
    bufp->fullCData(oldp+2375,(vlSelf->main__DOT__txv__DOT__lcl_data),8);
    bufp->fullBit(oldp+2376,(vlSelf->main__DOT__txv__DOT__zero_baud_counter));
    bufp->fullSData(oldp+2377,(vlSelf->main__DOT__u_fan__DOT__pwm_counter),13);
    bufp->fullSData(oldp+2378,(vlSelf->main__DOT__u_fan__DOT__ctl_fpga),13);
    bufp->fullSData(oldp+2379,(vlSelf->main__DOT__u_fan__DOT__ctl_sys),13);
    bufp->fullBit(oldp+2380,(vlSelf->main__DOT__u_fan__DOT__ck_tach));
    bufp->fullBit(oldp+2381,(vlSelf->main__DOT__u_fan__DOT__last_tach));
    bufp->fullCData(oldp+2382,(vlSelf->main__DOT__u_fan__DOT__pipe_tach),2);
    bufp->fullBit(oldp+2383,(vlSelf->main__DOT__u_fan__DOT__tach_reset));
    bufp->fullIData(oldp+2384,(vlSelf->main__DOT__u_fan__DOT__tach_count),27);
    bufp->fullIData(oldp+2385,(vlSelf->main__DOT__u_fan__DOT__tach_counter),27);
    bufp->fullIData(oldp+2386,(vlSelf->main__DOT__u_fan__DOT__tach_timer),27);
    bufp->fullBit(oldp+2387,(vlSelf->main__DOT__u_fan__DOT__i2c_wb_ack));
    bufp->fullIData(oldp+2388,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_read_data),32);
    bufp->fullBit(oldp+2389,(vlSelf->main__DOT__u_fan__DOT__ign_mem_cyc));
    bufp->fullBit(oldp+2390,(vlSelf->main__DOT__u_fan__DOT__mem_stb));
    bufp->fullCData(oldp+2391,(vlSelf->main__DOT__u_fan__DOT__mem_addr),5);
    bufp->fullCData(oldp+2392,(vlSelf->main__DOT__u_fan__DOT__mem_data),8);
    bufp->fullBit(oldp+2393,(vlSelf->main__DOT__u_fan__DOT__mem_ack));
    bufp->fullBit(oldp+2394,(vlSelf->main__DOT__u_fan__DOT__i2cd_valid));
    bufp->fullBit(oldp+2395,(vlSelf->main__DOT__u_fan__DOT__i2cd_last));
    bufp->fullCData(oldp+2396,(vlSelf->main__DOT__u_fan__DOT__i2cd_data),8);
    bufp->fullBit(oldp+2397,(vlSelf->main__DOT__u_fan__DOT__pp_ms));
    bufp->fullIData(oldp+2398,(vlSelf->main__DOT__u_fan__DOT__trigger_counter),17);
    bufp->fullIData(oldp+2399,(vlSelf->main__DOT__u_fan__DOT__temp_tmp),24);
    bufp->fullIData(oldp+2400,(vlSelf->main__DOT__u_fan__DOT__temp_data),32);
    bufp->fullBit(oldp+2401,(vlSelf->main__DOT__u_fan__DOT__pre_ack));
    bufp->fullIData(oldp+2402,(vlSelf->main__DOT__u_fan__DOT__pre_data),32);
    bufp->fullBit(oldp+2403,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted));
    bufp->fullBit(oldp+2404,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__cpu_new_pc));
    bufp->fullCData(oldp+2405,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_jump_addr),5);
    bufp->fullBit(oldp+2406,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_valid));
    bufp->fullBit(oldp+2407,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_ready));
    bufp->fullCData(oldp+2408,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn),8);
    bufp->fullCData(oldp+2409,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_insn_addr),5);
    bufp->fullBit(oldp+2410,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__pf_illegal));
    bufp->fullBit(oldp+2411,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_valid));
    bufp->fullBit(oldp+2412,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__imm_cycle));
    bufp->fullBit(oldp+2413,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_ready));
    bufp->fullBit(oldp+2414,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_ready));
    bufp->fullBit(oldp+2415,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_abort));
    bufp->fullBit(oldp+2416,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn_valid));
    bufp->fullSData(oldp+2417,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn),12);
    bufp->fullCData(oldp+2418,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn),4);
    bufp->fullBit(oldp+2419,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckedge));
    bufp->fullBit(oldp+2420,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_stretch));
    bufp->fullSData(oldp+2421,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__i2c_ckcount),12);
    bufp->fullSData(oldp+2422,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ckcount),12);
    bufp->fullCData(oldp+2423,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__abort_address),5);
    bufp->fullCData(oldp+2424,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__jump_target),5);
    bufp->fullBit(oldp+2425,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait));
    bufp->fullBit(oldp+2426,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__soft_halt_request));
    bufp->fullBit(oldp+2427,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_err));
    bufp->fullBit(oldp+2428,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted));
    bufp->fullBit(oldp+2429,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__manual));
    bufp->fullBit(oldp+2430,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__sda));
    bufp->fullBit(oldp+2431,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__scl));
    bufp->fullBit(oldp+2432,(((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_halted) 
                              | (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_wait))));
    bufp->fullBit(oldp+2433,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_sda));
    bufp->fullBit(oldp+2434,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__w_scl));
    bufp->fullBit(oldp+2435,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_ready));
    bufp->fullBit(oldp+2436,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__s_tvalid));
    bufp->fullSData(oldp+2437,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__ovw_data),10);
    bufp->fullBit(oldp+2438,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_scl));
    bufp->fullBit(oldp+2439,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__GEN_MANUAL__DOT__o_sda));
    bufp->fullSData(oldp+2440,((0x7ffU & (IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__insn))),11);
    bufp->fullBit(oldp+2441,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__last_byte));
    bufp->fullBit(oldp+2442,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__dir));
    bufp->fullBit(oldp+2443,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__will_ack));
    bufp->fullCData(oldp+2444,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__state),4);
    bufp->fullCData(oldp+2445,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__nbits),3);
    bufp->fullCData(oldp+2446,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__sreg),8);
    bufp->fullBit(oldp+2447,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_scl));
    bufp->fullBit(oldp+2448,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__q_sda));
    bufp->fullBit(oldp+2449,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_scl));
    bufp->fullBit(oldp+2450,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__ck_sda));
    bufp->fullBit(oldp+2451,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_scl));
    bufp->fullBit(oldp+2452,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__lst_sda));
    bufp->fullBit(oldp+2453,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__stop_bit));
    bufp->fullBit(oldp+2454,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_axisi2c__DOT__channel_busy));
    bufp->fullBit(oldp+2455,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__last_stb));
    bufp->fullBit(oldp+2456,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__invalid_bus_cycle));
    bufp->fullCData(oldp+2457,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_word),8);
    bufp->fullBit(oldp+2458,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_valid));
    bufp->fullCData(oldp+2459,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__inflight),2);
    bufp->fullBit(oldp+2460,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__u_fetch__DOT__cache_illegal));
    bufp->fullBit(oldp+2461,(vlSelf->main__DOT____Vcellinp__u_i2cdma__S_VALID));
    bufp->fullIData(oldp+2462,(vlSelf->main__DOT__u_i2cdma__DOT__r_baseaddr),31);
    bufp->fullIData(oldp+2463,(vlSelf->main__DOT__u_i2cdma__DOT__r_memlen),31);
    bufp->fullCData(oldp+2464,(vlSelf->main__DOT__u_i2cdma__DOT__subaddr),6);
    bufp->fullIData(oldp+2465,(vlSelf->main__DOT__u_i2cdma__DOT__current_addr),31);
    bufp->fullBit(oldp+2466,(vlSelf->main__DOT__u_i2cdma__DOT__wb_last));
    bufp->fullBit(oldp+2467,(vlSelf->main__DOT__u_i2cdma__DOT__bus_err));
    bufp->fullBit(oldp+2468,(vlSelf->main__DOT__u_i2cdma__DOT__r_reset));
    bufp->fullBit(oldp+2469,(vlSelf->main__DOT__u_i2cdma__DOT__r_overflow));
    bufp->fullBit(oldp+2470,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__REG_OUTPUT__DOT__ro_valid));
    bufp->fullBit(oldp+2471,(vlSelf->main__DOT__u_i2cdma__DOT__skd_ready));
    bufp->fullBit(oldp+2472,((1U & ((IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data) 
                                    >> 8U))));
    bufp->fullCData(oldp+2473,((0xffU & (IData)(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data))),8);
    bufp->fullSData(oldp+2474,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellinp__sskd__i_data),9);
    bufp->fullSData(oldp+2475,(vlSelf->main__DOT__u_i2cdma__DOT____Vcellout__sskd__o_data),9);
    bufp->fullSData(oldp+2476,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_data),9);
    bufp->fullBit(oldp+2477,(vlSelf->main__DOT__u_i2cdma__DOT__sskd__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+2478,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_stb));
    bufp->fullBit(oldp+2479,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_first));
    bufp->fullBit(oldp+2480,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_null));
    bufp->fullBit(oldp+2481,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_last));
    bufp->fullWData(oldp+2482,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_data),512);
    bufp->fullWData(oldp+2498,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_data),512);
    bufp->fullQData(oldp+2514,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__s_sel),64);
    bufp->fullQData(oldp+2516,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__nxt_sel),64);
    bufp->fullCData(oldp+2518,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_shift),4);
    bufp->fullCData(oldp+2519,((0xfU & (IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data))),4);
    bufp->fullBit(oldp+2520,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_full));
    bufp->fullBit(oldp+2521,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__fifo_empty));
    bufp->fullBit(oldp+2522,((1U & ((IData)(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data) 
                                    >> 4U))));
    bufp->fullCData(oldp+2523,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__ign_fifo_fill),6);
    bufp->fullBit(oldp+2524,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_wr));
    bufp->fullCData(oldp+2525,(vlSelf->main__DOT__u_wbdown__DOT____Vcellinp__DOWNSIZE__DOT__u_fifo__i_data),5);
    bufp->fullCData(oldp+2526,(vlSelf->main__DOT__u_wbdown__DOT____Vcellout__DOWNSIZE__DOT__u_fifo__o_data),5);
    bufp->fullBit(oldp+2527,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2528,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2529,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[0]),5);
    bufp->fullCData(oldp+2530,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[1]),5);
    bufp->fullCData(oldp+2531,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[2]),5);
    bufp->fullCData(oldp+2532,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[3]),5);
    bufp->fullCData(oldp+2533,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[4]),5);
    bufp->fullCData(oldp+2534,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[5]),5);
    bufp->fullCData(oldp+2535,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[6]),5);
    bufp->fullCData(oldp+2536,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[7]),5);
    bufp->fullCData(oldp+2537,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[8]),5);
    bufp->fullCData(oldp+2538,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[9]),5);
    bufp->fullCData(oldp+2539,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[10]),5);
    bufp->fullCData(oldp+2540,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[11]),5);
    bufp->fullCData(oldp+2541,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[12]),5);
    bufp->fullCData(oldp+2542,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[13]),5);
    bufp->fullCData(oldp+2543,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[14]),5);
    bufp->fullCData(oldp+2544,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[15]),5);
    bufp->fullCData(oldp+2545,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[16]),5);
    bufp->fullCData(oldp+2546,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[17]),5);
    bufp->fullCData(oldp+2547,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[18]),5);
    bufp->fullCData(oldp+2548,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[19]),5);
    bufp->fullCData(oldp+2549,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[20]),5);
    bufp->fullCData(oldp+2550,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[21]),5);
    bufp->fullCData(oldp+2551,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[22]),5);
    bufp->fullCData(oldp+2552,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[23]),5);
    bufp->fullCData(oldp+2553,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[24]),5);
    bufp->fullCData(oldp+2554,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[25]),5);
    bufp->fullCData(oldp+2555,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[26]),5);
    bufp->fullCData(oldp+2556,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[27]),5);
    bufp->fullCData(oldp+2557,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[28]),5);
    bufp->fullCData(oldp+2558,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[29]),5);
    bufp->fullCData(oldp+2559,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[30]),5);
    bufp->fullCData(oldp+2560,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__mem[31]),5);
    bufp->fullCData(oldp+2561,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2562,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2563,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2564,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullSData(oldp+2565,(vlSelf->main__DOT__wb32_xbar__DOT__grant[0]),12);
    bufp->fullBit(oldp+2566,(vlSelf->main__DOT__wb32_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2567,(vlSelf->main__DOT__wb32_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2568,(vlSelf->main__DOT__wb32_xbar__DOT__mfull));
    bufp->fullBit(oldp+2569,(vlSelf->main__DOT__wb32_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2570,(vlSelf->main__DOT__wb32_xbar__DOT__mempty));
    bufp->fullIData(oldp+2571,(vlSelf->main__DOT__wb32_xbar__DOT__iN),32);
    bufp->fullCData(oldp+2572,(vlSelf->main__DOT__wb32_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullSData(oldp+2573,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),12);
    bufp->fullBit(oldp+2574,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullCData(oldp+2575,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),8);
    bufp->fullQData(oldp+2576,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),45);
    bufp->fullQData(oldp+2578,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),45);
    bufp->fullIData(oldp+2580,((0x1fffffffU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),29);
    bufp->fullBit(oldp+2581,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_stb));
    bufp->fullWData(oldp+2582,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data),512);
    bufp->fullCData(oldp+2598,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_shift),4);
    bufp->fullBit(oldp+2599,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_full));
    bufp->fullBit(oldp+2600,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__r_empty));
    bufp->fullCData(oldp+2601,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__ign_fifo_fill),6);
    bufp->fullCData(oldp+2602,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr))),4);
    bufp->fullCData(oldp+2603,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem
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
    bufp->fullWData(oldp+2604,(__Vtemp_hcfafa750__0),512);
    bufp->fullQData(oldp+2620,(((QData)((IData)((0xfU 
                                                 & (IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel)))) 
                                << 0x3cU)),64);
    bufp->fullBit(oldp+2622,(((~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)) 
                              & (IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb))));
    bufp->fullCData(oldp+2623,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[0]),4);
    bufp->fullCData(oldp+2624,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[1]),4);
    bufp->fullCData(oldp+2625,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[2]),4);
    bufp->fullCData(oldp+2626,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[3]),4);
    bufp->fullCData(oldp+2627,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[4]),4);
    bufp->fullCData(oldp+2628,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[5]),4);
    bufp->fullCData(oldp+2629,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[6]),4);
    bufp->fullCData(oldp+2630,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[7]),4);
    bufp->fullCData(oldp+2631,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[8]),4);
    bufp->fullCData(oldp+2632,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[9]),4);
    bufp->fullCData(oldp+2633,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[10]),4);
    bufp->fullCData(oldp+2634,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[11]),4);
    bufp->fullCData(oldp+2635,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[12]),4);
    bufp->fullCData(oldp+2636,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[13]),4);
    bufp->fullCData(oldp+2637,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[14]),4);
    bufp->fullCData(oldp+2638,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[15]),4);
    bufp->fullCData(oldp+2639,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[16]),4);
    bufp->fullCData(oldp+2640,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[17]),4);
    bufp->fullCData(oldp+2641,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[18]),4);
    bufp->fullCData(oldp+2642,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[19]),4);
    bufp->fullCData(oldp+2643,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[20]),4);
    bufp->fullCData(oldp+2644,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[21]),4);
    bufp->fullCData(oldp+2645,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[22]),4);
    bufp->fullCData(oldp+2646,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[23]),4);
    bufp->fullCData(oldp+2647,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[24]),4);
    bufp->fullCData(oldp+2648,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[25]),4);
    bufp->fullCData(oldp+2649,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[26]),4);
    bufp->fullCData(oldp+2650,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[27]),4);
    bufp->fullCData(oldp+2651,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[28]),4);
    bufp->fullCData(oldp+2652,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[29]),4);
    bufp->fullCData(oldp+2653,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[30]),4);
    bufp->fullCData(oldp+2654,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__mem[31]),4);
    bufp->fullCData(oldp+2655,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__wr_addr),6);
    bufp->fullCData(oldp+2656,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__rd_addr),6);
    bufp->fullBit(oldp+2657,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_wr));
    bufp->fullBit(oldp+2658,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__u_fifo__DOT__w_rd));
    bufp->fullCData(oldp+2659,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc),2);
    bufp->fullCData(oldp+2660,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sstb),2);
    bufp->fullCData(oldp+2661,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_swe),2);
    bufp->fullQData(oldp+2662,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_saddr),60);
    bufp->fullQData(oldp+2664,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_sdata),64);
    bufp->fullCData(oldp+2666,(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel),8);
    bufp->fullQData(oldp+2667,((((QData)((IData)(vlSelf->main__DOT__wbu_zip_idata)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__rtn_data[0xfU])))),64);
    bufp->fullCData(oldp+2669,(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_err),2);
    bufp->fullCData(oldp+2670,(vlSelf->main__DOT__wbu_xbar__DOT__request[0]),3);
    bufp->fullCData(oldp+2671,(vlSelf->main__DOT__wbu_xbar__DOT__grant[0]),3);
    bufp->fullBit(oldp+2672,(vlSelf->main__DOT__wbu_xbar__DOT__mgrant));
    bufp->fullCData(oldp+2673,(vlSelf->main__DOT__wbu_xbar__DOT__sgrant),2);
    bufp->fullCData(oldp+2674,(vlSelf->main__DOT__wbu_xbar__DOT__w_mpending[0]),6);
    bufp->fullBit(oldp+2675,(vlSelf->main__DOT__wbu_xbar__DOT__mfull));
    bufp->fullBit(oldp+2676,(vlSelf->main__DOT__wbu_xbar__DOT__mnearfull));
    bufp->fullBit(oldp+2677,(vlSelf->main__DOT__wbu_xbar__DOT__mempty));
    bufp->fullBit(oldp+2678,(vlSelf->main__DOT__wbu_xbar__DOT__m_stb));
    bufp->fullBit(oldp+2679,((1U & (IData)((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullIData(oldp+2680,(vlSelf->main__DOT__wbu_xbar__DOT__m_addr[0]),30);
    bufp->fullIData(oldp+2681,(vlSelf->main__DOT__wbu_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+2682,(vlSelf->main__DOT__wbu_xbar__DOT__m_sel[0]),4);
    bufp->fullIData(oldp+2683,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+2684,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+2685,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+2686,(vlSelf->main__DOT__wbu_xbar__DOT__s_data[3]),32);
    bufp->fullCData(oldp+2687,(vlSelf->main__DOT__wbu_xbar__DOT__s_err),4);
    bufp->fullBit(oldp+2688,(vlSelf->main__DOT__wbu_xbar__DOT__dcd_stb));
    bufp->fullIData(oldp+2689,(vlSelf->main__DOT__wbu_xbar__DOT__iN),32);
    bufp->fullBit(oldp+2690,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2691,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+2692,(vlSelf->main__DOT__wbu_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2693,((1U & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                    >> 2U))));
    bufp->fullIData(oldp+2694,((0x3fffffffU & ((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                << 0x1cU) 
                                               | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                                  >> 4U)))),30);
    bufp->fullIData(oldp+2695,(((vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U] 
                                 << 0x1cU) | (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+2696,((0xfU & vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])),4);
    bufp->fullCData(oldp+2697,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),3);
    bufp->fullBit(oldp+2698,((1U & (~ (IData)(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
    bufp->fullQData(oldp+2699,((((QData)((IData)((1U 
                                                  & (vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[2U] 
                                                     >> 2U)))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))))),37);
    bufp->fullIData(oldp+2701,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),30);
    bufp->fullQData(oldp+2702,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullCData(oldp+2704,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),2);
    bufp->fullWData(oldp+2705,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),67);
    bufp->fullWData(oldp+2708,(vlSelf->main__DOT__wbu_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),67);
    bufp->fullWData(oldp+2711,(vlSelf->main__DOT__wbu_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),67);
    bufp->fullCData(oldp+2714,((((IData)(vlSelf->main__DOT__wbwide_wbu_arbiter_stb) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_zip_stb) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_i2cm_stb) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_i2cdma_stb))))),4);
    bufp->fullCData(oldp+2715,((1U | (((IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_we) 
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
    bufp->fullWData(oldp+2716,(__Vtemp_h2146f57f__0),100);
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
    bufp->fullWData(oldp+2720,(__Vtemp_h95b27ed2__0),2048);
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
    bufp->fullWData(oldp+2784,(__Vtemp_h7cab7483__0),256);
    bufp->fullCData(oldp+2792,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid) 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h503d14d1__0))),4);
    bufp->fullCData(oldp+2793,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_mack),4);
    bufp->fullWData(oldp+2794,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_mdata),2048);
    bufp->fullCData(oldp+2858,(vlSelf->main__DOT__wbwide_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr),4);
    bufp->fullCData(oldp+2859,(vlSelf->main__DOT__wbwide_xbar__DOT__request[0]),4);
    bufp->fullCData(oldp+2860,(vlSelf->main__DOT__wbwide_xbar__DOT__request[1]),4);
    bufp->fullCData(oldp+2861,(vlSelf->main__DOT__wbwide_xbar__DOT__request[2]),4);
    bufp->fullCData(oldp+2862,(vlSelf->main__DOT__wbwide_xbar__DOT__request[3]),4);
    bufp->fullCData(oldp+2863,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[0]),3);
    bufp->fullCData(oldp+2864,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[1]),3);
    bufp->fullCData(oldp+2865,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[2]),3);
    bufp->fullCData(oldp+2866,(vlSelf->main__DOT__wbwide_xbar__DOT__requested[3]),3);
    bufp->fullCData(oldp+2867,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[0]),4);
    bufp->fullCData(oldp+2868,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[1]),4);
    bufp->fullCData(oldp+2869,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[2]),4);
    bufp->fullCData(oldp+2870,(vlSelf->main__DOT__wbwide_xbar__DOT__grant[3]),4);
    bufp->fullCData(oldp+2871,(vlSelf->main__DOT__wbwide_xbar__DOT__mgrant),4);
    bufp->fullCData(oldp+2872,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[0]),6);
    bufp->fullCData(oldp+2873,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[1]),6);
    bufp->fullCData(oldp+2874,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[2]),6);
    bufp->fullCData(oldp+2875,(vlSelf->main__DOT__wbwide_xbar__DOT__w_mpending[3]),6);
    bufp->fullCData(oldp+2876,(vlSelf->main__DOT__wbwide_xbar__DOT__mfull),4);
    bufp->fullCData(oldp+2877,(vlSelf->main__DOT__wbwide_xbar__DOT__mnearfull),4);
    bufp->fullCData(oldp+2878,(vlSelf->main__DOT__wbwide_xbar__DOT__mempty),4);
    bufp->fullCData(oldp+2879,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stb),4);
    bufp->fullCData(oldp+2880,((((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid) 
                                 << 3U) | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid) 
                                            << 2U) 
                                           | (((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid))))),4);
    bufp->fullBit(oldp+2881,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2882,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2883,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+2884,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__stay_on_channel));
    bufp->fullCData(oldp+2885,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__0__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2886,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__1__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2887,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__2__KET____DOT__lclpending),6);
    bufp->fullCData(oldp+2888,(vlSelf->main__DOT__wbwide_xbar__DOT__COUNT_PENDING_TRANSACTIONS__BRA__3__KET____DOT__lclpending),6);
    bufp->fullBit(oldp+2889,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+2890,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+2891,(__Vtemp_h0fd98bf7__0),512);
    bufp->fullQData(oldp+2907,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+2909,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__decoded),4);
    bufp->fullBit(oldp+2910,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+2911,(__Vtemp_h3b245e0e__0),577);
    bufp->fullBit(oldp+2930,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+2931,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+2932,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+2951,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+2952,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+2971,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+2990,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3009,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3010,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3011,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3012,(__Vtemp_hcb138391__0),512);
    bufp->fullQData(oldp+3028,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3030,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3031,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3032,(__Vtemp_hf41d9735__0),577);
    bufp->fullBit(oldp+3051,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3052,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3053,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3072,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__adcd__DOT__prerequest),3);
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
    bufp->fullWData(oldp+3073,(__Vtemp_h6283f4ea__0),602);
    bufp->fullWData(oldp+3092,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__1__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3111,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3130,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3131,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3132,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3133,(__Vtemp_hb4195529__0),512);
    bufp->fullQData(oldp+3149,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3151,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3152,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3153,(__Vtemp_hb863f640__0),577);
    bufp->fullBit(oldp+3172,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3173,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3174,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3193,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3194,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+3213,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__2__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3232,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullBit(oldp+3251,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid));
    bufp->fullBit(oldp+3252,((1U & (vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U] 
                                    >> 0x19U))));
    bufp->fullIData(oldp+3253,((0x1ffffffU & vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0x12U])),25);
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
    bufp->fullWData(oldp+3254,(__Vtemp_h61e633ab__0),512);
    bufp->fullQData(oldp+3270,((((QData)((IData)(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data[0U])))),64);
    bufp->fullCData(oldp+3272,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__decoded),4);
    bufp->fullBit(oldp+3273,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_valid)))));
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
    bufp->fullWData(oldp+3274,(__Vtemp_h43fd6509__0),577);
    bufp->fullBit(oldp+3293,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_valid));
    bufp->fullIData(oldp+3294,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_addr),25);
    bufp->fullWData(oldp+3295,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__adcd__o_data),577);
    bufp->fullCData(oldp+3314,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__adcd__DOT__prerequest),3);
    bufp->fullWData(oldp+3315,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__iskid__i_data),602);
    bufp->fullWData(oldp+3334,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__3__KET____DOT__iskid__o_data),602);
    bufp->fullWData(oldp+3353,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__iskid__DOT__LOGIC__DOT__r_data),602);
    bufp->fullCData(oldp+3372,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3373,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullCData(oldp+3374,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__r_sindex),2);
    bufp->fullSData(oldp+3375,((((IData)(vlSelf->main__DOT__wb32_ddr3_phy_ack) 
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
    bufp->fullWData(oldp+3376,(__Vtemp_h33b103d1__0),352);
    bufp->fullIData(oldp+3387,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[0]),32);
    bufp->fullIData(oldp+3388,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[1]),32);
    bufp->fullIData(oldp+3389,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[2]),32);
    bufp->fullIData(oldp+3390,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[3]),32);
    bufp->fullIData(oldp+3391,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[4]),32);
    bufp->fullIData(oldp+3392,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[5]),32);
    bufp->fullIData(oldp+3393,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[6]),32);
    bufp->fullIData(oldp+3394,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[7]),32);
    bufp->fullIData(oldp+3395,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[8]),32);
    bufp->fullIData(oldp+3396,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[9]),32);
    bufp->fullIData(oldp+3397,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[10]),32);
    bufp->fullIData(oldp+3398,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[11]),32);
    bufp->fullIData(oldp+3399,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[12]),32);
    bufp->fullIData(oldp+3400,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[13]),32);
    bufp->fullIData(oldp+3401,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[14]),32);
    bufp->fullIData(oldp+3402,(vlSelf->main__DOT__wb32_xbar__DOT__s_data[15]),32);
    bufp->fullCData(oldp+3403,((((IData)(vlSelf->main__DOT__wbwide_ddr3_controller_stall) 
                                 << 2U) | (IData)(vlSelf->main__DOT__wbwide_wbdown_stall))),3);
    bufp->fullWData(oldp+3404,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[0]),512);
    bufp->fullWData(oldp+3420,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[1]),512);
    bufp->fullWData(oldp+3436,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[2]),512);
    bufp->fullWData(oldp+3452,(vlSelf->main__DOT__wbwide_xbar__DOT__s_data[3]),512);
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
    bufp->fullWData(oldp+3468,(__Vtemp_h9e08da6e__0),1536);
    bufp->fullBit(oldp+3516,(vlSelf->main__DOT__wbwide_ddr3_controller_stall));
    bufp->fullBit(oldp+3517,(vlSelf->main__DOT__wb32_ddr3_phy_stall));
    bufp->fullBit(oldp+3518,(vlSelf->main__DOT__wb32_ddr3_phy_ack));
    bufp->fullIData(oldp+3519,(vlSelf->main__DOT__wb32_ddr3_phy_idata),32);
    bufp->fullIData(oldp+3520,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index),32);
    bufp->fullCData(oldp+3521,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction_address),5);
    bufp->fullIData(oldp+3522,(vlSelf->main__DOT__ddr3_controller_inst__DOT__instruction),28);
    bufp->fullSData(oldp+3523,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter),16);
    bufp->fullBit(oldp+3524,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_counter_is_zero));
    bufp->fullBit(oldp+3525,(vlSelf->main__DOT__ddr3_controller_inst__DOT__reset_done));
    bufp->fullBit(oldp+3526,(vlSelf->main__DOT__ddr3_controller_inst__DOT__pause_counter));
    bufp->fullBit(oldp+3527,(((2U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)) 
                              & (0U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data)))));
    bufp->fullBit(oldp+3528,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_update));
    bufp->fullCData(oldp+3529,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_q),8);
    bufp->fullSData(oldp+3530,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[0]),14);
    bufp->fullSData(oldp+3531,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[1]),14);
    bufp->fullSData(oldp+3532,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[2]),14);
    bufp->fullSData(oldp+3533,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[3]),14);
    bufp->fullSData(oldp+3534,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[4]),14);
    bufp->fullSData(oldp+3535,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[5]),14);
    bufp->fullSData(oldp+3536,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[6]),14);
    bufp->fullSData(oldp+3537,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_q[7]),14);
    bufp->fullBit(oldp+3538,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_pending));
    bufp->fullBit(oldp+3539,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_aux));
    bufp->fullBit(oldp+3540,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_we));
    bufp->fullWData(oldp+3541,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_data),512);
    bufp->fullQData(oldp+3557,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_dm),64);
    bufp->fullSData(oldp+3559,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_col),10);
    bufp->fullCData(oldp+3560,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_bank),3);
    bufp->fullSData(oldp+3561,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_row),14);
    bufp->fullCData(oldp+3562,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_bank),3);
    bufp->fullSData(oldp+3563,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_next_row),14);
    bufp->fullBit(oldp+3564,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_pending));
    bufp->fullBit(oldp+3565,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_aux));
    bufp->fullBit(oldp+3566,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_we));
    bufp->fullQData(oldp+3567,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned),64);
    bufp->fullQData(oldp+3569,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm_unaligned_temp),64);
    bufp->fullQData(oldp+3571,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[0]),64);
    bufp->fullQData(oldp+3573,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_dm[1]),64);
    bufp->fullWData(oldp+3575,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned),512);
    bufp->fullWData(oldp+3591,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data_unaligned_temp),512);
    bufp->fullWData(oldp+3607,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[0]),512);
    bufp->fullWData(oldp+3623,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_data[1]),512);
    bufp->fullQData(oldp+3639,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[0]),64);
    bufp->fullQData(oldp+3641,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[1]),64);
    bufp->fullQData(oldp+3643,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[2]),64);
    bufp->fullQData(oldp+3645,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[3]),64);
    bufp->fullQData(oldp+3647,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[4]),64);
    bufp->fullQData(oldp+3649,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[5]),64);
    bufp->fullQData(oldp+3651,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[6]),64);
    bufp->fullQData(oldp+3653,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_data[7]),64);
    bufp->fullCData(oldp+3655,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[0]),8);
    bufp->fullCData(oldp+3656,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[1]),8);
    bufp->fullCData(oldp+3657,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[2]),8);
    bufp->fullCData(oldp+3658,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[3]),8);
    bufp->fullCData(oldp+3659,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[4]),8);
    bufp->fullCData(oldp+3660,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[5]),8);
    bufp->fullCData(oldp+3661,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[6]),8);
    bufp->fullCData(oldp+3662,(vlSelf->main__DOT__ddr3_controller_inst__DOT__unaligned_dm[7]),8);
    bufp->fullSData(oldp+3663,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_col),10);
    bufp->fullCData(oldp+3664,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_bank),3);
    bufp->fullSData(oldp+3665,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_row),14);
    bufp->fullCData(oldp+3666,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[0]),4);
    bufp->fullCData(oldp+3667,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[1]),4);
    bufp->fullCData(oldp+3668,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[2]),4);
    bufp->fullCData(oldp+3669,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[3]),4);
    bufp->fullCData(oldp+3670,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[4]),4);
    bufp->fullCData(oldp+3671,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[5]),4);
    bufp->fullCData(oldp+3672,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[6]),4);
    bufp->fullCData(oldp+3673,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_q[7]),4);
    bufp->fullCData(oldp+3674,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[0]),4);
    bufp->fullCData(oldp+3675,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[1]),4);
    bufp->fullCData(oldp+3676,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[2]),4);
    bufp->fullCData(oldp+3677,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[3]),4);
    bufp->fullCData(oldp+3678,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[4]),4);
    bufp->fullCData(oldp+3679,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[5]),4);
    bufp->fullCData(oldp+3680,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[6]),4);
    bufp->fullCData(oldp+3681,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_q[7]),4);
    bufp->fullCData(oldp+3682,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[0]),4);
    bufp->fullCData(oldp+3683,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[1]),4);
    bufp->fullCData(oldp+3684,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[2]),4);
    bufp->fullCData(oldp+3685,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[3]),4);
    bufp->fullCData(oldp+3686,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[4]),4);
    bufp->fullCData(oldp+3687,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[5]),4);
    bufp->fullCData(oldp+3688,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[6]),4);
    bufp->fullCData(oldp+3689,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_q[7]),4);
    bufp->fullCData(oldp+3690,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[0]),4);
    bufp->fullCData(oldp+3691,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[1]),4);
    bufp->fullCData(oldp+3692,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[2]),4);
    bufp->fullCData(oldp+3693,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[3]),4);
    bufp->fullCData(oldp+3694,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[4]),4);
    bufp->fullCData(oldp+3695,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[5]),4);
    bufp->fullCData(oldp+3696,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[6]),4);
    bufp->fullCData(oldp+3697,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_q[7]),4);
    bufp->fullBit(oldp+3698,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt_q));
    bufp->fullBit(oldp+3699,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_q));
    bufp->fullCData(oldp+3700,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_q),2);
    bufp->fullBit(oldp+3701,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_d));
    bufp->fullCData(oldp+3702,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs),3);
    bufp->fullCData(oldp+3703,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dqs_val),3);
    bufp->fullBit(oldp+3704,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_q));
    bufp->fullBit(oldp+3705,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq_d));
    bufp->fullCData(oldp+3706,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_dq),4);
    bufp->fullCData(oldp+3707,(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate),5);
    bufp->fullQData(oldp+3708,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_store),40);
    bufp->fullCData(oldp+3710,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_count_repeat),4);
    bufp->fullCData(oldp+3711,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index),6);
    bufp->fullCData(oldp+3712,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_stored),6);
    bufp->fullCData(oldp+3713,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index),6);
    bufp->fullCData(oldp+3714,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_orig),6);
    bufp->fullCData(oldp+3715,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[0]),6);
    bufp->fullCData(oldp+3716,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[1]),6);
    bufp->fullCData(oldp+3717,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[2]),6);
    bufp->fullCData(oldp+3718,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[3]),6);
    bufp->fullCData(oldp+3719,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[4]),6);
    bufp->fullCData(oldp+3720,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[5]),6);
    bufp->fullCData(oldp+3721,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[6]),6);
    bufp->fullCData(oldp+3722,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dq_target_index[7]),6);
    bufp->fullCData(oldp+3723,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_target_index_value),6);
    bufp->fullBit(oldp+3724,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_start_index_repeat));
    bufp->fullCData(oldp+3725,(vlSelf->main__DOT__ddr3_controller_inst__DOT__train_delay),2);
    bufp->fullCData(oldp+3726,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_data),4);
    bufp->fullCData(oldp+3727,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_level_feedback),5);
    bufp->fullBit(oldp+3728,(vlSelf->main__DOT__ddr3_controller_inst__DOT__initial_dqs));
    bufp->fullCData(oldp+3729,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane),3);
    bufp->fullCData(oldp+3730,(vlSelf->main__DOT__ddr3_controller_inst__DOT__lane_times_8),6);
    bufp->fullSData(oldp+3731,(vlSelf->main__DOT__ddr3_controller_inst__DOT__dqs_bitslip_arrangement),16);
    bufp->fullCData(oldp+3732,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe_max),4);
    bufp->fullCData(oldp+3733,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[0]),4);
    bufp->fullCData(oldp+3734,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[1]),4);
    bufp->fullCData(oldp+3735,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[2]),4);
    bufp->fullCData(oldp+3736,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[3]),4);
    bufp->fullCData(oldp+3737,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[4]),4);
    bufp->fullCData(oldp+3738,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[5]),4);
    bufp->fullCData(oldp+3739,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[6]),4);
    bufp->fullCData(oldp+3740,(vlSelf->main__DOT__ddr3_controller_inst__DOT__added_read_pipe[7]),4);
    bufp->fullCData(oldp+3741,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[0]),2);
    bufp->fullCData(oldp+3742,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[1]),2);
    bufp->fullCData(oldp+3743,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[2]),2);
    bufp->fullCData(oldp+3744,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[3]),2);
    bufp->fullCData(oldp+3745,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_q[4]),2);
    bufp->fullCData(oldp+3746,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[0]),2);
    bufp->fullCData(oldp+3747,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[1]),2);
    bufp->fullCData(oldp+3748,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[2]),2);
    bufp->fullCData(oldp+3749,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[3]),2);
    bufp->fullCData(oldp+3750,(vlSelf->main__DOT__ddr3_controller_inst__DOT__shift_reg_read_pipe_d[4]),2);
    bufp->fullBit(oldp+3751,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_read_pipe));
    bufp->fullBit(oldp+3752,(vlSelf->main__DOT__ddr3_controller_inst__DOT__index_wb_data));
    bufp->fullSData(oldp+3753,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[0]),16);
    bufp->fullSData(oldp+3754,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_read_pipe[1]),16);
    bufp->fullWData(oldp+3755,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[0]),512);
    bufp->fullWData(oldp+3771,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_data_q[1]),512);
    bufp->fullBit(oldp+3787,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_stb));
    bufp->fullBit(oldp+3788,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_aux));
    bufp->fullBit(oldp+3789,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_we));
    bufp->fullSData(oldp+3790,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_col),10);
    bufp->fullWData(oldp+3791,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_data),512);
    bufp->fullBit(oldp+3807,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_odt));
    bufp->fullBit(oldp+3808,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dqs));
    bufp->fullBit(oldp+3809,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_calib_dq));
    bufp->fullBit(oldp+3810,(vlSelf->main__DOT__ddr3_controller_inst__DOT__prev_write_level_feedback));
    bufp->fullWData(oldp+3811,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_data_store),512);
    bufp->fullWData(oldp+3827,(vlSelf->main__DOT__ddr3_controller_inst__DOT__write_pattern),128);
    bufp->fullCData(oldp+3831,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[0]),7);
    bufp->fullCData(oldp+3832,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[1]),7);
    bufp->fullCData(oldp+3833,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[2]),7);
    bufp->fullCData(oldp+3834,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[3]),7);
    bufp->fullCData(oldp+3835,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[4]),7);
    bufp->fullCData(oldp+3836,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[5]),7);
    bufp->fullCData(oldp+3837,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[6]),7);
    bufp->fullCData(oldp+3838,(vlSelf->main__DOT__ddr3_controller_inst__DOT__data_start_index[7]),7);
    bufp->fullCData(oldp+3839,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3840,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3841,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3842,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3843,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+3844,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+3845,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+3846,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+3847,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3848,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3849,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3850,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+3851,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+3852,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+3853,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+3854,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+3855,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[0]),5);
    bufp->fullCData(oldp+3856,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[1]),5);
    bufp->fullCData(oldp+3857,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[2]),5);
    bufp->fullCData(oldp+3858,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[3]),5);
    bufp->fullCData(oldp+3859,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[4]),5);
    bufp->fullCData(oldp+3860,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[5]),5);
    bufp->fullCData(oldp+3861,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[6]),5);
    bufp->fullCData(oldp+3862,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein[7]),5);
    bufp->fullCData(oldp+3863,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+3864,(vlSelf->main__DOT__ddr3_controller_inst__DOT__odelay_data_cntvaluein_prev),5);
    bufp->fullCData(oldp+3865,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[0]),5);
    bufp->fullCData(oldp+3866,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[1]),5);
    bufp->fullCData(oldp+3867,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[2]),5);
    bufp->fullCData(oldp+3868,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[3]),5);
    bufp->fullCData(oldp+3869,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[4]),5);
    bufp->fullCData(oldp+3870,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[5]),5);
    bufp->fullCData(oldp+3871,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[6]),5);
    bufp->fullCData(oldp+3872,(vlSelf->main__DOT__ddr3_controller_inst__DOT__idelay_dqs_cntvaluein[7]),5);
    bufp->fullCData(oldp+3873,(vlSelf->main__DOT__ddr3_controller_inst__DOT__sample_clk_repeat),6);
    bufp->fullBit(oldp+3874,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stored_write_level_feedback));
    bufp->fullCData(oldp+3875,(vlSelf->main__DOT__ddr3_controller_inst__DOT__start_index_check),6);
    bufp->fullQData(oldp+3876,(vlSelf->main__DOT__ddr3_controller_inst__DOT__read_lane_data),64);
    bufp->fullBit(oldp+3878,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_stb));
    bufp->fullBit(oldp+3879,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_update));
    bufp->fullBit(oldp+3880,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_we));
    bufp->fullCData(oldp+3881,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_addr),7);
    bufp->fullIData(oldp+3882,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_data),32);
    bufp->fullCData(oldp+3883,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_sel),4);
    bufp->fullCData(oldp+3884,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3885,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3886,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+3887,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+3888,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_data_ld),8);
    bufp->fullCData(oldp+3889,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_odelay_dqs_ld),8);
    bufp->fullCData(oldp+3890,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_data_ld),8);
    bufp->fullCData(oldp+3891,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_phy_idelay_dqs_ld),8);
    bufp->fullCData(oldp+3892,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb2_write_lane),3);
    bufp->fullSData(oldp+3893,(((IData)(vlSelf->main__DOT__wb32_ddr3_phy_stall) 
                                << 0xaU)),11);
    bufp->fullBit(oldp+3894,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc))));
    bufp->fullBit(oldp+3895,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb))));
    bufp->fullBit(oldp+3896,((1U & (IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe))));
    bufp->fullIData(oldp+3897,((0x1ffffffU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),25);
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
    bufp->fullWData(oldp+3898,(__Vtemp_hf82de6ac__0),512);
    bufp->fullQData(oldp+3914,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[0U])))),64);
    bufp->fullBit(oldp+3916,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err));
    bufp->fullBit(oldp+3917,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3918,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3919,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullIData(oldp+3920,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
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
    bufp->fullWData(oldp+3921,(__Vtemp_hf74e670c__0),512);
    bufp->fullQData(oldp+3937,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[2U])))),64);
    bufp->fullBit(oldp+3939,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+3940,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+3941,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullIData(oldp+3942,((0x1ffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
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
    bufp->fullWData(oldp+3943,(__Vtemp_h21e563ec__0),512);
    bufp->fullQData(oldp+3959,((((QData)((IData)(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[5U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel[4U])))),64);
    bufp->fullBit(oldp+3961,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_cyc));
    bufp->fullBit(oldp+3962,(vlSelf->main__DOT__wb32_xbar__DOT__DOUBLE_BUFFERRED_STALL__DOT__r_merr));
    bufp->fullBit(oldp+3963,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 8U))));
    bufp->fullBit(oldp+3964,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (0U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+3965,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 8U))));
    bufp->fullIData(oldp+3966,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[8U]),32);
    bufp->fullCData(oldp+3967,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x20U)))),4);
    bufp->fullBit(oldp+3968,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (1U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+3969,(vlSelf->main__DOT__wb32_sirefclk_stb));
    bufp->fullBit(oldp+3970,(vlSelf->main__DOT__wb32_spio_stb));
    bufp->fullBit(oldp+3971,((((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                               >> 8U) & (4U == (7U 
                                                & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])))));
    bufp->fullBit(oldp+3972,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc))));
    bufp->fullBit(oldp+3973,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb))));
    bufp->fullBit(oldp+3974,((1U & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe))));
    bufp->fullCData(oldp+3975,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])),8);
    bufp->fullIData(oldp+3976,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0U]),32);
    bufp->fullCData(oldp+3977,((0xfU & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel))),4);
    bufp->fullBit(oldp+3978,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 1U))));
    bufp->fullBit(oldp+3979,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 1U))));
    bufp->fullBit(oldp+3980,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 1U))));
    bufp->fullCData(oldp+3981,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+3982,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[1U]),32);
    bufp->fullCData(oldp+3983,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 4U)))),4);
    bufp->fullBit(oldp+3984,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 2U))));
    bufp->fullBit(oldp+3985,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 2U))));
    bufp->fullBit(oldp+3986,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 2U))));
    bufp->fullCData(oldp+3987,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+3988,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[2U]),32);
    bufp->fullCData(oldp+3989,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 8U)))),4);
    bufp->fullBit(oldp+3990,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 3U))));
    bufp->fullBit(oldp+3991,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 3U))));
    bufp->fullBit(oldp+3992,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 3U))));
    bufp->fullCData(oldp+3993,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+3994,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[3U]),32);
    bufp->fullCData(oldp+3995,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0xcU)))),4);
    bufp->fullBit(oldp+3996,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 4U))));
    bufp->fullBit(oldp+3997,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 4U))));
    bufp->fullBit(oldp+3998,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 4U))));
    bufp->fullCData(oldp+3999,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),8);
    bufp->fullIData(oldp+4000,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[4U]),32);
    bufp->fullCData(oldp+4001,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x10U)))),4);
    bufp->fullBit(oldp+4002,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 5U))));
    bufp->fullBit(oldp+4003,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 5U))));
    bufp->fullBit(oldp+4004,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 5U))));
    bufp->fullCData(oldp+4005,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+4006,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[5U]),32);
    bufp->fullCData(oldp+4007,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x14U)))),4);
    bufp->fullBit(oldp+4008,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 6U))));
    bufp->fullBit(oldp+4009,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 6U))));
    bufp->fullBit(oldp+4010,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 6U))));
    bufp->fullCData(oldp+4011,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+4012,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[6U]),32);
    bufp->fullCData(oldp+4013,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x18U)))),4);
    bufp->fullBit(oldp+4014,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 7U))));
    bufp->fullBit(oldp+4015,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 7U))));
    bufp->fullBit(oldp+4016,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U))));
    bufp->fullCData(oldp+4017,((vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+4018,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[7U]),32);
    bufp->fullCData(oldp+4019,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x1cU)))),4);
    bufp->fullBit(oldp+4020,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 8U))));
    bufp->fullCData(oldp+4021,((0xffU & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U])),8);
    bufp->fullBit(oldp+4022,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 9U))));
    bufp->fullBit(oldp+4023,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 9U))));
    bufp->fullBit(oldp+4024,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 9U))));
    bufp->fullCData(oldp+4025,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 8U))),8);
    bufp->fullIData(oldp+4026,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[9U]),32);
    bufp->fullCData(oldp+4027,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x24U)))),4);
    bufp->fullBit(oldp+4028,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+4029,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+4030,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+4031,((0xffU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 0x10U))),8);
    bufp->fullIData(oldp+4032,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata[0xaU]),32);
    bufp->fullCData(oldp+4033,((0xfU & (IData)((vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel 
                                                >> 0x28U)))),4);
    bufp->fullSData(oldp+4034,((0x3fffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                            << 7U) 
                                           | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U] 
                                              >> 0x19U)))),14);
    bufp->fullCData(oldp+4035,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x10U))),2);
    bufp->fullIData(oldp+4036,((0xffffffU & ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                              << 0xeU) 
                                             | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                >> 0x12U)))),24);
    bufp->fullCData(oldp+4037,((0x7fU & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[2U] 
                                         >> 0x10U))),7);
    bufp->fullIData(oldp+4038,((0xffffffU & ((IData)(5U) 
                                             + ((vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[1U] 
                                                   >> 0x12U))))),24);
    bufp->fullIData(oldp+4039,(vlSelf->main__DOT__ddr3_controller_inst__DOT__wb_data_to_wb2),32);
    bufp->fullCData(oldp+4040,((3U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U])),2);
    bufp->fullBit(oldp+4041,(vlSelf->main__DOT__i2ci__DOT__next_valid));
    bufp->fullCData(oldp+4042,(vlSelf->main__DOT__i2ci__DOT__next_insn),8);
    bufp->fullBit(oldp+4043,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     >> 4U) & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+4044,(vlSelf->main__DOT__i2ci__DOT__bus_write));
    bufp->fullBit(oldp+4045,(vlSelf->main__DOT__i2ci__DOT__bus_override));
    bufp->fullBit(oldp+4046,(vlSelf->main__DOT__i2ci__DOT__bus_manual));
    bufp->fullBit(oldp+4047,(vlSelf->main__DOT__i2ci__DOT__bus_jump));
    bufp->fullBit(oldp+4048,((1U & vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U])));
    bufp->fullBit(oldp+4049,((1U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                    & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)))));
    bufp->fullBit(oldp+4050,(vlSelf->main__DOT__i2cscopei__DOT__read_from_data));
    bufp->fullBit(oldp+4051,(vlSelf->main__DOT__i2cscopei__DOT__write_to_control));
    bufp->fullBit(oldp+4052,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 8U))));
    bufp->fullBit(oldp+4053,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 1U))));
    bufp->fullBit(oldp+4054,(vlSelf->main__DOT__scope1_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4055,(vlSelf->main__DOT__scope1_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4056,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+4057,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 2U))));
    bufp->fullBit(oldp+4058,(vlSelf->main__DOT__scope2_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4059,(vlSelf->main__DOT__scope2_ddr3i__DOT__write_to_control));
    bufp->fullBit(oldp+4060,((1U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[0U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+4061,((1U & (((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb) 
                                     & (IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe)) 
                                    >> 3U))));
    bufp->fullBit(oldp+4062,(vlSelf->main__DOT__scope3_ddr3i__DOT__read_from_data));
    bufp->fullBit(oldp+4063,(vlSelf->main__DOT__scope3_ddr3i__DOT__write_to_control));
    bufp->fullCData(oldp+4064,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_btn),5);
    bufp->fullBit(oldp+4065,(vlSelf->main__DOT__spioi__DOT__GEN_BUTTON__DOT__next_int));
    bufp->fullCData(oldp+4066,((7U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),3);
    bufp->fullBit(oldp+4067,(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb));
    bufp->fullCData(oldp+4068,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 0x18U))),2);
    bufp->fullBit(oldp+4069,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_valid));
    bufp->fullCData(oldp+4070,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__next_insn),8);
    bufp->fullBit(oldp+4071,(((IData)(vlSelf->main__DOT__u_fan__DOT____Vcellinp__u_i2ccpu__i_wb_stb) 
                              & (~ ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe) 
                                    >> 7U)))));
    bufp->fullBit(oldp+4072,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_write));
    bufp->fullBit(oldp+4073,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_override));
    bufp->fullBit(oldp+4074,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_manual));
    bufp->fullBit(oldp+4075,(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__bus_jump));
    bufp->fullCData(oldp+4076,((3U & (vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr[1U] 
                                      >> 8U))),2);
    bufp->fullIData(oldp+4077,(vlSelf->main__DOT__u_i2cdma__DOT__next_baseaddr),32);
    bufp->fullIData(oldp+4078,(vlSelf->main__DOT__u_i2cdma__DOT__next_memlen),32);
    bufp->fullCData(oldp+4079,((0xfU & vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr[0U])),4);
    bufp->fullCData(oldp+4080,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__i_subaddr),4);
    bufp->fullIData(oldp+4081,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__DOWNSIZE__DOT__subaddr_fn__Vstatic__fm),32);
    bufp->fullSData(oldp+4082,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc),11);
    bufp->fullSData(oldp+4083,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sstb),11);
    bufp->fullSData(oldp+4084,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_swe),11);
    bufp->fullWData(oldp+4085,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_saddr),88);
    bufp->fullWData(oldp+4088,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_sdata),352);
    bufp->fullQData(oldp+4099,(vlSelf->main__DOT____Vcellout__wb32_xbar__o_ssel),44);
    bufp->fullSData(oldp+4101,(vlSelf->main__DOT__wb32_xbar__DOT__request[0]),12);
    bufp->fullSData(oldp+4102,(vlSelf->main__DOT__wb32_xbar__DOT__sgrant),11);
    bufp->fullCData(oldp+4103,(vlSelf->main__DOT__wb32_xbar__DOT__mindex[0]),4);
    bufp->fullBit(oldp+4104,(vlSelf->main__DOT__wb32_xbar__DOT__m_stb));
    bufp->fullBit(oldp+4105,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data 
                                            >> 0x24U)))));
    bufp->fullCData(oldp+4106,(vlSelf->main__DOT__wb32_xbar__DOT__m_addr[0]),8);
    bufp->fullIData(oldp+4107,(vlSelf->main__DOT__wb32_xbar__DOT__m_data[0]),32);
    bufp->fullCData(oldp+4108,(vlSelf->main__DOT__wb32_xbar__DOT__m_sel[0]),4);
    bufp->fullBit(oldp+4109,(vlSelf->main__DOT__wb32_xbar__DOT__dcd_stb));
    bufp->fullSData(oldp+4110,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),12);
    bufp->fullBit(oldp+4111,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__stay_on_channel));
    bufp->fullBit(oldp+4112,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4113,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),4);
    bufp->fullBit(oldp+4114,((1U & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                            >> 0x2cU)))));
    bufp->fullCData(oldp+4115,((0xffU & (IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                 >> 0x24U)))),8);
    bufp->fullIData(oldp+4116,((IData)((vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                        >> 4U))),32);
    bufp->fullCData(oldp+4117,((0xfU & (IData)(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),4);
    bufp->fullQData(oldp+4118,((((QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data 
                                                             >> 0x2cU))))) 
                                 << 0x24U) | (0xfffffffffULL 
                                              & vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data))),37);
    bufp->fullQData(oldp+4120,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__adcd__o_data),37);
    bufp->fullSData(oldp+4122,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__adcd__DOT__prerequest),11);
    bufp->fullQData(oldp+4123,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellout__DECODE_REQUEST__BRA__0__KET____DOT__iskid__o_data),45);
    bufp->fullCData(oldp+4125,(vlSelf->main__DOT__wbu_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4126,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),3);
    bufp->fullCData(oldp+4127,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4128,(vlSelf->main__DOT____Vcellinp__wbwide_xbar__i_mcyc),4);
    bufp->fullCData(oldp+4129,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_scyc),3);
    bufp->fullCData(oldp+4130,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sstb),3);
    bufp->fullCData(oldp+4131,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_swe),3);
    bufp->fullWData(oldp+4132,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_saddr),75);
    bufp->fullWData(oldp+4135,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_sdata),1536);
    bufp->fullWData(oldp+4183,(vlSelf->main__DOT____Vcellout__wbwide_xbar__o_ssel),192);
    bufp->fullCData(oldp+4189,(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_err),3);
    bufp->fullCData(oldp+4190,(vlSelf->main__DOT__wbwide_xbar__DOT__sgrant),3);
    bufp->fullCData(oldp+4191,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[0]),2);
    bufp->fullCData(oldp+4192,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[1]),2);
    bufp->fullCData(oldp+4193,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[2]),2);
    bufp->fullCData(oldp+4194,(vlSelf->main__DOT__wbwide_xbar__DOT__mindex[3]),2);
    bufp->fullCData(oldp+4195,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[0]),2);
    bufp->fullCData(oldp+4196,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[1]),2);
    bufp->fullCData(oldp+4197,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[2]),2);
    bufp->fullCData(oldp+4198,(vlSelf->main__DOT__wbwide_xbar__DOT__sindex[3]),2);
    bufp->fullCData(oldp+4199,(vlSelf->main__DOT__wbwide_xbar__DOT__m_we),4);
    bufp->fullIData(oldp+4200,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[0]),25);
    bufp->fullIData(oldp+4201,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[1]),25);
    bufp->fullIData(oldp+4202,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[2]),25);
    bufp->fullIData(oldp+4203,(vlSelf->main__DOT__wbwide_xbar__DOT__m_addr[3]),25);
    bufp->fullWData(oldp+4204,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[0]),512);
    bufp->fullWData(oldp+4220,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[1]),512);
    bufp->fullWData(oldp+4236,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[2]),512);
    bufp->fullWData(oldp+4252,(vlSelf->main__DOT__wbwide_xbar__DOT__m_data[3]),512);
    bufp->fullQData(oldp+4268,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[0]),64);
    bufp->fullQData(oldp+4270,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[1]),64);
    bufp->fullQData(oldp+4272,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[2]),64);
    bufp->fullQData(oldp+4274,(vlSelf->main__DOT__wbwide_xbar__DOT__m_sel[3]),64);
    bufp->fullCData(oldp+4276,(vlSelf->main__DOT__wbwide_xbar__DOT__s_err),4);
    bufp->fullCData(oldp+4277,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4278,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4279,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4280,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4281,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4282,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4283,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4284,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4285,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4286,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_regrant),4);
    bufp->fullBit(oldp+4287,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__requested_channel_is_available));
    bufp->fullCData(oldp+4288,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_mindex),2);
    bufp->fullCData(oldp+4289,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4290,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__0__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4291,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4292,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__1__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullCData(oldp+4293,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__regrant),4);
    bufp->fullCData(oldp+4294,(vlSelf->main__DOT__wbwide_xbar__DOT__GEN_SINDEX__BRA__2__KET____DOT__SINDEX_MORE_THAN_ONE_MASTER__DOT__reindex),2);
    bufp->fullBit(oldp+4295,((1U & (vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                    [0U] >> 1U))));
    bufp->fullWData(oldp+4296,(vlSelf->main__DOT__wbwide_ddr3_controller_idata),512);
    bufp->fullCData(oldp+4312,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[0]),2);
    bufp->fullCData(oldp+4313,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[1]),2);
    bufp->fullCData(oldp+4314,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[2]),2);
    bufp->fullCData(oldp+4315,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[3]),2);
    bufp->fullCData(oldp+4316,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[4]),2);
    bufp->fullCData(oldp+4317,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[5]),2);
    bufp->fullCData(oldp+4318,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[6]),2);
    bufp->fullCData(oldp+4319,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[7]),2);
    bufp->fullCData(oldp+4320,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[8]),2);
    bufp->fullCData(oldp+4321,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[9]),2);
    bufp->fullCData(oldp+4322,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[10]),2);
    bufp->fullCData(oldp+4323,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[11]),2);
    bufp->fullCData(oldp+4324,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[12]),2);
    bufp->fullCData(oldp+4325,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[13]),2);
    bufp->fullCData(oldp+4326,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[14]),2);
    bufp->fullCData(oldp+4327,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q[15]),2);
    bufp->fullBit(oldp+4328,((1U & vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U])));
    bufp->fullBit(oldp+4329,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage2_stall));
    bufp->fullBit(oldp+4330,(vlSelf->main__DOT__ddr3_controller_inst__DOT__stage1_stall));
    bufp->fullCData(oldp+4331,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_status_d),8);
    bufp->fullSData(oldp+4332,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[0]),14);
    bufp->fullSData(oldp+4333,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[1]),14);
    bufp->fullSData(oldp+4334,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[2]),14);
    bufp->fullSData(oldp+4335,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[3]),14);
    bufp->fullSData(oldp+4336,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[4]),14);
    bufp->fullSData(oldp+4337,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[5]),14);
    bufp->fullSData(oldp+4338,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[6]),14);
    bufp->fullSData(oldp+4339,(vlSelf->main__DOT__ddr3_controller_inst__DOT__bank_active_row_d[7]),14);
    bufp->fullCData(oldp+4340,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[0]),4);
    bufp->fullCData(oldp+4341,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[1]),4);
    bufp->fullCData(oldp+4342,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[2]),4);
    bufp->fullCData(oldp+4343,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[3]),4);
    bufp->fullCData(oldp+4344,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[4]),4);
    bufp->fullCData(oldp+4345,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[5]),4);
    bufp->fullCData(oldp+4346,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[6]),4);
    bufp->fullCData(oldp+4347,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_precharge_counter_d[7]),4);
    bufp->fullCData(oldp+4348,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[0]),4);
    bufp->fullCData(oldp+4349,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[1]),4);
    bufp->fullCData(oldp+4350,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[2]),4);
    bufp->fullCData(oldp+4351,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[3]),4);
    bufp->fullCData(oldp+4352,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[4]),4);
    bufp->fullCData(oldp+4353,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[5]),4);
    bufp->fullCData(oldp+4354,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[6]),4);
    bufp->fullCData(oldp+4355,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_activate_counter_d[7]),4);
    bufp->fullCData(oldp+4356,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[0]),4);
    bufp->fullCData(oldp+4357,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[1]),4);
    bufp->fullCData(oldp+4358,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[2]),4);
    bufp->fullCData(oldp+4359,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[3]),4);
    bufp->fullCData(oldp+4360,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[4]),4);
    bufp->fullCData(oldp+4361,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[5]),4);
    bufp->fullCData(oldp+4362,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[6]),4);
    bufp->fullCData(oldp+4363,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_write_counter_d[7]),4);
    bufp->fullCData(oldp+4364,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[0]),4);
    bufp->fullCData(oldp+4365,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[1]),4);
    bufp->fullCData(oldp+4366,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[2]),4);
    bufp->fullCData(oldp+4367,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[3]),4);
    bufp->fullCData(oldp+4368,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[4]),4);
    bufp->fullCData(oldp+4369,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[5]),4);
    bufp->fullCData(oldp+4370,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[6]),4);
    bufp->fullCData(oldp+4371,(vlSelf->main__DOT__ddr3_controller_inst__DOT__delay_before_read_counter_d[7]),4);
    bufp->fullIData(oldp+4372,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[0]),24);
    bufp->fullIData(oldp+4373,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[1]),24);
    bufp->fullIData(oldp+4374,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[2]),24);
    bufp->fullIData(oldp+4375,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_d[3]),24);
    bufp->fullBit(oldp+4376,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_odt));
    bufp->fullBit(oldp+4377,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_ck_en));
    bufp->fullBit(oldp+4378,(vlSelf->main__DOT__ddr3_controller_inst__DOT__cmd_reset_n));
    bufp->fullBit(oldp+4379,(vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_stall_d));
    bufp->fullBit(oldp+4380,(vlSelf->main__DOT__ddr3_controller_inst__DOT__precharge_slot_busy));
    bufp->fullBit(oldp+4381,(vlSelf->main__DOT__ddr3_controller_inst__DOT__activate_slot_busy));
    bufp->fullBit(oldp+4382,(vlSelf->main__DOT__scope1_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4383,(vlSelf->main__DOT__scope2_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4384,(vlSelf->main__DOT__scope3_ddr3i__DOT__dw_trigger));
    bufp->fullBit(oldp+4385,(vlSelf->main__DOT__wb32_xbar__DOT__m_stall));
    bufp->fullSData(oldp+4386,(vlSelf->main__DOT__wb32_xbar__DOT__s_stall),16);
    bufp->fullBit(oldp+4387,(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4388,(vlSelf->main__DOT__wb32_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4389,((1U & (~ (IData)(vlSelf->main__DOT__wb32_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullCData(oldp+4390,(vlSelf->main__DOT__wbwide_xbar__DOT__m_stall),4);
    bufp->fullCData(oldp+4391,(vlSelf->main__DOT__wbwide_xbar__DOT__s_stall),4);
    bufp->fullCData(oldp+4392,(vlSelf->main__DOT__wbwide_xbar__DOT__s_ack),4);
    bufp->fullBit(oldp+4393,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4394,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__0__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4395,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__0__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4396,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4397,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__1__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4398,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__1__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4399,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4400,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__2__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4401,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__2__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4402,(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall));
    bufp->fullBit(oldp+4403,(vlSelf->main__DOT__wbwide_xbar__DOT____Vcellinp__DECODE_REQUEST__BRA__3__KET____DOT__adcd__i_stall));
    bufp->fullBit(oldp+4404,((1U & (~ (IData)(vlSelf->main__DOT__wbwide_xbar__DOT__DECODE_REQUEST__BRA__3__KET____DOT__skd_stall)))));
    bufp->fullBit(oldp+4405,(vlSelf->i_clk));
    bufp->fullBit(oldp+4406,(vlSelf->i_reset));
    bufp->fullWData(oldp+4407,(vlSelf->i_ddr3_controller_iserdes_data),512);
    bufp->fullQData(oldp+4423,(vlSelf->i_ddr3_controller_iserdes_dqs),64);
    bufp->fullQData(oldp+4425,(vlSelf->i_ddr3_controller_iserdes_bitslip_reference),64);
    bufp->fullBit(oldp+4427,(vlSelf->i_ddr3_controller_idelayctrl_rdy));
    bufp->fullWData(oldp+4428,(vlSelf->o_ddr3_controller_cmd),96);
    bufp->fullBit(oldp+4431,(vlSelf->o_ddr3_controller_dqs_tri_control));
    bufp->fullBit(oldp+4432,(vlSelf->o_ddr3_controller_dq_tri_control));
    bufp->fullBit(oldp+4433,(vlSelf->o_ddr3_controller_toggle_dqs));
    bufp->fullWData(oldp+4434,(vlSelf->o_ddr3_controller_data),512);
    bufp->fullQData(oldp+4450,(vlSelf->o_ddr3_controller_dm),64);
    bufp->fullCData(oldp+4452,(vlSelf->o_ddr3_controller_odelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4453,(vlSelf->o_ddr3_controller_odelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4454,(vlSelf->o_ddr3_controller_idelay_data_cntvaluein),5);
    bufp->fullCData(oldp+4455,(vlSelf->o_ddr3_controller_idelay_dqs_cntvaluein),5);
    bufp->fullCData(oldp+4456,(vlSelf->o_ddr3_controller_odelay_data_ld),8);
    bufp->fullCData(oldp+4457,(vlSelf->o_ddr3_controller_odelay_dqs_ld),8);
    bufp->fullCData(oldp+4458,(vlSelf->o_ddr3_controller_idelay_data_ld),8);
    bufp->fullCData(oldp+4459,(vlSelf->o_ddr3_controller_idelay_dqs_ld),8);
    bufp->fullCData(oldp+4460,(vlSelf->o_ddr3_controller_bitslip),8);
    bufp->fullCData(oldp+4461,(vlSelf->o_sirefclk_word),8);
    bufp->fullBit(oldp+4462,(vlSelf->o_sirefclk_ce));
    bufp->fullBit(oldp+4463,(vlSelf->i_fan_sda));
    bufp->fullBit(oldp+4464,(vlSelf->i_fan_scl));
    bufp->fullBit(oldp+4465,(vlSelf->o_fan_sda));
    bufp->fullBit(oldp+4466,(vlSelf->o_fan_scl));
    bufp->fullBit(oldp+4467,(vlSelf->o_fpga_pwm));
    bufp->fullBit(oldp+4468,(vlSelf->o_sys_pwm));
    bufp->fullBit(oldp+4469,(vlSelf->i_fan_tach));
    bufp->fullBit(oldp+4470,(vlSelf->i_i2c_sda));
    bufp->fullBit(oldp+4471,(vlSelf->i_i2c_scl));
    bufp->fullBit(oldp+4472,(vlSelf->o_i2c_sda));
    bufp->fullBit(oldp+4473,(vlSelf->o_i2c_scl));
    bufp->fullBit(oldp+4474,(vlSelf->cpu_sim_cyc));
    bufp->fullBit(oldp+4475,(vlSelf->cpu_sim_stb));
    bufp->fullBit(oldp+4476,(vlSelf->cpu_sim_we));
    bufp->fullCData(oldp+4477,(vlSelf->cpu_sim_addr),7);
    bufp->fullIData(oldp+4478,(vlSelf->cpu_sim_data),32);
    bufp->fullBit(oldp+4479,(vlSelf->cpu_sim_stall));
    bufp->fullBit(oldp+4480,(vlSelf->cpu_sim_ack));
    bufp->fullIData(oldp+4481,(vlSelf->cpu_sim_idata),32);
    bufp->fullBit(oldp+4482,(vlSelf->cpu_prof_stb));
    bufp->fullIData(oldp+4483,(vlSelf->cpu_prof_addr),31);
    bufp->fullIData(oldp+4484,(vlSelf->cpu_prof_ticks),32);
    bufp->fullBit(oldp+4485,(vlSelf->i_cpu_reset));
    bufp->fullBit(oldp+4486,(vlSelf->i_wbu_uart_rx));
    bufp->fullBit(oldp+4487,(vlSelf->o_wbu_uart_tx));
    bufp->fullBit(oldp+4488,(vlSelf->o_wbu_uart_cts_n));
    bufp->fullSData(oldp+4489,(vlSelf->i_gpio),16);
    bufp->fullCData(oldp+4490,(vlSelf->o_gpio),8);
    bufp->fullCData(oldp+4491,(vlSelf->i_sw),8);
    bufp->fullCData(oldp+4492,(vlSelf->i_btn),5);
    bufp->fullCData(oldp+4493,(vlSelf->o_led),8);
    bufp->fullBit(oldp+4494,(vlSelf->i_clk200));
    bufp->fullIData(oldp+4495,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4)),32);
    bufp->fullIData(oldp+4496,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & vlSelf->i_ddr3_controller_iserdes_data[1U]))),32);
    bufp->fullIData(oldp+4497,(((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                 [0U] << 0x1fU) | (0x7fffffffU 
                                                   & vlSelf->i_ddr3_controller_iserdes_data[0U]))),32);
    bufp->fullIData(oldp+4498,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__r_aborted) 
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
    bufp->fullBit(oldp+4499,((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                              [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate)))));
    bufp->fullIData(oldp+4500,((((IData)(vlSelf->main__DOT__gpioi__DOT__r_gpio) 
                                 << 0x10U) | (IData)(vlSelf->o_gpio))),32);
    bufp->fullBit(oldp+4501,(((IData)(vlSelf->cpu_sim_cyc) 
                              | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb))));
    bufp->fullBit(oldp+4502,(((~ (IData)(vlSelf->cpu_sim_cyc)) 
                              & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack))));
    bufp->fullBit(oldp+4503,(vlSelf->main__DOT____Vcellinp__ddr3_controller_inst__i_rst_n));
    bufp->fullBit(oldp+4504,((0U == (((((((((((((((
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
    bufp->fullSData(oldp+4505,(vlSelf->o_gpio),16);
    bufp->fullIData(oldp+4506,(vlSelf->main__DOT____Vcellinp__scope1_ddr3i____pinNumber4),31);
    bufp->fullIData(oldp+4507,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[1U])),31);
    bufp->fullIData(oldp+4508,((0x7fffffffU & vlSelf->i_ddr3_controller_iserdes_data[0U])),31);
    bufp->fullBit(oldp+4509,(vlSelf->main__DOT____Vcellinp__swic__i_reset));
    bufp->fullCData(oldp+4510,(((IData)(vlSelf->cpu_sim_cyc)
                                 ? 0xfU : (0xfU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_ssel) 
                                                   >> 4U)))),4);
    bufp->fullIData(oldp+4511,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_pc),31);
    bufp->fullBit(oldp+4512,((((~ ((IData)(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__dcd_F) 
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
    bufp->fullBit(oldp+4513,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim));
    bufp->fullIData(oldp+4514,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__instruction_decoder__DOT__o_sim_immv),23);
    bufp->fullBit(oldp+4515,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_valid));
    bufp->fullBit(oldp+4516,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim));
    bufp->fullIData(oldp+4517,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__op_sim_immv),23);
    bufp->fullBit(oldp+4518,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim));
    bufp->fullIData(oldp+4519,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_sim_immv),23);
    bufp->fullBit(oldp+4520,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__core__DOT__alu_ce));
    bufp->fullIData(oldp+4521,((((IData)(vlSelf->main__DOT__u_fan__DOT__u_i2ccpu__DOT__half_insn) 
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
    bufp->fullSData(oldp+4522,(((0xfffffc00U & ((IData)(vlSelf->main__DOT____Vcellout__wb32_xbar__o_scyc) 
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
    bufp->fullIData(oldp+4523,(vlSelf->main__DOT__wb32_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4524,(vlSelf->main__DOT__wb32_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),4);
    bufp->fullCData(oldp+4525,(((((IData)(vlSelf->cpu_sim_cyc) 
                                  | (IData)(vlSelf->main__DOT__swic__DOT__DELAY_THE_DEBUG_BUS__DOT__wbdelay__DOT__SKIDBUFFER__DOT__r_stb)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_wbu_arbiter_stall))),2);
    bufp->fullCData(oldp+4526,(((((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                  & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                 << 1U) | (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack))),2);
    bufp->fullCData(oldp+4527,(((0xfffffffeU & ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                                & (((~ (IData)(vlSelf->cpu_sim_cyc)) 
                                                    & (IData)(vlSelf->main__DOT__raw_cpu_dbg_ack)) 
                                                   << 1U))) 
                                | ((IData)(vlSelf->main__DOT____Vcellout__wbu_xbar__o_scyc) 
                                   & (IData)(vlSelf->main__DOT__wbu_arbiter_upsz__DOT__UPSIZE__DOT__r_ack)))),4);
    bufp->fullIData(oldp+4528,(vlSelf->main__DOT__wbu_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4529,(vlSelf->main__DOT__wbu_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4530,((((vlSelf->main__DOT__ddr3_controller_inst__DOT__o_wb_ack_read_q
                                  [0U] & (0x10U == (IData)(vlSelf->main__DOT__ddr3_controller_inst__DOT__state_calibrate))) 
                                 << 2U) | (((IData)(vlSelf->main__DOT__wbwide_bkram_ack) 
                                            << 1U) 
                                           | (IData)(vlSelf->main__DOT__u_wbdown__DOT__DOWNSIZE__DOT__r_ack)))),3);
    bufp->fullIData(oldp+4531,(vlSelf->main__DOT__wbwide_xbar__DOT__iN),32);
    bufp->fullIData(oldp+4532,(vlSelf->main__DOT__wbwide_xbar__DOT__iM),32);
    bufp->fullCData(oldp+4533,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__0__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4534,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__1__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4535,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__2__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullCData(oldp+4536,(vlSelf->main__DOT__wbwide_xbar__DOT__ARBITRATE_REQUESTS__BRA__3__KET____DOT__MINDEX_MULTIPLE_SLAVES__DOT__r_reindex),2);
    bufp->fullDouble(oldp+4537,(10.0));
    bufp->fullDouble(oldp+4539,(2.50000000000000000e+00));
    bufp->fullIData(oldp+4541,(0xeU),32);
    bufp->fullIData(oldp+4542,(0xaU),32);
    bufp->fullIData(oldp+4543,(3U),32);
    bufp->fullIData(oldp+4544,(8U),32);
    bufp->fullIData(oldp+4545,(1U),32);
    bufp->fullIData(oldp+4546,(4U),32);
    bufp->fullIData(oldp+4547,(0x18U),32);
    bufp->fullIData(oldp+4548,(0x4000000U),32);
    bufp->fullIData(oldp+4549,(0x19U),32);
    bufp->fullIData(oldp+4550,(0x10U),32);
    bufp->fullBit(oldp+4551,(1U));
    bufp->fullIData(oldp+4552,(0x64U),24);
    bufp->fullIData(oldp+4553,(7U),32);
    bufp->fullIData(oldp+4554,(0x13U),32);
    bufp->fullIData(oldp+4555,(2U),32);
    bufp->fullIData(oldp+4556,(0U),32);
    bufp->fullBit(oldp+4557,(0U));
    bufp->fullBit(oldp+4558,(1U));
    bufp->fullWData(oldp+4559,(Vmain__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullQData(oldp+4575,(0xffffffffffffffffULL),64);
    bufp->fullCData(oldp+4577,(vlSelf->main__DOT__wb32_buildtime_addr),8);
    bufp->fullBit(oldp+4578,(vlSelf->main__DOT__wb32_buildtime_err));
    bufp->fullIData(oldp+4579,(0x211840U),32);
    bufp->fullCData(oldp+4580,(vlSelf->main__DOT__wb32_gpio_addr),8);
    bufp->fullBit(oldp+4581,(vlSelf->main__DOT__wb32_gpio_err));
    bufp->fullCData(oldp+4582,(vlSelf->main__DOT__wb32_sirefclk_addr),8);
    bufp->fullBit(oldp+4583,(vlSelf->main__DOT__wb32_sirefclk_err));
    bufp->fullCData(oldp+4584,(vlSelf->main__DOT__wb32_spio_addr),8);
    bufp->fullBit(oldp+4585,(vlSelf->main__DOT__wb32_spio_err));
    bufp->fullCData(oldp+4586,(vlSelf->main__DOT__wb32_version_addr),8);
    bufp->fullBit(oldp+4587,(vlSelf->main__DOT__wb32_version_err));
    bufp->fullIData(oldp+4588,(0x20230904U),32);
    bufp->fullCData(oldp+4589,(0xfU),4);
    bufp->fullCData(oldp+4590,(0x20U),8);
    bufp->fullIData(oldp+4591,(0x14U),32);
    bufp->fullIData(oldp+4592,(0x200U),32);
    bufp->fullCData(oldp+4593,(0U),8);
    bufp->fullBit(oldp+4594,(0U));
    bufp->fullIData(oldp+4595,(0x20U),32);
    bufp->fullCData(oldp+4596,(6U),4);
    bufp->fullCData(oldp+4597,(0U),2);
    bufp->fullCData(oldp+4598,(1U),2);
    bufp->fullCData(oldp+4599,(2U),2);
    bufp->fullCData(oldp+4600,(3U),2);
    bufp->fullIData(oldp+4601,(0x40U),32);
    bufp->fullCData(oldp+4602,(0U),4);
    bufp->fullCData(oldp+4603,(1U),4);
    bufp->fullCData(oldp+4604,(2U),4);
    bufp->fullCData(oldp+4605,(3U),4);
    bufp->fullCData(oldp+4606,(4U),4);
    bufp->fullCData(oldp+4607,(5U),4);
    bufp->fullCData(oldp+4608,(7U),4);
    bufp->fullIData(oldp+4609,(0x1bU),32);
    bufp->fullIData(oldp+4610,(0x1aU),32);
    bufp->fullIData(oldp+4611,(0x17U),32);
    bufp->fullIData(oldp+4612,(0x16U),32);
    bufp->fullIData(oldp+4613,(0x12U),32);
    bufp->fullIData(oldp+4614,(0x15U),32);
    bufp->fullIData(oldp+4615,(0x11U),32);
    bufp->fullIData(oldp+4616,(0xdU),32);
    bufp->fullIData(oldp+4617,(0x30d40U),32);
    bufp->fullIData(oldp+4618,(0x7a120U),32);
    bufp->fullDouble(oldp+4619,(1.37500000000000000e+01));
    bufp->fullIData(oldp+4621,(0x23U),32);
    bufp->fullDouble(oldp+4622,(350.0));
    bufp->fullIData(oldp+4624,(0x1e78U),32);
    bufp->fullDouble(oldp+4625,(360.0));
    bufp->fullDouble(oldp+4627,(15.0));
    bufp->fullIData(oldp+4629,(0xaU),19);
    bufp->fullDouble(oldp+4630,(7.50000000000000000e+00));
    bufp->fullIData(oldp+4632,(0x80U),32);
    bufp->fullIData(oldp+4633,(6U),32);
    bufp->fullIData(oldp+4634,(5U),32);
    bufp->fullIData(oldp+4635,(0xc350U),19);
    bufp->fullIData(oldp+4636,(9U),32);
    bufp->fullIData(oldp+4637,(0xbU),32);
    bufp->fullIData(oldp+4638,(0xcU),32);
    bufp->fullIData(oldp+4639,(0xfU),32);
    bufp->fullCData(oldp+4640,(0U),3);
    bufp->fullCData(oldp+4641,(2U),3);
    bufp->fullIData(oldp+4642,(0x20040U),19);
    bufp->fullCData(oldp+4643,(3U),3);
    bufp->fullIData(oldp+4644,(0x30004U),19);
    bufp->fullIData(oldp+4645,(0x30000U),19);
    bufp->fullCData(oldp+4646,(1U),3);
    bufp->fullIData(oldp+4647,(0x108c4U),19);
    bufp->fullIData(oldp+4648,(0x10844U),19);
    bufp->fullIData(oldp+4649,(0x720U),19);
    bufp->fullIData(oldp+4650,(0x4380005U),28);
    bufp->fullIData(oldp+4651,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__delay),32);
    bufp->fullCData(oldp+4652,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__slot_number),2);
    bufp->fullCData(oldp+4653,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__read_slot),2);
    bufp->fullCData(oldp+4654,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__write_slot),2);
    bufp->fullCData(oldp+4655,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_activate_slot),2);
    bufp->fullCData(oldp+4656,(vlSelf->main__DOT__ddr3_controller_inst__DOT__get_slot__Vstatic__anticipate_precharge_slot),2);
    bufp->fullIData(oldp+4657,(vlSelf->main__DOT__ddr3_controller_inst__DOT__find_delay__Vstatic__k),32);
    bufp->fullIData(oldp+4658,(0x1eU),32);
    bufp->fullIData(oldp+4659,(0x24U),32);
    bufp->fullIData(oldp+4660,(0x400U),32);
    bufp->fullCData(oldp+4661,(0U),5);
    bufp->fullQData(oldp+4662,(0x100000000ULL),36);
    bufp->fullQData(oldp+4664,(0x40000000ULL),36);
    bufp->fullQData(oldp+4666,(0ULL),36);
    bufp->fullCData(oldp+4668,(0x4fU),7);
    bufp->fullCData(oldp+4669,(0x49U),7);
    bufp->fullIData(oldp+4670,(0x1fU),32);
    bufp->fullIData(oldp+4671,(0U),31);
    bufp->fullSData(oldp+4672,(0xfffU),12);
    bufp->fullCData(oldp+4673,(8U),4);
    bufp->fullCData(oldp+4674,(9U),4);
    bufp->fullCData(oldp+4675,(0xaU),4);
    bufp->fullCData(oldp+4676,(0xbU),4);
    bufp->fullCData(oldp+4677,(0xcU),4);
    bufp->fullCData(oldp+4678,(0xdU),4);
    bufp->fullCData(oldp+4679,(4U),3);
    bufp->fullCData(oldp+4680,(5U),3);
    bufp->fullCData(oldp+4681,(6U),3);
    bufp->fullCData(oldp+4682,(7U),3);
    bufp->fullCData(oldp+4683,(0xaU),5);
    bufp->fullIData(oldp+4684,(0x1fcU),20);
    bufp->fullIData(oldp+4685,(0x7fffffffU),31);
    bufp->fullCData(oldp+4686,(0x64U),7);
    bufp->fullCData(oldp+4687,(0x32U),7);
    bufp->fullIData(oldp+4688,(0xc0000000U),32);
    bufp->fullCData(oldp+4689,(1U),8);
    bufp->fullCData(oldp+4690,(2U),8);
    bufp->fullCData(oldp+4691,(3U),8);
    bufp->fullCData(oldp+4692,(4U),8);
    bufp->fullCData(oldp+4693,(5U),8);
    bufp->fullCData(oldp+4694,(6U),8);
    bufp->fullCData(oldp+4695,(7U),8);
    bufp->fullCData(oldp+4696,(8U),8);
    bufp->fullCData(oldp+4697,(9U),8);
    bufp->fullCData(oldp+4698,(0xaU),8);
    bufp->fullCData(oldp+4699,(0xbU),8);
    bufp->fullCData(oldp+4700,(0xcU),8);
    bufp->fullCData(oldp+4701,(0xdU),8);
    bufp->fullCData(oldp+4702,(0xeU),8);
    bufp->fullCData(oldp+4703,(0xfU),8);
    bufp->fullCData(oldp+4704,(0x80U),8);
    bufp->fullCData(oldp+4705,(0x10U),8);
    bufp->fullIData(oldp+4706,(0U),20);
    bufp->fullIData(oldp+4707,(0x208U),32);
    __Vtemp_hf465e4c8__0[0U] = 0x54494e47U;
    __Vtemp_hf465e4c8__0[1U] = 0x45524e41U;
    __Vtemp_hf465e4c8__0[2U] = 0x414c54U;
    bufp->fullWData(oldp+4708,(__Vtemp_hf465e4c8__0),88);
    bufp->fullIData(oldp+4711,(0x41425254U),32);
    bufp->fullIData(oldp+4712,(0x40U),32);
    bufp->fullBit(oldp+4713,(vlSelf->main__DOT__swic__DOT__thecpu__DOT__DATA_CACHE__DOT__mem__DOT__UNUSED_BITS__DOT__unused_aw));
    bufp->fullIData(oldp+4714,(0x1dU),32);
    bufp->fullIData(oldp+4715,(0x1000000U),29);
    bufp->fullCData(oldp+4716,(0xeU),4);
    bufp->fullSData(oldp+4717,(0x1d7U),9);
    bufp->fullSData(oldp+4718,(0x2000U),14);
    bufp->fullCData(oldp+4719,(7U),5);
    bufp->fullIData(oldp+4720,(0x5f5e100U),32);
    bufp->fullIData(oldp+4721,(0x186a0U),32);
    bufp->fullIData(oldp+4722,(0x4e20U),32);
    bufp->fullIData(oldp+4723,(0x1387U),32);
    bufp->fullSData(oldp+4724,(0xc8U),12);
    bufp->fullIData(oldp+4725,(0x10U),32);
    __Vtemp_h2308cdb3__0[0U] = 0x18100800U;
    __Vtemp_h2308cdb3__0[1U] = 0x38302820U;
    __Vtemp_h2308cdb3__0[2U] = 0x806040U;
    bufp->fullWData(oldp+4726,(__Vtemp_h2308cdb3__0),88);
    __Vtemp_h382813b1__0[0U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[1U] = 0xf8f8f8f8U;
    __Vtemp_h382813b1__0[2U] = 0x80e0f8U;
    bufp->fullWData(oldp+4729,(__Vtemp_h382813b1__0),88);
    bufp->fullSData(oldp+4732,(0U),11);
    bufp->fullSData(oldp+4733,(0xf800U),16);
    bufp->fullIData(oldp+4734,(0x25U),32);
    bufp->fullSData(oldp+4735,(0x7ffU),11);
    bufp->fullIData(oldp+4736,(0x2dU),32);
    bufp->fullQData(oldp+4737,(0x800000000000000ULL),60);
    bufp->fullQData(oldp+4739,(0xe00000020000000ULL),60);
    bufp->fullIData(oldp+4741,(0x43U),32);
    __Vtemp_h5259539f__0[0U] = 0x80000U;
    __Vtemp_h5259539f__0[1U] = 0x2000U;
    __Vtemp_h5259539f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4742,(__Vtemp_h5259539f__0),75);
    __Vtemp_ha5e9189f__0[0U] = 0x1f80000U;
    __Vtemp_ha5e9189f__0[1U] = 0x3f000U;
    __Vtemp_ha5e9189f__0[2U] = 0x400U;
    bufp->fullWData(oldp+4745,(__Vtemp_ha5e9189f__0),75);
    bufp->fullIData(oldp+4748,(0x241U),32);
    bufp->fullIData(oldp+4749,(0x25aU),32);
}
