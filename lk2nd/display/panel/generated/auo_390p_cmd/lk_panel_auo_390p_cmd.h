// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_AUO_390P_CMD_H_
#define _PANEL_AUO_390P_CMD_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config auo_390p_cmd_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_auo_390p_cmd",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 1,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 45,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution auo_390p_cmd_panel_res = {
	.panel_width = 390,
	.panel_height = 390,
	.hfront_porch = 4,
	.hback_porch = 4,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 8,
	.vback_porch = 8,
	.vpulse_width = 8,
	/* Borders not supported yet */
};

static struct color_info auo_390p_cmd_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char auo_390p_cmd_on_cmd_0[] = {
	0xfe, 0x01, 0x15, 0x80
};
static char auo_390p_cmd_on_cmd_1[] = {
	0x0a, 0xf0, 0x15, 0x80
};
static char auo_390p_cmd_on_cmd_2[] = {
	0xfe, 0x00, 0x15, 0x80
};
static char auo_390p_cmd_on_cmd_3[] = {
	0x35, 0x00, 0x15, 0x80
};
static char auo_390p_cmd_on_cmd_4[] = {
	0x05, 0x00, 0x29, 0xc0, 0x2a, 0x00, 0x04, 0x01,
	0x89, 0xff, 0xff, 0xff
};
static char auo_390p_cmd_on_cmd_5[] = {
	0x05, 0x00, 0x29, 0xc0, 0x2b, 0x00, 0x00, 0x01,
	0x85, 0xff, 0xff, 0xff
};
static char auo_390p_cmd_on_cmd_6[] = {
	0x05, 0x00, 0x29, 0xc0, 0x30, 0x00, 0x00, 0x01,
	0x85, 0xff, 0xff, 0xff
};
static char auo_390p_cmd_on_cmd_7[] = {
	0x05, 0x00, 0x29, 0xc0, 0x31, 0x00, 0x04, 0x01,
	0x89, 0xff, 0xff, 0xff
};
static char auo_390p_cmd_on_cmd_8[] = {
	0x12, 0x00, 0x05, 0x80
};
static char auo_390p_cmd_on_cmd_9[] = {
	0x53, 0x20, 0x15, 0x80
};
static char auo_390p_cmd_on_cmd_10[] = {
	0x11, 0x00, 0x05, 0x80
};
static char auo_390p_cmd_on_cmd_11[] = {
	0x29, 0x00, 0x05, 0x80
};
static char auo_390p_cmd_on_cmd_12[] = {
	0x06, 0x00, 0x39, 0xc0, 0xf0, 0x55, 0xaa, 0x52,
	0x08, 0x01, 0xff, 0xff
};
static char auo_390p_cmd_on_cmd_13[] = {
	0x07, 0x00, 0x39, 0xc0, 0xff, 0x00, 0x55, 0xaa,
	0x52, 0x08, 0x01, 0xff
};

static struct mipi_dsi_cmd auo_390p_cmd_on_command[] = {
	{ sizeof(auo_390p_cmd_on_cmd_0), auo_390p_cmd_on_cmd_0, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_1), auo_390p_cmd_on_cmd_1, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_2), auo_390p_cmd_on_cmd_2, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_3), auo_390p_cmd_on_cmd_3, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_4), auo_390p_cmd_on_cmd_4, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_5), auo_390p_cmd_on_cmd_5, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_6), auo_390p_cmd_on_cmd_6, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_7), auo_390p_cmd_on_cmd_7, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_8), auo_390p_cmd_on_cmd_8, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_9), auo_390p_cmd_on_cmd_9, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_10), auo_390p_cmd_on_cmd_10, 150 },
	{ sizeof(auo_390p_cmd_on_cmd_11), auo_390p_cmd_on_cmd_11, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_12), auo_390p_cmd_on_cmd_12, 0 },
	{ sizeof(auo_390p_cmd_on_cmd_13), auo_390p_cmd_on_cmd_13, 0 },
};

static char auo_390p_cmd_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char auo_390p_cmd_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd auo_390p_cmd_off_command[] = {
	{ sizeof(auo_390p_cmd_off_cmd_0), auo_390p_cmd_off_cmd_0, 0 },
	{ sizeof(auo_390p_cmd_off_cmd_1), auo_390p_cmd_off_cmd_1, 120 },
};

static struct command_state auo_390p_cmd_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info auo_390p_cmd_command_panel = {
	0x1, 0x1, 0x1, 0, 0, 0, 0, 0, 0, 0x1, 0, 0
};

static struct videopanel_info auo_390p_cmd_video_panel = {
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

static struct lane_configuration auo_390p_cmd_lane_config = {
	.dsi_lanes = 1,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 0,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t auo_390p_cmd_timings[] = {
	0x5f, 0x12, 0x0a, 0x00, 0x32, 0x34, 0x10, 0x16, 0x0f, 0x03, 0x04, 0x00
};

static struct panel_timing auo_390p_cmd_timing_info = {
	.tclk_post = 0x05,
	.tclk_pre = 0x11,
};

static struct panel_reset_sequence auo_390p_cmd_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 20, 20 },
	.pin_direction = 2,
};

static struct backlight auo_390p_cmd_backlight = {
	.bl_interface_type = BL_DCS,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_auo_390p_cmd_select(struct panel_struct *panel,
					     struct msm_panel_info *pinfo,
					     struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &auo_390p_cmd_panel_data;
	panel->panelres = &auo_390p_cmd_panel_res;
	panel->color = &auo_390p_cmd_color;
	panel->videopanel = &auo_390p_cmd_video_panel;
	panel->commandpanel = &auo_390p_cmd_command_panel;
	panel->state = &auo_390p_cmd_state;
	panel->laneconfig = &auo_390p_cmd_lane_config;
	panel->paneltiminginfo = &auo_390p_cmd_timing_info;
	panel->panelresetseq = &auo_390p_cmd_reset_seq;
	panel->backlightinfo = &auo_390p_cmd_backlight;
	pinfo->mipi.panel_on_cmds = auo_390p_cmd_on_command;
	pinfo->mipi.panel_off_cmds = auo_390p_cmd_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(auo_390p_cmd_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(auo_390p_cmd_off_command);
	memcpy(phy_db->timing, auo_390p_cmd_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_AUO_390P_CMD_H_ */
