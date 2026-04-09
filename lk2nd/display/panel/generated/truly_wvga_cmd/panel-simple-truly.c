// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode truly_mode = {
	.clock = (480 + 160 + 8 + 40) * (800 + 12 + 2 + 10) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 160,
	.hsync_end = 480 + 160 + 8,
	.htotal = 480 + 160 + 8 + 40,
	.vdisplay = 800,
	.vsync_start = 800 + 12,
	.vsync_end = 800 + 12 + 2,
	.vtotal = 800 + 12 + 2 + 10,
	.width_mm = 52,
	.height_mm = 86,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi truly = {
	.desc = {
		.modes = &truly_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 52,
			.height = 86,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_NO_EOT_PACKET | MIPI_DSI_CLOCK_NON_CONTINUOUS |
		 MIPI_DSI_MODE_LPM,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 2,
};
