// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/backlight.h>
#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <video/mipi_display.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct ili9806e {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct ili9806e *to_ili9806e(struct drm_panel *panel)
{
	return container_of_const(panel, struct ili9806e, panel);
}

static void ili9806e_reset(struct ili9806e *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int ili9806e_on(struct ili9806e *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x1a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x41, 0x33);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x42, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x43, 0x09);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x44, 0x09);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x50, 0x78);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0078);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x52, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x2b);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x57, 0x50);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x60, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x61, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x62, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x63, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa0, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_DDB_START, 0x06);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_PPS_START, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa3, 0x11);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa4, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa5, 0x1a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa6, 0x09);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xa7, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_DDB_CONTINUE,
				     0x05);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_PPS_CONTINUE,
				     0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xaa, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xab, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xac, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xad, 0x38);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xae, 0x34);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xaf, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc0, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc1, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc2, 0x15);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc3, 0x11);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc4, 0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc5, 0x18);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc6, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc7, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc8, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc9, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xca, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcb, 0x05);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcc, 0x0c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcd, 0x1e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xce, 0x1a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcf, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x01, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x03, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x04, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x09);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x07, 0x19);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x19);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x09, 0x19);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0x19);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0b, 0x19);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0c, 0x1c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0d, 0x1c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0e, 0x1c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0f, 0x1c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0x1d);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x11, 0x1d);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x12, 0x1d);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x13, 0x1d);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x14, 0x1d);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x15, 0x3e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x16, 0x3e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x3e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x18, 0x3e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x19, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1a, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1b, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1c, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1d, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1e, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1f, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x20, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x22, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x23, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x24, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x25, 0x4e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_GAMMA_CURVE, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x27, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x28, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x29, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2a, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2b, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_START,
				     0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_LUT, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_START,
				     0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2f, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x32, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x33, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x34, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x35, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x37, 0x5e);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x38, 0x5c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x39, 0x4c);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x4c);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3b, 0x3b);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_CONTINUE,
				     0x3b);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_3D_CONTROL, 0x2a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_CONTINUE,
				     0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x01, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x03, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x04, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x07, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x09, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x11, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x12, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x13, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x14, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x15, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x16, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x18, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x19, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x20, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x22, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x23, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x24, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x25, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_GAMMA_CURVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x27, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x28, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x29, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_LUT, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x32, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x33, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x34, 0x00);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x37, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x38, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x39, 0x00);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_3D_CONTROL, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x41, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x42, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x43, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x44, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_GET_SCANLINE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x46, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x47, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x48, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x49, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x50, 0x00);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0000);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x52, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x54, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_POWER_SAVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x56, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x57, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x58, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x59, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_CABC_MIN_BRIGHTNESS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x60, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x61, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x62, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x63, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x64, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x65, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x66, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x67, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x68, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x69, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x70, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x71, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x72, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x73, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x74, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x75, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x76, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x77, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x78, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x79, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x01, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x03, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x04, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x07, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x09, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x11, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x12, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x13, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x14, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x15, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x16, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x18, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x19, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x20, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x22, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x23, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x24, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x25, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_GAMMA_CURVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x27, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x28, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x29, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_LUT, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x32, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x33, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x34, 0x00);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x37, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x38, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x39, 0x00);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_3D_CONTROL, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x41, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x42, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x43, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x44, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_GET_SCANLINE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x46, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x47, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x48, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x49, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x50, 0x00);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0000);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x52, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x54, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_POWER_SAVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x56, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x57, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x58, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x59, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_CABC_MIN_BRIGHTNESS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x60, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x61, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x62, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x63, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x64, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x65, 0x20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x66, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x67, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x68, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x69, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x70, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x71, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x72, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x73, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x74, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x75, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x76, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x77, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x78, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x79, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x01, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x03, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x04, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x07, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x09, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x11, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x12, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x13, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x14, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x15, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x16, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x18, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x19, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x20, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x22, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x23, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x24, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x25, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_GAMMA_CURVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x27, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x28, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x29, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_LUT, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_START,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x2f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x32, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x33, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x34, 0x00);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x37, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x38, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x39, 0x00);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_3D_CONTROL, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_CONTINUE,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x41, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x42, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x43, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x44, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_GET_SCANLINE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x46, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x47, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x48, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x49, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x50, 0x00);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0000);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x52, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x54, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_POWER_SAVE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x56, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x57, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x58, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x59, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_CABC_MIN_BRIGHTNESS,
				     0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x5f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x60, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x61, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x62, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x63, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x64, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x65, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x66, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x67, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x68, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x69, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x6f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x70, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x71, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x72, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x73, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x74, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x75, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x76, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x77, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x78, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x79, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x7f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x06);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x00, 0x21);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x01, 0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x03, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x04, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x80);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x07, 0x06);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x08, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x09, 0x80);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0c, 0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0d, 0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0e, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0f, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0xf0);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x11, 0xf4);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x12, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x13, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x14, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x15, 0xc0);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x16, 0x08);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x18, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x19, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1a, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1c, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x1d, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x20, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x21, 0x23);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x22, 0x45);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x23, 0x67);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x24, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x25, 0x23);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_GAMMA_CURVE, 0x45);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x27, 0x67);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_ROWS, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_PARTIAL_COLUMNS,
				     0x11);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x32, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x33, 0xee);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x34, 0xff);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x35, 0xbb);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0xca);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x37, 0xdd);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x38, 0xac);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x39, 0x76);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x67);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3b, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_MEMORY_CONTINUE,
				     0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_3D_CONTROL, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_READ_MEMORY_CONTINUE,
				     0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x3f, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_VSYNC_TIMING, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x52, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x17, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x02, 0x77);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xe1, 0x79);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x06, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0xff, 0x98, 0x06, 0x04, 0x00);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_usleep_range(&dsi_ctx, 10000, 11000);

	return dsi_ctx.accum_err;
}

static int ili9806e_off(struct ili9806e *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int ili9806e_prepare(struct drm_panel *panel)
{
	struct ili9806e *ctx = to_ili9806e(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ili9806e_reset(ctx);

	ret = ili9806e_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int ili9806e_unprepare(struct drm_panel *panel)
{
	struct ili9806e *ctx = to_ili9806e(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = ili9806e_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

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

static int ili9806e_get_modes(struct drm_panel *panel,
			      struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &ili9806e_mode);
}

static const struct drm_panel_funcs ili9806e_panel_funcs = {
	.prepare = ili9806e_prepare,
	.unprepare = ili9806e_unprepare,
	.get_modes = ili9806e_get_modes,
};

static int ili9806e_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct ili9806e *ctx = mipi_dsi_get_drvdata(dsi);
	u16 brightness = backlight_get_brightness(bl);
	int ret;

	gpiod_set_value_cansleep(ctx->backlight_gpio, !!brightness);

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_set_display_brightness_large(dsi, brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return 0;
}

// TODO: Check if /sys/class/backlight/.../actual_brightness actually returns
// correct values. If not, remove this function.
static int ili9806e_bl_get_brightness(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	u16 brightness;
	int ret;

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_get_display_brightness_large(dsi, &brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return brightness;
}

static const struct backlight_ops ili9806e_bl_ops = {
	.update_status = ili9806e_bl_update_status,
	.get_brightness = ili9806e_bl_get_brightness,
};

static struct backlight_device *
ili9806e_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 4095,
		.max_brightness = 4095,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &ili9806e_bl_ops, &props);
}

static int ili9806e_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct ili9806e *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct ili9806e, panel,
				   &ili9806e_panel_funcs,
				   DRM_MODE_CONNECTOR_DSI);
	if (IS_ERR(ctx))
		return PTR_ERR(ctx);

	ctx->reset_gpio = devm_gpiod_get(dev, "reset", GPIOD_OUT_HIGH);
	if (IS_ERR(ctx->reset_gpio))
		return dev_err_probe(dev, PTR_ERR(ctx->reset_gpio),
				     "Failed to get reset-gpios\n");

	ctx->backlight_gpio = devm_gpiod_get(dev, "backlight", GPIOD_OUT_LOW);
	if (IS_ERR(ctx->backlight_gpio))
		return dev_err_probe(dev, PTR_ERR(ctx->backlight_gpio),
				     "Failed to get backlight-gpios\n");

	ctx->dsi = dsi;
	mipi_dsi_set_drvdata(dsi, ctx);

	dsi->lanes = 2;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_VIDEO_HSE | MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	/* Fallback to DCS backlight if no backlight is defined in DT */
	if (!ctx->panel.backlight) {
		ctx->panel.backlight = ili9806e_create_backlight(dsi);
		if (IS_ERR(ctx->panel.backlight))
			return dev_err_probe(dev, PTR_ERR(ctx->panel.backlight),
					     "Failed to create backlight\n");
	}

	drm_panel_add(&ctx->panel);

	ret = mipi_dsi_attach(dsi);
	if (ret < 0) {
		drm_panel_remove(&ctx->panel);
		return dev_err_probe(dev, ret, "Failed to attach to DSI host\n");
	}

	return 0;
}

static void ili9806e_remove(struct mipi_dsi_device *dsi)
{
	struct ili9806e *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id ili9806e_of_match[] = {
	{ .compatible = "mdss,ili9806e" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, ili9806e_of_match);

static struct mipi_dsi_driver ili9806e_driver = {
	.probe = ili9806e_probe,
	.remove = ili9806e_remove,
	.driver = {
		.name = "panel-ili9806e",
		.of_match_table = ili9806e_of_match,
	},
};
module_mipi_dsi_driver(ili9806e_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for ili9806e fwvga video mode dsi panel");
MODULE_LICENSE("GPL");
