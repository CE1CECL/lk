// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode hx8394d_480p_mode = {
	.clock = (480 + 52 + 24 + 100) * (480 + 8 + 4 + 20) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 52,
	.hsync_end = 480 + 52 + 24,
	.htotal = 480 + 52 + 24 + 100,
	.vdisplay = 480,
	.vsync_start = 480 + 8,
	.vsync_end = 480 + 8 + 4,
	.vtotal = 480 + 8 + 4 + 20,
	.width_mm = 59,
	.height_mm = 104,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi hx8394d_480p = {
	.desc = {
		.modes = &hx8394d_480p_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 59,
			.height = 104,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
		 MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
