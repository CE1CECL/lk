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

struct rm67162_wqvga {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct rm67162_wqvga *to_rm67162_wqvga(struct drm_panel *panel)
{
	return container_of_const(panel, struct rm67162_wqvga, panel);
}

static void rm67162_wqvga_reset(struct rm67162_wqvga *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	usleep_range(10000, 11000);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	usleep_range(10000, 11000);
}

static int rm67162_wqvga_on(struct rm67162_wqvga *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x0a);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x29, 0x10);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x05);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x05, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x00);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x20);
	mipi_dsi_dcs_set_display_brightness_multi(&dsi_ctx, 0x0000);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);

	return dsi_ctx.accum_err;
}

static int rm67162_wqvga_off(struct rm67162_wqvga *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x28, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x10, 0x00);
	mipi_dsi_msleep(&dsi_ctx, 120);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x4f, 0x01);

	return dsi_ctx.accum_err;
}

static int rm67162_wqvga_prepare(struct drm_panel *panel)
{
	struct rm67162_wqvga *ctx = to_rm67162_wqvga(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	rm67162_wqvga_reset(ctx);

	ret = rm67162_wqvga_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int rm67162_wqvga_unprepare(struct drm_panel *panel)
{
	struct rm67162_wqvga *ctx = to_rm67162_wqvga(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = rm67162_wqvga_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

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

static int rm67162_wqvga_get_modes(struct drm_panel *panel,
				   struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &rm67162_wqvga_mode);
}

static const struct drm_panel_funcs rm67162_wqvga_panel_funcs = {
	.prepare = rm67162_wqvga_prepare,
	.unprepare = rm67162_wqvga_unprepare,
	.get_modes = rm67162_wqvga_get_modes,
};

static int rm67162_wqvga_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct rm67162_wqvga *ctx = mipi_dsi_get_drvdata(dsi);
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
static int rm67162_wqvga_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops rm67162_wqvga_bl_ops = {
	.update_status = rm67162_wqvga_bl_update_status,
	.get_brightness = rm67162_wqvga_bl_get_brightness,
};

static struct backlight_device *
rm67162_wqvga_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &rm67162_wqvga_bl_ops, &props);
}

static int rm67162_wqvga_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct rm67162_wqvga *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct rm67162_wqvga, panel,
				   &rm67162_wqvga_panel_funcs,
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
		ctx->panel.backlight = rm67162_wqvga_create_backlight(dsi);
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

static void rm67162_wqvga_remove(struct mipi_dsi_device *dsi)
{
	struct rm67162_wqvga *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id rm67162_wqvga_of_match[] = {
	{ .compatible = "mdss,rm67162-wqvga" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, rm67162_wqvga_of_match);

static struct mipi_dsi_driver rm67162_wqvga_driver = {
	.probe = rm67162_wqvga_probe,
	.remove = rm67162_wqvga_remove,
	.driver = {
		.name = "panel-rm67162-wqvga",
		.of_match_table = rm67162_wqvga_of_match,
	},
};
module_mipi_dsi_driver(rm67162_wqvga_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for rm67162 wqvga cmd mode dsi panel");
MODULE_LICENSE("GPL");
