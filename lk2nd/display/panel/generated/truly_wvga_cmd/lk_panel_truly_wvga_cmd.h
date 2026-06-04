// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_TRULY_WVGA_CMD_H_
#define _PANEL_TRULY_WVGA_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config truly_wvga_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_truly_wvga_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution truly_wvga_cmd_panel_res = {
	.panel_width = 480,
	.panel_height = 800,
	.hfront_porch = 160,
	.hback_porch = 40,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 12,
	.vback_porch = 10,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info truly_wvga_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char truly_wvga_cmd_on_cmd_0[] = {
	0x01, 0x00, 0x05, 0x80
};
static char truly_wvga_cmd_on_cmd_1[] = {
	0xb0, 0x04, 0x23, 0x80
};
static char truly_wvga_cmd_on_cmd_2[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb3, 0x02, 0x00, 0xff
};
static char truly_wvga_cmd_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb6, 0x51, 0x83, 0xff
};
static char truly_wvga_cmd_on_cmd_4[] = {
	0x05, 0x00, 0x29, 0xc0, 0xb7, 0x00, 0x80, 0x15,
	0x25, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_5[] = {
	0x14, 0x00, 0x29, 0xc0, 0xb8, 0x00, 0x07, 0x07,
	0xff, 0xc8, 0xc8, 0x01, 0x18, 0x10, 0x10, 0x37,
	0x5a, 0x87, 0xde, 0xff, 0x00, 0x00, 0x00, 0x00
};
static char truly_wvga_cmd_on_cmd_6[] = {
	0x05, 0x00, 0x29, 0xc0, 0xb9, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_7[] = {
	0xbd, 0x00, 0x23, 0x80
};
static char truly_wvga_cmd_on_cmd_8[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc0, 0x02, 0x43, 0xff
};
static char truly_wvga_cmd_on_cmd_9[] = {
	0x10, 0x00, 0x29, 0xc0, 0xc1, 0x43, 0x31, 0x99,
	0x21, 0x20, 0x00, 0x10, 0x28, 0x0c, 0x0c, 0x00,
	0x00, 0x00, 0x21, 0x01
};
static char truly_wvga_cmd_on_cmd_10[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc2, 0x28, 0x06, 0x06,
	0x01, 0x03, 0x00, 0xff
};
static char truly_wvga_cmd_on_cmd_11[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc3, 0x40, 0x00, 0x03
};
static char truly_wvga_cmd_on_cmd_12[] = {
	0x03, 0x00, 0x29, 0xc0, 0x6f, 0x03, 0x00, 0xff
};
static char truly_wvga_cmd_on_cmd_13[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc4, 0x00, 0x01, 0xff
};
static char truly_wvga_cmd_on_cmd_14[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc6, 0x00, 0x00, 0xff
};
static char truly_wvga_cmd_on_cmd_15[] = {
	0x06, 0x00, 0x29, 0xc0, 0xc7, 0x11, 0x8d, 0xa0,
	0xf5, 0x27, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_16[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc8, 0x01, 0x0a, 0x12,
	0x1c, 0x2b, 0x45, 0x3f, 0x29, 0x17, 0x13, 0x0f,
	0x04, 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45, 0x3f,
	0x29, 0x17, 0x13, 0x0f, 0x04, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_17[] = {
	0x19, 0x00, 0x29, 0xc0, 0xc9, 0x01, 0x0a, 0x12,
	0x1c, 0x2b, 0x45, 0x3f, 0x29, 0x17, 0x13, 0x0f,
	0x04, 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45, 0x3f,
	0x29, 0x17, 0x13, 0x0f, 0x04, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_18[] = {
	0x19, 0x00, 0x29, 0xc0, 0xca, 0x01, 0x0a, 0x12,
	0x1c, 0x2b, 0x45, 0x3f, 0x29, 0x17, 0x13, 0x0f,
	0x04, 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45, 0x3f,
	0x29, 0x17, 0x13, 0x0f, 0x04, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_19[] = {
	0x11, 0x00, 0x29, 0xc0, 0xd0, 0x99, 0x03, 0xce,
	0xa6, 0x00, 0x43, 0x20, 0x10, 0x01, 0x00, 0x01,
	0x01, 0x00, 0x03, 0x01, 0x00, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_20[] = {
	0x08, 0x00, 0x29, 0xc0, 0xd1, 0x18, 0x0c, 0x23,
	0x03, 0x75, 0x02, 0x50
};
static char truly_wvga_cmd_on_cmd_21[] = {
	0xd3, 0x33, 0x23, 0x80
};
static char truly_wvga_cmd_on_cmd_22[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd5, 0x2a, 0x2a, 0xff
};
static char truly_wvga_cmd_on_cmd_23[] = {
	0x02, 0x00, 0x29, 0xc0, 0xd6, 0x28, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_24[] = {
	0x10, 0x00, 0x29, 0xc0, 0xd7, 0x01, 0x00, 0xaa,
	0xc0, 0x2a, 0x2c, 0x22, 0x12, 0x71, 0x0a, 0x12,
	0x00, 0xa0, 0x00, 0x03
};
static char truly_wvga_cmd_on_cmd_25[] = {
	0x09, 0x00, 0x29, 0xc0, 0xd8, 0x44, 0x44, 0x22,
	0x44, 0x21, 0x46, 0x42, 0x40, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_26[] = {
	0x04, 0x00, 0x29, 0xc0, 0xd9, 0xcf, 0x2d, 0x51
};
static char truly_wvga_cmd_on_cmd_27[] = {
	0x02, 0x00, 0x29, 0xc0, 0xda, 0x01, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_28[] = {
	0x03, 0x00, 0x29, 0xc0, 0xde, 0x01, 0x4f, 0xff
};
static char truly_wvga_cmd_on_cmd_29[] = {
	0x07, 0x00, 0x29, 0xc0, 0xe1, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff
};
static char truly_wvga_cmd_on_cmd_30[] = {
	0xe6, 0x4f, 0x23, 0x80
};
static char truly_wvga_cmd_on_cmd_31[] = {
	0x06, 0x00, 0x29, 0xc0, 0xf3, 0x06, 0x00, 0x00,
	0x24, 0x00, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_32[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf8, 0x00, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_33[] = {
	0xfa, 0x03, 0x23, 0x80
};
static char truly_wvga_cmd_on_cmd_34[] = {
	0x04, 0x00, 0x29, 0xc0, 0xfb, 0x00, 0x00, 0x00
};
static char truly_wvga_cmd_on_cmd_35[] = {
	0x06, 0x00, 0x29, 0xc0, 0xfc, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_36[] = {
	0x05, 0x00, 0x29, 0xc0, 0xfd, 0x00, 0x00, 0x70,
	0x00, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_37[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0x00, 0x01,
	0xdf, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_38[] = {
	0x05, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0x00, 0x03,
	0x1f, 0xff, 0xff, 0xff
};
static char truly_wvga_cmd_on_cmd_39[] = {
	0x35, 0x00, 0x15, 0x80
};
static char truly_wvga_cmd_on_cmd_40[] = {
	0x03, 0x00, 0x39, 0xc0, 0x44, 0x00, 0x50, 0xff
};
static char truly_wvga_cmd_on_cmd_41[] = {
	0x36, 0x41, 0x15, 0x80
};
static char truly_wvga_cmd_on_cmd_42[] = {
	0x3a, 0x77, 0x15, 0x80
};
static char truly_wvga_cmd_on_cmd_43[] = {
	0x11, 0x00, 0x05, 0x80
};
static char truly_wvga_cmd_on_cmd_44[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd truly_wvga_cmd_on_command[] = {
	{ sizeof(truly_wvga_cmd_on_cmd_0), truly_wvga_cmd_on_cmd_0, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_1), truly_wvga_cmd_on_cmd_1, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_2), truly_wvga_cmd_on_cmd_2, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_3), truly_wvga_cmd_on_cmd_3, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_4), truly_wvga_cmd_on_cmd_4, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_5), truly_wvga_cmd_on_cmd_5, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_6), truly_wvga_cmd_on_cmd_6, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_7), truly_wvga_cmd_on_cmd_7, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_8), truly_wvga_cmd_on_cmd_8, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_9), truly_wvga_cmd_on_cmd_9, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_10), truly_wvga_cmd_on_cmd_10, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_11), truly_wvga_cmd_on_cmd_11, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_12), truly_wvga_cmd_on_cmd_12, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_13), truly_wvga_cmd_on_cmd_13, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_14), truly_wvga_cmd_on_cmd_14, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_15), truly_wvga_cmd_on_cmd_15, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_16), truly_wvga_cmd_on_cmd_16, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_17), truly_wvga_cmd_on_cmd_17, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_18), truly_wvga_cmd_on_cmd_18, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_19), truly_wvga_cmd_on_cmd_19, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_20), truly_wvga_cmd_on_cmd_20, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_21), truly_wvga_cmd_on_cmd_21, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_22), truly_wvga_cmd_on_cmd_22, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_23), truly_wvga_cmd_on_cmd_23, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_24), truly_wvga_cmd_on_cmd_24, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_25), truly_wvga_cmd_on_cmd_25, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_26), truly_wvga_cmd_on_cmd_26, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_27), truly_wvga_cmd_on_cmd_27, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_28), truly_wvga_cmd_on_cmd_28, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_29), truly_wvga_cmd_on_cmd_29, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_30), truly_wvga_cmd_on_cmd_30, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_31), truly_wvga_cmd_on_cmd_31, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_32), truly_wvga_cmd_on_cmd_32, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_33), truly_wvga_cmd_on_cmd_33, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_34), truly_wvga_cmd_on_cmd_34, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_35), truly_wvga_cmd_on_cmd_35, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_36), truly_wvga_cmd_on_cmd_36, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_37), truly_wvga_cmd_on_cmd_37, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_38), truly_wvga_cmd_on_cmd_38, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_39), truly_wvga_cmd_on_cmd_39, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_40), truly_wvga_cmd_on_cmd_40, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_41), truly_wvga_cmd_on_cmd_41, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_42), truly_wvga_cmd_on_cmd_42, 0 },
	{ sizeof(truly_wvga_cmd_on_cmd_43), truly_wvga_cmd_on_cmd_43, 125 },
	{ sizeof(truly_wvga_cmd_on_cmd_44), truly_wvga_cmd_on_cmd_44, 60 },
};

static char truly_wvga_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char truly_wvga_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd truly_wvga_cmd_off_command[] = {
	{ sizeof(truly_wvga_cmd_off_cmd_0), truly_wvga_cmd_off_cmd_0, 50 },
	{ sizeof(truly_wvga_cmd_off_cmd_1), truly_wvga_cmd_off_cmd_1, 120 },
};

static struct command_state truly_wvga_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info truly_wvga_cmd_command_panel = {
	1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

static struct videopanel_info truly_wvga_cmd_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 1,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration truly_wvga_cmd_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t truly_wvga_cmd_timings[] = {
	0x7b, 0x1a, 0x10, 0x00, 0x3c, 0x42, 0x14, 0x1c, 0x15, 0x03, 0x04, 0x00
};

static struct panel_timing truly_wvga_cmd_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1a,
};

static struct panel_reset_sequence truly_wvga_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 2, 20 },
	.pin_direction = 2,
};

static struct backlight truly_wvga_cmd_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_truly_wvga_cmd_select(struct panel_struct *panel,
					       struct msm_panel_info *pinfo,
					       struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &truly_wvga_cmd_panel_data;
	panel->panelres = &truly_wvga_cmd_panel_res;
	panel->color = &truly_wvga_cmd_color;
	panel->videopanel = &truly_wvga_cmd_video_panel;
	panel->commandpanel = &truly_wvga_cmd_command_panel;
	panel->state = &truly_wvga_cmd_state;
	panel->laneconfig = &truly_wvga_cmd_lane_config;
	panel->paneltiminginfo = &truly_wvga_cmd_timing_info;
	panel->panelresetseq = &truly_wvga_cmd_reset_seq;
	panel->backlightinfo = &truly_wvga_cmd_backlight;
	pinfo->mipi.panel_on_cmds = truly_wvga_cmd_on_command;
	pinfo->mipi.panel_off_cmds = truly_wvga_cmd_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(truly_wvga_cmd_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(truly_wvga_cmd_off_command);
	memcpy(phy_db->timing, truly_wvga_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_TRULY_WVGA_CMD_H_ */
