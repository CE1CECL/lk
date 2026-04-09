// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode nt51017_mode = {
	.clock = (800 + 152 + 8 + 128) * (1280 + 18 + 1 + 23) * 60 / 1000,
	.hdisplay = 800,
	.hsync_start = 800 + 152,
	.hsync_end = 800 + 152 + 8,
	.htotal = 800 + 152 + 8 + 128,
	.vdisplay = 1280,
	.vsync_start = 1280 + 18,
	.vsync_end = 1280 + 18 + 1,
	.vtotal = 1280 + 18 + 1 + 23,
	.width_mm = 129,
	.height_mm = 206,
	.type = DRM_MODE_TYPE_DRIVER,
};

static const struct panel_desc_dsi nt51017 = {
	.desc = {
		.modes = &nt51017_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 129,
			.height = 206,
		},
		.connector_type = DRM_MODE_CONNECTOR_DSI,
	},
	.flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
		 MIPI_DSI_MODE_NO_EOT_PACKET | MIPI_DSI_MODE_VIDEO_NO_HFP |
		 MIPI_DSI_MODE_VIDEO_NO_HBP | MIPI_DSI_MODE_VIDEO_NO_HSA,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
