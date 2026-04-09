// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode auo_390p_mode = {
	.clock = (390 + 4 + 4 + 4) * (390 + 8 + 8 + 8) * 45 / 1000,
	.hdisplay = 390,
	.hsync_start = 390 + 4,
	.hsync_end = 390 + 4 + 4,
	.htotal = 390 + 4 + 4 + 4,
	.vdisplay = 390,
	.vsync_start = 390 + 8,
	.vsync_end = 390 + 8 + 8,
	.vtotal = 390 + 8 + 8 + 8,
	.width_mm = 29,
	.height_mm = 29,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi auo_390p = {
	.desc = {
		.modes = &auo_390p_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 29,
			.height = 29,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO_BURST | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 1,
};
