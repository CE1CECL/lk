// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_HX8379C_FWVGA_VIDEO_H_
#define _PANEL_HX8379C_FWVGA_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config hx8379c_fwvga_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_hx8379c_fwvga_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 0,
};

static struct panel_resolution hx8379c_fwvga_video_panel_res = {
	.panel_width = 480,
	.panel_height = 854,
	.hfront_porch = 60,
	.hback_porch = 60,
	.hpulse_width = 60,
	.hsync_skew = 0,
	.vfront_porch = 6,
	.vback_porch = 6,
	.vpulse_width = 5,
	/* Borders not supported yet */
};

static struct color_info hx8379c_fwvga_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char hx8379c_fwvga_video_on_cmd_0[] = {
	0x04, 0x00, 0x39, 0xc0, 0xb9, 0xff, 0x83, 0x79
};
static char hx8379c_fwvga_video_on_cmd_1[] = {
	0x11, 0x00, 0x39, 0xc0, 0xb1, 0x44, 0x1c, 0x1c,
	0x31, 0x31, 0x50, 0xd0, 0xee, 0x54, 0x80, 0x38,
	0x38, 0xf8, 0x32, 0x22, 0x22, 0xff, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_2[] = {
	0x0a, 0x00, 0x39, 0xc0, 0xb2, 0x80, 0xfe, 0x0b,
	0x04, 0x00, 0x50, 0x11, 0x42, 0x15, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_3[] = {
	0x0b, 0x00, 0x39, 0xc0, 0xb4, 0x69, 0x6a, 0x69,
	0x6a, 0x69, 0x6a, 0x22, 0x70, 0x23, 0x70, 0xff
};
static char hx8379c_fwvga_video_on_cmd_4[] = {
	0x0b, 0x00, 0x39, 0xc0, 0xba, 0x41, 0x83, 0xa8,
	0x4d, 0xb2, 0x24, 0x00, 0x00, 0x50, 0x90, 0xff
};
static char hx8379c_fwvga_video_on_cmd_5[] = {
	0x05, 0x00, 0x39, 0xc0, 0xc7, 0x00, 0x00, 0x00,
	0xc0, 0xff, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_6[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcc, 0x02, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_7[] = {
	0x02, 0x00, 0x39, 0xc0, 0xd2, 0x77, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_8[] = {
	0x1e, 0x00, 0x39, 0xc0, 0xd3, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x32, 0x10, 0x03, 0x00,
	0x03, 0x03, 0x60, 0x03, 0x60, 0x00, 0x08, 0x00,
	0x08, 0x45, 0x44, 0x08, 0x08, 0x37, 0x08, 0x08,
	0x37, 0x09, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_9[] = {
	0x23, 0x00, 0x39, 0xc0, 0xd5, 0x18, 0x18, 0x19,
	0x19, 0x18, 0x18, 0x20, 0x21, 0x24, 0x25, 0x18,
	0x18, 0x18, 0x18, 0x00, 0x01, 0x04, 0x05, 0x02,
	0x03, 0x06, 0x07, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0xff
};
static char hx8379c_fwvga_video_on_cmd_10[] = {
	0x21, 0x00, 0x39, 0xc0, 0xd6, 0x18, 0x18, 0x18,
	0x18, 0x19, 0x19, 0x25, 0x24, 0x21, 0x20, 0x18,
	0x18, 0x18, 0x18, 0x05, 0x04, 0x01, 0x00, 0x03,
	0x02, 0x07, 0x06, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0xff, 0xff
};
static char hx8379c_fwvga_video_on_cmd_11[] = {
	0x2b, 0x00, 0x39, 0xc0, 0xe0, 0x00, 0x04, 0x0b,
	0x2f, 0x39, 0x3f, 0x21, 0x46, 0x07, 0x0a, 0x0c,
	0x17, 0x0f, 0x13, 0x16, 0x14, 0x15, 0x07, 0x11,
	0x13, 0x30, 0x00, 0x04, 0x0b, 0x2f, 0x3a, 0x3f,
	0x21, 0x46, 0x07, 0x0a, 0x0c, 0x17, 0x0f, 0x14,
	0x16, 0x14, 0x15, 0x07, 0x11, 0x13, 0x16, 0xff
};
static char hx8379c_fwvga_video_on_cmd_12[] = {
	0x03, 0x00, 0x39, 0xc0, 0xb6, 0x4e, 0x4e, 0xff
};
static char hx8379c_fwvga_video_on_cmd_13[] = {
	0x11, 0x00, 0x05, 0x80
};
static char hx8379c_fwvga_video_on_cmd_14[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8379c_fwvga_video_on_command[] = {
	{ sizeof(hx8379c_fwvga_video_on_cmd_0), hx8379c_fwvga_video_on_cmd_0, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_1), hx8379c_fwvga_video_on_cmd_1, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_2), hx8379c_fwvga_video_on_cmd_2, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_3), hx8379c_fwvga_video_on_cmd_3, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_4), hx8379c_fwvga_video_on_cmd_4, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_5), hx8379c_fwvga_video_on_cmd_5, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_6), hx8379c_fwvga_video_on_cmd_6, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_7), hx8379c_fwvga_video_on_cmd_7, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_8), hx8379c_fwvga_video_on_cmd_8, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_9), hx8379c_fwvga_video_on_cmd_9, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_10), hx8379c_fwvga_video_on_cmd_10, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_11), hx8379c_fwvga_video_on_cmd_11, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_12), hx8379c_fwvga_video_on_cmd_12, 0 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_13), hx8379c_fwvga_video_on_cmd_13, 120 },
	{ sizeof(hx8379c_fwvga_video_on_cmd_14), hx8379c_fwvga_video_on_cmd_14, 20 },
};

static char hx8379c_fwvga_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char hx8379c_fwvga_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8379c_fwvga_video_off_command[] = {
	{ sizeof(hx8379c_fwvga_video_off_cmd_0), hx8379c_fwvga_video_off_cmd_0, 50 },
	{ sizeof(hx8379c_fwvga_video_off_cmd_1), hx8379c_fwvga_video_off_cmd_1, 120 },
};

static struct command_state hx8379c_fwvga_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info hx8379c_fwvga_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info hx8379c_fwvga_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration hx8379c_fwvga_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t hx8379c_fwvga_video_timings[] = {
	0x7b, 0x21, 0x1a, 0x00, 0x31, 0x2d, 0x1e, 0x23, 0x2b, 0x03, 0x04, 0x00
};

static struct panel_timing hx8379c_fwvga_video_timing_info = {
	.tclk_post = 0x20,
	.tclk_pre = 0x2c,
};

static struct panel_reset_sequence hx8379c_fwvga_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 20, 20 },
	.pin_direction = 2,
};

static struct backlight hx8379c_fwvga_video_backlight = {
	.bl_interface_type = BL_PWM,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_hx8379c_fwvga_video_select(struct panel_struct *panel,
						    struct msm_panel_info *pinfo,
						    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &hx8379c_fwvga_video_panel_data;
	panel->panelres = &hx8379c_fwvga_video_panel_res;
	panel->color = &hx8379c_fwvga_video_color;
	panel->videopanel = &hx8379c_fwvga_video_video_panel;
	panel->commandpanel = &hx8379c_fwvga_video_command_panel;
	panel->state = &hx8379c_fwvga_video_state;
	panel->laneconfig = &hx8379c_fwvga_video_lane_config;
	panel->paneltiminginfo = &hx8379c_fwvga_video_timing_info;
	panel->panelresetseq = &hx8379c_fwvga_video_reset_seq;
	panel->backlightinfo = &hx8379c_fwvga_video_backlight;
	pinfo->mipi.panel_on_cmds = hx8379c_fwvga_video_on_command;
	pinfo->mipi.panel_off_cmds = hx8379c_fwvga_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(hx8379c_fwvga_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(hx8379c_fwvga_video_off_command);
	memcpy(phy_db->timing, hx8379c_fwvga_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_HX8379C_FWVGA_VIDEO_H_ */
