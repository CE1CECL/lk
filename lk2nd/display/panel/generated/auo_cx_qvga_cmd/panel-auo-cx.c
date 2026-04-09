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

struct auo_cx {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct auo_cx *to_auo_cx(struct drm_panel *panel)
{
	return container_of_const(panel, struct auo_cx, panel);
}

static void auo_cx_reset(struct auo_cx *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int auo_cx_on(struct auo_cx *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbd,
				     0x03, 0x20, 0x14, 0x4b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbe,
				     0x03, 0x20, 0x14, 0x4b, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbf,
				     0x03, 0x20, 0x14, 0x4b, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbb, 0x07, 0x07, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc7, 0x40);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xeb, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x08, 0x50);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc3, 0xf2, 0x95, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xe9, 0x00, 0x36, 0x38);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xca, 0x04);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb0, 0x03, 0x03, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb1, 0x05, 0x05, 0x05);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb2, 0x01, 0x01, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb4, 0x07, 0x07, 0x07);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb5, 0x03, 0x03, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb6, 0x55, 0x55, 0x55);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb7, 0x36, 0x36, 0x36);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb8, 0x23, 0x23, 0x23);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb9, 0x03, 0x03, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xba, 0x03, 0x03, 0x03);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xbe, 0x32, 0x30, 0x70);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcf,
				     0xff, 0xd4, 0x95, 0xe8, 0x4f, 0x00, 0x04);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc0, 0x20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc2,
				     0x17, 0x17, 0x17, 0x17, 0x17, 0x0b);
	mipi_dsi_turn_on_peripheral_multi(&dsi_ctx);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xff, 0x13, 0x08, 0x30, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 32);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xfe, 0x13, 0x08, 0x30, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xe6, 0x13, 0x08, 0x30, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xe2, 0x13, 0x08, 0x30, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xe0, 0x13, 0x08, 0x30, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xed,
				     0x48, 0x00, 0xe0, 0x13, 0x08, 0x00, 0x0c,
				     0x00);
	mipi_dsi_msleep(&dsi_ctx, 20);

	return dsi_ctx.accum_err;
}

static int auo_cx_off(struct auo_cx *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int auo_cx_prepare(struct drm_panel *panel)
{
	struct auo_cx *ctx = to_auo_cx(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	auo_cx_reset(ctx);

	ret = auo_cx_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int auo_cx_unprepare(struct drm_panel *panel)
{
	struct auo_cx *ctx = to_auo_cx(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = auo_cx_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode auo_cx_mode = {
	.clock = (320 + 4 + 4 + 4) * (320 + 8 + 8 + 8) * 60 / 1000,
	.hdisplay = 320,
	.hsync_start = 320 + 4,
	.hsync_end = 320 + 4 + 4,
	.htotal = 320 + 4 + 4 + 4,
	.vdisplay = 320,
	.vsync_start = 320 + 8,
	.vsync_end = 320 + 8 + 8,
	.vtotal = 320 + 8 + 8 + 8,
	.width_mm = 29,
	.height_mm = 29,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int auo_cx_get_modes(struct drm_panel *panel,
			    struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &auo_cx_mode);
}

static const struct drm_panel_funcs auo_cx_panel_funcs = {
	.prepare = auo_cx_prepare,
	.unprepare = auo_cx_unprepare,
	.get_modes = auo_cx_get_modes,
};

static int auo_cx_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct auo_cx *ctx = mipi_dsi_get_drvdata(dsi);
	u16 brightness = backlight_get_brightness(bl);
	int ret;

	gpiod_set_value_cansleep(ctx->backlight_gpio, !!brightness);

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_set_display_brightness(dsi, brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return 0;
}

// TODO: Check if /sys/class/backlight/.../actual_brightness actually returns
// correct values. If not, remove this function.
static int auo_cx_bl_get_brightness(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	u16 brightness;
	int ret;

	dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	ret = mipi_dsi_dcs_get_display_brightness(dsi, &brightness);
	if (ret < 0)
		return ret;

	dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	return brightness & 0xff;
}

static const struct backlight_ops auo_cx_bl_ops = {
	.update_status = auo_cx_bl_update_status,
	.get_brightness = auo_cx_bl_get_brightness,
};

static struct backlight_device *
auo_cx_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &auo_cx_bl_ops, &props);
}

static int auo_cx_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct auo_cx *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct auo_cx, panel,
				   &auo_cx_panel_funcs,
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

	dsi->lanes = 1;
	dsi->format = MIPI_DSI_FMT_RGB888;
	dsi->mode_flags = MIPI_DSI_MODE_VIDEO_BURST |
			  MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS;

	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	/* Fallback to DCS backlight if no backlight is defined in DT */
	if (!ctx->panel.backlight) {
		ctx->panel.backlight = auo_cx_create_backlight(dsi);
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

static void auo_cx_remove(struct mipi_dsi_device *dsi)
{
	struct auo_cx *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id auo_cx_of_match[] = {
	{ .compatible = "auo,cx" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, auo_cx_of_match);

static struct mipi_dsi_driver auo_cx_driver = {
	.probe = auo_cx_probe,
	.remove = auo_cx_remove,
	.driver = {
		.name = "panel-auo-cx",
		.of_match_table = auo_cx_of_match,
	},
};
module_mipi_dsi_driver(auo_cx_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for AUO qvga cx command mode dsi panel");
MODULE_LICENSE("GPL");
