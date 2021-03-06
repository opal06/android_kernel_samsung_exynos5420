#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

#include "mdnie.h"


static unsigned short tune_outdoor[] = {
	/*start N1 auto gallery outdoor 1.8*/
	0x0000,0x0000,	/*BANK 0*/
	0x0008,0x0130,	/*SCR2 CC1 | CS2 DE1 | 0*/
	0x0009,0x0000,	/*MCM off*/
	0x000a,0x0000,	/*UC off*/
	0x00b0,0x0080,	/*DE egth*/
	0x00b2,0x0000,	/*DE pe*/
	0x00b3,0x0050,	/*DE pf*/
	0x00b4,0x0050,	/*DE pb*/
	0x00b5,0x0050,	/*DE ne*/
	0x00b6,0x0050,	/*DE nf*/
	0x00b7,0x0050,	/*DE nb*/
	0x00b8,0x1000,	/*DE max ratio*/
	0x00b9,0x0100,	/*DE min ratio*/
	0x00c0,0x1010,	/*CS hg ry*/
	0x00c1,0x1010,	/*CS hg gc*/
	0x00c2,0x1010,	/*CS hg bm*/
	0x00c3,0x1804,	/*CS weight grayTH*/
	0x0000,0x0001,	/*BANK 1*/
	0x003f,0x0080,	/*CC chsel strength*/
	0x0040,0x0000,	/*CC lut r  0*/
	0x0041,0x1aa0,	/*CC lut r  16 144 */
	0x0042,0x2fae,	/*CC lut r  32 160*/
	0x0043,0x41bc,	/*CC lut r  48 176*/
	0x0044,0x52ca,	/*CC lut r  64 192*/
	0x0045,0x63d8,	/*CC lut r  80 208*/
	0x0046,0x73e5,	/*CC lut r  96 224*/
	0x0047,0x82f2,	/*CC lut r 112 240*/
	0x0048,0x91ff,	/*CC lut r 128 255*/
	0x0071,0xff00,	/*SCR RrCr*/
	0x0072,0x00ff,	/*SCR RgCg*/
	0x0073,0x00ff,	/*SCR RbCb*/
	0x0074,0x00ff,	/*SCR GrMr*/
	0x0075,0xff00,	/*SCR GgMg*/
	0x0076,0x00ff,	/*SCR GbMb*/
	0x0077,0x00ff,	/*SCR BrYr*/
	0x0078,0x00ff,	/*SCR BgYg*/
	0x0079,0xff00,	/*SCR BbYb*/
	0x007a,0x00ff,	/*SCR KrWr*/
	0x007b,0x00ff,	/*SCR KgWg*/
	0x007c,0x00ff,	/*SCR KbWb*/
	0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,

};

struct mdnie_tuning_info outdoor_table = {"outdoor", tune_outdoor};


static unsigned short tune_camera[] = {
/*start N1 camera*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0020,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,
};

static unsigned short tune_auto_camera[] = {
/*start N1 auto camera*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0020,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,
};

static unsigned short tune_ebook[] = {
/*start N1 ebook*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0220,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00f9,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00e4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/


	END_SEQ, 0x0000,
};

static unsigned short tune_email[] = {
/*start N1 email*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0220,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00fe,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00f1,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_ui[] = {
/*start N1 auto ui*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0120,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r  0*/
0x0041,0x0893,	/*CC lut r  16 144 */
0x0042,0x1aa5,	/*CC lut r  32 160*/
0x0043,0x29b7,	/*CC lut r  48 176*/
0x0044,0x39c8,	/*CC lut r  64 192*/
0x0045,0x4bd8,	/*CC lut r  80 208*/
0x0046,0x5de6,	/*CC lut r  96 224*/
0x0047,0x6ff4,	/*CC lut r 112 240*/
0x0048,0x81ff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_video[] = {
/*start N1 auto video*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0130,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0060,	/*DE pe*/
0x00b3,0x0060,	/*DE pf*/
0x00b4,0x0060,	/*DE pb*/
0x00b5,0x0060,	/*DE ne*/
0x00b6,0x0060,	/*DE nf*/
0x00b7,0x0060,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r  0*/
0x0041,0x0893,	/*CC lut r  16 144 */
0x0042,0x1aa5,	/*CC lut r  32 160*/
0x0043,0x29b7,	/*CC lut r  48 176*/
0x0044,0x39c8,	/*CC lut r  64 192*/
0x0045,0x4bd8,	/*CC lut r  80 208*/
0x0046,0x5de6,	/*CC lut r  96 224*/
0x0047,0x6ff4,	/*CC lut r 112 240*/
0x0048,0x81ff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_gallery[] = {
/*start N1 auto gallery*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0030,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0000,	/*DE pe*/
0x00b3,0x0050,	/*DE pf*/
0x00b4,0x0050,	/*DE pb*/
0x00b5,0x0050,	/*DE ne*/
0x00b6,0x0050,	/*DE nf*/
0x00b7,0x0050,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_auto_vt[] = {
/*start N1 auto vtcall*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0030,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0050,	/*DE pe*/
0x00b3,0x0050,	/*DE pf*/
0x00b4,0x0050,	/*DE pb*/
0x00b5,0x0050,	/*DE ne*/
0x00b6,0x0050,	/*DE nf*/
0x00b7,0x0050,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/	

	END_SEQ, 0x0000,
};

static unsigned short tune_auto_browser[] = {
/*start N1 auto browser*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0020,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_ui[] = {
/*start N1 dynamic ui*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0120,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r	0*/
0x0041,0x08a0,	/*CC lut r  16 144 */
0x0042,0x16b4,	/*CC lut r  32 160*/
0x0043,0x28c8,	/*CC lut r  48 176*/
0x0044,0x3cdc,	/*CC lut r  64 192*/
0x0045,0x50ec,	/*CC lut r  80 208*/
0x0046,0x64f6,	/*CC lut r  96 224*/
0x0047,0x78fc,	/*CC lut r 112 240*/
0x0048,0x8cff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_video[] = {
/*start N1 dynamic video*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0130,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0080,	/*DE pe*/
0x00b3,0x0080,	/*DE pf*/
0x00b4,0x0080,	/*DE pb*/
0x00b5,0x0080,	/*DE ne*/
0x00b6,0x0080,	/*DE nf*/
0x00b7,0x0080,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r	0*/
0x0041,0x08a0,	/*CC lut r  16 144 */
0x0042,0x16b4,	/*CC lut r  32 160*/
0x0043,0x28c8,	/*CC lut r  48 176*/
0x0044,0x3cdc,	/*CC lut r  64 192*/
0x0045,0x50ec,	/*CC lut r  80 208*/
0x0046,0x64f6,	/*CC lut r  96 224*/
0x0047,0x78fc,	/*CC lut r 112 240*/
0x0048,0x8cff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_gallery[] = {
/*start N1 dynamic gallery*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0130,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0000,	/*DE pe*/
0x00b3,0x0060,	/*DE pf*/
0x00b4,0x0060,	/*DE pb*/
0x00b5,0x0060,	/*DE ne*/
0x00b6,0x0060,	/*DE nf*/
0x00b7,0x0060,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r	0*/
0x0041,0x0893,	/*CC lut r	16 144 */
0x0042,0x1aa5,	/*CC lut r	32 160*/
0x0043,0x29b7,	/*CC lut r	48 176*/
0x0044,0x39c8,	/*CC lut r	64 192*/
0x0045,0x4bd8,	/*CC lut r	80 208*/
0x0046,0x5de6,	/*CC lut r	96 224*/
0x0047,0x6ff4,	/*CC lut r 112 240*/
0x0048,0x81ff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_vt[] = {
/*start N1 dynamic vtcall*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0130,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0060,	/*DE pe*/
0x00b3,0x0060,	/*DE pf*/
0x00b4,0x0060,	/*DE pb*/
0x00b5,0x0060,	/*DE ne*/
0x00b6,0x0060,	/*DE nf*/
0x00b7,0x0060,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r	0*/
0x0041,0x0893,	/*CC lut r	16 144 */
0x0042,0x1aa5,	/*CC lut r	32 160*/
0x0043,0x29b7,	/*CC lut r	48 176*/
0x0044,0x39c8,	/*CC lut r	64 192*/
0x0045,0x4bd8,	/*CC lut r	80 208*/
0x0046,0x5de6,	/*CC lut r	96 224*/
0x0047,0x6ff4,	/*CC lut r 112 240*/
0x0048,0x81ff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_dynamic_browser[] = {
/*start N1 dynamic browser*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0120,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x003f,0x0080,	/*CC chsel strength*/
0x0040,0x0000,	/*CC lut r	0*/
0x0041,0x0893,	/*CC lut r	16 144 */
0x0042,0x1aa5,	/*CC lut r	32 160*/
0x0043,0x29b7,	/*CC lut r	48 176*/
0x0044,0x39c8,	/*CC lut r	64 192*/
0x0045,0x4bd8,	/*CC lut r	80 208*/
0x0046,0x5de6,	/*CC lut r	96 224*/
0x0047,0x6ff4,	/*CC lut r 112 240*/
0x0048,0x81ff,	/*CC lut r 128 255*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,
};

static unsigned short tune_standard_ui[] = {
/*start N1 standard ui*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0020,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/

	END_SEQ, 0x0000,
};

static unsigned short tune_standard_video[] = {
/*start N1 standard video*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0030,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0050,	/*DE pe*/
0x00b3,0x0050,	/*DE pf*/
0x00b4,0x0050,	/*DE pb*/
0x00b5,0x0050,	/*DE ne*/
0x00b6,0x0050,	/*DE nf*/
0x00b7,0x0050,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_gallery[] = {
/*start N1 standard gallery*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0030,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0000,	/*DE pe*/
0x00b3,0x0050,	/*DE pf*/
0x00b4,0x0050,	/*DE pb*/
0x00b5,0x0050,	/*DE ne*/
0x00b6,0x0050,	/*DE nf*/
0x00b7,0x0050,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_vt[] = {
/*start N1 standard vtcall*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0030,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00b0,0x0080,	/*DE egth*/
0x00b2,0x0050,	/*DE pe*/
0x00b3,0x0050,	/*DE pf*/
0x00b4,0x0050,	/*DE pb*/
0x00b5,0x0050,	/*DE ne*/
0x00b6,0x0050,	/*DE nf*/
0x00b7,0x0050,	/*DE nb*/
0x00b8,0x1000,	/*DE max ratio*/
0x00b9,0x0100,	/*DE min ratio*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_standard_browser[] = {
/*start N1 standard browser*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0020,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x00c0,0x1010,	/*CS hg ry*/
0x00c1,0x1010,	/*CS hg gc*/
0x00c2,0x1010,	/*CS hg bm*/
0x00c3,0x1404,	/*CS weight grayTH*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00ff,	/*SCR KgWg*/
0x007c,0x00ff,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_ui[] = {
/*start N1 movie ui*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0200,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00fc,	/*SCR KgWg*/
0x007c,0x00f4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_video[] = {
/*start N1 movie video*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0200,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00fc,	/*SCR KgWg*/
0x007c,0x00f4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_gallery[] = {
/*start N1 movie gallery*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0200,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00fc,	/*SCR KgWg*/
0x007c,0x00f4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_vt[] = {
/*start N1 movie vtcall*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0200,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00fc,	/*SCR KgWg*/
0x007c,0x00f4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};

static unsigned short tune_movie_browser[] = {
/*start N1 movie browser*/
0x0000,0x0000,	/*BANK 0*/
0x0008,0x0200,	/*SCR2 CC1 | CS2 DE1 | 0*/
0x0009,0x0000,	/*MCM off*/
0x000a,0x0000,	/*UC off*/
0x0000,0x0001,	/*BANK 1*/
0x0071,0xff00,	/*SCR RrCr*/
0x0072,0x00ff,	/*SCR RgCg*/
0x0073,0x00ff,	/*SCR RbCb*/
0x0074,0x00ff,	/*SCR GrMr*/
0x0075,0xff00,	/*SCR GgMg*/
0x0076,0x00ff,	/*SCR GbMb*/
0x0077,0x00ff,	/*SCR BrYr*/
0x0078,0x00ff,	/*SCR BgYg*/
0x0079,0xff00,	/*SCR BbYb*/
0x007a,0x00ff,	/*SCR KrWr*/
0x007b,0x00fc,	/*SCR KgWg*/
0x007c,0x00f4,	/*SCR KbWb*/
0x00ff,0x0000,	/*Mask Release*/
/*end*/
	END_SEQ, 0x0000,
};



struct mdnie_tuning_info tuning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"dyn_ui",		tune_dynamic_ui},
			{"dyn_video",	tune_dynamic_video},
			{"dyn_video",	tune_dynamic_video},
			{"dyn_video",	tune_dynamic_video},
			{"camera",		tune_camera},
			{"dyn_ui",		tune_dynamic_ui},
			{"dyn_gallery",	tune_dynamic_gallery},
			{"dyn_vt",		tune_dynamic_vt},
			{"dyn_browser",	tune_dynamic_browser},
			{"dyn_ebook",		tune_ebook},
			{"email",		tune_email},
		}, {
			{"std_ui",		tune_standard_ui},
			{"std_video",	tune_standard_video},
			{"std_video",	tune_standard_video},
			{"std_video",	tune_standard_video},
			{"camera",		tune_camera},
			{"std_ui",		tune_standard_ui},
			{"std_gallery",	tune_standard_gallery},
			{"std_vt",		tune_standard_vt},
			{"std_browser",	tune_standard_browser},
			{"std_ebook",		tune_ebook},
			{"email",		tune_email},
		},
	{
			{"mov_ui",		tune_movie_ui},
			{"mov_video",		tune_movie_video},
			{"mov_video",		tune_movie_video},
			{"mov_video",		tune_movie_video},
			{"camera",		tune_camera},
			{"mov_ui",		tune_movie_ui},
			{"mov_gallery",	tune_movie_gallery},
			{"mov_vt",		tune_movie_vt},
			{"mov_browser",	tune_movie_browser},
			{"mov_ebook",		tune_ebook},
			{"email",		tune_email},
		}, {
			{"auto_ui",		tune_auto_ui},
			{"auto_video",		tune_auto_video},
			{"auto_video",		tune_auto_video},
			{"auto_video",		tune_auto_video},
			{"auto_camera",		tune_auto_camera},
			{"auto_ui",		tune_auto_ui},
			{"auto_gallery",	tune_auto_gallery},
			{"auto_vt",		tune_auto_vt},
			{"auto_browser",	tune_auto_browser},
			{"auto_ebook",		tune_ebook},
			{"email",		tune_email},
		},
	},
};


#endif /* __MDNIE_TABLE_H__ */

