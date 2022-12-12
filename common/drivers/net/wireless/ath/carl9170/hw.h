/*
 * Shared Atheros AR9170 Header
 *
 * Register map, hardware-specific definitions
 *
 * Copyright 2008, Johannes Berg <johannes@sipsolutions.net>
 * Copyright 2009-2011 Christian Lamparter <chunkeey@googlemail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, see
 * http://www.gnu.org/licenses/.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *    Copyright (c) 2007-2008 Atheros Communications, Inc.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __CARL9170_SHARED_HW_H
#define __CARL9170_SHARED_HW_H

/* High Speed UART */
#define	AR9170_UART_REG_BASE			0x1c0000

/* Definitions of interrupt registers */
#define	AR9170_UART_REG_RX_BUFFER		(AR9170_UART_REG_BASE + 0x000)
#define	AR9170_UART_REG_TX_HOLDING		(AR9170_UART_REG_BASE + 0x004)
#define	AR9170_UART_REG_FIFO_CONTROL		(AR9170_UART_REG_BASE + 0x010)
#define		AR9170_UART_FIFO_CTRL_RESET_RX_FIFO	0x02
#define		AR9170_UART_FIFO_CTRL_RESET_TX_FIFO	0x04

#define	AR9170_UART_REG_LINE_CONTROL		(AR9170_UART_REG_BASE + 0x014)
#define	AR9170_UART_REG_MODEM_CONTROL		(AR9170_UART_REG_BASE + 0x018)
#define		AR9170_UART_MODEM_CTRL_DTR_BIT		0x01
#define		AR9170_UART_MODEM_CTRL_RTS_BIT		0x02
#define		AR9170_UART_MODEM_CTRL_INTERNAL_LOOP_BACK	0x10
#define		AR9170_UART_MODEM_CTRL_AUTO_RTS		0x20
#define		AR9170_UART_MODEM_CTRL_AUTO_CTR		0x40

#define	AR9170_UART_REG_LINE_STATUS		(AR9170_UART_REG_BASE + 0x01c)
#define		AR9170_UART_LINE_STS_RX_DATA_READY	0x01
#define		AR9170_UART_LINE_STS_RX_BUFFER_OVERRUN	0x02
#define		AR9170_UART_LINE_STS_RX_BREAK_IND	0x10
#define		AR9170_UART_LINE_STS_TX_FIFO_NEAR_EMPTY	0x20
#define		AR9170_UART_LINE_STS_TRANSMITTER_EMPTY	0x40

#define	AR9170_UART_REG_MODEM_STATUS		(AR9170_UART_REG_BASE + 0x020)
#define		AR9170_UART_MODEM_STS_CTS_CHANGE	0x01
#define		AR9170_UART_MODEM_STS_DSR_CHANGE	0x02
#define		AR9170_UART_MODEM_STS_DCD_CHANGE	0x08
#define		AR9170_UART_MODEM_STS_CTS_COMPL		0x10
#define		AR9170_UART_MODEM_STS_DSR_COMPL		0x20
#define		AR9170_UART_MODEM_STS_DCD_COMPL		0x80

#define	AR9170_UART_REG_SCRATCH			(AR9170_UART_REG_BASE + 0x024)
#define	AR9170_UART_REG_DIVISOR_LSB		(AR9170_UART_REG_BASE + 0x028)
#define	AR9170_UART_REG_DIVISOR_MSB		(AR9170_UART_REG_BASE + 0x02c)
#define	AR9170_UART_REG_WORD_RX_BUFFER		(AR9170_UART_REG_BASE + 0x034)
#define	AR9170_UART_REG_WORD_TX_HOLDING		(AR9170_UART_REG_BASE + 0x038)
#define	AR9170_UART_REG_FIFO_COUNT		(AR9170_UART_REG_BASE + 0x03c)
#define	AR9170_UART_REG_REMAINDER		(AR9170_UART_REG_BASE + 0x04c)

/* Timer */
#define	AR9170_TIMER_REG_BASE			0x1c1000

#define	AR9170_TIMER_REG_WATCH_DOG		(AR9170_TIMER_REG_BASE + 0x000)
#define	AR9170_TIMER_REG_TIMER0			(AR9170_TIMER_REG_BASE + 0x010)
#define	AR9170_TIMER_REG_TIMER1			(AR9170_TIMER_REG_BASE + 0x014)
#define	AR9170_TIMER_REG_TIMER2			(AR9170_TIMER_REG_BASE + 0x018)
#define	AR9170_TIMER_REG_TIMER3			(AR9170_TIMER_REG_BASE + 0x01c)
#define	AR9170_TIMER_REG_TIMER4			(AR9170_TIMER_REG_BASE + 0x020)
#define	AR9170_TIMER_REG_CONTROL		(AR9170_TIMER_REG_BASE + 0x024)
#define		AR9170_TIMER_CTRL_DISABLE_CLOCK		0x100

#define	AR9170_TIMER_REG_INTERRUPT		(AR9170_TIMER_REG_BASE + 0x028)
#define		AR9170_TIMER_INT_TIMER0			0x001
#define		AR9170_TIMER_INT_TIMER1			0x002
#define		AR9170_TIMER_INT_TIMER2			0x004
#define		AR9170_TIMER_INT_TIMER3			0x008
#define		AR9170_TIMER_INT_TIMER4			0x010
#define		AR9170_TIMER_INT_TICK_TIMER		0x100

#define	AR9170_TIMER_REG_TICK_TIMER		(AR9170_TIMER_REG_BASE + 0x030)
#define	AR9170_TIMER_REG_CLOCK_LOW		(AR9170_TIMER_REG_BASE + 0x040)
#define	AR9170_TIMER_REG_CLOCK_HIGH		(AR9170_TIMER_REG_BASE + 0x044)

#define	AR9170_MAC_REG_BASE			0x1c3000

#define	AR9170_MAC_REG_POWER_STATE_CTRL		(AR9170_MAC_REG_BASE + 0x500)
#define		AR9170_MAC_POWER_STATE_CTRL_RESET	0x20

#define	AR9170_MAC_REG_MAC_POWER_STATE_CTRL	(AR9170_MAC_REG_BASE + 0x50c)

#define	AR9170_MAC_REG_INT_CTRL			(AR9170_MAC_REG_BASE + 0x510)
#define		AR9170_MAC_INT_TXC			BIT(0)
#define		AR9170_MAC_INT_RXC			BIT(1)
#define		AR9170_MAC_INT_RETRY_FAIL		BIT(2)
#define		AR9170_MAC_INT_WAKEUP			BIT(3)
#define		AR9170_MAC_INT_ATIM			BIT(4)
#define		AR9170_MAC_INT_DTIM			BIT(5)
#define		AR9170_MAC_INT_CFG_BCN			BIT(6)
#define		AR9170_MAC_INT_ABORT			BIT(7)
#define		AR9170_MAC_INT_QOS			BIT(8)
#define		AR9170_MAC_INT_MIMO_PS			BIT(9)
#define		AR9170_MAC_INT_KEY_GEN			BIT(10)
#define		AR9170_MAC_INT_DECRY_NOUSER		BIT(11)
#define		AR9170_MAC_INT_RADAR			BIT(12)
#define		AR9170_MAC_INT_QUIET_FRAME		BIT(13)
#define		AR9170_MAC_INT_PRETBTT			BIT(14)

#define	AR9170_MAC_REG_TSF_L			(AR9170_MAC_REG_BASE + 0x514)
#define	AR9170_MAC_REG_TSF_H			(AR9170_MAC_REG_BASE + 0x518)

#define	AR9170_MAC_REG_ATIM_WINDOW		(AR9170_MAC_REG_BASE + 0x51c)
#define		AR9170_MAC_ATIM_PERIOD_S		0
#define		AR9170_MAC_ATIM_PERIOD			0x0000ffff

#define	AR9170_MAC_REG_BCN_PERIOD		(AR9170_MAC_REG_BASE + 0x520)
#define		AR9170_MAC_BCN_PERIOD_S			0
#define		AR9170_MAC_BCN_PERIOD			0x0000ffff
#define		AR9170_MAC_BCN_DTIM_S			16
#define		AR9170_MAC_BCN_DTIM			0x00ff0000
#define		AR9170_MAC_BCN_AP_MODE			BIT(24)
#define		AR9170_MAC_BCN_IBSS_MODE		BIT(25)
#define		AR9170_MAC_BCN_PWR_MGT			BIT(26)
#define		AR9170_MAC_BCN_STA_PS			BIT(27)

#define	AR9170_MAC_REG_PRETBTT			(AR9170_MAC_REG_BASE + 0x524)
#define		AR9170_MAC_PRETBTT_S			0
#define		AR9170_MAC_PRETBTT			0x0000ffff
#define		AR9170_MAC_PRETBTT2_S			16
#define		AR9170_MAC_PRETBTT2			0xffff0000

#define	AR9170_MAC_REG_MAC_ADDR_L		(AR9170_MAC_REG_BASE + 0x610)
#define	AR9170_MAC_REG_MAC_ADDR_H		(AR9170_MAC_REG_BASE + 0x614)
#define	AR9170_MAC_REG_BSSID_L			(AR9170_MAC_REG_BASE + 0x618)
#define	AR9170_MAC_REG_BSSID_H			(AR9170_MAC_REG_BASE + 0x61c)

#define	AR9170_MAC_REG_GROUP_HASH_TBL_L		(AR9170_MAC_REG_BASE + 0x624)
#define	AR9170_MAC_REG_GROUP_HASH_TBL_H		(AR9170_MAC_REG_BASE + 0x628)

#define	AR9170_MAC_REG_RX_TIMEOUT		(AR9170_MAC_REG_BASE + 0x62c)

#define	AR9170_MAC_REG_BASIC_RATE		(AR9170_MAC_REG_BASE + 0x630)
#define	AR9170_MAC_REG_MANDATORY_RATE		(AR9170_MAC_REG_BASE + 0x634)
#define	AR9170_MAC_REG_RTS_CTS_RATE		(AR9170_MAC_REG_BASE + 0x638)
#define	AR9170_MAC_REG_BACKOFF_PROTECT		(AR9170_MAC_REG_BASE + 0x63c)
#define	AR9170_MAC_REG_RX_THRESHOLD		(AR9170_MAC_REG_BASE + 0x640)
#define	AR9170_MAC_REG_AFTER_PNP		(AR9170_MAC_REG_BASE + 0x648)
#define	AR9170_MAC_REG_RX_PE_DELAY		(AR9170_MAC_REG_BASE + 0x64c)

#define	AR9170_MAC_REG_DYNAMIC_SIFS_ACK		(AR9170_MAC_REG_BASE + 0x658)
#define	AR9170_MAC_REG_SNIFFER			(AR9170_MAC_REG_BASE + 0x674)
#define		AR9170_MAC_SNIFFER_ENABLE_PROMISC	BIT(0)
#define		AR9170_MAC_SNIFFER_DEFAULTS		0x02000000
#define	AR9170_MAC_REG_ENCRYPTION		(AR9170_MAC_REG_BASE + 0x678)
#define		AR9170_MAC_ENCRYPTION_MGMT_RX_SOFTWARE	BIT(2)
#define		AR9170_MAC_ENCRYPTION_RX_SOFTWARE	BIT(3)
#define		AR9170_MAC_ENCRYPTION_DEFAULTS		0x70

#define	AR9170_MAC_REG_MISC_680			(AR9170_MAC_REG_BASE + 0x680)
#define	AR9170_MAC_REG_MISC_684			(AR9170_MAC_REG_BASE + 0x684)
#define	AR9170_MAC_REG_TX_UNDERRUN		(AR9170_MAC_REG_BASE + 0x688)

#define	AR9170_MAC_REG_FRAMETYPE_FILTER		(AR9170_MAC_REG_BASE + 0x68c)
#define		AR9170_MAC_FTF_ASSOC_REQ		BIT(0)
#define		AR9170_MAC_FTF_ASSOC_RESP		BIT(1)
#define		AR9170_MAC_FTF_REASSOC_REQ		BIT(2)
#define		AR9170_MAC_FTF_REASSOC_RESP		BIT(3)
#define		AR9170_MAC_FTF_PRB_REQ			BIT(4)
#define		AR9170_MAC_FTF_PRB_RESP			BIT(5)
#define		AR9170_MAC_FTF_BIT6			BIT(6)
#define		AR9170_MAC_FTF_BIT7			BIT(7)
#define		AR9170_MAC_FTF_BEACON			BIT(8)
#define		AR9170_MAC_FTF_ATIM			BIT(9)
#define		AR9170_MAC_FTF_DEASSOC			BIT(10)
#define		AR9170_MAC_FTF_AUTH			BIT(11)
#define		AR9170_MAC_FTF_DEAUTH			BIT(12)
#define		AR9170_MAC_FTF_BIT13			BIT(13)
#define		AR9170_MAC_FTF_BIT14			BIT(14)
#define		AR9170_MAC_FTF_BIT15			BIT(15)
#define		AR9170_MAC_FTF_BAR			BIT(24)
#define		AR9170_MAC_FTF_BA			BIT(25)
#define		AR9170_MAC_FTF_PSPOLL			BIT(26)
#define		AR9170_MAC_FTF_RTS			BIT(27)
#define		AR9170_MAC_FTF_CTS			BIT(28)
#define		AR9170_MAC_FTF_ACK			BIT(29)
#define		AR9170_MAC_FTF_CFE			BIT(30)
#define		AR9170_MAC_FTF_CFE_ACK			BIT(31)
#define		AR9170_MAC_FTF_DEFAULTS			0x0500ffff
#define		AR9170_MAC_FTF_MONITOR			0xff00ffff

#define	AR9170_MAC_REG_ACK_EXTENSION		(AR9170_MAC_REG_BASE + 0x690)
#define	AR9170_MAC_REG_ACK_TPC			(AR9170_MAC_REG_BASE + 0x694)
#define	AR9170_MAC_REG_EIFS_AND_SIFS		(AR9170_MAC_REG_BASE + 0x698)
#define	AR9170_MAC_REG_RX_TIMEOUT_COUNT		(AR9170_MAC_REG_BASE + 0x69c)
#define	AR9170_MAC_REG_RX_TOTAL			(AR9170_MAC_REG_BASE + 0x6a0)
#define	AR9170_MAC_REG_RX_CRC32			(AR9170_MAC_REG_BASE + 0x6a4)
#define	AR9170_MAC_REG_RX_CRC16			(AR9170_MAC_REG_BASE + 0x6a8)
#define	AR9170_MAC_REG_RX_ERR_DECRYPTION_UNI	(AR9170_MAC_REG_BASE + 0x6ac)
#define	AR9170_MAC_REG_RX_OVERRUN		(AR9170_MAC_REG_BASE + 0x6b0)
#define	AR9170_MAC_REG_RX_ERR_DECRYPTION_MUL	(AR9170_MAC_REG_BASE + 0x6bc)
#define AR9170_MAC_REG_TX_BLOCKACKS		(AR9170_MAC_REG_BASE + 0x6c0)
#define AR9170_MAC_REG_NAV_COUNT		(AR9170_MAC_REG_BASE + 0x6c4)
#define AR9170_MAC_REG_BACKOFF_STATUS		(AR9170_MAC_REG_BASE + 0x6c8)
#define		AR9170_MAC_BACKOFF_CCA			BIT(24)
#define		AR9170_MAC_BACKOFF_TX_PEX		BIT(25)
#define		AR9170_MAC_BACKOFF_RX_PE		BIT(26)
#define		AR9170_MAC_BACKOFF_MD_READY		BIT(27)
#define		AR9170_MAC_BACKOFF_TX_PE		BIT(28)

#define	AR9170_MAC_REG_TX_RETRY			(AR9170_MAC_REG_BASE + 0x6cc)

#define AR9170_MAC_REG_TX_COMPLETE		(AR9170_MAC_REG_BASE + 0x6d4)

#define	AR9170_MAC_REG_CHANNEL_BUSY		(AR9170_MAC_REG_BASE + 0x6e8)
#define	AR9170_MAC_REG_EXT_BUSY			(AR9170_MAC_REG_BASE + 0x6ec)

#define	AR9170_MAC_REG_SLOT_TIME		(AR9170_MAC_REG_BASE + 0x6f0)
#define	AR9170_MAC_REG_TX_TOTAL			(AR9170_MAC_REG_BASE + 0x6f4)
#define AR9170_MAC_REG_ACK_FC			(AR9170_MAC_REG_BASE + 0x6f8)

#define	AR9170_MAC_REG_CAM_MODE			(AR9170_MAC_REG_BASE + 0x700)
#define		AR9170_MAC_CAM_IBSS			0xe0
#define		AR9170_MAC_CAM_AP			0xa1
#define		AR9170_MAC_CAM_STA			0x2
#define		AR9170_MAC_CAM_AP_WDS			0x3
#define		AR9170_MAC_CAM_DEFAULTS			(0xf << 24)
#define		AR9170_MAC_CAM_HOST_PENDING		0x80000000

#define	AR9170_MAC_REG_CAM_ROLL_CALL_TBL_L	(AR9170_MAC_REG_BASE + 0x704)
#define	AR9170_MAC_REG_CAM_ROLL_CALL_TBL_H	(AR9170_MAC_REG_BASE + 0x708)

#define	AR9170_MAC_REG_CAM_ADDR			(AR9170_MAC_REG_BASE + 0x70c)
#define		AR9170_MAC_CAM_ADDR_WRITE		0x80000000
#define	AR9170_MAC_REG_CAM_DATA0		(AR9170_MAC_REG_BASE + 0x720)
#define	AR9170_MAC_REG_CAM_DATA1		(AR9170_MAC_REG_BASE + 0x724)
#define	AR9170_MAC_REG_CAM_DATA2		(AR9170_MAC_REG_BASE + 0x728)
#define	AR9170_MAC_REG_CAM_DATA3		(AR9170_MAC_REG_BASE + 0x72c)

#define	AR9170_MAC_REG_CAM_DBG0			(AR9170_MAC_REG_BASE + 0x730)
#define	AR9170_MAC_REG_CAM_DBG1			(AR9170_MAC_REG_BASE + 0x734)
#define	AR9170_MAC_REG_CAM_DBG2			(AR9170_MAC_REG_BASE + 0x738)
#define	AR9170_MAC_REG_CAM_STATE		(AR9170_MAC_REG_BASE + 0x73c)
#define		AR9170_MAC_CAM_STATE_READ_PENDING	0x40000000
#define		AR9170_MAC_CAM_STATE_WRITE_PENDING	0x80000000

#define	AR9170_MAC_REG_CAM_TXKEY		(AR9170_MAC_REG_BASE + 0x740)
#define	AR9170_MAC_REG_CAM_RXKEY		(AR9170_MAC_REG_BASE + 0x750)

#define	AR9170_MAC_REG_CAM_TX_ENC_TYPE		(AR9170_MAC_REG_BASE + 0x760)
#define	AR9170_MAC_REG_CAM_RX_ENC_TYPE		(AR9170_MAC_REG_BASE + 0x770)
#define	AR9170_MAC_REG_CAM_TX_SERACH_HIT	(AR9170_MAC_REG_BASE + 0x780)
#define	AR9170_MAC_REG_CAM_RX_SERACH_HIT	(AR9170_MAC_REG_BASE + 0x790)

#define	AR9170_MAC_REG_AC0_CW			(AR9170_MAC_REG_BASE + 0xb00)
#define	AR9170_MAC_REG_AC1_CW			(AR9170_MAC_REG_BASE + 0xb04)
#define	AR9170_MAC_REG_AC2_CW			(AR9170_MAC_REG_BASE + 0xb08)
#define	AR9170_MAC_REG_AC3_CW			(AR9170_MAC_REG_BASE + 0xb0c)
#define	AR9170_MAC_REG_AC4_CW			(AR9170_MAC_REG_BASE + 0xb10)
#define	AR9170_MAC_REG_AC2_AC1_AC0_AIFS		(AR9170_MAC_REG_BASE + 0xb14)
#define	AR9170_MAC_REG_AC4_AC3_AC2_AIFS		(AR9170_MAC_REG_BASE + 0xb18)
#define AR9170_MAC_REG_TXOP_ACK_EXTENSION	(AR9170_MAC_REG_BASE + 0xb1c)
#define AR9170_MAC_REG_TXOP_ACK_INTERVAL	(AR9170_MAC_REG_BASE + 0xb20)
#define AR9170_MAC_REG_CONTENTION_POINT		(AR9170_MAC_REG_BASE + 0xb24)
#define	AR9170_MAC_REG_RETRY_MAX		(AR9170_MAC_REG_BASE + 0xb28)
#define AR9170_MAC_REG_TID_CFACK_CFEND_RATE	(AR9170_MAC_REG_BASE + 0xb2c)
#define	AR9170_MAC_REG_TXOP_NOT_ENOUGH_IND	(AR9170_MAC_REG_BASE + 0xb30)
#define AR9170_MAC_REG_TKIP_TSC			(AR9170_MAC_REG_BASE + 0xb34)
#define AR9170_MAC_REG_TXOP_DURATION		(AR9170_MAC_REG_BASE + 0xb38)
#define AR9170_MAC_REG_TX_QOS_THRESHOLD		(AR9170_MAC_REG_BASE + 0xb3c)
#define	AR9170_MAC_REG_QOS_PRIORITY_VIRTUAL_CCA	(AR9170_MAC_REG_BASE + 0xb40)
#define		AR9170_MAC_VIRTUAL_CCA_Q0		BIT(15)
#define		AR9170_MAC_VIRTUAL_CCA_Q1		BIT(16)
#define		AR9170_MAC_VIRTUAL_CCA_Q2		BIT(17)
#define		AR9170_MAC_VIRTUAL_CCA_Q3		BIT(18)
#define		AR9170_MAC_VIRTUAL_CCA_Q4		BIT(19)
#define		AR9170_MAC_VIRTUAL_CCA_ALL		(0xf8000)

#define	AR9170_MAC_REG_AC1_AC0_TXOP		(AR9170_MAC_REG_BASE + 0xb44)
#define	AR9170_MAC_REG_AC3_AC2_TXOP		(AR9170_MAC_REG_BASE + 0xb48)

#define	AR9170_MAC_REG_AMPDU_COUNT		(AR9170_MAC_REG_BASE + 0xb88)
#define	AR9170_MAC_REG_MPDU_COUNT		(AR9170_MAC_REG_BASE + 0xb8c)

#define	AR9170_MAC_REG_AMPDU_FACTOR		(AR9170_MAC_REG_BASE + 0xb9c)
#define		AR9170_MAC_AMPDU_FACTOR			0x7f0000
#define		AR9170_MAC_AMPDU_FACTOR_S		16
#define	AR9170_MAC_REG_AMPDU_DENSITY		(AR9170_MAC_REG_BASE + 0xba0)
#define		AR9170_MAC_AMPDU_DENSITY		0x7
#define		AR9170_MAC_AMPDU_DENSITY_S		0

#define	AR9170_MAC_REG_FCS_SELECT		(AR9170_MAC_REG_BASE + 0xbb0)
#define		AR9170_MAC_FCS_SWFCS			0x1
#define		AR9170_MAC_FCS_FIFO_PROT		0x4

#define	AR9170_MAC_REG_RTS_CTS_TPC		(AR9170_MAC_REG_BASE + 0xbb4)
#define AR9170_MAC_REG_CFEND_QOSNULL_TPC	(AR9170_MAC_REG_BASE + 0xbb8)

#define	AR9170_MAC_REG_ACK_TABLE		(AR9170_MAC_REG_BASE + 0xc00)
#define AR9170_MAC_REG_RX_CONTROL		(AR9170_MAC_REG_BASE + 0xc40)
#define		AR9170_MAC_RX_CTRL_DEAGG		0x1
#define		AR9170_MAC_RX_CTRL_SHORT_FILTER		0x2
#define		AR9170_MAC_RX_CTRL_SA_DA_SEARCH		0x20
#define		AR9170_MAC_RX_CTRL_PASS_TO_HOST		BIT(28)
#define		AR9170_MAC_RX_CTRL_ACK_IN_SNIFFER	BIT(30)

#define AR9170_MAC_REG_RX_CONTROL_1		(AR9170_MAC_REG_BASE + 0xc44)

#define	AR9170_MAC_REG_AMPDU_RX_THRESH		(AR9170_MAC_REG_BASE + 0xc50)

#define	AR9170_MAC_REG_RX_MPDU			(AR9170_MAC_REG_BASE + 0xca0)
#define	AR9170_MAC_REG_RX_DROPPED_MPDU		(AR9170_MAC_REG_BASE + 0xca4)
#define	AR9170_MAC_REG_RX_DEL_MPDU		(AR9170_MAC_REG_BASE + 0xca8)
#define	AR9170_MAC_REG_RX_PHY_MISC_ERROR	(AR9170_MAC_REG_BASE + 0xcac)
#define	AR9170_MAC_REG_RX_PHY_XR_ERROR		(AR9170_MAC_REG_BASE + 0xcb0)
#define	AR9170_MAC_REG_RX_PHY_OFDM_ERROR	(AR9170_MAC_REG_BASE + 0xcb4)
#define	AR9170_MAC_REG_RX_PHY_CCK_ERROR		(AR9170_MAC_REG_BASE + 0xcb8)
#define	AR9170_MAC_REG_RX_PHY_HT_ERROR		(AR9170_MAC_REG_BASE + 0xcbc)
#define	AR9170_MAC_REG_RX_PHY_TOTAL		(AR9170_MAC_REG_BASE + 0xcc0)

#define	AR9170_MAC_REG_DMA_TXQ_ADDR		(AR9170_MAC_REG_BASE + 0xd00)
#define	AR9170_MAC_REG_DMA_TXQ_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd04)
#define	AR9170_MAC_REG_DMA_TXQ0_ADDR		(AR9170_MAC_REG_BASE + 0xd00)
#define	AR9170_MAC_REG_DMA_TXQ0_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd04)
#define	AR9170_MAC_REG_DMA_TXQ1_ADDR		(AR9170_MAC_REG_BASE + 0xd08)
#define	AR9170_MAC_REG_DMA_TXQ1_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd0c)
#define	AR9170_MAC_REG_DMA_TXQ2_ADDR		(AR9170_MAC_REG_BASE + 0xd10)
#define	AR9170_MAC_REG_DMA_TXQ2_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd14)
#define	AR9170_MAC_REG_DMA_TXQ3_ADDR		(AR9170_MAC_REG_BASE + 0xd18)
#define	AR9170_MAC_REG_DMA_TXQ3_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd1c)
#define	AR9170_MAC_REG_DMA_TXQ4_ADDR		(AR9170_MAC_REG_BASE + 0xd20)
#define	AR9170_MAC_REG_DMA_TXQ4_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd24)
#define	AR9170_MAC_REG_DMA_RXQ_ADDR		(AR9170_MAC_REG_BASE + 0xd28)
#define	AR9170_MAC_REG_DMA_RXQ_CURR_ADDR	(AR9170_MAC_REG_BASE + 0xd2c)

#define	AR9170_MAC_REG_DMA_TRIGGER		(AR9170_MAC_REG_BASE + 0xd30)
#define		AR9170_DMA_TRIGGER_TXQ0			BIT(0)
#define		AR9170_DMA_TRIGGER_TXQ1			BIT(1)
#define		AR9170_DMA_TRIGGER_TXQ2			BIT(2)
#define		AR9170_DMA_TRIGGER_TXQ3			BIT(3)
#define		AR9170_DMA_TRIGGER_TXQ4			BIT(4)
#define		AR9170_DMA_TRIGGER_RXQ			BIT(8)

#define AR9170_MAC_REG_DMA_WLAN_STATUS		(AR9170_MAC_REG_BASE + 0xd38)
#define	AR9170_MAC_REG_DMA_STATUS		(AR9170_MAC_REG_BASE + 0xd3c)
#define AR9170_MAC_REG_DMA_TXQ_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd40)
#define	AR9170_MAC_REG_DMA_TXQ0_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd40)
#define	AR9170_MAC_REG_DMA_TXQ1_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd44)
#define	AR9170_MAC_REG_DMA_TXQ2_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd48)
#define	AR9170_MAC_REG_DMA_TXQ3_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd4c)
#define	AR9170_MAC_REG_DMA_TXQ4_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd50)
#define	AR9170_MAC_REG_DMA_TXQ0Q1_LEN		(AR9170_MAC_REG_BASE + 0xd54)
#define	AR9170_MAC_REG_DMA_TXQ2Q3_LEN		(AR9170_MAC_REG_BASE + 0xd58)
#define	AR9170_MAC_REG_DMA_TXQ4_LEN		(AR9170_MAC_REG_BASE + 0xd5c)

#define AR9170_MAC_REG_DMA_TXQX_LAST_ADDR	(AR9170_MAC_REG_BASE + 0xd74)
#define AR9170_MAC_REG_DMA_TXQX_FAIL_ADDR	(AR9170_MAC_REG_BASE + 0xd78)
#define	AR9170_MAC_REG_TXRX_MPI			(AR9170_MAC_REG_BASE + 0xd7c)
#define		AR9170_MAC_TXRX_MPI_TX_MPI_MASK		0x0000000f
#define		AR9170_MAC_TXRX_MPI_TX_TO_MASK		0x0000fff0
#define		AR9170_MAC_TXRX_MPI_RX_MPI_MASK		0x000f0000
#define		AR9170_MAC_TXRX_MPI_RX_TO_MASK		0xfff00000

#define	AR9170_MAC_REG_BCN_ADDR			(AR9170_MAC_REG_BASE + 0xd84)
#define	AR9170_MAC_REG_BCN_LENGTH		(AR9170_MAC_REG_BASE + 0xd88)
#define		AR9170_MAC_BCN_LENGTH_MAX		(512 - 32)

#define AR9170_MAC_REG_BCN_STATUS		(AR9170_MAC_REG_BASE + 0xd8c)

#define	AR9170_MAC_REG_BCN_PLCP			(AR9170_MAC_REG_BASE + 0xd90)
#define	AR9170_MAC_REG_BCN_CTRL			(AR9170_MAC_REG_BASE + 0xd94)
#define		AR9170_BCN_CTRL_READY			0x01
#define		AR9170_BCN_CTRL_LOCK			0x02

#define AR9170_MAC_REG_BCN_CURR_ADDR		(AR9170_MAC_REG_BASE + 0xd98)
#define	AR9170_MAC_REG_BCN_COUNT		(AR9170_MAC_REG_BASE + 0xd9c)
#define	AR9170_MAC_REG_BCN_HT1			(AR9170_MAC_REG_BASE + 0xda0)
#define		AR9170_MAC_BCN_HT1_HT_EN		BIT(0)
#define		AR9170_MAC_BCN_HT1_GF_PMB		BIT(1)
#define		AR9170_MAC_BCN_HT1_SP_EXP		BIT(2)
#define		AR9170_MAC_BCN_HT1_TX_BF		BIT(3)
#define		AR9170_MAC_BCN_HT1_PWR_CTRL_S		4
#define		AR9170_MAC_BCN_HT1_PWR_CTRL		0x70
#define		AR9170_MAC_BCN_HT1_TX_ANT1		BIT(7)
#define		AR9170_MAC_BCN_HT1_TX_ANT0		BIT(8)
#define		AR9170_MAC_BCN_HT1_NUM_LFT_S		9
#define		AR9170_MAC_BCN_HT1_NUM_LFT		0x600
#define		AR9170_MAC_BCN_HT1_BWC_20M_EXT		BIT(16)
#define		AR9170_MAC_BCN_HT1_BWC_40M_SHARED	BIT(17)
#define		AR9170_MAC_BCN_HT1_BWC_40M_DUP		(BIT(16) | BIT(17))
#define		AR9170_MAC_BCN_HT1_BF_MCS_S		18
#define		AR9170_MAC_BCN_HT1_BF_MCS		0x1c0000
#define		AR9170_MAC_BCN_HT1_TPC_S		21
#define		AR9170_MAC_BCN_HT1_TPC			0x7e00000
#define		AR9170_MAC_BCN_HT1_CHAIN_MASK_S		27
#define		AR9170_MAC_BCN_HT1_CHAIN_MASK		0x38000000

#define	AR9170_MAC_REG_BCN_HT2			(AR9170_MAC_REG_BASE + 0xda4)
#define		AR9170_MAC_BCN_HT2_MCS_S		0
#define		AR9170_MAC_BCN_HT2_MCS			0x7f
#define		AR9170_MAC_BCN_HT2_BW40			BIT(8)
#define		AR9170_MAC_BCN_HT2_SMOOTHING		BIT(9)
#define		AR9170_MAC_BCN_HT2_SS			BIT(10)
#define		AR9170_MAC_BCN_HT2_NSS			BIT(11)
#define		AR9170_MAC_BCN_HT2_STBC_S		12
#define		AR9170_MAC_BCN_HT2_STBC			0x3000
#define		AR9170_MAC_BCN_HT2_ADV_COD		BIT(14)
#define		AR9170_MAC_BCN_HT2_SGI			BIT(15)
#define		AR9170_MAC_BCN_HT2_LEN_S		16
#define		AR9170_MAC_BCN_HT2_LEN			0xffff0000

#define	AR9170_MAC_REG_DMA_TXQX_ADDR_CURR	(AR9170_MAC_REG_BASE + 0xdc0)

/* Random number generator */
#define	AR9170_RAND_REG_BASE			0x1d0000

#define	AR9170_RAND_REG_NUM			(AR9170_RAND_REG_BASE + 0x000)
#define	AR9170_RAND_REG_MODE			(AR9170_RAND_REG_BASE + 0x004)
#define		AR9170_RAND_MODE_MANUAL			0x000
#define		AR9170_RAND_MODE_FREE			0x001

/* GPIO */
#define	AR9170_GPIO_REG_BASE			0x1d0100
#define	AR9170_GPIO_REG_PORT_TYPE		(AR9170_GPIO_REG_BASE + 0x000)
#define	AR9170_GPIO_REG_PORT_DATA		(AR9170_GPIO_REG_BASE + 0x004)
#define		AR9170_GPIO_PORT_LED_0			1
#define		AR9170_GPIO_PORT_LED_1			2
/* WPS Button GPIO for TP-Link TL-WN821N */
#define		AR9170_GPIO_PORT_WPS_BUTTON_PRESSED	4

/* Memory Controller */
#define	AR9170_MC_REG_BASE			0x1d1000

#define	AR9170_MC_REG_FLASH_WAIT_STATE		(AR9170_MC_REG_BASE + 0x000)

#define AR9170_SPI_REG_BASE			(AR9170_MC_REG_BASE + 0x200)
#define AR9170_SPI_REG_CONTROL0			(AR9170_SPI_REG_BASE + 0x000)
#define		AR9170_SPI_CONTROL0_BUSY		BIT(0)
#define		AR9170_SPI_CONTROL0_CMD_GO		BIT(1)
#define		AR9170_SPI_CONTROL0_PAGE_WR		BIT(2)
#define		AR9170_SPI_CONTROL0_SEQ_RD		BIT(3)
#define		AR9170_SPI_CONTROL0_CMD_ABORT		BIT(4)
#define		AR9170_SPI_CONTROL0_CMD_LEN_S		8
#define		AR9170_SPI_CONTROL0_CMD_LEN		0x00000f00
#define		AR9170_SPI_CONTROL0_RD_LEN_S		12
#define		AR9170_SPI_CONTROL0_RD_LEN		0x00007000

#define	AR9170_SPI_REG_CONTROL1			(AR9170_SPI_REG_BASE + 0x004)
#define		AR9170_SPI_CONTROL1_SCK_RATE		BIT(0)
#define		AR9170_SPI_CONTROL1_DRIVE_SDO		BIT(1)
#define		AR9170_SPI_CONTROL1_MODE_SEL_S		2
#define		AR9170_SPI_CONTROL1_MODE_SEL		0x000000c0
#define		AR9170_SPI_CONTROL1_WRITE_PROTECT	BIT(4)

#define AR9170_SPI_REG_COMMAND_PORT0		(AR9170_SPI_REG_BASE + 0x008)
#define		AR9170_SPI_COMMAND_PORT0_CMD0_S		0
#define		AR9170_SPI_COMMAND_PORT0_CMD0		0x000000ff
#define		AR9170_SPI_COMMAND_PORT0_CMD1_S		8
#define		AR9170_SPI_COMMAND_PORT0_CMD1		0x0000ff00
#define		AR9170_SPI_COMMAND_PORT0_CMD2_S		16
#define		AR9170_SPI_COMMAND_PORT0_CMD2		0x00ff0000
#define		AR9170_SPI_COMMAND_PORT0_CMD3_S		24
#define		AR9170_SPI_COMMAND_PORT0_CMD3		0xff000000

#define AR9170_SPI_REG_COMMAND_PORT1		(AR9170_SPI_REG_BASE + 0x00C)
#define		AR9170_SPI_COMMAND_PORT1_CMD4_S		0
#define		AR9170_SPI_COMMAND_PORT1_CMD4		0x000000ff
#define		AR9170_SPI_COMMAND_PORT1_CMD5_S		8
#define		AR9170_SPI_COMMAND_PORT1_CMD5		0x0000ff00
#define		AR9170_SPI_COMMAND_PORT1_CMD6_S		16
#define		AR9170_SPI_COMMAND_PORT1_CMD6		0x00ff0000
#define		AR9170_SPI_COMMAND_PORT1_CMD7_S		24
#define		AR9170_SPI_COMMAND_PORT1_CMD7		0xff000000

#define AR9170_SPI_REG_DATA_PORT		(AR9170_SPI_REG_BASE + 0x010)
#define AR9170_SPI_REG_PAGE_WRITE_LEN		(AR9170_SPI_REG_BASE + 0x014)

#define AR9170_EEPROM_REG_BASE			(AR9170_MC_REG_BASE + 0x400)
#define	AR9170_EEPROM_REG_WP_MAGIC1		(AR9170_EEPROM_REG_BASE + 0x000)
#define		AR9170_EEPROM_WP_MAGIC1			0x12345678

#define	AR9170_EEPROM_REG_WP_MAGIC2		(AR9170_EEPROM_REG_BASE + 0x004)
#define		AR9170_EEPROM_WP_MAGIC2			0x55aa00ff

#define	AR9170_EEPROM_REG_WP_MAGIC3		(AR9170_EEPROM_REG_BASE + 0x008)
#define		AR9170_EEPROM_WP_MAGIC3			0x13579ace

#define	AR9170_EEPROM_REG_CLOCK_DIV		(AR9170_EEPROM_REG_BASE + 0x00C)
#define		AR9170_EEPROM_CLOCK_DIV_FAC_S		0
#define		AR9170_EEPROM_CLOCK_DIV_FAC		0x000001ff
#define		AR9170_EEPROM_CLOCK_DIV_FAC_39KHZ	0xff
#define		AR9170_EEPROM_CLOCK_DIV_FAC_78KHZ	0x7f
#define		AR9170_EEPROM_CLOCK_DIV_FAC_312KHZ	0x1f
#define		AR9170_EEPROM_CLOCK_DIV_FAC_10MHZ	0x0
#define	AR9170_EEPROM_CLOCK_DIV_SOFT_RST		BIT(9)

#define AR9170_EEPROM_REG_MODE			(AR9170_EEPROM_REG_BASE + 0x010)
#define	AR9170_EEPROM_MODE_EEPROM_SIZE_16K_PLUS		BIT(31)

#define AR9170_EEPROM_REG_WRITE_PROTECT		(AR9170_EEPROM_REG_BASE + 0x014)
#define		AR9170_EEPROM_WRITE_PROTECT_WP_STATUS	BIT(0)
#define		AR9170_EEPROM_WRITE_PROTECT_WP_SET	BIT(8)

/* Interrupt Controller */
#define	AR9170_MAX_INT_SRC			9
#define	AR9170_INT_REG_BASE			0x1d2000

#define	AR9170_INT_REG_FLAG			(AR9170_INT_REG_BASE + 0x000)
#define	AR9170_INT_REG_FIQ_MASK			(AR9170_INT_REG_BASE + 0x004)
#define	AR9170_INT_REG_IRQ_MASK			(AR9170_INT_REG_BASE + 0x008)
/* INT_REG_FLAG, INT_REG_FIQ_MASK and INT_REG_IRQ_MASK */
#define		AR9170_INT_FLAG_WLAN			0x001
#define		AR9170_INT_FLAG_PTAB_BIT		0x002
#define		AR9170_INT_FLAG_SE_BIT			0x004
#define		AR9170_INT_FLAG_UART_BIT		0x008
#define		AR9170_INT_FLAG_TIMER_BIT		0x010
#define		AR9170_INT_FLAG_EXT_BIT			0x020
#define		AR9170_INT_FLAG_SW_BIT			0x040
#define		AR9170_INT_FLAG_USB_BIT			0x080
#define		AR9170_INT_FLAG_ETHERNET_BIT		0x100

#define	AR9170_INT_REG_PRIORITY1		(AR9170_INT_REG_BASE + 0x00c)
#define	AR9170_INT_REG_PRIORITY2		(AR9170_INT_REG_BASE + 0x010)
#define	AR9170_INT_REG_PRIORITY3		(AR9170_INT_REG_BASE + 0x014)
#define	AR9170_INT_REG_EXT_INT_CONTROL		(AR9170_INT_REG_BASE + 0x018)
#define	AR9170_INT_REG_SW_INT_CONTROL		(AR9170_INT_REG_BASE + 0x01c)
#define		AR9170_INT_SW_INT_ENABLE		0x1

#define	AR9170_INT_REG_FIQ_ENCODE		(AR9170_INT_REG_BASE + 0x020)
#define	AR9170_INT_INT_IRQ_ENCODE		(AR9170_INT_REG_BASE + 0x024)

/* Power Management */
#define	AR9170_PWR_REG_BASE			0x1d4000

#define AR9170_PWR_REG_POWER_STATE		(AR9170_PWR_REG_BASE + 0x000)

#define	AR9170_PWR_REG_RESET			(AR9170_PWR_REG_BASE + 0x004)
#define		AR9170_PWR_RESET_COMMIT_RESET_MASK	BIT(0)
#define		AR9170_PWR_RESET_WLAN_MASK		BIT(1)
#define		AR9170_PWR_RESET_DMA_MASK		BIT(2)
#define		AR9170_PWR_RESET_BRIDGE_MASK		BIT(3)
#define		AR9170_PWR_RESET_AHB_MASK		BIT(9)
#define		AR9170_PWR_RESET_BB_WARM_RESET		BIT(10)
#define		AR9170_PWR_RESET_BB_COLD_RESET		BIT(11)
#define		AR9170_PWR_RESET_ADDA_CLK_COLD_RESET	BIT(12)
#define		AR9170_PWR_RESET_PLL			BIT(13)
#define		AR9170_PWR_RESET_USB_PLL		BIT(14)

#define	AR9170_PWR_REG_CLOCK_SEL		(AR9170_PWR_REG_BASE + 0x008)
#define		AR9170_PWR_CLK_AHB_40MHZ		0
#define		AR9170_PWR_CLK_AHB_20_22MHZ		1
#define		AR9170_PWR_CLK_AHB_40_44MHZ		2
#define		AR9170_PWR_CLK_AHB_80_88MHZ		3
#define		AR9170_PWR_CLK_DAC_160_INV_DLY		0x70

#define	AR9170_PWR_REG_CHIP_REVISION		(AR9170_PWR_REG_BASE + 0x010)
#define AR9170_PWR_REG_PLL_ADDAC		(AR9170_PWR_REG_BASE + 0x014)
#define		AR9170_PWR_PLL_ADDAC_DIV_S		2
#define		AR9170_PWR_PLL_ADDAC_DIV		0xffc
#define	AR9170_PWR_REG_WATCH_DOG_MAGIC		(AR9170_PWR_REG_BASE + 0x020)

/* Faraday USB Controller */
#define	AR9170_USB_REG_BASE			0x1e1000

#define	AR9170_USB_REG_MAIN_CTRL		(AR9170_USB_REG_BASE + 0x000)
#define		AR9170_USB_MAIN_CTRL_REMOTE_WAKEUP	BIT(0)
#define		AR9170_USB_MAIN_CTRL_ENABLE_GLOBAL_INT	BIT(2)
#define		AR9170_USB_MAIN_CTRL_GO_TO_SUSPEND	BIT(3)
#define		AR9170_USB_MAIN_CTRL_RESET		BIT(4)
#define		AR9170_USB_MAIN_CTRL_CHIP_ENABLE	BIT(5)
#define		AR9170_USB_MAIN_CTRL_HIGHSPEED		BIT(6)

#define	AR9170_USB_REG_DEVICE_ADDRESS		(AR9170_USB_REG_BASE + 0x001)
#define		AR9170_USB_DEVICE_ADDRESS_CONFIGURE	BIT(7)

#define	AR9170_USB_REG_TEST			(AR9170_USB_REG_BASE + 0x002)
#define	AR9170_USB_REG_PHY_TEST_SELECT		(AR9170_USB_REG_BASE + 0x008)
#define	AR9170_USB_REG_CX_CONFIG_STATUS		(AR9170_USB_REG_BASE + 0x00b)
#define	AR9170_USB_REG_EP0_DATA			(AR9170_USB_REG_BASE + 0x00c)
#define	AR9170_USB_REG_EP0_DATA1		(AR9170_USB_REG_BASE + 0x00c)
#define	AR9170_USB_REG_EP0_DATA2		(AR9170_USB_REG_BASE + 0x00d)

#define	AR9170_USB_REG_INTR_MASK_BYTE_0		(AR9170_USB_REG_BASE + 0x011)
#define	AR9170_USB_REG_INTR_MASK_BYTE_1		(AR9170_USB_REG_BASE + 0x012)
#define	AR9170_USB_REG_INTR_MASK_BYTE_2		(AR9170_USB_REG_BASE + 0x013)
#define	AR9170_USB_REG_INTR_MASK_BYTE_3		(AR9170_USB_REG_BASE + 0x014)
#define	AR9170_USB_REG_INTR_MASK_BYTE_4		(AR9170_USB_REG_BASE + 0x015)
#define		AR9170_USB_INTR_DISABLE_OUT_INT		(BIT(7) | BIT(6))

#define	AR9170_USB_REG_INTR_MASK_BYTE_5		(AR9170_USB_REG_BASE + 0x016)
#define	AR9170_USB_REG_INTR_MASK_BYTE_6		(AR9170_USB_REG_BASE + 0x017)
#define		AR9170_USB_INTR_DISABLE_IN_INT		BIT(6)

#define	AR9170_USB_REG_INTR_MASK_BYTE_7		(AR9170_USB_REG_BASE + 0x018)

#define	AR9170_USB_REG_INTR_GROUP		(AR9170_USB_REG_BASE + 0x020)

#define	AR9170_USB_REG_INTR_SOURCE_0		(AR9170_USB_REG_BASE + 0x021)
#define		AR9170_USB_INTR_SRC0_SETUP		BIT(0)
#define		AR9170_USB_INTR_SRC0_IN			BIT(1)
#define		AR9170_USB_INTR_SRC0_OUT		BIT(2)
#define		AR9170_USB_INTR_SRC0_FAIL		BIT(3) /* ??? */
#define		AR9170_USB_INTR_SRC0_END		BIT(4) /* ??? */
#define		AR9170_USB_INTR_SRC0_ABORT		BIT(7)

#define	AR9170_USB_REG_INTR_SOURCE_1		(AR9170_USB_REG_BASE + 0x022)
#define	AR9170_USB_REG_INTR_SOURCE_2		(AR9170_USB_REG_BASE + 0x023)
#define	AR9170_USB_REG_INTR_SOURCE_3		(AR9170_USB_REG_BASE + 0x024)
#define	AR9170_USB_REG_INTR_SOURCE_4		(AR9170_USB_REG_BASE + 0x025)
#define	AR9170_USB_REG_INTR_SOURCE_5		(AR9170_USB_REG_BASE + 0x026)
#define	AR9170_USB_REG_INTR_SOURCE_6		(AR9170_USB_REG_BASE + 0x027)
#define	AR9170_USB_REG_INTR_SOURCE_7		(AR9170_USB_REG_BASE + 0x028)
#define		AR9170_USB_INTR_SRC7_USB_RESET		BIT(1)
#define		AR9170_USB_INTR_SRC7_USB_SUSPEND	BIT(2)
#define		AR9170_USB_INTR_SRC7_USB_RESUME		BIT(3)
#define		AR9170_USB_INTR_SRC7_ISO_SEQ_ERR	BIT(4)
#define		AR9170_USB_INTR_SRC7_ISO_SEQ_ABORT	BIT(5)
#define		AR9170_USB_INTR_SRC7_TX0BYTE		BIT(6)
#define		AR9170_USB_INTR_SRC7_RX0BYTE		BIT(7)

#define	AR9170_USB_REG_IDLE_COUNT		(AR9170_USB_REG_BASE + 0x02f)

#define	AR9170_USB_REG_EP_MAP			(AR9170_USB_REG_BASE + 0x030)
#define	AR9170_USB_REG_EP1_MAP			(AR9170_USB_REG_BASE + 0x030)
#define	AR9170_USB_REG_EP2_MAP			(AR9170_USB_REG_BASE + 0x031)
#define	AR9170_USB_REG_EP3_MAP			(AR9170_USB_REG_BASE + 0x032)
#define	AR9170_USB_REG_EP4_MAP			(AR9170_USB_REG_BASE + 0x033)
#define	AR9170_USB_REG_EP5_MAP			(AR9170_USB_REG_BASE + 0x034)
#define	AR9170_USB_REG_EP6_MAP			(AR9170_USB_REG_BASE + 0x035)
#define	AR9170_USB_REG_EP7_MAP			(AR9170_USB_REG_BASE + 0x036)
#define	AR9170_USB_REG_EP8_MAP			(AR9170_USB_REG_BASE + 0x037)
#define	AR9170_USB_REG_EP9_MAP			(AR9170_USB_REG_BASE + 0x038)
#define	AR9170_USB_REG_EP10_MAP			(AR9170_USB_REG_BASE + 0x039)

#define	AR9170_USB_REG_EP_IN_MAX_SIZE_HIGH	(AR9170_USB_REG_BASE + 0x03f)
#define		AR9170_USB_EP_IN_STALL			0x8
#define		AR9170_USB_EP_IN_TOGGLE			0x10

#define	AR9170_USB_REG_EP_IN_MAX_SIZE_LOW	(AR9170_USB_REG_BASE + 0x03e)

#define	AR9170_USB_REG_EP_OUT_MAX_SIZE_HIGH	(AR9170_USB_REG_BASE + 0x05f)
#define		AR9170_USB_EP_OUT_STALL			0x8
#define		AR9170_USB_EP_OUT_TOGGLE		0x10

#define	AR9170_USB_REG_EP_OUT_MAX_SIZE_LOW	(AR9170_USB_REG_BASE + 0x05e)

#define	AR9170_USB_REG_EP3_BYTE_COUNT_HIGH	(AR9170_USB_REG_BASE + 0x0ae)
#define	AR9170_USB_REG_EP3_BYTE_COUNT_LOW	(AR9170_USB_REG_BASE + 0x0be)
#define	AR9170_USB_REG_EP4_BYTE_COUNT_HIGH	(AR9170_USB_REG_BASE + 0x0af)
#define	AR9170_USB_REG_EP4_BYTE_COUNT_LOW	(AR9170_USB_REG_BASE + 0x0bf)

#define	AR9170_USB_REG_FIFO_MAP			(AR9170_USB_REG_BASE + 0x080)
#define	AR9170_USB_REG_FIFO0_MAP		(AR9170_USB_REG_BASE + 0x080)
#define	AR9170_USB_REG_FIFO1_MAP		(AR9170_USB_REG_BASE + 0x081)
#define	AR9170_USB_REG_FIFO2_MAP		(AR9170_USB_REG_BASE + 0x082)
#define	AR9170_USB_REG_FIFO3_MAP		(AR9170_USB_REG_BASE + 0x083)
#define	AR9170_USB_REG_FIFO4_MAP		(AR9170_USB_REG_BASE + 0x084)
#define	AR9170_USB_REG_FIFO5_MAP		(AR9170_USB_REG_BASE + 0x085)
#define	AR9170_USB_REG_FIFO6_MAP		(AR9170_USB_REG_BASE + 0x086)
#define	AR9170_USB_REG_FIFO7_MAP		(AR9170_USB_REG_BASE + 0x087)
#define	AR9170_USB_REG_FIFO8_MAP		(AR9170_USB_REG_BASE + 0x088)
#define	AR9170_USB_REG_FIFO9_MAP		(AR9170_USB_REG_BASE + 0x089)

#define	AR9170_USB_REG_FIFO_CONFIG		(AR9170_USB_REG_BASE + 0x090)
#define	AR9170_USB_REG_FIFO0_CONFIG		(AR9170_USB_REG_BASE + 0x090)
#define	AR9170_USB_REG_FIFO1_CONFIG		(AR9170_USB_REG_BASE + 0x091)
#define	AR9170_USB_REG_FIFO2_CONFIG		(AR9170_USB_REG_BASE + 0x092)
#define	AR9170_USB_REG_FIFO3_CONFIG		(AR9170_USB_REG_BASE + 0x093)
#define	AR9170_USB_REG_FIFO4_CONFIG		(AR9170_USB_REG_BASE + 0x094)
#define	AR9170_USB_REG_FIFO5_CONFIG		(AR9170_USB_REG_BASE + 0x095)
#define	AR9170_USB_REG_FIFO6_CONFIG		(AR9170_USB_REG_BASE + 0x096)
#define	AR9170_USB_REG_FIFO7_CONFIG		(AR9170_USB_REG_BASE + 0x097)
#define	AR9170_USB_REG_FIFO8_CONFIG		(AR9170_USB_REG_BASE + 0x098)
#define	AR9170_USB_REG_FIFO9_CONFIG		(AR9170_USB_REG_BASE + 0x099)

#define	AR9170_USB_REG_EP3_DATA			(AR9170_USB_REG_BASE + 0x0f8)
#define	AR9170_USB_REG_EP4_DATA			(AR9170_USB_REG_BASE + 0x0fc)

#define	AR9170_USB_REG_FIFO_SIZE		(AR9170_USB_REG_BASE + 0x100)
#define	AR9170_USB_REG_DMA_CTL			(AR9170_USB_REG_BASE + 0x108)
#define		AR9170_USB_DMA_CTL_ENABLE_TO_DEVICE	BIT(0)
#define		AR9170_USB_DMA_CTL_ENABLE_FROM_DEVICE	BIT(1)
#define		AR9170_USB_DMA_CTL_HIGH_SPEED		BIT(2)
#define		AR9170_USB_DMA_CTL_UP_PACKET_MODE	BIT(3)
#define		AR9170_USB_DMA_CTL_UP_STREAM_S		4
#define		AR9170_USB_DMA_CTL_UP_STREAM		(BIT(4) | BIT(5))
#define		AR9170_USB_DMA_CTL_UP_STREAM_4K		(0)
#define		AR9170_USB_DMA_CTL_UP_STREAM_8K		BIT(4)
#define		AR9170_USB_DMA_CTL_UP_STREAM_16K	BIT(5)
#define		AR9170_USB_DMA_CTL_UP_STREAM_32K	(BIT(4) | BIT(5))
#define		AR9170_USB_DMA_CTL_DOWN_STREAM		BIT(6)

#define	AR9170_USB_REG_DMA_STATUS		(AR9170_USB_REG_BASE + 0x10c)
#define		AR9170_USB_DMA_STATUS_UP_IDLE		BIT(8)
#define		AR9170_USB_DMA_STATUS_DN_IDLE		BIT(16)

#define	AR9170_USB_REG_MAX_AGG_UPLOAD		(AR9170_USB_REG_BASE + 0x110)
#define	AR9170_USB_REG_UPLOAD_TIME_CTL		(AR9170_USB_REG_BASE + 0x114)

#define AR9170_USB_REG_WAKE_UP			(AR9170_USB_REG_BASE + 0x120)
#define		AR9170_USB_WAKE_UP_WAKE			BIT(0)

#define	AR9170_USB_REG_CBUS_CTRL		(AR9170_USB_REG_BASE + 0x1f0)
#define		AR9170_USB_CBUS_CTRL_BUFFER_END		(BIT(1))

/* PCI/USB to AHB Bridge */
#define	AR9170_PTA_REG_BASE			0x1e2000

#define	AR9170_PTA_REG_CMD			(AR9170_PTA_REG_BASE + 0x000)
#define	AR9170_PTA_REG_PARAM1			(AR9170_PTA_REG_BASE + 0x004)
#define	AR9170_PTA_REG_PARAM2			(AR9170_PTA_REG_BASE + 0x008)
#define	AR9170_PTA_REG_PARAM3			(AR9170_PTA_REG_BASE + 0x00c)
#define	AR9170_PTA_REG_RSP			(AR9170_PTA_REG_BASE + 0x010)
#define	AR9170_PTA_REG_STATUS1			(AR9170_PTA_REG_BASE + 0x014)
#define	AR9170_PTA_REG_STATUS2			(AR9170_PTA_REG_BASE + 0x018)
#define	AR9170_PTA_REG_STATUS3			(AR9170_PTA_REG_BASE + 0x01c)
#define	AR9170_PTA_REG_AHB_INT_FLAG		(AR9170_PTA_REG_BASE + 0x020)
#define	AR9170_PTA_REG_AHB_INT_MASK		(AR9170_PTA_REG_BASE + 0x024)
#define	AR9170_PTA_REG_AHB_INT_ACK		(AR9170_PTA_REG_BASE + 0x028)
#define	AR9170_PTA_REG_AHB_SCRATCH1		(AR9170_PTA_REG_BASE + 0x030)
#define	AR9170_PTA_REG_AHB_SCRATCH2		(AR9170_PTA_REG_BASE + 0x034)
#define	AR9170_PTA_REG_AHB_SCRATCH3		(AR9170_PTA_REG_BASE + 0x038)
#define	AR9170_PTA_REG_AHB_SCRATCH4		(AR9170_PTA_REG_BASE + 0x03c)

#define	AR9170_PTA_REG_SHARE_MEM_CTRL		(AR9170_PTA_REG_BASE + 0x124)

/*
 * PCI to AHB Bridge
 */

#define	AR9170_PTA_REG_INT_FLAG			(AR9170_PTA_REG_BASE + 0x100)
#define		AR9170_PTA_INT_FLAG_DN			0x01
#define		AR9170_PTA_INT_FLAG_UP			0x02
#define		AR9170_PTA_INT_FLAG_CMD			0x04

#define	AR9170_PTA_REG_INT_MASK			(AR9170_PTA_REG_BASE + 0x104)
#define	AR9170_PTA_REG_DN_DMA_ADDRL		(AR9170_PTA_REG_BASE + 0x108)
#define	AR9170_PTA_REG_DN_DMA_ADDRH		(AR9170_PTA_REG_BASE + 0x10c)
#define	AR9170_PTA_REG_UP_DMA_ADDRL		(AR9170_PTA_REG_BASE + 0x110)
#define	AR9170_PTA_REG_UP_DMA_ADDRH		(AR9170_PTA_REG_BASE + 0x114)
#define	AR9170_PTA_REG_DN_PEND_TIME		(AR9170_PTA_REG_BASE + 0x118)
#define	AR9170_PTA_REG_UP_PEND_TIME		(AR9170_PTA_REG_BASE + 0x11c)
#define	AR9170_PTA_REG_CONTROL			(AR9170_PTA_REG_BASE + 0x120)
#define		AR9170_PTA_CTRL_4_BEAT_BURST		0x00
#define		AR9170_PTA_CTRL_8_BEAT_BURST		0x01
#define		AR9170_PTA_CTRL_16_BEAT_BURST		0x02
#define		AR9170_PTA_CTRL_LOOPBACK_MODE		0x10

#define	AR9170_PTA_REG_MEM_CTRL			(AR9170_PTA_REG_BASE + 0x124)
#define	AR9170_PTA_REG_MEM_ADDR			(AR9170_PTA_REG_BASE + 0x128)
#define	AR9170_PTA_REG_DN_DMA_TRIGGER		(AR9170_PTA_REG_BASE + 0x12c)
#define	AR9170_PTA_REG_UP_DMA_TRIGGER		(AR9170_PTA_REG_BASE + 0x130)
#define	AR9170_PTA_REG_DMA_STATUS		(AR9170_PTA_REG_BASE + 0x134)
#define	AR9170_PTA_REG_DN_CURR_ADDRL		(AR9170_PTA_REG_BASE + 0x138)
#define	AR9170_PTA_REG_DN_CURR_ADDRH		(AR9170_PTA_REG_BASE + 0x13c)
#define	AR9170_PTA_REG_UP_CURR_ADDRL		(AR9170_PTA_REG_BASE + 0x140)
#define	AR9170_PTA_REG_UP_CURR_ADDRH		(AR9170_PTA_REG_BASE + 0x144)
#define	AR9170_PTA_REG_DMA_MODE_CTRL		(AR9170_PTA_REG_BASE + 0x148)
#define		AR9170_PTA_DMA_MODE_CTRL_RESET		BIT(0)
#define		AR9170_PTA_DMA_MODE_CTRL_DISABLE_USB	BIT(1)

/* Protocol Controller Module */
#define	AR9170_MAC_REG_PC_REG_BASE		(AR9170_MAC_REG_BASE + 0xe00)


#define	AR9170_NUM_LEDS				2

/* CAM */
#define	AR9170_CAM_MAX_USER			64
#define	AR9170_CAM_MAX_KEY_LENGTH		16

#define AR9170_SRAM_OFFSET		0x100000
#define AR9170_SRAM_SIZE		0x18000

#define AR9170_PRAM_OFFSET		0x200000
#define AR9170_PRAM_SIZE		0x8000

enum cpu_clock {
	AHB_STATIC_40MHZ = 0,
	AHB_GMODE_22MHZ = 1,
	AHB_AMODE_20MHZ = 1,
	AHB_GMODE_44MHZ = 2,
	AHB_AMODE_40MHZ = 2,
	AHB_GMODE_88MHZ = 3,
	AHB_AMODE_80MHZ = 3
};

/* USB endpoints */
enum ar9170_usb_ep {
	/*
	 * Control EP is always EP 0 (USB SPEC)
	 *
	 * The weird thing is: the original firmware has a few
	 * comments that suggest that the actual EP numbers
	 * are in the 1 to 10 range?!
	 */
	AR9170_USB_EP_CTRL		= 0,

	AR9170_USB_EP_TX,
	AR9170_USB_EP_RX,
	AR9170_USB_EP_IRQ,
	AR9170_USB_EP_CMD,
	AR9170_USB_NUM_EXTRA_EP		= 4,

	__AR9170_USB_NUM_EP,

	__AR9170_USB_NUM_MAX_EP		= 10
};

enum ar9170_usb_fifo {
	__AR9170_USB_NUM_MAX_FIFO	= 10
};

enum ar9170_tx_queues {
	AR9170_TXQ0	= 0,
	AR9170_TXQ1,
	AR9170_TXQ2,
	AR9170_TXQ3,
	AR9170_TXQ_SPECIAL,

	/* keep last */
	__AR9170_NUM_TX_QUEUES = 5
};

#define	AR9170_TX_STREAM_TAG		0x697e
#define	AR9170_RX_STREAM_TAG		0x4e00
#define	AR9170_RX_STREAM_MAX_SIZE	0xffff

struct ar9170_stream {
	__le16 length;
	__le16 tag;

	u8 payload[];
} __packed __aligned(4);
#define AR9170_STREAM_LEN				4

#define AR9170_MAX_ACKTABLE_ENTRIES			8
#define AR9170_MAX_VIRTUAL_MAC				7

#define	AR9170_USB_EP_CTRL_MAX				64
#define	AR9170_USB_EP_TX_MAX				512
#define	AR9170_USB_EP_RX_MAX				512
#define	AR9170_USB_EP_IRQ_MAX				64
#define	AR9170_USB_EP_CMD_MAX				64

/* Trigger PRETBTT interrupt 6 Kus earlier */
#define CARL9170_PRETBTT_KUS				6

#define	AR5416_MAX_RATE_POWER				63

#define SET_VAL(reg, value, newvalue)					\
	(value = ((value) & ~reg) | (((newvalue) << reg##_S) & reg))

#define SET_CONSTVAL(reg, newvalue)					\
	(((newvalue) << reg##_S) & reg)

#define MOD_VAL(reg, value, newvalue)					\
	(((value) & ~reg) | (((newvalue) << reg##_S) & reg))

#define GET_VAL(reg, value)						\
	(((value) & reg) >> reg##_S)

#endif	/* __CARL9170_SHARED_HW_H */
