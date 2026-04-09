// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_SHARP_QHD_VIDEO_H_
#define _PANEL_SHARP_QHD_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config sharp_qhd_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_sharp_qhd_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution sharp_qhd_video_panel_res = {
	.panel_width = 540,
	.panel_height = 960,
	.hfront_porch = 48,
	.hback_porch = 80,
	.hpulse_width = 32,
	.hsync_skew = 0,
	.vfront_porch = 3,
	.vback_porch = 15,
	.vpulse_width = 10,
	/* Borders not supported yet */
};

static struct color_info sharp_qhd_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char sharp_qhd_video_on_cmd_0[] = {
	0x01, 0x00, 0x05, 0x80
};
static char sharp_qhd_video_on_cmd_1[] = {
	0x11, 0x00, 0x05, 0x80
};
static char sharp_qhd_video_on_cmd_2[] = {
	0x53, 0x0c, 0x15, 0x80
};
static char sharp_qhd_video_on_cmd_3[] = {
	0x29, 0x00, 0x05, 0x80
};
static char sharp_qhd_video_on_cmd_4[] = {
	0xae, 0x03, 0x15, 0x80
};
static char sharp_qhd_video_on_cmd_5[] = {
	0x3a, 0x77, 0x15, 0x80
};

static struct mipi_dsi_cmd sharp_qhd_video_on_command[] = {
	{ sizeof(sharp_qhd_video_on_cmd_0), sharp_qhd_video_on_cmd_0, 50 },
	{ sizeof(sharp_qhd_video_on_cmd_1), sharp_qhd_video_on_cmd_1, 10 },
	{ sizeof(sharp_qhd_video_on_cmd_2), sharp_qhd_video_on_cmd_2, 10 },
	{ sizeof(sharp_qhd_video_on_cmd_3), sharp_qhd_video_on_cmd_3, 10 },
	{ sizeof(sharp_qhd_video_on_cmd_4), sharp_qhd_video_on_cmd_4, 10 },
	{ sizeof(sharp_qhd_video_on_cmd_5), sharp_qhd_video_on_cmd_5, 10 },
};

static char sharp_qhd_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char sharp_qhd_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd sharp_qhd_video_off_command[] = {
	{ sizeof(sharp_qhd_video_off_cmd_0), sharp_qhd_video_off_cmd_0, 10 },
	{ sizeof(sharp_qhd_video_off_cmd_1), sharp_qhd_video_off_cmd_1, 120 },
};

static struct command_state sharp_qhd_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info sharp_qhd_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info sharp_qhd_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 0,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration sharp_qhd_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t sharp_qhd_video_timings[] = {
	0x46, 0x1d, 0x20, 0x00, 0x39, 0x3a, 0x21, 0x21, 0x32, 0x03, 0x04, 0x00
};

static struct panel_timing sharp_qhd_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1c,
};

static struct panel_reset_sequence sharp_qhd_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 200, 20 },
	.pin_direction = 2,
};

static struct backlight sharp_qhd_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_sharp_qhd_video_select(struct panel_struct *panel,
						struct msm_panel_info *pinfo,
						struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &sharp_qhd_video_panel_data;
	panel->panelres = &sharp_qhd_video_panel_res;
	panel->color = &sharp_qhd_video_color;
	panel->videopanel = &sharp_qhd_video_video_panel;
	panel->commandpanel = &sharp_qhd_video_command_panel;
	panel->state = &sharp_qhd_video_state;
	panel->laneconfig = &sharp_qhd_video_lane_config;
	panel->paneltiminginfo = &sharp_qhd_video_timing_info;
	panel->panelresetseq = &sharp_qhd_video_reset_seq;
	panel->backlightinfo = &sharp_qhd_video_backlight;
	pinfo->mipi.panel_on_cmds = sharp_qhd_video_on_command;
	pinfo->mipi.panel_off_cmds = sharp_qhd_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(sharp_qhd_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(sharp_qhd_video_off_command);
	memcpy(phy_db->timing, sharp_qhd_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_SHARP_QHD_VIDEO_H_ */
