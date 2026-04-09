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

struct auo_390p {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct auo_390p *to_auo_390p(struct drm_panel *panel)
{
	return container_of_const(panel, struct auo_390p, panel);
}

static void auo_390p_reset(struct auo_390p *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int auo_390p_on(struct auo_390p *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0x0a, 0xf0);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xfe, 0x00);
	mipi_dsi_dcs_set_tear_on_multi(&dsi_ctx, MIPI_DSI_DCS_TEAR_MODE_VBLANK);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x2a,
					 0x00, 0x04, 0x01, 0x89);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x2b,
					 0x00, 0x00, 0x01, 0x85);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x30,
					 0x00, 0x00, 0x01, 0x85);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0x31,
					 0x00, 0x04, 0x01, 0x89);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_ENTER_PARTIAL_MODE);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, MIPI_DCS_WRITE_CONTROL_DISPLAY,
				     0x20);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 150);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xf0,
				     0x55, 0xaa, 0x52, 0x08, 0x01);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xff,
				     0x00, 0x55, 0xaa, 0x52, 0x08, 0x01);

	return dsi_ctx.accum_err;
}

static int auo_390p_off(struct auo_390p *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int auo_390p_prepare(struct drm_panel *panel)
{
	struct auo_390p *ctx = to_auo_390p(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	auo_390p_reset(ctx);

	ret = auo_390p_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int auo_390p_unprepare(struct drm_panel *panel)
{
	struct auo_390p *ctx = to_auo_390p(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = auo_390p_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

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

static int auo_390p_get_modes(struct drm_panel *panel,
			      struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &auo_390p_mode);
}

static const struct drm_panel_funcs auo_390p_panel_funcs = {
	.prepare = auo_390p_prepare,
	.unprepare = auo_390p_unprepare,
	.get_modes = auo_390p_get_modes,
};

static int auo_390p_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct auo_390p *ctx = mipi_dsi_get_drvdata(dsi);
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
static int auo_390p_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops auo_390p_bl_ops = {
	.update_status = auo_390p_bl_update_status,
	.get_brightness = auo_390p_bl_get_brightness,
};

static struct backlight_device *
auo_390p_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 255,
		.max_brightness = 255,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &auo_390p_bl_ops, &props);
}

static int auo_390p_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct auo_390p *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct auo_390p, panel,
				   &auo_390p_panel_funcs,
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
		ctx->panel.backlight = auo_390p_create_backlight(dsi);
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

static void auo_390p_remove(struct mipi_dsi_device *dsi)
{
	struct auo_390p *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id auo_390p_of_match[] = {
	{ .compatible = "auo,390p" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, auo_390p_of_match);

static struct mipi_dsi_driver auo_390p_driver = {
	.probe = auo_390p_probe,
	.remove = auo_390p_remove,
	.driver = {
		.name = "panel-auo-390p",
		.of_match_table = auo_390p_of_match,
	},
};
module_mipi_dsi_driver(auo_390p_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for AUO 390p command mode dsi panel");
MODULE_LICENSE("GPL");
