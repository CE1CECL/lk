// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode hx8379a_skua_mode = {
	.clock = (480 + 100 + 40 + 94) * (854 + 6 + 6 + 4) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 100,
	.hsync_end = 480 + 100 + 40,
	.htotal = 480 + 100 + 40 + 94,
	.vdisplay = 854,
	.vsync_start = 854 + 6,
	.vsync_end = 854 + 6 + 6,
	.vtotal = 854 + 6 + 6 + 4,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi hx8379a_skua = {
	.desc = {
		.modes = &hx8379a_skua_mode,
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
