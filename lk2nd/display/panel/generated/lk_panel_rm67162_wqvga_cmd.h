/* Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PANEL_RM67162_WQVGA_CMD_H_
#define _PANEL_RM67162_WQVGA_CMD_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include <panel.h>

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config rm67162_wqvga_cmd_panel_data = {
	"qcom,mdss_dsi_rm67162_wqvga_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 1, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution rm67162_wqvga_cmd_panel_res = {
	/* 320, 360, 140, 164, 8, 0, 6, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 */
	400, 400, 20, 40, 20, 0, 20, 12, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info rm67162_wqvga_cmd_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char rm67162_wqvga_cmd_on_cmd0[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFE, 0x0A, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd1[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x29, 0x90, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd2[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFE, 0x05, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd3[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x05, 0x00, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd4[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFE, 0x00, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd5[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x35, 0x00, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd6[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x51, 0xFF, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd7[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x53, 0x20, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd8[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x11, 0x00, 0xFF, 0xFF,
};

static char rm67162_wqvga_cmd_on_cmd9[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x29, 0x00, 0xFF, 0xFF,
};

static struct mipi_dsi_cmd rm67162_wqvga_cmd_on_command[] = {
	{0x8, rm67162_wqvga_cmd_on_cmd0, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd1, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd2, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd3, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd4, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd5, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd6, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd7, 0x00},
	{0x8, rm67162_wqvga_cmd_on_cmd8, 0x78},
	{0x8, rm67162_wqvga_cmd_on_cmd9, 0x05}
};

#define RM67162_WQVGA_CMD_ON_COMMAND 10


static char rm67162_wqvga_cmdoff_cmd0[] = {
	0x51, 0x00, 0x05, 0x80
};

static char rm67162_wqvga_cmdoff_cmd1[] = {
	0x28, 0x00, 0x05, 0x80
};

static char rm67162_wqvga_cmdoff_cmd2[] = {
	0x10, 0x00, 0x05, 0x80
};

static char rm67162_wqvga_cmdoff_cmd3[] = {
	0x4F, 0x01, 0x05, 0x80
};

static struct mipi_dsi_cmd rm67162_wqvga_cmd_off_command[] = {
	{0x4, rm67162_wqvga_cmdoff_cmd0, 0x05},
	{0x4, rm67162_wqvga_cmdoff_cmd1, 0x14},
	{0x4, rm67162_wqvga_cmdoff_cmd2, 0x78},
	{0x4, rm67162_wqvga_cmdoff_cmd3, 0x14}
};

#define RM67162_WQVGA_CMD_OFF_COMMAND 4


static struct command_state rm67162_wqvga_cmd_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info rm67162_wqvga_cmd_command_panel = {
	1, 1, 1, 1, 2, 0x2c, 0, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info rm67162_wqvga_cmd_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration rm67162_wqvga_cmd_lane_config = {
	1, 0, 1, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t rm67162_wqvga_cmd_12nm_timings[] = {
	0x06, 0x05, 0x01, 0x0A, 0x00, 0x03, 0x01, 0x0F
};

static struct panel_timing rm67162_wqvga_cmd_timing_info = {
	0, 4, 0x09, 0x2c
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence rm67162_wqvga_cmd_reset_seq = {
	{1, 0, 1, }, {1, 12, 12, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight rm67162_wqvga_cmd_backlight = {
	2, 1, 255, 100, 2, "BL_CTL_DCS"
};

static inline void panel_rm67162_wqvga_cmd_select(struct panel_struct *panelstruct,
						  struct msm_panel_info *pinfo,
						  struct mdss_dsi_phy_ctrl *phy_db)
{
		panelstruct->paneldata    = &rm67162_wqvga_cmd_panel_data;
		panelstruct->panelres     = &rm67162_wqvga_cmd_panel_res;
		panelstruct->color        = &rm67162_wqvga_cmd_color;
		panelstruct->videopanel   =
				&rm67162_wqvga_cmd_video_panel;
		panelstruct->commandpanel =
				&rm67162_wqvga_cmd_command_panel;
		panelstruct->state        = &rm67162_wqvga_cmd_state;
		panelstruct->laneconfig   =
				&rm67162_wqvga_cmd_lane_config;
		panelstruct->paneltiminginfo
				= &rm67162_wqvga_cmd_timing_info;
		panelstruct->panelresetseq
				= &rm67162_wqvga_cmd_reset_seq;
		panelstruct->backlightinfo = &rm67162_wqvga_cmd_backlight;
		pinfo->labibb = NULL;
		pinfo->mipi.panel_on_cmds
				= rm67162_wqvga_cmd_on_command;
		pinfo->mipi.num_of_panel_on_cmds
				= RM67162_WQVGA_CMD_ON_COMMAND;
		pinfo->mipi.panel_off_cmds
				= rm67162_wqvga_cmd_off_command;
		pinfo->mipi.num_of_panel_off_cmds
				= RM67162_WQVGA_CMD_OFF_COMMAND;
		if (phy_db->pll_type == DSI_PLL_TYPE_12NM)
			memcpy(phy_db->timing,
				rm67162_wqvga_cmd_12nm_timings,
				TIMING_SIZE_12NM);
		pinfo->mipi.tx_eot_append = true;
}
#endif /*_PANEL_RM67162_WQVGA_CMD_H_*/
