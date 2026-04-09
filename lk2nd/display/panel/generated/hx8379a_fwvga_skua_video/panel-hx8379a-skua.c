// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2013, The Linux Foundation. All rights reserved. (FIXME)

#include <linux/backlight.h>
#include <linux/delay.h>
#include <linux/gpio/consumer.h>
#include <linux/mod_devicetable.h>
#include <linux/module.h>

#include <drm/drm_mipi_dsi.h>
#include <drm/drm_modes.h>
#include <drm/drm_panel.h>
#include <drm/drm_probe_helper.h>

struct hx8379a_skua {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct hx8379a_skua *to_hx8379a_skua(struct drm_panel *panel)
{
	return container_of_const(panel, struct hx8379a_skua, panel);
}

static void hx8379a_skua_reset(struct hx8379a_skua *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int hx8379a_skua_on(struct hx8379a_skua *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb9, 0xff, 0x83, 0x79);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xba, 0x51, 0x93);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb1,
				     0x00, 0x50, 0x24, 0xea, 0x51, 0x08, 0x11,
				     0x10, 0xf0, 0x27, 0x2f, 0x9a, 0x1a, 0x42,
				     0x0b, 0x7a, 0xf1, 0x00, 0xe6);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb2,
				     0x00, 0x00, 0xfe, 0x06, 0x06, 0x19, 0x44,
				     0x00, 0xff, 0x07, 0x03, 0x19, 0x20);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb4,
				     0x80, 0x08, 0x00, 0x32, 0x10, 0x03, 0x32,
				     0x13, 0x70, 0x32, 0x10, 0x08, 0x37, 0x01,
				     0x28, 0x07, 0x37, 0x08, 0x2d, 0x08, 0x35,
				     0x46, 0x06, 0x00, 0x40, 0x08, 0x28, 0x08,
				     0x30, 0x30, 0x04);
	mipi_dsi_generic_write_seq_multi(&dsi_ctx, 0xcc, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd5,
				     0x00, 0x00, 0x0a, 0x00, 0x01, 0x05, 0x00,
				     0x03, 0x00, 0x88, 0x88, 0x88, 0x88, 0x23,
				     0x01, 0x67, 0x45, 0x02, 0x13, 0x88, 0x88,
				     0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
				     0x88, 0x54, 0x76, 0x10, 0x32, 0x31, 0x20,
				     0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00,
				     0x00, 0x00, 0x00, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xe0,
				     0x79, 0x00, 0x0f, 0x14, 0x22, 0x22, 0x39,
				     0x2f, 0x43, 0x04, 0x0a, 0x12, 0x14, 0x17,
				     0x15, 0x16, 0x12, 0x16, 0x00, 0x0f, 0x14,
				     0x22, 0x22, 0x39, 0x2f, 0x43, 0x04, 0x0a,
				     0x12, 0x14, 0x17, 0x15, 0x16, 0x12, 0x16);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb6, 0x00, 0xa5, 0x00, 0xa5);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 150);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int hx8379a_skua_off(struct hx8379a_skua *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int hx8379a_skua_prepare(struct drm_panel *panel)
{
	struct hx8379a_skua *ctx = to_hx8379a_skua(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	hx8379a_skua_reset(ctx);

	ret = hx8379a_skua_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int hx8379a_skua_unprepare(struct drm_panel *panel)
{
	struct hx8379a_skua *ctx = to_hx8379a_skua(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = hx8379a_skua_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

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

static int hx8379a_skua_get_modes(struct drm_panel *panel,
				  struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &hx8379a_skua_mode);
}

static const struct drm_panel_funcs hx8379a_skua_panel_funcs = {
	.prepare = hx8379a_skua_prepare,
	.unprepare = hx8379a_skua_unprepare,
	.get_modes = hx8379a_skua_get_modes,
};

static int hx8379a_skua_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct hx8379a_skua *ctx = mipi_dsi_get_drvdata(dsi);
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
static int hx8379a_skua_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops hx8379a_skua_bl_ops = {
	.update_status = hx8379a_skua_bl_update_status,
	.get_brightness = hx8379a_skua_bl_get_brightness,
};

static struct backlight_device *
hx8379a_skua_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 4095,
		.max_brightness = 4095,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &hx8379a_skua_bl_ops, &props);
}

static int hx8379a_skua_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct hx8379a_skua *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct hx8379a_skua, panel,
				   &hx8379a_skua_panel_funcs,
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
		ctx->panel.backlight = hx8379a_skua_create_backlight(dsi);
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

static void hx8379a_skua_remove(struct mipi_dsi_device *dsi)
{
	struct hx8379a_skua *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id hx8379a_skua_of_match[] = {
	{ .compatible = "mdss,hx8379a-skua" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, hx8379a_skua_of_match);

static struct mipi_dsi_driver hx8379a_skua_driver = {
	.probe = hx8379a_skua_probe,
	.remove = hx8379a_skua_remove,
	.driver = {
		.name = "panel-hx8379a-skua",
		.of_match_table = hx8379a_skua_of_match,
	},
};
module_mipi_dsi_driver(hx8379a_skua_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for hx8379a fwvga skua video mode dsi panel");
MODULE_LICENSE("GPL");
