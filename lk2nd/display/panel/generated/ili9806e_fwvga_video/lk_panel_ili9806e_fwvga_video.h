// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_ILI9806E_FWVGA_VIDEO_H_
#define _PANEL_ILI9806E_FWVGA_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config ili9806e_fwvga_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_ili9806e_fwvga_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 0,
	.panel_init_delay = 0,
};

static struct panel_resolution ili9806e_fwvga_video_panel_res = {
	.panel_width = 480,
	.panel_height = 854,
	.hfront_porch = 54,
	.hback_porch = 100,
	.hpulse_width = 36,
	.hsync_skew = 0,
	.vfront_porch = 8,
	.vback_porch = 20,
	.vpulse_width = 5,
	/* Borders not supported yet */
};

static struct color_info ili9806e_fwvga_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char ili9806e_fwvga_video_on_cmd_0[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_1[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_2[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_3[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_4[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_5[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x1a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_6[] = {
	0x02, 0x00, 0x39, 0xc0, 0x41, 0x33, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_7[] = {
	0x02, 0x00, 0x39, 0xc0, 0x42, 0x03, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_8[] = {
	0x02, 0x00, 0x39, 0xc0, 0x43, 0x09, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_9[] = {
	0x02, 0x00, 0x39, 0xc0, 0x44, 0x09, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_10[] = {
	0x02, 0x00, 0x39, 0xc0, 0x50, 0x78, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_11[] = {
	0x02, 0x00, 0x39, 0xc0, 0x51, 0x78, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_12[] = {
	0x02, 0x00, 0x39, 0xc0, 0x52, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_13[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x2b, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_14[] = {
	0x02, 0x00, 0x39, 0xc0, 0x57, 0x50, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_15[] = {
	0x02, 0x00, 0x39, 0xc0, 0x60, 0x07, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_16[] = {
	0x02, 0x00, 0x39, 0xc0, 0x61, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_17[] = {
	0x02, 0x00, 0x39, 0xc0, 0x62, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_18[] = {
	0x02, 0x00, 0x39, 0xc0, 0x63, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_19[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa0, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_20[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa1, 0x06, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_21[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa2, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_22[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa3, 0x11, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_23[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa4, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_24[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa5, 0x1a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_25[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa6, 0x09, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_26[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa7, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_27[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa8, 0x05, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_28[] = {
	0x02, 0x00, 0x39, 0xc0, 0xa9, 0x0a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_29[] = {
	0x02, 0x00, 0x39, 0xc0, 0xaa, 0x04, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_30[] = {
	0x02, 0x00, 0x39, 0xc0, 0xab, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_31[] = {
	0x02, 0x00, 0x39, 0xc0, 0xac, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_32[] = {
	0x02, 0x00, 0x39, 0xc0, 0xad, 0x38, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_33[] = {
	0x02, 0x00, 0x39, 0xc0, 0xae, 0x34, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_34[] = {
	0x02, 0x00, 0x39, 0xc0, 0xaf, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_35[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc0, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_36[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc1, 0x07, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_37[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc2, 0x15, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_38[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc3, 0x11, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_39[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc4, 0x0a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_40[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc5, 0x18, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_41[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc6, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_42[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc7, 0x07, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_43[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc8, 0x03, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_44[] = {
	0x02, 0x00, 0x39, 0xc0, 0xc9, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_45[] = {
	0x02, 0x00, 0x39, 0xc0, 0xca, 0x07, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_46[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcb, 0x05, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_47[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcc, 0x0c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_48[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcd, 0x1e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_49[] = {
	0x02, 0x00, 0x39, 0xc0, 0xce, 0x1a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_50[] = {
	0x02, 0x00, 0x39, 0xc0, 0xcf, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_51[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x02, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_52[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_53[] = {
	0x02, 0x00, 0x39, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_54[] = {
	0x02, 0x00, 0x39, 0xc0, 0x01, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_55[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_56[] = {
	0x02, 0x00, 0x39, 0xc0, 0x03, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_57[] = {
	0x02, 0x00, 0x39, 0xc0, 0x04, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_58[] = {
	0x02, 0x00, 0x39, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_59[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x09, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_60[] = {
	0x02, 0x00, 0x39, 0xc0, 0x07, 0x19, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_61[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x19, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_62[] = {
	0x02, 0x00, 0x39, 0xc0, 0x09, 0x19, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_63[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0a, 0x19, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_64[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0b, 0x19, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_65[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0c, 0x1c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_66[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0d, 0x1c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_67[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0e, 0x1c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_68[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0f, 0x1c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_69[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0x1d, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_70[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0x1d, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_71[] = {
	0x02, 0x00, 0x39, 0xc0, 0x12, 0x1d, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_72[] = {
	0x02, 0x00, 0x39, 0xc0, 0x13, 0x1d, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_73[] = {
	0x02, 0x00, 0x39, 0xc0, 0x14, 0x1d, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_74[] = {
	0x02, 0x00, 0x39, 0xc0, 0x15, 0x3e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_75[] = {
	0x02, 0x00, 0x39, 0xc0, 0x16, 0x3e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_76[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x3e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_77[] = {
	0x02, 0x00, 0x39, 0xc0, 0x18, 0x3e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_78[] = {
	0x02, 0x00, 0x39, 0xc0, 0x19, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_79[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1a, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_80[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1b, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_81[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1c, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_82[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1d, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_83[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1e, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_84[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1f, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_85[] = {
	0x02, 0x00, 0x39, 0xc0, 0x20, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_86[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_87[] = {
	0x02, 0x00, 0x39, 0xc0, 0x22, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_88[] = {
	0x02, 0x00, 0x39, 0xc0, 0x23, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_89[] = {
	0x02, 0x00, 0x39, 0xc0, 0x24, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_90[] = {
	0x02, 0x00, 0x39, 0xc0, 0x25, 0x4e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_91[] = {
	0x02, 0x00, 0x39, 0xc0, 0x26, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_92[] = {
	0x02, 0x00, 0x39, 0xc0, 0x27, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_93[] = {
	0x02, 0x00, 0x39, 0xc0, 0x28, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_94[] = {
	0x02, 0x00, 0x39, 0xc0, 0x29, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_95[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2a, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_96[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2b, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_97[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2c, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_98[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2d, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_99[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2e, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_100[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2f, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_101[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_102[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_103[] = {
	0x02, 0x00, 0x39, 0xc0, 0x32, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_104[] = {
	0x02, 0x00, 0x39, 0xc0, 0x33, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_105[] = {
	0x02, 0x00, 0x39, 0xc0, 0x34, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_106[] = {
	0x02, 0x00, 0x39, 0xc0, 0x35, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_107[] = {
	0x02, 0x00, 0x39, 0xc0, 0x36, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_108[] = {
	0x02, 0x00, 0x39, 0xc0, 0x37, 0x5e, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_109[] = {
	0x02, 0x00, 0x39, 0xc0, 0x38, 0x5c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_110[] = {
	0x02, 0x00, 0x39, 0xc0, 0x39, 0x4c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_111[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3a, 0x4c, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_112[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3b, 0x3b, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_113[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3c, 0x3b, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_114[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3d, 0x2a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_115[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3e, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_116[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_117[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x03, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_118[] = {
	0x02, 0x00, 0x39, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_119[] = {
	0x02, 0x00, 0x39, 0xc0, 0x01, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_120[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_121[] = {
	0x02, 0x00, 0x39, 0xc0, 0x03, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_122[] = {
	0x02, 0x00, 0x39, 0xc0, 0x04, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_123[] = {
	0x02, 0x00, 0x39, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_124[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_125[] = {
	0x02, 0x00, 0x39, 0xc0, 0x07, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_126[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_127[] = {
	0x02, 0x00, 0x39, 0xc0, 0x09, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_128[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_129[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_130[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_131[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_132[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_133[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_134[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_135[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_136[] = {
	0x02, 0x00, 0x39, 0xc0, 0x12, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_137[] = {
	0x02, 0x00, 0x39, 0xc0, 0x13, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_138[] = {
	0x02, 0x00, 0x39, 0xc0, 0x14, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_139[] = {
	0x02, 0x00, 0x39, 0xc0, 0x15, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_140[] = {
	0x02, 0x00, 0x39, 0xc0, 0x16, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_141[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_142[] = {
	0x02, 0x00, 0x39, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_143[] = {
	0x02, 0x00, 0x39, 0xc0, 0x19, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_144[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_145[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_146[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_147[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_148[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_149[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_150[] = {
	0x02, 0x00, 0x39, 0xc0, 0x20, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_151[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_152[] = {
	0x02, 0x00, 0x39, 0xc0, 0x22, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_153[] = {
	0x02, 0x00, 0x39, 0xc0, 0x23, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_154[] = {
	0x02, 0x00, 0x39, 0xc0, 0x24, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_155[] = {
	0x02, 0x00, 0x39, 0xc0, 0x25, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_156[] = {
	0x02, 0x00, 0x39, 0xc0, 0x26, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_157[] = {
	0x02, 0x00, 0x39, 0xc0, 0x27, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_158[] = {
	0x02, 0x00, 0x39, 0xc0, 0x28, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_159[] = {
	0x02, 0x00, 0x39, 0xc0, 0x29, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_160[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_161[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_162[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_163[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_164[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_165[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_166[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_167[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_168[] = {
	0x02, 0x00, 0x39, 0xc0, 0x32, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_169[] = {
	0x02, 0x00, 0x39, 0xc0, 0x33, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_170[] = {
	0x02, 0x00, 0x39, 0xc0, 0x34, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_171[] = {
	0x02, 0x00, 0x39, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_172[] = {
	0x02, 0x00, 0x39, 0xc0, 0x36, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_173[] = {
	0x02, 0x00, 0x39, 0xc0, 0x37, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_174[] = {
	0x02, 0x00, 0x39, 0xc0, 0x38, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_175[] = {
	0x02, 0x00, 0x39, 0xc0, 0x39, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_176[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_177[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_178[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_179[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_180[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_181[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_182[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_183[] = {
	0x02, 0x00, 0x39, 0xc0, 0x41, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_184[] = {
	0x02, 0x00, 0x39, 0xc0, 0x42, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_185[] = {
	0x02, 0x00, 0x39, 0xc0, 0x43, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_186[] = {
	0x02, 0x00, 0x39, 0xc0, 0x44, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_187[] = {
	0x02, 0x00, 0x39, 0xc0, 0x45, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_188[] = {
	0x02, 0x00, 0x39, 0xc0, 0x46, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_189[] = {
	0x02, 0x00, 0x39, 0xc0, 0x47, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_190[] = {
	0x02, 0x00, 0x39, 0xc0, 0x48, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_191[] = {
	0x02, 0x00, 0x39, 0xc0, 0x49, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_192[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_193[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_194[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_195[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_196[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_197[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_198[] = {
	0x02, 0x00, 0x39, 0xc0, 0x50, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_199[] = {
	0x02, 0x00, 0x39, 0xc0, 0x51, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_200[] = {
	0x02, 0x00, 0x39, 0xc0, 0x52, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_201[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_202[] = {
	0x02, 0x00, 0x39, 0xc0, 0x54, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_203[] = {
	0x02, 0x00, 0x39, 0xc0, 0x55, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_204[] = {
	0x02, 0x00, 0x39, 0xc0, 0x56, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_205[] = {
	0x02, 0x00, 0x39, 0xc0, 0x57, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_206[] = {
	0x02, 0x00, 0x39, 0xc0, 0x58, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_207[] = {
	0x02, 0x00, 0x39, 0xc0, 0x59, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_208[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_209[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_210[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_211[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_212[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_213[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_214[] = {
	0x02, 0x00, 0x39, 0xc0, 0x60, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_215[] = {
	0x02, 0x00, 0x39, 0xc0, 0x61, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_216[] = {
	0x02, 0x00, 0x39, 0xc0, 0x62, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_217[] = {
	0x02, 0x00, 0x39, 0xc0, 0x63, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_218[] = {
	0x02, 0x00, 0x39, 0xc0, 0x64, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_219[] = {
	0x02, 0x00, 0x39, 0xc0, 0x65, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_220[] = {
	0x02, 0x00, 0x39, 0xc0, 0x66, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_221[] = {
	0x02, 0x00, 0x39, 0xc0, 0x67, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_222[] = {
	0x02, 0x00, 0x39, 0xc0, 0x68, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_223[] = {
	0x02, 0x00, 0x39, 0xc0, 0x69, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_224[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_225[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_226[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_227[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_228[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_229[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_230[] = {
	0x02, 0x00, 0x39, 0xc0, 0x70, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_231[] = {
	0x02, 0x00, 0x39, 0xc0, 0x71, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_232[] = {
	0x02, 0x00, 0x39, 0xc0, 0x72, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_233[] = {
	0x02, 0x00, 0x39, 0xc0, 0x73, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_234[] = {
	0x02, 0x00, 0x39, 0xc0, 0x74, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_235[] = {
	0x02, 0x00, 0x39, 0xc0, 0x75, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_236[] = {
	0x02, 0x00, 0x39, 0xc0, 0x76, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_237[] = {
	0x02, 0x00, 0x39, 0xc0, 0x77, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_238[] = {
	0x02, 0x00, 0x39, 0xc0, 0x78, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_239[] = {
	0x02, 0x00, 0x39, 0xc0, 0x79, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_240[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_241[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_242[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_243[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_244[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_245[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_246[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x04, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_247[] = {
	0x02, 0x00, 0x39, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_248[] = {
	0x02, 0x00, 0x39, 0xc0, 0x01, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_249[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_250[] = {
	0x02, 0x00, 0x39, 0xc0, 0x03, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_251[] = {
	0x02, 0x00, 0x39, 0xc0, 0x04, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_252[] = {
	0x02, 0x00, 0x39, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_253[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_254[] = {
	0x02, 0x00, 0x39, 0xc0, 0x07, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_255[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_256[] = {
	0x02, 0x00, 0x39, 0xc0, 0x09, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_257[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_258[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_259[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_260[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_261[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_262[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_263[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_264[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_265[] = {
	0x02, 0x00, 0x39, 0xc0, 0x12, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_266[] = {
	0x02, 0x00, 0x39, 0xc0, 0x13, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_267[] = {
	0x02, 0x00, 0x39, 0xc0, 0x14, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_268[] = {
	0x02, 0x00, 0x39, 0xc0, 0x15, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_269[] = {
	0x02, 0x00, 0x39, 0xc0, 0x16, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_270[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_271[] = {
	0x02, 0x00, 0x39, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_272[] = {
	0x02, 0x00, 0x39, 0xc0, 0x19, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_273[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_274[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_275[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_276[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_277[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_278[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_279[] = {
	0x02, 0x00, 0x39, 0xc0, 0x20, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_280[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_281[] = {
	0x02, 0x00, 0x39, 0xc0, 0x22, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_282[] = {
	0x02, 0x00, 0x39, 0xc0, 0x23, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_283[] = {
	0x02, 0x00, 0x39, 0xc0, 0x24, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_284[] = {
	0x02, 0x00, 0x39, 0xc0, 0x25, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_285[] = {
	0x02, 0x00, 0x39, 0xc0, 0x26, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_286[] = {
	0x02, 0x00, 0x39, 0xc0, 0x27, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_287[] = {
	0x02, 0x00, 0x39, 0xc0, 0x28, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_288[] = {
	0x02, 0x00, 0x39, 0xc0, 0x29, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_289[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_290[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_291[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_292[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_293[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_294[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_295[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_296[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_297[] = {
	0x02, 0x00, 0x39, 0xc0, 0x32, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_298[] = {
	0x02, 0x00, 0x39, 0xc0, 0x33, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_299[] = {
	0x02, 0x00, 0x39, 0xc0, 0x34, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_300[] = {
	0x02, 0x00, 0x39, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_301[] = {
	0x02, 0x00, 0x39, 0xc0, 0x36, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_302[] = {
	0x02, 0x00, 0x39, 0xc0, 0x37, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_303[] = {
	0x02, 0x00, 0x39, 0xc0, 0x38, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_304[] = {
	0x02, 0x00, 0x39, 0xc0, 0x39, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_305[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_306[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_307[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_308[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_309[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_310[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_311[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_312[] = {
	0x02, 0x00, 0x39, 0xc0, 0x41, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_313[] = {
	0x02, 0x00, 0x39, 0xc0, 0x42, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_314[] = {
	0x02, 0x00, 0x39, 0xc0, 0x43, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_315[] = {
	0x02, 0x00, 0x39, 0xc0, 0x44, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_316[] = {
	0x02, 0x00, 0x39, 0xc0, 0x45, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_317[] = {
	0x02, 0x00, 0x39, 0xc0, 0x46, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_318[] = {
	0x02, 0x00, 0x39, 0xc0, 0x47, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_319[] = {
	0x02, 0x00, 0x39, 0xc0, 0x48, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_320[] = {
	0x02, 0x00, 0x39, 0xc0, 0x49, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_321[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_322[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_323[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_324[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_325[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_326[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_327[] = {
	0x02, 0x00, 0x39, 0xc0, 0x50, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_328[] = {
	0x02, 0x00, 0x39, 0xc0, 0x51, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_329[] = {
	0x02, 0x00, 0x39, 0xc0, 0x52, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_330[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_331[] = {
	0x02, 0x00, 0x39, 0xc0, 0x54, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_332[] = {
	0x02, 0x00, 0x39, 0xc0, 0x55, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_333[] = {
	0x02, 0x00, 0x39, 0xc0, 0x56, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_334[] = {
	0x02, 0x00, 0x39, 0xc0, 0x57, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_335[] = {
	0x02, 0x00, 0x39, 0xc0, 0x58, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_336[] = {
	0x02, 0x00, 0x39, 0xc0, 0x59, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_337[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_338[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_339[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_340[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_341[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_342[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_343[] = {
	0x02, 0x00, 0x39, 0xc0, 0x60, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_344[] = {
	0x02, 0x00, 0x39, 0xc0, 0x61, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_345[] = {
	0x02, 0x00, 0x39, 0xc0, 0x62, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_346[] = {
	0x02, 0x00, 0x39, 0xc0, 0x63, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_347[] = {
	0x02, 0x00, 0x39, 0xc0, 0x64, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_348[] = {
	0x02, 0x00, 0x39, 0xc0, 0x65, 0x20, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_349[] = {
	0x02, 0x00, 0x39, 0xc0, 0x66, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_350[] = {
	0x02, 0x00, 0x39, 0xc0, 0x67, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_351[] = {
	0x02, 0x00, 0x39, 0xc0, 0x68, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_352[] = {
	0x02, 0x00, 0x39, 0xc0, 0x69, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_353[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_354[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_355[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_356[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_357[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_358[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_359[] = {
	0x02, 0x00, 0x39, 0xc0, 0x70, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_360[] = {
	0x02, 0x00, 0x39, 0xc0, 0x71, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_361[] = {
	0x02, 0x00, 0x39, 0xc0, 0x72, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_362[] = {
	0x02, 0x00, 0x39, 0xc0, 0x73, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_363[] = {
	0x02, 0x00, 0x39, 0xc0, 0x74, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_364[] = {
	0x02, 0x00, 0x39, 0xc0, 0x75, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_365[] = {
	0x02, 0x00, 0x39, 0xc0, 0x76, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_366[] = {
	0x02, 0x00, 0x39, 0xc0, 0x77, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_367[] = {
	0x02, 0x00, 0x39, 0xc0, 0x78, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_368[] = {
	0x02, 0x00, 0x39, 0xc0, 0x79, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_369[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_370[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_371[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_372[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_373[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_374[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_375[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x04, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_376[] = {
	0x02, 0x00, 0x39, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_377[] = {
	0x02, 0x00, 0x39, 0xc0, 0x01, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_378[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_379[] = {
	0x02, 0x00, 0x39, 0xc0, 0x03, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_380[] = {
	0x02, 0x00, 0x39, 0xc0, 0x04, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_381[] = {
	0x02, 0x00, 0x39, 0xc0, 0x05, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_382[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_383[] = {
	0x02, 0x00, 0x39, 0xc0, 0x07, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_384[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_385[] = {
	0x02, 0x00, 0x39, 0xc0, 0x09, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_386[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_387[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_388[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_389[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_390[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_391[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_392[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_393[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_394[] = {
	0x02, 0x00, 0x39, 0xc0, 0x12, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_395[] = {
	0x02, 0x00, 0x39, 0xc0, 0x13, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_396[] = {
	0x02, 0x00, 0x39, 0xc0, 0x14, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_397[] = {
	0x02, 0x00, 0x39, 0xc0, 0x15, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_398[] = {
	0x02, 0x00, 0x39, 0xc0, 0x16, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_399[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_400[] = {
	0x02, 0x00, 0x39, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_401[] = {
	0x02, 0x00, 0x39, 0xc0, 0x19, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_402[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_403[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_404[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_405[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_406[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_407[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_408[] = {
	0x02, 0x00, 0x39, 0xc0, 0x20, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_409[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_410[] = {
	0x02, 0x00, 0x39, 0xc0, 0x22, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_411[] = {
	0x02, 0x00, 0x39, 0xc0, 0x23, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_412[] = {
	0x02, 0x00, 0x39, 0xc0, 0x24, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_413[] = {
	0x02, 0x00, 0x39, 0xc0, 0x25, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_414[] = {
	0x02, 0x00, 0x39, 0xc0, 0x26, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_415[] = {
	0x02, 0x00, 0x39, 0xc0, 0x27, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_416[] = {
	0x02, 0x00, 0x39, 0xc0, 0x28, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_417[] = {
	0x02, 0x00, 0x39, 0xc0, 0x29, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_418[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_419[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_420[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_421[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_422[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_423[] = {
	0x02, 0x00, 0x39, 0xc0, 0x2f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_424[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_425[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_426[] = {
	0x02, 0x00, 0x39, 0xc0, 0x32, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_427[] = {
	0x02, 0x00, 0x39, 0xc0, 0x33, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_428[] = {
	0x02, 0x00, 0x39, 0xc0, 0x34, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_429[] = {
	0x02, 0x00, 0x39, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_430[] = {
	0x02, 0x00, 0x39, 0xc0, 0x36, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_431[] = {
	0x02, 0x00, 0x39, 0xc0, 0x37, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_432[] = {
	0x02, 0x00, 0x39, 0xc0, 0x38, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_433[] = {
	0x02, 0x00, 0x39, 0xc0, 0x39, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_434[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_435[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_436[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_437[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_438[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_439[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_440[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_441[] = {
	0x02, 0x00, 0x39, 0xc0, 0x41, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_442[] = {
	0x02, 0x00, 0x39, 0xc0, 0x42, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_443[] = {
	0x02, 0x00, 0x39, 0xc0, 0x43, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_444[] = {
	0x02, 0x00, 0x39, 0xc0, 0x44, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_445[] = {
	0x02, 0x00, 0x39, 0xc0, 0x45, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_446[] = {
	0x02, 0x00, 0x39, 0xc0, 0x46, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_447[] = {
	0x02, 0x00, 0x39, 0xc0, 0x47, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_448[] = {
	0x02, 0x00, 0x39, 0xc0, 0x48, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_449[] = {
	0x02, 0x00, 0x39, 0xc0, 0x49, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_450[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_451[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_452[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_453[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_454[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_455[] = {
	0x02, 0x00, 0x39, 0xc0, 0x4f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_456[] = {
	0x02, 0x00, 0x39, 0xc0, 0x50, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_457[] = {
	0x02, 0x00, 0x39, 0xc0, 0x51, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_458[] = {
	0x02, 0x00, 0x39, 0xc0, 0x52, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_459[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_460[] = {
	0x02, 0x00, 0x39, 0xc0, 0x54, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_461[] = {
	0x02, 0x00, 0x39, 0xc0, 0x55, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_462[] = {
	0x02, 0x00, 0x39, 0xc0, 0x56, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_463[] = {
	0x02, 0x00, 0x39, 0xc0, 0x57, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_464[] = {
	0x02, 0x00, 0x39, 0xc0, 0x58, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_465[] = {
	0x02, 0x00, 0x39, 0xc0, 0x59, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_466[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_467[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_468[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_469[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_470[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_471[] = {
	0x02, 0x00, 0x39, 0xc0, 0x5f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_472[] = {
	0x02, 0x00, 0x39, 0xc0, 0x60, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_473[] = {
	0x02, 0x00, 0x39, 0xc0, 0x61, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_474[] = {
	0x02, 0x00, 0x39, 0xc0, 0x62, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_475[] = {
	0x02, 0x00, 0x39, 0xc0, 0x63, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_476[] = {
	0x02, 0x00, 0x39, 0xc0, 0x64, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_477[] = {
	0x02, 0x00, 0x39, 0xc0, 0x65, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_478[] = {
	0x02, 0x00, 0x39, 0xc0, 0x66, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_479[] = {
	0x02, 0x00, 0x39, 0xc0, 0x67, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_480[] = {
	0x02, 0x00, 0x39, 0xc0, 0x68, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_481[] = {
	0x02, 0x00, 0x39, 0xc0, 0x69, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_482[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_483[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_484[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_485[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_486[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_487[] = {
	0x02, 0x00, 0x39, 0xc0, 0x6f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_488[] = {
	0x02, 0x00, 0x39, 0xc0, 0x70, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_489[] = {
	0x02, 0x00, 0x39, 0xc0, 0x71, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_490[] = {
	0x02, 0x00, 0x39, 0xc0, 0x72, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_491[] = {
	0x02, 0x00, 0x39, 0xc0, 0x73, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_492[] = {
	0x02, 0x00, 0x39, 0xc0, 0x74, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_493[] = {
	0x02, 0x00, 0x39, 0xc0, 0x75, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_494[] = {
	0x02, 0x00, 0x39, 0xc0, 0x76, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_495[] = {
	0x02, 0x00, 0x39, 0xc0, 0x77, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_496[] = {
	0x02, 0x00, 0x39, 0xc0, 0x78, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_497[] = {
	0x02, 0x00, 0x39, 0xc0, 0x79, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_498[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_499[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_500[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_501[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_502[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_503[] = {
	0x02, 0x00, 0x39, 0xc0, 0x7f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_504[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x06, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_505[] = {
	0x02, 0x00, 0x39, 0xc0, 0x00, 0x21, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_506[] = {
	0x02, 0x00, 0x39, 0xc0, 0x01, 0x0a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_507[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_508[] = {
	0x02, 0x00, 0x39, 0xc0, 0x03, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_509[] = {
	0x02, 0x00, 0x39, 0xc0, 0x04, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_510[] = {
	0x02, 0x00, 0x39, 0xc0, 0x05, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_511[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x80, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_512[] = {
	0x02, 0x00, 0x39, 0xc0, 0x07, 0x06, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_513[] = {
	0x02, 0x00, 0x39, 0xc0, 0x08, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_514[] = {
	0x02, 0x00, 0x39, 0xc0, 0x09, 0x80, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_515[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_516[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_517[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0c, 0x0a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_518[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0d, 0x0a, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_519[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0e, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_520[] = {
	0x02, 0x00, 0x39, 0xc0, 0x0f, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_521[] = {
	0x02, 0x00, 0x39, 0xc0, 0x10, 0xf0, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_522[] = {
	0x02, 0x00, 0x39, 0xc0, 0x11, 0xf4, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_523[] = {
	0x02, 0x00, 0x39, 0xc0, 0x12, 0x04, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_524[] = {
	0x02, 0x00, 0x39, 0xc0, 0x13, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_525[] = {
	0x02, 0x00, 0x39, 0xc0, 0x14, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_526[] = {
	0x02, 0x00, 0x39, 0xc0, 0x15, 0xc0, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_527[] = {
	0x02, 0x00, 0x39, 0xc0, 0x16, 0x08, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_528[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_529[] = {
	0x02, 0x00, 0x39, 0xc0, 0x18, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_530[] = {
	0x02, 0x00, 0x39, 0xc0, 0x19, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_531[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1a, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_532[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1b, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_533[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1c, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_534[] = {
	0x02, 0x00, 0x39, 0xc0, 0x1d, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_535[] = {
	0x02, 0x00, 0x39, 0xc0, 0x20, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_536[] = {
	0x02, 0x00, 0x39, 0xc0, 0x21, 0x23, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_537[] = {
	0x02, 0x00, 0x39, 0xc0, 0x22, 0x45, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_538[] = {
	0x02, 0x00, 0x39, 0xc0, 0x23, 0x67, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_539[] = {
	0x02, 0x00, 0x39, 0xc0, 0x24, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_540[] = {
	0x02, 0x00, 0x39, 0xc0, 0x25, 0x23, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_541[] = {
	0x02, 0x00, 0x39, 0xc0, 0x26, 0x45, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_542[] = {
	0x02, 0x00, 0x39, 0xc0, 0x27, 0x67, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_543[] = {
	0x02, 0x00, 0x39, 0xc0, 0x30, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_544[] = {
	0x02, 0x00, 0x39, 0xc0, 0x31, 0x11, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_545[] = {
	0x02, 0x00, 0x39, 0xc0, 0x32, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_546[] = {
	0x02, 0x00, 0x39, 0xc0, 0x33, 0xee, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_547[] = {
	0x02, 0x00, 0x39, 0xc0, 0x34, 0xff, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_548[] = {
	0x02, 0x00, 0x39, 0xc0, 0x35, 0xbb, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_549[] = {
	0x02, 0x00, 0x39, 0xc0, 0x36, 0xca, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_550[] = {
	0x02, 0x00, 0x39, 0xc0, 0x37, 0xdd, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_551[] = {
	0x02, 0x00, 0x39, 0xc0, 0x38, 0xac, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_552[] = {
	0x02, 0x00, 0x39, 0xc0, 0x39, 0x76, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_553[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3a, 0x67, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_554[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3b, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_555[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3c, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_556[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3d, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_557[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3e, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_558[] = {
	0x02, 0x00, 0x39, 0xc0, 0x3f, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_559[] = {
	0x02, 0x00, 0x39, 0xc0, 0x40, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_560[] = {
	0x02, 0x00, 0x39, 0xc0, 0x52, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_561[] = {
	0x02, 0x00, 0x39, 0xc0, 0x53, 0x10, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_562[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x07, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_563[] = {
	0x02, 0x00, 0x39, 0xc0, 0x17, 0x22, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_564[] = {
	0x02, 0x00, 0x39, 0xc0, 0x02, 0x77, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_565[] = {
	0x02, 0x00, 0x39, 0xc0, 0xe1, 0x79, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_566[] = {
	0x02, 0x00, 0x39, 0xc0, 0x06, 0x01, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_567[] = {
	0x06, 0x00, 0x39, 0xc0, 0xff, 0xff, 0x98, 0x06,
	0x04, 0x00, 0xff, 0xff
};
static char ili9806e_fwvga_video_on_cmd_568[] = {
	0x11, 0x00, 0x05, 0x80
};
static char ili9806e_fwvga_video_on_cmd_569[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd ili9806e_fwvga_video_on_command[] = {
	{ sizeof(ili9806e_fwvga_video_on_cmd_0), ili9806e_fwvga_video_on_cmd_0, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_1), ili9806e_fwvga_video_on_cmd_1, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_2), ili9806e_fwvga_video_on_cmd_2, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_3), ili9806e_fwvga_video_on_cmd_3, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_4), ili9806e_fwvga_video_on_cmd_4, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_5), ili9806e_fwvga_video_on_cmd_5, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_6), ili9806e_fwvga_video_on_cmd_6, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_7), ili9806e_fwvga_video_on_cmd_7, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_8), ili9806e_fwvga_video_on_cmd_8, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_9), ili9806e_fwvga_video_on_cmd_9, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_10), ili9806e_fwvga_video_on_cmd_10, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_11), ili9806e_fwvga_video_on_cmd_11, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_12), ili9806e_fwvga_video_on_cmd_12, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_13), ili9806e_fwvga_video_on_cmd_13, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_14), ili9806e_fwvga_video_on_cmd_14, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_15), ili9806e_fwvga_video_on_cmd_15, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_16), ili9806e_fwvga_video_on_cmd_16, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_17), ili9806e_fwvga_video_on_cmd_17, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_18), ili9806e_fwvga_video_on_cmd_18, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_19), ili9806e_fwvga_video_on_cmd_19, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_20), ili9806e_fwvga_video_on_cmd_20, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_21), ili9806e_fwvga_video_on_cmd_21, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_22), ili9806e_fwvga_video_on_cmd_22, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_23), ili9806e_fwvga_video_on_cmd_23, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_24), ili9806e_fwvga_video_on_cmd_24, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_25), ili9806e_fwvga_video_on_cmd_25, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_26), ili9806e_fwvga_video_on_cmd_26, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_27), ili9806e_fwvga_video_on_cmd_27, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_28), ili9806e_fwvga_video_on_cmd_28, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_29), ili9806e_fwvga_video_on_cmd_29, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_30), ili9806e_fwvga_video_on_cmd_30, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_31), ili9806e_fwvga_video_on_cmd_31, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_32), ili9806e_fwvga_video_on_cmd_32, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_33), ili9806e_fwvga_video_on_cmd_33, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_34), ili9806e_fwvga_video_on_cmd_34, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_35), ili9806e_fwvga_video_on_cmd_35, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_36), ili9806e_fwvga_video_on_cmd_36, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_37), ili9806e_fwvga_video_on_cmd_37, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_38), ili9806e_fwvga_video_on_cmd_38, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_39), ili9806e_fwvga_video_on_cmd_39, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_40), ili9806e_fwvga_video_on_cmd_40, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_41), ili9806e_fwvga_video_on_cmd_41, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_42), ili9806e_fwvga_video_on_cmd_42, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_43), ili9806e_fwvga_video_on_cmd_43, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_44), ili9806e_fwvga_video_on_cmd_44, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_45), ili9806e_fwvga_video_on_cmd_45, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_46), ili9806e_fwvga_video_on_cmd_46, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_47), ili9806e_fwvga_video_on_cmd_47, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_48), ili9806e_fwvga_video_on_cmd_48, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_49), ili9806e_fwvga_video_on_cmd_49, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_50), ili9806e_fwvga_video_on_cmd_50, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_51), ili9806e_fwvga_video_on_cmd_51, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_52), ili9806e_fwvga_video_on_cmd_52, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_53), ili9806e_fwvga_video_on_cmd_53, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_54), ili9806e_fwvga_video_on_cmd_54, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_55), ili9806e_fwvga_video_on_cmd_55, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_56), ili9806e_fwvga_video_on_cmd_56, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_57), ili9806e_fwvga_video_on_cmd_57, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_58), ili9806e_fwvga_video_on_cmd_58, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_59), ili9806e_fwvga_video_on_cmd_59, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_60), ili9806e_fwvga_video_on_cmd_60, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_61), ili9806e_fwvga_video_on_cmd_61, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_62), ili9806e_fwvga_video_on_cmd_62, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_63), ili9806e_fwvga_video_on_cmd_63, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_64), ili9806e_fwvga_video_on_cmd_64, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_65), ili9806e_fwvga_video_on_cmd_65, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_66), ili9806e_fwvga_video_on_cmd_66, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_67), ili9806e_fwvga_video_on_cmd_67, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_68), ili9806e_fwvga_video_on_cmd_68, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_69), ili9806e_fwvga_video_on_cmd_69, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_70), ili9806e_fwvga_video_on_cmd_70, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_71), ili9806e_fwvga_video_on_cmd_71, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_72), ili9806e_fwvga_video_on_cmd_72, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_73), ili9806e_fwvga_video_on_cmd_73, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_74), ili9806e_fwvga_video_on_cmd_74, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_75), ili9806e_fwvga_video_on_cmd_75, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_76), ili9806e_fwvga_video_on_cmd_76, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_77), ili9806e_fwvga_video_on_cmd_77, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_78), ili9806e_fwvga_video_on_cmd_78, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_79), ili9806e_fwvga_video_on_cmd_79, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_80), ili9806e_fwvga_video_on_cmd_80, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_81), ili9806e_fwvga_video_on_cmd_81, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_82), ili9806e_fwvga_video_on_cmd_82, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_83), ili9806e_fwvga_video_on_cmd_83, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_84), ili9806e_fwvga_video_on_cmd_84, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_85), ili9806e_fwvga_video_on_cmd_85, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_86), ili9806e_fwvga_video_on_cmd_86, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_87), ili9806e_fwvga_video_on_cmd_87, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_88), ili9806e_fwvga_video_on_cmd_88, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_89), ili9806e_fwvga_video_on_cmd_89, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_90), ili9806e_fwvga_video_on_cmd_90, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_91), ili9806e_fwvga_video_on_cmd_91, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_92), ili9806e_fwvga_video_on_cmd_92, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_93), ili9806e_fwvga_video_on_cmd_93, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_94), ili9806e_fwvga_video_on_cmd_94, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_95), ili9806e_fwvga_video_on_cmd_95, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_96), ili9806e_fwvga_video_on_cmd_96, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_97), ili9806e_fwvga_video_on_cmd_97, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_98), ili9806e_fwvga_video_on_cmd_98, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_99), ili9806e_fwvga_video_on_cmd_99, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_100), ili9806e_fwvga_video_on_cmd_100, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_101), ili9806e_fwvga_video_on_cmd_101, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_102), ili9806e_fwvga_video_on_cmd_102, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_103), ili9806e_fwvga_video_on_cmd_103, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_104), ili9806e_fwvga_video_on_cmd_104, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_105), ili9806e_fwvga_video_on_cmd_105, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_106), ili9806e_fwvga_video_on_cmd_106, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_107), ili9806e_fwvga_video_on_cmd_107, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_108), ili9806e_fwvga_video_on_cmd_108, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_109), ili9806e_fwvga_video_on_cmd_109, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_110), ili9806e_fwvga_video_on_cmd_110, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_111), ili9806e_fwvga_video_on_cmd_111, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_112), ili9806e_fwvga_video_on_cmd_112, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_113), ili9806e_fwvga_video_on_cmd_113, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_114), ili9806e_fwvga_video_on_cmd_114, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_115), ili9806e_fwvga_video_on_cmd_115, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_116), ili9806e_fwvga_video_on_cmd_116, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_117), ili9806e_fwvga_video_on_cmd_117, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_118), ili9806e_fwvga_video_on_cmd_118, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_119), ili9806e_fwvga_video_on_cmd_119, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_120), ili9806e_fwvga_video_on_cmd_120, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_121), ili9806e_fwvga_video_on_cmd_121, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_122), ili9806e_fwvga_video_on_cmd_122, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_123), ili9806e_fwvga_video_on_cmd_123, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_124), ili9806e_fwvga_video_on_cmd_124, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_125), ili9806e_fwvga_video_on_cmd_125, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_126), ili9806e_fwvga_video_on_cmd_126, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_127), ili9806e_fwvga_video_on_cmd_127, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_128), ili9806e_fwvga_video_on_cmd_128, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_129), ili9806e_fwvga_video_on_cmd_129, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_130), ili9806e_fwvga_video_on_cmd_130, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_131), ili9806e_fwvga_video_on_cmd_131, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_132), ili9806e_fwvga_video_on_cmd_132, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_133), ili9806e_fwvga_video_on_cmd_133, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_134), ili9806e_fwvga_video_on_cmd_134, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_135), ili9806e_fwvga_video_on_cmd_135, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_136), ili9806e_fwvga_video_on_cmd_136, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_137), ili9806e_fwvga_video_on_cmd_137, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_138), ili9806e_fwvga_video_on_cmd_138, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_139), ili9806e_fwvga_video_on_cmd_139, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_140), ili9806e_fwvga_video_on_cmd_140, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_141), ili9806e_fwvga_video_on_cmd_141, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_142), ili9806e_fwvga_video_on_cmd_142, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_143), ili9806e_fwvga_video_on_cmd_143, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_144), ili9806e_fwvga_video_on_cmd_144, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_145), ili9806e_fwvga_video_on_cmd_145, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_146), ili9806e_fwvga_video_on_cmd_146, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_147), ili9806e_fwvga_video_on_cmd_147, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_148), ili9806e_fwvga_video_on_cmd_148, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_149), ili9806e_fwvga_video_on_cmd_149, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_150), ili9806e_fwvga_video_on_cmd_150, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_151), ili9806e_fwvga_video_on_cmd_151, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_152), ili9806e_fwvga_video_on_cmd_152, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_153), ili9806e_fwvga_video_on_cmd_153, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_154), ili9806e_fwvga_video_on_cmd_154, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_155), ili9806e_fwvga_video_on_cmd_155, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_156), ili9806e_fwvga_video_on_cmd_156, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_157), ili9806e_fwvga_video_on_cmd_157, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_158), ili9806e_fwvga_video_on_cmd_158, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_159), ili9806e_fwvga_video_on_cmd_159, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_160), ili9806e_fwvga_video_on_cmd_160, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_161), ili9806e_fwvga_video_on_cmd_161, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_162), ili9806e_fwvga_video_on_cmd_162, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_163), ili9806e_fwvga_video_on_cmd_163, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_164), ili9806e_fwvga_video_on_cmd_164, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_165), ili9806e_fwvga_video_on_cmd_165, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_166), ili9806e_fwvga_video_on_cmd_166, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_167), ili9806e_fwvga_video_on_cmd_167, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_168), ili9806e_fwvga_video_on_cmd_168, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_169), ili9806e_fwvga_video_on_cmd_169, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_170), ili9806e_fwvga_video_on_cmd_170, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_171), ili9806e_fwvga_video_on_cmd_171, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_172), ili9806e_fwvga_video_on_cmd_172, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_173), ili9806e_fwvga_video_on_cmd_173, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_174), ili9806e_fwvga_video_on_cmd_174, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_175), ili9806e_fwvga_video_on_cmd_175, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_176), ili9806e_fwvga_video_on_cmd_176, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_177), ili9806e_fwvga_video_on_cmd_177, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_178), ili9806e_fwvga_video_on_cmd_178, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_179), ili9806e_fwvga_video_on_cmd_179, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_180), ili9806e_fwvga_video_on_cmd_180, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_181), ili9806e_fwvga_video_on_cmd_181, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_182), ili9806e_fwvga_video_on_cmd_182, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_183), ili9806e_fwvga_video_on_cmd_183, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_184), ili9806e_fwvga_video_on_cmd_184, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_185), ili9806e_fwvga_video_on_cmd_185, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_186), ili9806e_fwvga_video_on_cmd_186, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_187), ili9806e_fwvga_video_on_cmd_187, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_188), ili9806e_fwvga_video_on_cmd_188, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_189), ili9806e_fwvga_video_on_cmd_189, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_190), ili9806e_fwvga_video_on_cmd_190, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_191), ili9806e_fwvga_video_on_cmd_191, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_192), ili9806e_fwvga_video_on_cmd_192, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_193), ili9806e_fwvga_video_on_cmd_193, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_194), ili9806e_fwvga_video_on_cmd_194, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_195), ili9806e_fwvga_video_on_cmd_195, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_196), ili9806e_fwvga_video_on_cmd_196, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_197), ili9806e_fwvga_video_on_cmd_197, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_198), ili9806e_fwvga_video_on_cmd_198, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_199), ili9806e_fwvga_video_on_cmd_199, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_200), ili9806e_fwvga_video_on_cmd_200, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_201), ili9806e_fwvga_video_on_cmd_201, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_202), ili9806e_fwvga_video_on_cmd_202, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_203), ili9806e_fwvga_video_on_cmd_203, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_204), ili9806e_fwvga_video_on_cmd_204, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_205), ili9806e_fwvga_video_on_cmd_205, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_206), ili9806e_fwvga_video_on_cmd_206, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_207), ili9806e_fwvga_video_on_cmd_207, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_208), ili9806e_fwvga_video_on_cmd_208, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_209), ili9806e_fwvga_video_on_cmd_209, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_210), ili9806e_fwvga_video_on_cmd_210, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_211), ili9806e_fwvga_video_on_cmd_211, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_212), ili9806e_fwvga_video_on_cmd_212, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_213), ili9806e_fwvga_video_on_cmd_213, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_214), ili9806e_fwvga_video_on_cmd_214, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_215), ili9806e_fwvga_video_on_cmd_215, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_216), ili9806e_fwvga_video_on_cmd_216, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_217), ili9806e_fwvga_video_on_cmd_217, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_218), ili9806e_fwvga_video_on_cmd_218, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_219), ili9806e_fwvga_video_on_cmd_219, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_220), ili9806e_fwvga_video_on_cmd_220, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_221), ili9806e_fwvga_video_on_cmd_221, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_222), ili9806e_fwvga_video_on_cmd_222, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_223), ili9806e_fwvga_video_on_cmd_223, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_224), ili9806e_fwvga_video_on_cmd_224, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_225), ili9806e_fwvga_video_on_cmd_225, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_226), ili9806e_fwvga_video_on_cmd_226, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_227), ili9806e_fwvga_video_on_cmd_227, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_228), ili9806e_fwvga_video_on_cmd_228, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_229), ili9806e_fwvga_video_on_cmd_229, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_230), ili9806e_fwvga_video_on_cmd_230, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_231), ili9806e_fwvga_video_on_cmd_231, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_232), ili9806e_fwvga_video_on_cmd_232, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_233), ili9806e_fwvga_video_on_cmd_233, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_234), ili9806e_fwvga_video_on_cmd_234, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_235), ili9806e_fwvga_video_on_cmd_235, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_236), ili9806e_fwvga_video_on_cmd_236, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_237), ili9806e_fwvga_video_on_cmd_237, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_238), ili9806e_fwvga_video_on_cmd_238, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_239), ili9806e_fwvga_video_on_cmd_239, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_240), ili9806e_fwvga_video_on_cmd_240, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_241), ili9806e_fwvga_video_on_cmd_241, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_242), ili9806e_fwvga_video_on_cmd_242, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_243), ili9806e_fwvga_video_on_cmd_243, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_244), ili9806e_fwvga_video_on_cmd_244, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_245), ili9806e_fwvga_video_on_cmd_245, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_246), ili9806e_fwvga_video_on_cmd_246, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_247), ili9806e_fwvga_video_on_cmd_247, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_248), ili9806e_fwvga_video_on_cmd_248, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_249), ili9806e_fwvga_video_on_cmd_249, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_250), ili9806e_fwvga_video_on_cmd_250, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_251), ili9806e_fwvga_video_on_cmd_251, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_252), ili9806e_fwvga_video_on_cmd_252, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_253), ili9806e_fwvga_video_on_cmd_253, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_254), ili9806e_fwvga_video_on_cmd_254, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_255), ili9806e_fwvga_video_on_cmd_255, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_256), ili9806e_fwvga_video_on_cmd_256, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_257), ili9806e_fwvga_video_on_cmd_257, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_258), ili9806e_fwvga_video_on_cmd_258, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_259), ili9806e_fwvga_video_on_cmd_259, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_260), ili9806e_fwvga_video_on_cmd_260, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_261), ili9806e_fwvga_video_on_cmd_261, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_262), ili9806e_fwvga_video_on_cmd_262, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_263), ili9806e_fwvga_video_on_cmd_263, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_264), ili9806e_fwvga_video_on_cmd_264, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_265), ili9806e_fwvga_video_on_cmd_265, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_266), ili9806e_fwvga_video_on_cmd_266, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_267), ili9806e_fwvga_video_on_cmd_267, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_268), ili9806e_fwvga_video_on_cmd_268, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_269), ili9806e_fwvga_video_on_cmd_269, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_270), ili9806e_fwvga_video_on_cmd_270, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_271), ili9806e_fwvga_video_on_cmd_271, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_272), ili9806e_fwvga_video_on_cmd_272, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_273), ili9806e_fwvga_video_on_cmd_273, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_274), ili9806e_fwvga_video_on_cmd_274, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_275), ili9806e_fwvga_video_on_cmd_275, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_276), ili9806e_fwvga_video_on_cmd_276, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_277), ili9806e_fwvga_video_on_cmd_277, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_278), ili9806e_fwvga_video_on_cmd_278, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_279), ili9806e_fwvga_video_on_cmd_279, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_280), ili9806e_fwvga_video_on_cmd_280, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_281), ili9806e_fwvga_video_on_cmd_281, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_282), ili9806e_fwvga_video_on_cmd_282, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_283), ili9806e_fwvga_video_on_cmd_283, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_284), ili9806e_fwvga_video_on_cmd_284, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_285), ili9806e_fwvga_video_on_cmd_285, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_286), ili9806e_fwvga_video_on_cmd_286, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_287), ili9806e_fwvga_video_on_cmd_287, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_288), ili9806e_fwvga_video_on_cmd_288, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_289), ili9806e_fwvga_video_on_cmd_289, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_290), ili9806e_fwvga_video_on_cmd_290, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_291), ili9806e_fwvga_video_on_cmd_291, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_292), ili9806e_fwvga_video_on_cmd_292, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_293), ili9806e_fwvga_video_on_cmd_293, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_294), ili9806e_fwvga_video_on_cmd_294, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_295), ili9806e_fwvga_video_on_cmd_295, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_296), ili9806e_fwvga_video_on_cmd_296, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_297), ili9806e_fwvga_video_on_cmd_297, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_298), ili9806e_fwvga_video_on_cmd_298, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_299), ili9806e_fwvga_video_on_cmd_299, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_300), ili9806e_fwvga_video_on_cmd_300, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_301), ili9806e_fwvga_video_on_cmd_301, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_302), ili9806e_fwvga_video_on_cmd_302, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_303), ili9806e_fwvga_video_on_cmd_303, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_304), ili9806e_fwvga_video_on_cmd_304, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_305), ili9806e_fwvga_video_on_cmd_305, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_306), ili9806e_fwvga_video_on_cmd_306, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_307), ili9806e_fwvga_video_on_cmd_307, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_308), ili9806e_fwvga_video_on_cmd_308, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_309), ili9806e_fwvga_video_on_cmd_309, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_310), ili9806e_fwvga_video_on_cmd_310, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_311), ili9806e_fwvga_video_on_cmd_311, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_312), ili9806e_fwvga_video_on_cmd_312, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_313), ili9806e_fwvga_video_on_cmd_313, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_314), ili9806e_fwvga_video_on_cmd_314, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_315), ili9806e_fwvga_video_on_cmd_315, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_316), ili9806e_fwvga_video_on_cmd_316, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_317), ili9806e_fwvga_video_on_cmd_317, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_318), ili9806e_fwvga_video_on_cmd_318, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_319), ili9806e_fwvga_video_on_cmd_319, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_320), ili9806e_fwvga_video_on_cmd_320, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_321), ili9806e_fwvga_video_on_cmd_321, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_322), ili9806e_fwvga_video_on_cmd_322, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_323), ili9806e_fwvga_video_on_cmd_323, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_324), ili9806e_fwvga_video_on_cmd_324, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_325), ili9806e_fwvga_video_on_cmd_325, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_326), ili9806e_fwvga_video_on_cmd_326, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_327), ili9806e_fwvga_video_on_cmd_327, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_328), ili9806e_fwvga_video_on_cmd_328, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_329), ili9806e_fwvga_video_on_cmd_329, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_330), ili9806e_fwvga_video_on_cmd_330, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_331), ili9806e_fwvga_video_on_cmd_331, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_332), ili9806e_fwvga_video_on_cmd_332, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_333), ili9806e_fwvga_video_on_cmd_333, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_334), ili9806e_fwvga_video_on_cmd_334, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_335), ili9806e_fwvga_video_on_cmd_335, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_336), ili9806e_fwvga_video_on_cmd_336, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_337), ili9806e_fwvga_video_on_cmd_337, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_338), ili9806e_fwvga_video_on_cmd_338, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_339), ili9806e_fwvga_video_on_cmd_339, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_340), ili9806e_fwvga_video_on_cmd_340, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_341), ili9806e_fwvga_video_on_cmd_341, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_342), ili9806e_fwvga_video_on_cmd_342, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_343), ili9806e_fwvga_video_on_cmd_343, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_344), ili9806e_fwvga_video_on_cmd_344, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_345), ili9806e_fwvga_video_on_cmd_345, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_346), ili9806e_fwvga_video_on_cmd_346, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_347), ili9806e_fwvga_video_on_cmd_347, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_348), ili9806e_fwvga_video_on_cmd_348, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_349), ili9806e_fwvga_video_on_cmd_349, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_350), ili9806e_fwvga_video_on_cmd_350, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_351), ili9806e_fwvga_video_on_cmd_351, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_352), ili9806e_fwvga_video_on_cmd_352, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_353), ili9806e_fwvga_video_on_cmd_353, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_354), ili9806e_fwvga_video_on_cmd_354, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_355), ili9806e_fwvga_video_on_cmd_355, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_356), ili9806e_fwvga_video_on_cmd_356, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_357), ili9806e_fwvga_video_on_cmd_357, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_358), ili9806e_fwvga_video_on_cmd_358, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_359), ili9806e_fwvga_video_on_cmd_359, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_360), ili9806e_fwvga_video_on_cmd_360, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_361), ili9806e_fwvga_video_on_cmd_361, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_362), ili9806e_fwvga_video_on_cmd_362, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_363), ili9806e_fwvga_video_on_cmd_363, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_364), ili9806e_fwvga_video_on_cmd_364, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_365), ili9806e_fwvga_video_on_cmd_365, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_366), ili9806e_fwvga_video_on_cmd_366, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_367), ili9806e_fwvga_video_on_cmd_367, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_368), ili9806e_fwvga_video_on_cmd_368, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_369), ili9806e_fwvga_video_on_cmd_369, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_370), ili9806e_fwvga_video_on_cmd_370, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_371), ili9806e_fwvga_video_on_cmd_371, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_372), ili9806e_fwvga_video_on_cmd_372, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_373), ili9806e_fwvga_video_on_cmd_373, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_374), ili9806e_fwvga_video_on_cmd_374, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_375), ili9806e_fwvga_video_on_cmd_375, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_376), ili9806e_fwvga_video_on_cmd_376, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_377), ili9806e_fwvga_video_on_cmd_377, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_378), ili9806e_fwvga_video_on_cmd_378, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_379), ili9806e_fwvga_video_on_cmd_379, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_380), ili9806e_fwvga_video_on_cmd_380, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_381), ili9806e_fwvga_video_on_cmd_381, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_382), ili9806e_fwvga_video_on_cmd_382, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_383), ili9806e_fwvga_video_on_cmd_383, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_384), ili9806e_fwvga_video_on_cmd_384, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_385), ili9806e_fwvga_video_on_cmd_385, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_386), ili9806e_fwvga_video_on_cmd_386, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_387), ili9806e_fwvga_video_on_cmd_387, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_388), ili9806e_fwvga_video_on_cmd_388, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_389), ili9806e_fwvga_video_on_cmd_389, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_390), ili9806e_fwvga_video_on_cmd_390, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_391), ili9806e_fwvga_video_on_cmd_391, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_392), ili9806e_fwvga_video_on_cmd_392, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_393), ili9806e_fwvga_video_on_cmd_393, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_394), ili9806e_fwvga_video_on_cmd_394, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_395), ili9806e_fwvga_video_on_cmd_395, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_396), ili9806e_fwvga_video_on_cmd_396, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_397), ili9806e_fwvga_video_on_cmd_397, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_398), ili9806e_fwvga_video_on_cmd_398, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_399), ili9806e_fwvga_video_on_cmd_399, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_400), ili9806e_fwvga_video_on_cmd_400, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_401), ili9806e_fwvga_video_on_cmd_401, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_402), ili9806e_fwvga_video_on_cmd_402, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_403), ili9806e_fwvga_video_on_cmd_403, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_404), ili9806e_fwvga_video_on_cmd_404, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_405), ili9806e_fwvga_video_on_cmd_405, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_406), ili9806e_fwvga_video_on_cmd_406, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_407), ili9806e_fwvga_video_on_cmd_407, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_408), ili9806e_fwvga_video_on_cmd_408, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_409), ili9806e_fwvga_video_on_cmd_409, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_410), ili9806e_fwvga_video_on_cmd_410, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_411), ili9806e_fwvga_video_on_cmd_411, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_412), ili9806e_fwvga_video_on_cmd_412, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_413), ili9806e_fwvga_video_on_cmd_413, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_414), ili9806e_fwvga_video_on_cmd_414, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_415), ili9806e_fwvga_video_on_cmd_415, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_416), ili9806e_fwvga_video_on_cmd_416, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_417), ili9806e_fwvga_video_on_cmd_417, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_418), ili9806e_fwvga_video_on_cmd_418, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_419), ili9806e_fwvga_video_on_cmd_419, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_420), ili9806e_fwvga_video_on_cmd_420, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_421), ili9806e_fwvga_video_on_cmd_421, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_422), ili9806e_fwvga_video_on_cmd_422, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_423), ili9806e_fwvga_video_on_cmd_423, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_424), ili9806e_fwvga_video_on_cmd_424, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_425), ili9806e_fwvga_video_on_cmd_425, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_426), ili9806e_fwvga_video_on_cmd_426, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_427), ili9806e_fwvga_video_on_cmd_427, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_428), ili9806e_fwvga_video_on_cmd_428, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_429), ili9806e_fwvga_video_on_cmd_429, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_430), ili9806e_fwvga_video_on_cmd_430, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_431), ili9806e_fwvga_video_on_cmd_431, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_432), ili9806e_fwvga_video_on_cmd_432, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_433), ili9806e_fwvga_video_on_cmd_433, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_434), ili9806e_fwvga_video_on_cmd_434, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_435), ili9806e_fwvga_video_on_cmd_435, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_436), ili9806e_fwvga_video_on_cmd_436, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_437), ili9806e_fwvga_video_on_cmd_437, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_438), ili9806e_fwvga_video_on_cmd_438, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_439), ili9806e_fwvga_video_on_cmd_439, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_440), ili9806e_fwvga_video_on_cmd_440, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_441), ili9806e_fwvga_video_on_cmd_441, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_442), ili9806e_fwvga_video_on_cmd_442, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_443), ili9806e_fwvga_video_on_cmd_443, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_444), ili9806e_fwvga_video_on_cmd_444, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_445), ili9806e_fwvga_video_on_cmd_445, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_446), ili9806e_fwvga_video_on_cmd_446, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_447), ili9806e_fwvga_video_on_cmd_447, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_448), ili9806e_fwvga_video_on_cmd_448, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_449), ili9806e_fwvga_video_on_cmd_449, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_450), ili9806e_fwvga_video_on_cmd_450, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_451), ili9806e_fwvga_video_on_cmd_451, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_452), ili9806e_fwvga_video_on_cmd_452, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_453), ili9806e_fwvga_video_on_cmd_453, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_454), ili9806e_fwvga_video_on_cmd_454, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_455), ili9806e_fwvga_video_on_cmd_455, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_456), ili9806e_fwvga_video_on_cmd_456, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_457), ili9806e_fwvga_video_on_cmd_457, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_458), ili9806e_fwvga_video_on_cmd_458, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_459), ili9806e_fwvga_video_on_cmd_459, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_460), ili9806e_fwvga_video_on_cmd_460, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_461), ili9806e_fwvga_video_on_cmd_461, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_462), ili9806e_fwvga_video_on_cmd_462, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_463), ili9806e_fwvga_video_on_cmd_463, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_464), ili9806e_fwvga_video_on_cmd_464, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_465), ili9806e_fwvga_video_on_cmd_465, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_466), ili9806e_fwvga_video_on_cmd_466, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_467), ili9806e_fwvga_video_on_cmd_467, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_468), ili9806e_fwvga_video_on_cmd_468, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_469), ili9806e_fwvga_video_on_cmd_469, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_470), ili9806e_fwvga_video_on_cmd_470, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_471), ili9806e_fwvga_video_on_cmd_471, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_472), ili9806e_fwvga_video_on_cmd_472, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_473), ili9806e_fwvga_video_on_cmd_473, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_474), ili9806e_fwvga_video_on_cmd_474, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_475), ili9806e_fwvga_video_on_cmd_475, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_476), ili9806e_fwvga_video_on_cmd_476, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_477), ili9806e_fwvga_video_on_cmd_477, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_478), ili9806e_fwvga_video_on_cmd_478, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_479), ili9806e_fwvga_video_on_cmd_479, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_480), ili9806e_fwvga_video_on_cmd_480, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_481), ili9806e_fwvga_video_on_cmd_481, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_482), ili9806e_fwvga_video_on_cmd_482, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_483), ili9806e_fwvga_video_on_cmd_483, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_484), ili9806e_fwvga_video_on_cmd_484, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_485), ili9806e_fwvga_video_on_cmd_485, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_486), ili9806e_fwvga_video_on_cmd_486, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_487), ili9806e_fwvga_video_on_cmd_487, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_488), ili9806e_fwvga_video_on_cmd_488, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_489), ili9806e_fwvga_video_on_cmd_489, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_490), ili9806e_fwvga_video_on_cmd_490, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_491), ili9806e_fwvga_video_on_cmd_491, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_492), ili9806e_fwvga_video_on_cmd_492, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_493), ili9806e_fwvga_video_on_cmd_493, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_494), ili9806e_fwvga_video_on_cmd_494, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_495), ili9806e_fwvga_video_on_cmd_495, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_496), ili9806e_fwvga_video_on_cmd_496, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_497), ili9806e_fwvga_video_on_cmd_497, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_498), ili9806e_fwvga_video_on_cmd_498, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_499), ili9806e_fwvga_video_on_cmd_499, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_500), ili9806e_fwvga_video_on_cmd_500, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_501), ili9806e_fwvga_video_on_cmd_501, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_502), ili9806e_fwvga_video_on_cmd_502, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_503), ili9806e_fwvga_video_on_cmd_503, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_504), ili9806e_fwvga_video_on_cmd_504, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_505), ili9806e_fwvga_video_on_cmd_505, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_506), ili9806e_fwvga_video_on_cmd_506, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_507), ili9806e_fwvga_video_on_cmd_507, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_508), ili9806e_fwvga_video_on_cmd_508, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_509), ili9806e_fwvga_video_on_cmd_509, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_510), ili9806e_fwvga_video_on_cmd_510, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_511), ili9806e_fwvga_video_on_cmd_511, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_512), ili9806e_fwvga_video_on_cmd_512, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_513), ili9806e_fwvga_video_on_cmd_513, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_514), ili9806e_fwvga_video_on_cmd_514, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_515), ili9806e_fwvga_video_on_cmd_515, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_516), ili9806e_fwvga_video_on_cmd_516, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_517), ili9806e_fwvga_video_on_cmd_517, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_518), ili9806e_fwvga_video_on_cmd_518, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_519), ili9806e_fwvga_video_on_cmd_519, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_520), ili9806e_fwvga_video_on_cmd_520, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_521), ili9806e_fwvga_video_on_cmd_521, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_522), ili9806e_fwvga_video_on_cmd_522, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_523), ili9806e_fwvga_video_on_cmd_523, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_524), ili9806e_fwvga_video_on_cmd_524, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_525), ili9806e_fwvga_video_on_cmd_525, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_526), ili9806e_fwvga_video_on_cmd_526, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_527), ili9806e_fwvga_video_on_cmd_527, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_528), ili9806e_fwvga_video_on_cmd_528, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_529), ili9806e_fwvga_video_on_cmd_529, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_530), ili9806e_fwvga_video_on_cmd_530, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_531), ili9806e_fwvga_video_on_cmd_531, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_532), ili9806e_fwvga_video_on_cmd_532, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_533), ili9806e_fwvga_video_on_cmd_533, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_534), ili9806e_fwvga_video_on_cmd_534, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_535), ili9806e_fwvga_video_on_cmd_535, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_536), ili9806e_fwvga_video_on_cmd_536, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_537), ili9806e_fwvga_video_on_cmd_537, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_538), ili9806e_fwvga_video_on_cmd_538, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_539), ili9806e_fwvga_video_on_cmd_539, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_540), ili9806e_fwvga_video_on_cmd_540, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_541), ili9806e_fwvga_video_on_cmd_541, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_542), ili9806e_fwvga_video_on_cmd_542, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_543), ili9806e_fwvga_video_on_cmd_543, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_544), ili9806e_fwvga_video_on_cmd_544, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_545), ili9806e_fwvga_video_on_cmd_545, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_546), ili9806e_fwvga_video_on_cmd_546, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_547), ili9806e_fwvga_video_on_cmd_547, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_548), ili9806e_fwvga_video_on_cmd_548, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_549), ili9806e_fwvga_video_on_cmd_549, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_550), ili9806e_fwvga_video_on_cmd_550, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_551), ili9806e_fwvga_video_on_cmd_551, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_552), ili9806e_fwvga_video_on_cmd_552, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_553), ili9806e_fwvga_video_on_cmd_553, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_554), ili9806e_fwvga_video_on_cmd_554, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_555), ili9806e_fwvga_video_on_cmd_555, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_556), ili9806e_fwvga_video_on_cmd_556, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_557), ili9806e_fwvga_video_on_cmd_557, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_558), ili9806e_fwvga_video_on_cmd_558, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_559), ili9806e_fwvga_video_on_cmd_559, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_560), ili9806e_fwvga_video_on_cmd_560, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_561), ili9806e_fwvga_video_on_cmd_561, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_562), ili9806e_fwvga_video_on_cmd_562, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_563), ili9806e_fwvga_video_on_cmd_563, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_564), ili9806e_fwvga_video_on_cmd_564, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_565), ili9806e_fwvga_video_on_cmd_565, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_566), ili9806e_fwvga_video_on_cmd_566, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_567), ili9806e_fwvga_video_on_cmd_567, 0 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_568), ili9806e_fwvga_video_on_cmd_568, 120 },
	{ sizeof(ili9806e_fwvga_video_on_cmd_569), ili9806e_fwvga_video_on_cmd_569, 10 },
};

static char ili9806e_fwvga_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char ili9806e_fwvga_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd ili9806e_fwvga_video_off_command[] = {
	{ sizeof(ili9806e_fwvga_video_off_cmd_0), ili9806e_fwvga_video_off_cmd_0, 50 },
	{ sizeof(ili9806e_fwvga_video_off_cmd_1), ili9806e_fwvga_video_off_cmd_1, 120 },
};

static struct command_state ili9806e_fwvga_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info ili9806e_fwvga_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info ili9806e_fwvga_video_video_panel = {
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

static struct lane_configuration ili9806e_fwvga_video_lane_config = {
	.dsi_lanes = 2,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 0,
	.lane3_state = 0,
	.force_clk_lane_hs = 0,
};

static const uint32_t ili9806e_fwvga_video_timings[] = {
	0x7d, 0x24, 0x19, 0x00, 0x34, 0x31, 0x1d, 0x26, 0x2a, 0x03, 0x04, 0x00
};

static struct panel_timing ili9806e_fwvga_video_timing_info = {
	.tclk_post = 0x1f,
	.tclk_pre = 0x2c,
};

static struct panel_reset_sequence ili9806e_fwvga_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 20, 20 },
	.pin_direction = 2,
};

static struct backlight ili9806e_fwvga_video_backlight = {
	.bl_interface_type = BL_PWM,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_ili9806e_fwvga_video_select(struct panel_struct *panel,
						     struct msm_panel_info *pinfo,
						     struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &ili9806e_fwvga_video_panel_data;
	panel->panelres = &ili9806e_fwvga_video_panel_res;
	panel->color = &ili9806e_fwvga_video_color;
	panel->videopanel = &ili9806e_fwvga_video_video_panel;
	panel->commandpanel = &ili9806e_fwvga_video_command_panel;
	panel->state = &ili9806e_fwvga_video_state;
	panel->laneconfig = &ili9806e_fwvga_video_lane_config;
	panel->paneltiminginfo = &ili9806e_fwvga_video_timing_info;
	panel->panelresetseq = &ili9806e_fwvga_video_reset_seq;
	panel->backlightinfo = &ili9806e_fwvga_video_backlight;
	pinfo->mipi.panel_on_cmds = ili9806e_fwvga_video_on_command;
	pinfo->mipi.panel_off_cmds = ili9806e_fwvga_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(ili9806e_fwvga_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(ili9806e_fwvga_video_off_command);
	memcpy(phy_db->timing, ili9806e_fwvga_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_ILI9806E_FWVGA_VIDEO_H_ */
