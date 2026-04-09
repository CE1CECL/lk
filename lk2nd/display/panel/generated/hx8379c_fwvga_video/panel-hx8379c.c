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

struct hx8379c {
	struct drm_panel panel;
	struct mipi_dsi_device *dsi;
	struct gpio_desc *reset_gpio;
	struct gpio_desc *backlight_gpio;
};

static inline struct hx8379c *to_hx8379c(struct drm_panel *panel)
{
	return container_of_const(panel, struct hx8379c, panel);
}

static void hx8379c_reset(struct hx8379c *ctx)
{
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 1);
	msleep(20);
	gpiod_set_value_cansleep(ctx->reset_gpio, 0);
	msleep(20);
}

static int hx8379c_on(struct hx8379c *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags |= MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb9, 0xff, 0x83, 0x79);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb1,
				     0x44, 0x1c, 0x1c, 0x31, 0x31, 0x50, 0xd0,
				     0xee, 0x54, 0x80, 0x38, 0x38, 0xf8, 0x32,
				     0x22, 0x22);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb2,
				     0x80, 0xfe, 0x0b, 0x04, 0x00, 0x50, 0x11,
				     0x42, 0x15);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb4,
				     0x69, 0x6a, 0x69, 0x6a, 0x69, 0x6a, 0x22,
				     0x70, 0x23, 0x70);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xba,
				     0x41, 0x83, 0xa8, 0x4d, 0xb2, 0x24, 0x00,
				     0x00, 0x50, 0x90);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xc7, 0x00, 0x00, 0x00, 0xc0);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xcc, 0x02);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd2, 0x77);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd3,
				     0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
				     0x32, 0x10, 0x03, 0x00, 0x03, 0x03, 0x60,
				     0x03, 0x60, 0x00, 0x08, 0x00, 0x08, 0x45,
				     0x44, 0x08, 0x08, 0x37, 0x08, 0x08, 0x37,
				     0x09);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd5,
				     0x18, 0x18, 0x19, 0x19, 0x18, 0x18, 0x20,
				     0x21, 0x24, 0x25, 0x18, 0x18, 0x18, 0x18,
				     0x00, 0x01, 0x04, 0x05, 0x02, 0x03, 0x06,
				     0x07, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
				     0x18, 0x18, 0x18, 0x18, 0x00, 0x00);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xd6,
				     0x18, 0x18, 0x18, 0x18, 0x19, 0x19, 0x25,
				     0x24, 0x21, 0x20, 0x18, 0x18, 0x18, 0x18,
				     0x05, 0x04, 0x01, 0x00, 0x03, 0x02, 0x07,
				     0x06, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
				     0x18, 0x18, 0x18, 0x18);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xe0,
				     0x00, 0x04, 0x0b, 0x2f, 0x39, 0x3f, 0x21,
				     0x46, 0x07, 0x0a, 0x0c, 0x17, 0x0f, 0x13,
				     0x16, 0x14, 0x15, 0x07, 0x11, 0x13, 0x30,
				     0x00, 0x04, 0x0b, 0x2f, 0x3a, 0x3f, 0x21,
				     0x46, 0x07, 0x0a, 0x0c, 0x17, 0x0f, 0x14,
				     0x16, 0x14, 0x15, 0x07, 0x11, 0x13, 0x16);
	mipi_dsi_dcs_write_seq_multi(&dsi_ctx, 0xb6, 0x4e, 0x4e);
	mipi_dsi_dcs_exit_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);
	mipi_dsi_dcs_set_display_on_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 20);

	return dsi_ctx.accum_err;
}

static int hx8379c_off(struct hx8379c *ctx)
{
	struct mipi_dsi_multi_context dsi_ctx = { .dsi = ctx->dsi };

	ctx->dsi->mode_flags &= ~MIPI_DSI_MODE_LPM;

	mipi_dsi_dcs_set_display_off_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 50);
	mipi_dsi_dcs_enter_sleep_mode_multi(&dsi_ctx);
	mipi_dsi_msleep(&dsi_ctx, 120);

	return dsi_ctx.accum_err;
}

static int hx8379c_prepare(struct drm_panel *panel)
{
	struct hx8379c *ctx = to_hx8379c(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	hx8379c_reset(ctx);

	ret = hx8379c_on(ctx);
	if (ret < 0) {
		dev_err(dev, "Failed to initialize panel: %d\n", ret);
		gpiod_set_value_cansleep(ctx->reset_gpio, 1);
		return ret;
	}

	return 0;
}

static int hx8379c_unprepare(struct drm_panel *panel)
{
	struct hx8379c *ctx = to_hx8379c(panel);
	struct device *dev = &ctx->dsi->dev;
	int ret;

	ret = hx8379c_off(ctx);
	if (ret < 0)
		dev_err(dev, "Failed to un-initialize panel: %d\n", ret);

	gpiod_set_value_cansleep(ctx->reset_gpio, 1);

	return 0;
}

static const struct drm_display_mode hx8379c_mode = {
	.clock = (480 + 60 + 60 + 60) * (854 + 6 + 5 + 6) * 60 / 1000,
	.hdisplay = 480,
	.hsync_start = 480 + 60,
	.hsync_end = 480 + 60 + 60,
	.htotal = 480 + 60 + 60 + 60,
	.vdisplay = 854,
	.vsync_start = 854 + 6,
	.vsync_end = 854 + 6 + 5,
	.vtotal = 854 + 6 + 5 + 6,
	.width_mm = 0,
	.height_mm = 0,
	.type = DRM_MODE_TYPE_DRIVER,
};

static int hx8379c_get_modes(struct drm_panel *panel,
			     struct drm_connector *connector)
{
	return drm_connector_helper_get_modes_fixed(connector, &hx8379c_mode);
}

static const struct drm_panel_funcs hx8379c_panel_funcs = {
	.prepare = hx8379c_prepare,
	.unprepare = hx8379c_unprepare,
	.get_modes = hx8379c_get_modes,
};

static int hx8379c_bl_update_status(struct backlight_device *bl)
{
	struct mipi_dsi_device *dsi = bl_get_data(bl);
	struct hx8379c *ctx = mipi_dsi_get_drvdata(dsi);
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
static int hx8379c_bl_get_brightness(struct backlight_device *bl)
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

static const struct backlight_ops hx8379c_bl_ops = {
	.update_status = hx8379c_bl_update_status,
	.get_brightness = hx8379c_bl_get_brightness,
};

static struct backlight_device *
hx8379c_create_backlight(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	const struct backlight_properties props = {
		.type = BACKLIGHT_RAW,
		.brightness = 4095,
		.max_brightness = 4095,
	};

	return devm_backlight_device_register(dev, dev_name(dev), dev, dsi,
					      &hx8379c_bl_ops, &props);
}

static int hx8379c_probe(struct mipi_dsi_device *dsi)
{
	struct device *dev = &dsi->dev;
	struct hx8379c *ctx;
	int ret;

	ctx = devm_drm_panel_alloc(dev, struct hx8379c, panel,
				   &hx8379c_panel_funcs,
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
		ctx->panel.backlight = hx8379c_create_backlight(dsi);
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

static void hx8379c_remove(struct mipi_dsi_device *dsi)
{
	struct hx8379c *ctx = mipi_dsi_get_drvdata(dsi);
	int ret;

	ret = mipi_dsi_detach(dsi);
	if (ret < 0)
		dev_err(&dsi->dev, "Failed to detach from DSI host: %d\n", ret);

	drm_panel_remove(&ctx->panel);
}

static const struct of_device_id hx8379c_of_match[] = {
	{ .compatible = "mdss,hx8379c" }, // FIXME
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, hx8379c_of_match);

static struct mipi_dsi_driver hx8379c_driver = {
	.probe = hx8379c_probe,
	.remove = hx8379c_remove,
	.driver = {
		.name = "panel-hx8379c",
		.of_match_table = hx8379c_of_match,
	},
};
module_mipi_dsi_driver(hx8379c_driver);

MODULE_AUTHOR("linux-mdss-dsi-panel-driver-generator <fix@me>"); // FIXME
MODULE_DESCRIPTION("DRM driver for hx8379c fwvga video mode dsi panel");
MODULE_LICENSE("GPL");
