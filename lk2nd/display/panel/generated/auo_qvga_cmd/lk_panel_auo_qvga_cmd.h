// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_AUO_QVGA_CMD_H_
#define _PANEL_AUO_QVGA_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config auo_qvga_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_auo_qvga_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution auo_qvga_cmd_panel_res = {
	.panel_width = 320,
	.panel_height = 320,
	.hfront_porch = 4,
	.hback_porch = 4,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 8,
	.vback_porch = 8,
	.vpulse_width = 8,
	/* Borders not supported yet */
};

static struct color_info auo_qvga_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char auo_qvga_cmd_on_cmd_0[] = {
	0x06, 0x00, 0x39, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x00, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_1[] = {
	0x06, 0x00, 0x39, 0xc0, 0xbd, 0x01, 0x90, 0x14,
	0x14, 0x00, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_2[] = {
	0x06, 0x00, 0x39, 0xc0, 0xbe, 0x01, 0x90, 0x14,
	0x14, 0x01, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_3[] = {
	0x06, 0x00, 0x39, 0xc0, 0xbf, 0x01, 0x90, 0x14,
	0x14, 0x00, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_4[] = {
	0x04, 0x00, 0x39, 0xc0, 0xbb, 0x07, 0x07, 0x07
};
static char auo_qvga_cmd_on_cmd_5[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc7, 0x40, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_6[] = {
	0x06, 0x00, 0x39, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x02, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_7[] = {
	0x03, 0x00, 0x39, 0xc0, 0xfe, 0x08, 0x50, 0xff
};
static char auo_qvga_cmd_on_cmd_8[] = {
	0x04, 0x00, 0x39, 0xc0, 0xc3, 0xf2, 0x95, 0x04
};
static char auo_qvga_cmd_on_cmd_9[] = {
	0x00, 0x04, 0x15, 0x80
};
static char auo_qvga_cmd_on_cmd_10[] = {
	0x06, 0x00, 0x39, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x01, 0xff, 0xff
};
static char auo_qvga_cmd_on_cmd_11[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb0, 0x03, 0x03, 0x03
};
static char auo_qvga_cmd_on_cmd_12[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb1, 0x05, 0x05, 0x05
};
static char auo_qvga_cmd_on_cmd_13[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb2, 0x01, 0x01, 0x01
};
static char auo_qvga_cmd_on_cmd_14[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb4, 0x07, 0x07, 0x07
};
static char auo_qvga_cmd_on_cmd_15[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb5, 0x03, 0x03, 0x03
};
static char auo_qvga_cmd_on_cmd_16[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb6, 0x53, 0x53, 0x53
};
static char auo_qvga_cmd_on_cmd_17[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb7, 0x33, 0x33, 0x33
};
static char auo_qvga_cmd_on_cmd_18[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb8, 0x23, 0x23, 0x23
};
static char auo_qvga_cmd_on_cmd_19[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb9, 0x03, 0x03, 0x03
};
static char auo_qvga_cmd_on_cmd_20[] = {
	0x04, 0x00, 0x39, 0xc0, 0xba, 0x03, 0x03, 0x03
};
static char auo_qvga_cmd_on_cmd_21[] = {
	0x04, 0x00, 0x39, 0xc0, 0xbe, 0x32, 0x30, 0x70
};
static char auo_qvga_cmd_on_cmd_22[] = {
	0x08, 0x00, 0x39, 0xc0, 0xcf, 0xff, 0xd4, 0x95,
	0xef, 0x4f, 0x00, 0x04
};
static char auo_qvga_cmd_on_cmd_23[] = {
	0x35, 0x01, 0x15, 0x80
};
static char auo_qvga_cmd_on_cmd_24[] = {
	0x36, 0x00, 0x15, 0x80
};
static char auo_qvga_cmd_on_cmd_25[] = {
	0xc0, 0x20, 0x15, 0x80
};
static char auo_qvga_cmd_on_cmd_26[] = {
	0x07, 0x00, 0x39, 0xc0, 0xc2, 0x17, 0x17, 0x17,
	0x17, 0x17, 0x0b, 0xff
};
static char auo_qvga_cmd_on_cmd_27[] = {
	0x00, 0x00, 0x32, 0x80
};
static char auo_qvga_cmd_on_cmd_28[] = {
	0x11, 0x00, 0x05, 0x80
};
static char auo_qvga_cmd_on_cmd_29[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd auo_qvga_cmd_on_command[] = {
	{ sizeof(auo_qvga_cmd_on_cmd_0), auo_qvga_cmd_on_cmd_0, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_1), auo_qvga_cmd_on_cmd_1, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_2), auo_qvga_cmd_on_cmd_2, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_3), auo_qvga_cmd_on_cmd_3, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_4), auo_qvga_cmd_on_cmd_4, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_5), auo_qvga_cmd_on_cmd_5, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_6), auo_qvga_cmd_on_cmd_6, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_7), auo_qvga_cmd_on_cmd_7, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_8), auo_qvga_cmd_on_cmd_8, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_9), auo_qvga_cmd_on_cmd_9, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_10), auo_qvga_cmd_on_cmd_10, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_11), auo_qvga_cmd_on_cmd_11, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_12), auo_qvga_cmd_on_cmd_12, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_13), auo_qvga_cmd_on_cmd_13, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_14), auo_qvga_cmd_on_cmd_14, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_15), auo_qvga_cmd_on_cmd_15, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_16), auo_qvga_cmd_on_cmd_16, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_17), auo_qvga_cmd_on_cmd_17, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_18), auo_qvga_cmd_on_cmd_18, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_19), auo_qvga_cmd_on_cmd_19, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_20), auo_qvga_cmd_on_cmd_20, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_21), auo_qvga_cmd_on_cmd_21, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_22), auo_qvga_cmd_on_cmd_22, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_23), auo_qvga_cmd_on_cmd_23, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_24), auo_qvga_cmd_on_cmd_24, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_25), auo_qvga_cmd_on_cmd_25, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_26), auo_qvga_cmd_on_cmd_26, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_27), auo_qvga_cmd_on_cmd_27, 0 },
	{ sizeof(auo_qvga_cmd_on_cmd_28), auo_qvga_cmd_on_cmd_28, 255 },
	{ sizeof(auo_qvga_cmd_on_cmd_29), auo_qvga_cmd_on_cmd_29, 0 },
};

static char auo_qvga_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char auo_qvga_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd auo_qvga_cmd_off_command[] = {
	{ sizeof(auo_qvga_cmd_off_cmd_0), auo_qvga_cmd_off_cmd_0, 50 },
	{ sizeof(auo_qvga_cmd_off_cmd_1), auo_qvga_cmd_off_cmd_1, 120 },
};

static struct command_state auo_qvga_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info auo_qvga_cmd_command_panel = {
	1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

static struct videopanel_info auo_qvga_cmd_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration auo_qvga_cmd_lane_config = {
	.dsi_lanes = 1,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 0,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t auo_qvga_cmd_timings[] = {
	0x5f, 0x12, 0x0a, 0x00, 0x32, 0x34, 0x10, 0x16, 0x0f, 0x03, 0x04, 0x00
};

static struct panel_timing auo_qvga_cmd_timing_info = {
	.tclk_post = 0x05,
	.tclk_pre = 0x11,
};

static struct panel_reset_sequence auo_qvga_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 20, 20 },
	.pin_direction = 2,
};

static struct backlight auo_qvga_cmd_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_auo_qvga_cmd_select(struct panel_struct *panel,
					     struct msm_panel_info *pinfo,
					     struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &auo_qvga_cmd_panel_data;
	panel->panelres = &auo_qvga_cmd_panel_res;
	panel->color = &auo_qvga_cmd_color;
	panel->videopanel = &auo_qvga_cmd_video_panel;
	panel->commandpanel = &auo_qvga_cmd_command_panel;
	panel->state = &auo_qvga_cmd_state;
	panel->laneconfig = &auo_qvga_cmd_lane_config;
	panel->paneltiminginfo = &auo_qvga_cmd_timing_info;
	panel->panelresetseq = &auo_qvga_cmd_reset_seq;
	panel->backlightinfo = &auo_qvga_cmd_backlight;
	pinfo->mipi.panel_on_cmds = auo_qvga_cmd_on_command;
	pinfo->mipi.panel_off_cmds = auo_qvga_cmd_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(auo_qvga_cmd_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(auo_qvga_cmd_off_command);
	memcpy(phy_db->timing, auo_qvga_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_AUO_QVGA_CMD_H_ */
