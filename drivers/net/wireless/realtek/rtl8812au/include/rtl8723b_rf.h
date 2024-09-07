/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __RTL8723B_RF_H__
#define __RTL8723B_RF_H__

#include "rtl8192c_rf.h"

int	PHY_RF6052_Config8723B(	IN	PADAPTER		Adapter	);

VOID
PHY_RF6052SetBandwidth8723B(
	IN	PADAPTER				Adapter,
	IN	CHANNEL_WIDTH		Bandwidth);

VOID
PHY_RF6052SetCckTxPower8723B(
	IN	PADAPTER		Adapter,
	IN	u8*			pPowerlevel);

VOID 
PHY_RF6052SetOFDMTxPower8723B(
	IN	PADAPTER	Adapter,
	IN	u8		*pPowerLevelOFDM,
	IN	u8		*pPowerLevelBW20,
	IN	u8		*pPowerLevelBW40,	
	IN	u8		Channel);

#endif

