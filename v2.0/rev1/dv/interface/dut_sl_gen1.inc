    .iopad_aib_ch0(s1_iopad_ch0_aib),
    .iopad_aib_ch1(s1_iopad_ch1_aib),
    .iopad_aib_ch2(s1_iopad_ch2_aib),
    .iopad_aib_ch3(s1_iopad_ch3_aib),
    .iopad_aib_ch4(s1_iopad_ch4_aib),
    .iopad_aib_ch5(s1_iopad_ch5_aib),
    .iopad_aib_ch6(s1_iopad_ch6_aib),
    .iopad_aib_ch7(s1_iopad_ch7_aib),
    .iopad_aib_ch8(s1_iopad_ch8_aib),
    .iopad_aib_ch9(s1_iopad_ch9_aib),
    .iopad_aib_ch10(s1_iopad_ch10_aib),
    .iopad_aib_ch11(s1_iopad_ch11_aib),
    .iopad_aib_ch12(s1_iopad_ch12_aib),
    .iopad_aib_ch13(s1_iopad_ch13_aib),
    .iopad_aib_ch14(s1_iopad_ch14_aib),
    .iopad_aib_ch15(s1_iopad_ch15_aib),
    .iopad_aib_ch16(s1_iopad_ch16_aib),
    .iopad_aib_ch17(s1_iopad_ch17_aib),
    .iopad_aib_ch18(s1_iopad_ch18_aib),
    .iopad_aib_ch19(s1_iopad_ch19_aib),
    .iopad_aib_ch20(s1_iopad_ch20_aib),
    .iopad_aib_ch21(s1_iopad_ch21_aib),
    .iopad_aib_ch22(s1_iopad_ch22_aib),
    .iopad_aib_ch23(s1_iopad_ch23_aib), 

    .tx_parallel_data(intf_s1.gen1_data_in_f),
    .rx_parallel_data(intf_s1.gen1_data_out_f),
    .tx_coreclkin(intf_s1.m_wr_clk),
    .tx_clkout(),
    .rx_coreclkin(intf_s1.m_rd_clk),

    .rx_clkout(),
    .m_ns_fwd_clk(intf_s1.m_ns_fwd_clk),

    .m_fs_fwd_clk(intf_s1.m_fs_fwd_clk),

    .fs_mac_rdy(intf_s1.fs_mac_rdy),
    .ns_mac_rdy(intf_s1.ns_mac_rdy),
    .ns_adapter_rstn(intf_s1.ns_adapter_rstn),
    .config_done(intf_s1.i_conf_done),

    .sl_rx_dcc_dll_lock_req(intf_s1.sl_rx_dcc_dll_lock_req),
    .sl_tx_dcc_dll_lock_req(intf_s1.sl_tx_dcc_dll_lock_req),

    .ms_osc_transfer_en(),
    .ms_rx_transfer_en(intf_s1.ms_rx_transfer_en),
    .ms_tx_transfer_en(intf_s1.ms_tx_transfer_en),
    .sl_osc_transfer_en(),
    .sl_rx_transfer_en(intf_s1.sl_rx_transfer_en),
    .sl_tx_transfer_en(intf_s1.sl_tx_transfer_en),

    .ms_sideband(intf_s1.ms_sideband),
    .sl_sideband(intf_s1.sl_sideband),
    .iopad_crdet(device_detect),
    .iopad_crdet_r(device_detect),
    .iopad_por(por),
//  .iopad_por_r(por),
    .iopad_por_r(),
    .m_power_on_reset(intf_s1.i_m_power_on_reset),
    .m_device_detect_ovrd(intf_s1.m_device_detect_ovrd),
    .m_device_detect(intf_s1.m_device_detect)
