// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode rm67162_wqvga_mode = {
	.clock = (400 + 20 + 20 + 40) * (400 + 20 + 4 + 12) * 60 / 1000,
	.hdisplay = 400,
	.hsync_start = 400 + 20,
	.hsync_end = 400 + 20 + 20,
	.htotal = 400 + 20 + 20 + 40,
	.vdisplay = 400,
	.vsync_start = 400 + 20,
	.vsync_end = 400 + 20 + 4,
	.vtotal = 400 + 20 + 4 + 12,
	.width_mm = 35,
	.height_mm = 35,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi rm67162_wqvga = {
	.desc = {
		.modes = &rm67162_wqvga_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 35,
			.height = 35,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO_BURST | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 1,
};
