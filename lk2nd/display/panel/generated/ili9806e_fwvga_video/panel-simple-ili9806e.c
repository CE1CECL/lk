// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode ili9806e_mode = {
	.clock = (480 + 54 + 36 + 100) * (854 + 8 + 5 + 20) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 54,
	.hsync_end = 480 + 54 + 36,
	.htotal = 480 + 54 + 36 + 100,
	.vdisplay = 854,
	.vsync_start = 854 + 8,
	.vsync_end = 854 + 8 + 5,
	.vtotal = 854 + 8 + 5 + 20,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi ili9806e = {
	.desc = {
		.modes = &ili9806e_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 0,
			.height = 0,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 2,
};
