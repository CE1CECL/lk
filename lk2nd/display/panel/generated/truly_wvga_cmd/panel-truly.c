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

struct truly {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct truly *to_truly(struct drm_panel *panel)
{
	return container_of_const(panel, struct truly, panel);
}

static void truly_reset(struct truly *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	usleep_range(2000, 3000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int truly_on(struct truly *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	mipi_dsi_dcs_soft_reset_multi(&dsi_ctx);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb0, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb3, 0x02, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb6, 0x51, 0x83);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb7,
					 0x00, 0x80, 0x15, 0x25);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb8,
					 0x00, 0x07, 0x07, 0xff, 0xc8, 0xc8,
					 0x01, 0x18, 0x10, 0x10, 0x37, 0x5a,
					 0x87, 0xde, 0xff, 0x00, 0x00, 0x00,
					 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xb9,
					 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xbd, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc0, 0x02, 0x43);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc1,
					 0x43, 0x31, 0x99, 0x21, 0x20, 0x00,
					 0x10, 0x28, 0x0c, 0x0c, 0x00, 0x00,
					 0x00, 0x21, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc2,
					 0x28, 0x06, 0x06, 0x01, 0x03, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc3, 0x40, 0x00, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x6f, 0x03, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc4, 0x00, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc6, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc7,
					 0x11, 0x8d, 0xa0, 0xf5, 0x27);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc8,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xc9,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xca,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04,
					 0x01, 0x0a, 0x12, 0x1c, 0x2b, 0x45,
					 0x3f, 0x29, 0x17, 0x13, 0x0f, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd0,
					 0x99, 0x03, 0xce, 0xa6, 0x00, 0x43,
					 0x20, 0x10, 0x01, 0x00, 0x01, 0x01,
					 0x00, 0x03, 0x01, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd1,
					 0x18, 0x0c, 0x23, 0x03, 0x75, 0x02,
					 0x50);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd3, 0x33);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd5, 0x2a, 0x2a);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd6, 0x28);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd7,
					 0x01, 0x00, 0xaa, 0xc0, 0x2a, 0x2c,
					 0x22, 0x12, 0x71, 0x0a, 0x12, 0x00,
					 0xa0, 0x00, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd8,
					 0x44, 0x44, 0x22, 0x44, 0x21, 0x46,
					 0x42, 0x40);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xd9, 0xcf, 0x2d, 0x51);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xda, 0x01);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xde, 0x01, 0x4f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe1,
					 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xe6, 0x4f);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf3,
					 0x06, 0x00, 0x00, 0x24, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xf8, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xfa, 0x03);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xfb, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xfc,
					 0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xfd,
					 0x00, 0x00, 0x70, 0x00);
	mipi_dsi_dcs_set_column_address_multi(&dsi_ctx, 0x0000, 0x01df);
	mipi_dsi_dcs_set_page_address_multi(&dsi_ctx, 0x0000, 0x031f);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_set_tear_scanline_multi(&dsi_ctx, 0x0050);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_SET_ADDRESS_MODE, 0x41);
	mipi_dsi_dcs_set_pixel_format_multi(&dsi_ctx, 0x77);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 125);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 60);

	return dsi_ctx.accum_err;
}

static int truly_off(struct truly *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int truly_prepare(struct drm_panel *panel)
{
	struct truly *ctx = to_truly(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	truly_reset(ctx);

	ret = truly_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int truly_unprepare(struct drm_panel *panel)
{
	struct truly *ctx = to_truly(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = truly_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

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

static int truly_get_modes(struct drm_panel *panel,
			   struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &truly_mode);
}

static const struct drm_panel_funcs truly_panel_funcs = {
	.prepare = truly_prepare,
	.unprepare = truly_unprepare,
	.get_modes = truly_get_modes,
};

static int truly_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct truly *ctx = mipi_dsi_get_drvdata(dsi);
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
static int truly_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops truly_bl_ops = {
	.update_status = truly_bl_update_status,
	.get_brightness = truly_bl_get_brightness,
};

static struct backlight_device *
truly_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &truly_bl_ops, &props);
}

static int truly_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct truly *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct truly, panel,
				   &truly_panel_funcs,
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
	dsi->mode_flags = MIPI_DSI_MODE_NO_EOT_PACKET |
			  MIPI_DSI_CLOCK_NON_CONTINUOUS | MIPI_DSI_MODE_LPM;

	ctx->panel.prepare_prev_first = true;

	ret = drm_panel_of_backlight(&ctx->panel);
	if (ret)
		return dev_err_probe(dev, ret, "Failed to get backlight\n");

	/* Fallback to DCS backlight if no backlight is defined in DT */
	if (!ctx->panel.backlight) {
		ctx->panel.backlight = truly_create_backlight(dsi);
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

static void truly_remove(struct mipi_dsi_device *dsi)
{
	struct truly *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id truly_of_match[] = {
	{ .compatible = "truly" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, truly_of_match);

static struct mipi_dsi_driver truly_driver = {
	.probe = truly_probe,
	.remove = truly_remove,
	.driver = {
		.name = "panel-truly",
		.of_match_table = truly_of_match,
	},
};
module_mipi_dsi_driver(truly_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for Truly WVGA command mode dsi panel");
MODULE_LICENSE("GPL");
