// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_NT51017_WXGA_VIDEO_H_
#define _PANEL_NT51017_WXGA_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config nt51017_wxga_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_nt51017_wxga_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution nt51017_wxga_video_panel_res = {
	.panel_width = 800,
	.panel_height = 1280,
	.hfront_porch = 152,
	.hback_porch = 128,
	.hpulse_width = 8,
	.hsync_skew = 0,
	.vfront_porch = 18,
	.vback_porch = 23,
	.vpulse_width = 1,
	/* Borders not supported yet */
};

static struct color_info nt51017_wxga_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char nt51017_wxga_video_on_cmd_0[] = {
	0x02, 0x00, 0x39, 0xc0, 0x83, 0x96, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_1[] = {
	0x02, 0x00, 0x39, 0xc0, 0x84, 0x69, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_2[] = {
	0x02, 0x00, 0x39, 0xc0, 0x92, 0x19, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_3[] = {
	0x02, 0x00, 0x39, 0xc0, 0x95, 0x00, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_4[] = {
	0x02, 0x00, 0x39, 0xc0, 0x83, 0x00, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_5[] = {
	0x02, 0x00, 0x39, 0xc0, 0x84, 0x00, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_6[] = {
	0x02, 0x00, 0x39, 0xc0, 0x90, 0x77, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_7[] = {
	0x02, 0x00, 0x39, 0xc0, 0x94, 0xff, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_8[] = {
	0x02, 0x00, 0x39, 0xc0, 0x96, 0xff, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_9[] = {
	0x02, 0x00, 0x39, 0xc0, 0x91, 0xfd, 0xff, 0xff
};
static char nt51017_wxga_video_on_cmd_10[] = {
	0x02, 0x00, 0x39, 0xc0, 0x90, 0x77, 0xff, 0xff
};

static struct mipi_dsi_cmd nt51017_wxga_video_on_command[] = {
	{ sizeof(nt51017_wxga_video_on_cmd_0), nt51017_wxga_video_on_cmd_0, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_1), nt51017_wxga_video_on_cmd_1, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_2), nt51017_wxga_video_on_cmd_2, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_3), nt51017_wxga_video_on_cmd_3, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_4), nt51017_wxga_video_on_cmd_4, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_5), nt51017_wxga_video_on_cmd_5, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_6), nt51017_wxga_video_on_cmd_6, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_7), nt51017_wxga_video_on_cmd_7, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_8), nt51017_wxga_video_on_cmd_8, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_9), nt51017_wxga_video_on_cmd_9, 0 },
	{ sizeof(nt51017_wxga_video_on_cmd_10), nt51017_wxga_video_on_cmd_10, 0 },
};


static struct mipi_dsi_cmd nt51017_wxga_video_off_command[] = {
};

static struct command_state nt51017_wxga_video_state = {
	.oncommand_state = 1,
	.offcommand_state = 1,
};

static struct commandpanel_info nt51017_wxga_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info nt51017_wxga_video_video_panel = {
	.hsync_pulse = 0,
	.hfp_power_mode = 1,
	.hbp_power_mode = 1,
	.hsa_power_mode = 1,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration nt51017_wxga_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 1,
};

static const uint32_t nt51017_wxga_video_timings[] = {
	0x94, 0x20, 0x14, 0x00, 0x46, 0x4a, 0x1a, 0x24, 0x18, 0x03, 0x04, 0x00
};

static struct panel_timing nt51017_wxga_video_timing_info = {
	.tclk_post = 0x04,
	.tclk_pre = 0x1d,
};

static struct backlight nt51017_wxga_video_backlight = {
	.bl_interface_type = BL_PWM,
	.bl_min_level = 1,
	.bl_max_level = 255,
};

static inline void panel_nt51017_wxga_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &nt51017_wxga_video_panel_data;
	panel->panelres = &nt51017_wxga_video_panel_res;
	panel->color = &nt51017_wxga_video_color;
	panel->videopanel = &nt51017_wxga_video_video_panel;
	panel->commandpanel = &nt51017_wxga_video_command_panel;
	panel->state = &nt51017_wxga_video_state;
	panel->laneconfig = &nt51017_wxga_video_lane_config;
	panel->paneltiminginfo = &nt51017_wxga_video_timing_info;
	panel->panelresetseq = NULL;
	panel->backlightinfo = &nt51017_wxga_video_backlight;
	pinfo->mipi.panel_on_cmds = nt51017_wxga_video_on_command;
	pinfo->mipi.panel_off_cmds = nt51017_wxga_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(nt51017_wxga_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(nt51017_wxga_video_off_command);
	memcpy(phy_db->timing, nt51017_wxga_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_NT51017_WXGA_VIDEO_H_ */
