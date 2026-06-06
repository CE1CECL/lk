// SPDX-License-Identifier: GPL-2.0-only

#ifndef _LK2ND_GENERATED_PANELS_H_
#define _LK2ND_GENERATED_PANELS_H_

#if 1

// Begin samsung-gtelwifiue

//#include "lk_panel_nt51017_wxga_video.h" // Touch-Screen

// End samsung-gtelwifiue

// Begin mobvoi-catfish

#include "lk_panel_rm67162_wqvga_cmd.h" // Touch-Screen

// End mobvoi-catfish

// Begin cat-s22flip

//#include "lk_panel_jd9161z_boe_ips_video.h" // Touch-Screen
#include "lk_panel_st7789v2_qvga_spi_cmd.h" // Lid-Screen

// End cat-s22flip

//#elif 1

// Begin linux-mdss-dsi-panel-driver-generator

#include "auo_390p_cmd/lk_panel_auo_390p_cmd.h"
#include "auo_400p_cmd/lk_panel_auo_400p_cmd.h"
#include "auo_cx_qvga_cmd/lk_panel_auo_cx_qvga_cmd.h"
#include "auo_qvga_cmd/lk_panel_auo_qvga_cmd.h"
#include "hx8379a_fwvga_skua_video/lk_panel_hx8379a_fwvga_skua_video.h"
#include "hx8379c_fwvga_video/lk_panel_hx8379c_fwvga_video.h"
#include "hx8394d_480p_video/lk_panel_hx8394d_480p_video.h"
#include "hx8394d_720p_video/lk_panel_hx8394d_720p_video.h"
#include "hx8394d_qhd_video/lk_panel_hx8394d_qhd_video.h"
#include "ili9806e_fwvga_video/lk_panel_ili9806e_fwvga_video.h"
#include "nt51017_wxga_video/lk_panel_nt51017_wxga_video.h" // samsung-gtelwifiue
//#include "rm67162_wqvga_cmd/lk_panel_rm67162_wqvga_cmd.h" // mobvoi-catfish
#include "sharp_qhd_video/lk_panel_sharp_qhd_video.h"
#include "truly_wvga_cmd/lk_panel_truly_wvga_cmd.h"

// End linux-mdss-dsi-panel-driver-generator

#else

#include "lk_panel_boent35523_800p_video.h"
#include "lk_panel_boent35523b_800p_video.h"
#include "lk_panel_boe_otm8019a_5p0_fwvga_video.h"
#include "lk_panel_boehx8389c_qhd_video.h"
#include "lk_panel_hx8394d_720p_video.h"
#include "lk_panel_ili9806e_boyi_byt45mp41t1m_4p5cpt.h"
#include "lk_panel_ili9806e_fwvga_hsd_hlt_video.h"
#include "lk_panel_ili9881c_hd_video.h"
#include "lk_panel_innolux_qhd_video.h"
#include "lk_panel_nt35510s_fwvga_cmd.h"
#include "lk_panel_r61308_720p_video.h"
#include "lk_panel_r69431_720p_video.h"

#endif

int oem_panel_select(const char *panel_name, struct panel_struct *panel,
		     struct msm_panel_info *pinfo, struct mdss_dsi_phy_ctrl *phy_db);

#endif /* _LK2ND_GENERATED_PANELS_H_ */
