/***************************************************************************//**
 *   @file   ADRV9025_RxGainTable.h
 *   @brief  adrv9025 RX gain table.
 *   @author GMois (george.mois@analog.com)
********************************************************************************
 * Copyright 2023(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
#ifndef ADRV9025_RX_GAIN_TABLE_H
#define ADRV9025_RX_GAIN_TABLE_H

#include <stdint.h>

struct ADRV9025_RxGainTableEntry {
	uint8_t gainIndex;
	uint8_t rxFeGain;
	uint8_t tiaControl;
	uint8_t adcControl;
	uint8_t extControl;
	uint16_t phaseOffset;
	int16_t digGain;
};

struct ADRV9025_RxGainTableEntry ADRV9025_RxGainTable[] = {
	{0,0,0,0,0,0,0},
	{1,0,0,0,0,0,0},
	{2,0,0,0,0,0,0},
	{3,0,0,0,0,0,0},
	{4,0,0,0,0,0,0},
	{5,0,0,0,0,0,0},
	{6,0,0,0,0,0,0},
	{7,0,0,0,0,0,0},
	{8,0,0,0,0,0,0},
	{9,0,0,0,0,0,0},
	{10,0,0,0,0,0,0},
	{11,0,0,0,0,0,0},
	{12,0,0,0,0,0,0},
	{13,0,0,0,0,0,0},
	{14,0,0,0,0,0,0},
	{15,0,0,0,0,0,0},
	{16,0,0,0,0,0,0},
	{17,0,0,0,0,0,0},
	{18,0,0,0,0,0,0},
	{19,0,0,0,0,0,0},
	{20,0,0,0,0,0,0},
	{21,0,0,0,0,0,0},
	{22,0,0,0,0,0,0},
	{23,0,0,0,0,0,0},
	{24,0,0,0,0,0,0},
	{25,0,0,0,0,0,0},
	{26,0,0,0,0,0,0},
	{27,0,0,0,0,0,0},
	{28,0,0,0,0,0,0},
	{29,0,0,0,0,0,0},
	{30,0,0,0,0,0,0},
	{31,0,0,0,0,0,0},
	{32,0,0,0,0,0,0},
	{33,0,0,0,0,0,0},
	{34,0,0,0,0,0,0},
	{35,0,0,0,0,0,0},
	{36,0,0,0,0,0,0},
	{37,0,0,0,0,0,0},
	{38,0,0,0,0,0,0},
	{39,0,0,0,0,0,0},
	{40,0,0,0,0,0,0},
	{41,0,0,0,0,0,0},
	{42,0,0,0,0,0,0},
	{43,0,0,0,0,0,0},
	{44,0,0,0,0,0,0},
	{45,0,0,0,0,0,0},
	{46,0,0,0,0,0,0},
	{47,0,0,0,0,0,0},
	{48,0,0,0,0,0,0},
	{49,0,0,0,0,0,0},
	{50,0,0,0,0,0,0},
	{51,0,0,0,0,0,0},
	{52,0,0,0,0,0,0},
	{53,0,0,0,0,0,0},
	{54,0,0,0,0,0,0},
	{55,0,0,0,0,0,0},
	{56,0,0,0,0,0,0},
	{57,0,0,0,0,0,0},
	{58,0,0,0,0,0,0},
	{59,0,0,0,0,0,0},
	{60,0,0,0,0,0,0},
	{61,0,0,0,0,0,0},
	{62,0,0,0,0,0,0},
	{63,0,0,0,0,0,0},
	{64,0,0,0,0,0,0},
	{65,0,0,0,0,0,0},
	{66,0,0,0,0,0,0},
	{67,0,0,0,0,0,0},
	{68,0,0,0,0,0,0},
	{69,0,0,0,0,0,0},
	{70,0,0,0,0,0,0},
	{71,0,0,0,0,0,0},
	{72,0,0,0,0,0,0},
	{73,0,0,0,0,0,0},
	{74,0,0,0,0,0,0},
	{75,0,0,0,0,0,0},
	{76,0,0,0,0,0,0},
	{77,0,0,0,0,0,0},
	{78,0,0,0,0,0,0},
	{79,0,0,0,0,0,0},
	{80,0,0,0,0,0,0},
	{81,0,0,0,0,0,0},
	{82,0,0,0,0,0,0},
	{83,0,0,0,0,0,0},
	{84,0,0,0,0,0,0},
	{85,0,0,0,0,0,0},
	{86,0,0,0,0,0,0},
	{87,0,0,0,0,0,0},
	{88,0,0,0,0,0,0},
	{89,0,0,0,0,0,0},
	{90,0,0,0,0,0,0},
	{91,0,0,0,0,0,0},
	{92,0,0,0,0,0,0},
	{93,0,0,0,0,0,0},
	{94,0,0,0,0,0,0},
	{95,0,0,0,0,0,0},
	{96,0,0,0,0,0,0},
	{97,0,0,0,0,0,0},
	{98,0,0,0,0,0,0},
	{99,0,0,0,0,0,0},
	{100,0,0,0,0,0,0},
	{101,0,0,0,0,0,0},
	{102,0,0,0,0,0,0},
	{103,0,0,0,0,0,0},
	{104,0,0,0,0,0,0},
	{105,0,0,0,0,0,0},
	{106,0,0,0,0,0,0},
	{107,0,0,0,0,0,0},
	{108,0,0,0,0,0,0},
	{109,0,0,0,0,0,0},
	{110,0,0,0,0,0,0},
	{111,0,0,0,0,0,0},
	{112,0,0,0,0,0,0},
	{113,0,0,0,0,0,0},
	{114,0,0,0,0,0,0},
	{115,0,0,0,0,0,0},
	{116,0,0,0,0,0,0},
	{117,0,0,0,0,0,0},
	{118,0,0,0,0,0,0},
	{119,0,0,0,0,0,0},
	{120,0,0,0,0,0,0},
	{121,0,0,0,0,0,0},
	{122,0,0,0,0,0,0},
	{123,0,0,0,0,0,0},
	{124,0,0,0,0,0,0},
	{125,0,0,0,0,0,0},
	{126,0,0,0,0,0,0},
	{127,0,0,0,0,0,0},
	{128,0,0,0,0,0,0},
	{129,0,0,0,0,0,0},
	{130,0,0,0,0,0,0},
	{131,0,0,0,0,0,0},
	{132,0,0,0,0,0,0},
	{133,0,0,0,0,0,0},
	{134,0,0,0,0,0,0},
	{135,0,0,0,0,0,0},
	{136,0,0,0,0,0,0},
	{137,0,0,0,0,0,0},
	{138,0,0,0,0,0,0},
	{139,0,0,0,0,0,0},
	{140,0,0,0,0,0,0},
	{141,0,0,0,0,0,0},
	{142,0,0,0,0,0,0},
	{143,0,0,0,0,0,0},
	{144,0,0,0,0,0,0},
	{145,0,0,0,0,0,0},
	{146,0,0,0,0,0,0},
	{147,0,0,0,0,0,0},
	{148,0,0,0,0,0,0},
	{149,0,0,0,0,0,0},
	{150,0,0,0,0,0,0},
	{151,0,0,0,0,0,0},
	{152,0,0,0,0,0,0},
	{153,0,0,0,0,0,0},
	{154,0,0,0,0,0,0},
	{155,0,0,0,0,0,0},
	{156,0,0,0,0,0,0},
	{157,0,0,0,0,0,0},
	{158,0,0,0,0,0,0},
	{159,0,0,0,0,0,0},
	{160,0,0,0,0,0,0},
	{161,0,0,0,0,0,0},
	{162,0,0,0,0,0,0},
	{163,0,0,0,0,0,0},
	{164,0,0,0,0,0,0},
	{165,0,0,0,0,0,0},
	{166,0,0,0,0,0,0},
	{167,0,0,0,0,0,0},
	{168,0,0,0,0,0,0},
	{169,0,0,0,0,0,0},
	{170,0,0,0,0,0,0},
	{171,0,0,0,0,0,0},
	{172,0,0,0,0,0,0},
	{173,0,0,0,0,0,0},
	{174,0,0,0,0,0,0},
	{175,0,0,0,0,0,0},
	{176,0,0,0,0,0,0},
	{177,0,0,0,0,0,0},
	{178,0,0,0,0,0,0},
	{179,0,0,0,0,0,0},
	{180,0,0,0,0,0,0},
	{181,0,0,0,0,0,0},
	{182,0,0,0,0,0,0},
	{183,252,0,0,0,0,0},
	{184,251,0,0,0,0,-29},
	{185,251,0,0,0,0,-19},
	{186,251,0,0,0,0,-9},
	{187,251,0,0,0,0,1},
	{188,251,0,0,0,0,11},
	{189,250,0,0,0,0,-11},
	{190,250,0,0,0,0,-1},
	{191,250,0,0,0,0,9},
	{192,249,0,0,0,0,-10},
	{193,249,0,0,0,0,0},
	{194,248,0,0,0,0,-14},
	{195,248,0,0,0,0,-4},
	{196,248,0,0,0,0,6},
	{197,247,0,0,0,0,-9},
	{198,247,0,0,0,0,1},
	{199,247,0,0,0,0,11},
	{200,246,0,0,0,0,3},
	{201,245,0,0,0,0,-5},
	{202,245,0,0,0,0,5},
	{203,244,0,0,0,0,0},
	{204,243,0,0,0,0,-5},
	{205,243,0,0,0,0,5},
	{206,242,0,0,0,0,2},
	{207,241,0,0,0,0,-1},
	{208,240,0,0,0,0,-2},
	{209,239,0,0,0,0,-4},
	{210,238,0,0,0,0,-4},
	{211,237,0,0,0,0,-4},
	{212,236,0,0,0,0,-2},
	{213,235,0,0,0,0,-2},
	{214,234,0,0,0,0,0},
	{215,233,0,0,0,0,2},
	{216,231,0,0,0,0,-3},
	{217,230,0,0,0,0,0},
	{218,228,0,0,0,0,-3},
	{219,227,0,0,0,0,1},
	{220,225,0,0,0,0,-1},
	{221,223,0,0,0,0,-1},
	{222,221,0,0,0,0,-1},
	{223,219,0,0,0,0,-1},
	{224,217,0,0,0,0,0},
	{225,215,0,0,0,0,0},
	{226,213,0,0,0,0,2},
	{227,210,0,0,0,0,0},
	{228,207,0,0,0,0,-1},
	{229,204,0,0,0,0,-1},
	{230,201,0,0,0,0,-1},
	{231,198,0,0,0,0,0},
	{232,194,0,0,0,0,-1},
	{233,190,0,0,0,0,-1},
	{234,187,0,0,0,0,1},
	{235,183,0,0,0,0,1},
	{236,178,0,0,0,0,0},
	{237,173,0,0,0,0,0},
	{238,168,0,0,0,0,0},
	{239,163,0,0,0,0,0},
	{240,157,0,0,0,0,0},
	{241,151,0,0,0,0,0},
	{242,144,0,0,0,0,0},
	{243,137,0,0,0,0,0},
	{244,129,0,0,0,0,-1},
	{245,121,0,0,0,0,0},
	{246,113,0,0,0,0,0},
	{247,104,0,0,0,0,0},
	{248,94,0,0,0,0,0},
	{249,83,0,0,0,0,0},
	{250,72,0,0,0,0,0},
	{251,59,0,0,0,0,0},
	{252,45,0,0,0,0,0},
	{253,30,0,0,0,0,0},
	{254,15,0,0,0,0,0},
	{255,0,0,0,0,0,0},
};

const char *ADRV9025_RxGainTable_text =
	"Gain Index,FE Control Word,TIA Control,ADC Control,Ext Control,Phase Offset,Digital Gain\n\
	0,0,0,0,0,0,0\n\
	1,0,0,0,0,0,0\n\
	2,0,0,0,0,0,0\n\
	3,0,0,0,0,0,0\n\
	4,0,0,0,0,0,0\n\
	5,0,0,0,0,0,0\n\
	6,0,0,0,0,0,0\n\
	7,0,0,0,0,0,0\n\
	8,0,0,0,0,0,0\n\
	9,0,0,0,0,0,0\n\
	10,0,0,0,0,0,0\n\
	11,0,0,0,0,0,0\n\
	12,0,0,0,0,0,0\n\
	13,0,0,0,0,0,0\n\
	14,0,0,0,0,0,0\n\
	15,0,0,0,0,0,0\n\
	16,0,0,0,0,0,0\n\
	17,0,0,0,0,0,0\n\
	18,0,0,0,0,0,0\n\
	19,0,0,0,0,0,0\n\
	20,0,0,0,0,0,0\n\
	21,0,0,0,0,0,0\n\
	22,0,0,0,0,0,0\n\
	23,0,0,0,0,0,0\n\
	24,0,0,0,0,0,0\n\
	25,0,0,0,0,0,0\n\
	26,0,0,0,0,0,0\n\
	27,0,0,0,0,0,0\n\
	28,0,0,0,0,0,0\n\
	29,0,0,0,0,0,0\n\
	30,0,0,0,0,0,0\n\
	31,0,0,0,0,0,0\n\
	32,0,0,0,0,0,0\n\
	33,0,0,0,0,0,0\n\
	34,0,0,0,0,0,0\n\
	35,0,0,0,0,0,0\n\
	36,0,0,0,0,0,0\n\
	37,0,0,0,0,0,0\n\
	38,0,0,0,0,0,0\n\
	39,0,0,0,0,0,0\n\
	40,0,0,0,0,0,0\n\
	41,0,0,0,0,0,0\n\
	42,0,0,0,0,0,0\n\
	43,0,0,0,0,0,0\n\
	44,0,0,0,0,0,0\n\
	45,0,0,0,0,0,0\n\
	46,0,0,0,0,0,0\n\
	47,0,0,0,0,0,0\n\
	48,0,0,0,0,0,0\n\
	49,0,0,0,0,0,0\n\
	50,0,0,0,0,0,0\n\
	51,0,0,0,0,0,0\n\
	52,0,0,0,0,0,0\n\
	53,0,0,0,0,0,0\n\
	54,0,0,0,0,0,0\n\
	55,0,0,0,0,0,0\n\
	56,0,0,0,0,0,0\n\
	57,0,0,0,0,0,0\n\
	58,0,0,0,0,0,0\n\
	59,0,0,0,0,0,0\n\
	60,0,0,0,0,0,0\n\
	61,0,0,0,0,0,0\n\
	62,0,0,0,0,0,0\n\
	63,0,0,0,0,0,0\n\
	64,0,0,0,0,0,0\n\
	65,0,0,0,0,0,0\n\
	66,0,0,0,0,0,0\n\
	67,0,0,0,0,0,0\n\
	68,0,0,0,0,0,0\n\
	69,0,0,0,0,0,0\n\
	70,0,0,0,0,0,0\n\
	71,0,0,0,0,0,0\n\
	72,0,0,0,0,0,0\n\
	73,0,0,0,0,0,0\n\
	74,0,0,0,0,0,0\n\
	75,0,0,0,0,0,0\n\
	76,0,0,0,0,0,0\n\
	77,0,0,0,0,0,0\n\
	78,0,0,0,0,0,0\n\
	79,0,0,0,0,0,0\n\
	80,0,0,0,0,0,0\n\
	81,0,0,0,0,0,0\n\
	82,0,0,0,0,0,0\n\
	83,0,0,0,0,0,0\n\
	84,0,0,0,0,0,0\n\
	85,0,0,0,0,0,0\n\
	86,0,0,0,0,0,0\n\
	87,0,0,0,0,0,0\n\
	88,0,0,0,0,0,0\n\
	89,0,0,0,0,0,0\n\
	90,0,0,0,0,0,0\n\
	91,0,0,0,0,0,0\n\
	92,0,0,0,0,0,0\n\
	93,0,0,0,0,0,0\n\
	94,0,0,0,0,0,0\n\
	95,0,0,0,0,0,0\n\
	96,0,0,0,0,0,0\n\
	97,0,0,0,0,0,0\n\
	98,0,0,0,0,0,0\n\
	99,0,0,0,0,0,0\n\
	100,0,0,0,0,0,0\n\
	101,0,0,0,0,0,0\n\
	102,0,0,0,0,0,0\n\
	103,0,0,0,0,0,0\n\
	104,0,0,0,0,0,0\n\
	105,0,0,0,0,0,0\n\
	106,0,0,0,0,0,0\n\
	107,0,0,0,0,0,0\n\
	108,0,0,0,0,0,0\n\
	109,0,0,0,0,0,0\n\
	110,0,0,0,0,0,0\n\
	111,0,0,0,0,0,0\n\
	112,0,0,0,0,0,0\n\
	113,0,0,0,0,0,0\n\
	114,0,0,0,0,0,0\n\
	115,0,0,0,0,0,0\n\
	116,0,0,0,0,0,0\n\
	117,0,0,0,0,0,0\n\
	118,0,0,0,0,0,0\n\
	119,0,0,0,0,0,0\n\
	120,0,0,0,0,0,0\n\
	121,0,0,0,0,0,0\n\
	122,0,0,0,0,0,0\n\
	123,0,0,0,0,0,0\n\
	124,0,0,0,0,0,0\n\
	125,0,0,0,0,0,0\n\
	126,0,0,0,0,0,0\n\
	127,0,0,0,0,0,0\n\
	128,0,0,0,0,0,0\n\
	129,0,0,0,0,0,0\n\
	130,0,0,0,0,0,0\n\
	131,0,0,0,0,0,0\n\
	132,0,0,0,0,0,0\n\
	133,0,0,0,0,0,0\n\
	134,0,0,0,0,0,0\n\
	135,0,0,0,0,0,0\n\
	136,0,0,0,0,0,0\n\
	137,0,0,0,0,0,0\n\
	138,0,0,0,0,0,0\n\
	139,0,0,0,0,0,0\n\
	140,0,0,0,0,0,0\n\
	141,0,0,0,0,0,0\n\
	142,0,0,0,0,0,0\n\
	143,0,0,0,0,0,0\n\
	144,0,0,0,0,0,0\n\
	145,0,0,0,0,0,0\n\
	146,0,0,0,0,0,0\n\
	147,0,0,0,0,0,0\n\
	148,0,0,0,0,0,0\n\
	149,0,0,0,0,0,0\n\
	150,0,0,0,0,0,0\n\
	151,0,0,0,0,0,0\n\
	152,0,0,0,0,0,0\n\
	153,0,0,0,0,0,0\n\
	154,0,0,0,0,0,0\n\
	155,0,0,0,0,0,0\n\
	156,0,0,0,0,0,0\n\
	157,0,0,0,0,0,0\n\
	158,0,0,0,0,0,0\n\
	159,0,0,0,0,0,0\n\
	160,0,0,0,0,0,0\n\
	161,0,0,0,0,0,0\n\
	162,0,0,0,0,0,0\n\
	163,0,0,0,0,0,0\n\
	164,0,0,0,0,0,0\n\
	165,0,0,0,0,0,0\n\
	166,0,0,0,0,0,0\n\
	167,0,0,0,0,0,0\n\
	168,0,0,0,0,0,0\n\
	169,0,0,0,0,0,0\n\
	170,0,0,0,0,0,0\n\
	171,0,0,0,0,0,0\n\
	172,0,0,0,0,0,0\n\
	173,0,0,0,0,0,0\n\
	174,0,0,0,0,0,0\n\
	175,0,0,0,0,0,0\n\
	176,0,0,0,0,0,0\n\
	177,0,0,0,0,0,0\n\
	178,0,0,0,0,0,0\n\
	179,0,0,0,0,0,0\n\
	180,0,0,0,0,0,0\n\
	181,0,0,0,0,0,0\n\
	182,0,0,0,0,0,0\n\
	183,252,0,0,0,0,0\n\
	184,251,0,0,0,0,-29\n\
	185,251,0,0,0,0,-19\n\
	186,251,0,0,0,0,-9\n\
	187,251,0,0,0,0,1\n\
	188,251,0,0,0,0,11\n\
	189,250,0,0,0,0,-11\n\
	190,250,0,0,0,0,-1\n\
	191,250,0,0,0,0,9\n\
	192,249,0,0,0,0,-10\n\
	193,249,0,0,0,0,0\n\
	194,248,0,0,0,0,-14\n\
	195,248,0,0,0,0,-4\n\
	196,248,0,0,0,0,6\n\
	197,247,0,0,0,0,-9\n\
	198,247,0,0,0,0,1\n\
	199,247,0,0,0,0,11\n\
	200,246,0,0,0,0,3\n\
	201,245,0,0,0,0,-5\n\
	202,245,0,0,0,0,5\n\
	203,244,0,0,0,0,0\n\
	204,243,0,0,0,0,-5\n\
	205,243,0,0,0,0,5\n\
	206,242,0,0,0,0,2\n\
	207,241,0,0,0,0,-1\n\
	208,240,0,0,0,0,-2\n\
	209,239,0,0,0,0,-4\n\
	210,238,0,0,0,0,-4\n\
	211,237,0,0,0,0,-4\n\
	212,236,0,0,0,0,-2\n\
	213,235,0,0,0,0,-2\n\
	214,234,0,0,0,0,0\n\
	215,233,0,0,0,0,2\n\
	216,231,0,0,0,0,-3\n\
	217,230,0,0,0,0,0\n\
	218,228,0,0,0,0,-3\n\
	219,227,0,0,0,0,1\n\
	220,225,0,0,0,0,-1\n\
	221,223,0,0,0,0,-1\n\
	222,221,0,0,0,0,-1\n\
	223,219,0,0,0,0,-1\n\
	224,217,0,0,0,0,0\n\
	225,215,0,0,0,0,0\n\
	226,213,0,0,0,0,2\n\
	227,210,0,0,0,0,0\n\
	228,207,0,0,0,0,-1\n\
	229,204,0,0,0,0,-1\n\
	230,201,0,0,0,0,-1\n\
	231,198,0,0,0,0,0\n\
	232,194,0,0,0,0,-1\n\
	233,190,0,0,0,0,-1\n\
	234,187,0,0,0,0,1\n\
	235,183,0,0,0,0,1\n\
	236,178,0,0,0,0,0\n\
	237,173,0,0,0,0,0\n\
	238,168,0,0,0,0,0\n\
	239,163,0,0,0,0,0\n\
	240,157,0,0,0,0,0\n\
	241,151,0,0,0,0,0\n\
	242,144,0,0,0,0,0\n\
	243,137,0,0,0,0,0\n\
	244,129,0,0,0,0,-1\n\
	245,121,0,0,0,0,0\n\
	246,113,0,0,0,0,0\n\
	247,104,0,0,0,0,0\n\
	248,94,0,0,0,0,0\n\
	249,83,0,0,0,0,0\n\
	250,72,0,0,0,0,0\n\
	251,59,0,0,0,0,0\n\
	252,45,0,0,0,0,0\n\
	253,30,0,0,0,0,0\n\
	254,15,0,0,0,0,0\n\
	255,0,0,0,0,0,0s\n";

#endif
