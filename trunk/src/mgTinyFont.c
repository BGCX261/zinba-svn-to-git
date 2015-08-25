/* sixhi.c - the data for the compiled-in Vpaint font. */

#include "common.h"
#include "memgfx.h"
#include "gemfont.h"

/*	formerly known as sixhi.c mgTinyFont() now mgTinyFont()	*/
static char const rcsid[] = "$Id: mgTinyFont.c,v 1.4 2005/12/15 20:33:55 hiram Exp $";

static UBYTE sixhi_data[] = {
0x0,0x82,0x4,0x21,0xcf,0xb6,0xd,0xe3,
0x4,0xe3,0x81,0x50,0xf9,0x87,0xbc,0xc3,
0xcc,0x3e,0x73,0xe0,0x38,0x1f,0x84,0x42,
0x0,0xcd,0x94,0x7b,0x26,0xc,0x31,0x84,
0x88,0x0,0x0,0x6,0x70,0x4f,0x3c,0x33,
0xc7,0x3e,0x71,0xc3,0xc,0x18,0x6,0x1c,
0x71,0xcf,0x1e,0xf3,0xef,0x9e,0x89,0xc0,
0x92,0x42,0x28,0x9c,0xf1,0xcf,0x1e,0xfa,
0x28,0xa2,0x8a,0x2f,0x9e,0xc1,0xe2,0x0,
0x60,0x8,0x0,0x8,0x1,0x80,0x80,0x1,
0x20,0x60,0x0,0x0,0x0,0x0,0x0,0x20,
0x0,0x0,0x0,0x0,0xe,0x31,0xc4,0x0,
0x79,0x41,0x8,0x51,0x2,0x0,0x21,0x44,
0x14,0x21,0x5,0x8,0x20,0x7,0x88,0x51,
0x2,0x10,0x51,0x45,0x4,0x1a,0x2f,0x6,
0x10,0x41,0x4,0xf1,0xe7,0x1c,0x60,0x0,
0x30,0xc0,0xc3,0x6c,0x69,0xa3,0x42,0x1,
0xe4,0x1a,0x69,0x41,0x8,0x69,0xe7,0xbd,
0x4b,0xa9,0xbc,0x7b,0xff,0x1c,0x7b,0xfc,
0x1e,0xf3,0xd,0x8e,0xf9,0xbf,0xb6,0xf9,
0xcd,0x5e,0x3b,0xe0,0x3e,0xd8,0xc0,0x0,
0x1,0xcf,0xc0,0xf8,0xe0,0x0,0x71,0xc7,
0xc,0x18,0x83,0x8c,0x78,0x86,0x6,0xc,
0xc2,0x1a,0x30,0xc0,0x0,0x71,0xc7,0x3e,
0x1,0xc2,0x6,0x62,0xaf,0x2a,0x1a,0x17,
0x86,0x82,0x1,0x50,0xc8,0x80,0x84,0xc2,
0xc,0x2,0x53,0x67,0x20,0x3f,0x42,0xf4,
0x0,0xcd,0xbe,0xa3,0x4d,0xc,0x60,0xc3,
0x8,0x0,0x0,0xc,0x98,0xc0,0x82,0x52,
0x8,0x2,0x8a,0x23,0xc,0x31,0xe3,0x26,
0x8a,0x28,0xa0,0x8a,0x8,0x20,0x88,0x80,
0x94,0x43,0x6c,0xa2,0x8a,0x28,0xa0,0x22,
0x28,0xa2,0x52,0x21,0x18,0x60,0x67,0x0,
0x61,0xcf,0x1c,0x79,0xc2,0x1e,0xb1,0x81,
0x24,0x21,0x4f,0x1c,0xf1,0xe7,0xe,0x72,
0x28,0xa2,0x4a,0x27,0x8c,0x30,0xce,0x88,
0x80,0x2,0x14,0x0,0x80,0x1e,0x50,0x2,
0x0,0x50,0x80,0x0,0xfb,0xca,0x14,0x0,
0x85,0x8,0x0,0x0,0xe,0x23,0x6d,0x88,
0x20,0x82,0x8,0x0,0x0,0xa2,0x0,0x0,
0x30,0xc0,0x6,0xf6,0xb2,0xc4,0x8c,0x72,
0xc2,0x2c,0xb0,0x2,0x1c,0xeb,0x38,0xd7,
0x1,0x2d,0x8c,0x8,0x61,0x8c,0x31,0xbd,
0x86,0x1b,0xe7,0xc6,0xd9,0xb9,0xb6,0x18,
0x6d,0x56,0x18,0x6f,0xe6,0xd8,0xa2,0x16,
0x6b,0x66,0xfe,0x61,0xc6,0xbe,0x73,0x6d,
0x9a,0x21,0xc4,0x12,0x3,0xe1,0x98,0x10,
0xc0,0x2c,0x49,0xe0,0x7,0x68,0x63,0x0,
0x3,0x62,0x3b,0xdf,0x6e,0x1c,0xb2,0x97,
0x84,0xde,0xe1,0x50,0xc8,0x8f,0xbe,0xc3,
0xef,0x8e,0x73,0x20,0xb7,0x60,0x62,0x94,
0x0,0xc9,0x14,0x70,0x86,0x18,0x60,0xc7,
0xbe,0x1,0xe0,0x18,0xa8,0x47,0x1c,0x93,
0xcf,0x4,0x71,0xe0,0x0,0x60,0x1,0x8c,
0xbb,0xef,0x20,0x8b,0xcf,0x26,0xf8,0x80,
0x98,0x42,0xaa,0xa2,0xf2,0x2f,0x1c,0x22,
0x28,0xaa,0x21,0x42,0x18,0x30,0x6d,0x80,
0x30,0x28,0xa0,0x8b,0xe7,0xa2,0xc8,0x81,
0x38,0x23,0xe8,0xa2,0x8a,0x24,0x98,0x22,
0x28,0xaa,0x32,0x21,0x18,0x30,0x6b,0x9c,
0x82,0x27,0x1c,0x71,0xc7,0x20,0x71,0xc7,
0x18,0x21,0x87,0x1c,0x80,0xef,0x9c,0x71,
0xc8,0xa2,0x89,0xc8,0x98,0x71,0xcf,0x1e,
0x71,0x87,0x22,0xf1,0x2f,0xa2,0x61,0xe7,
0xb6,0xcc,0xcd,0x9b,0x71,0xc5,0x96,0xba,
0xe7,0x1c,0x70,0x0,0x8,0xea,0xdb,0x55,
0x49,0x27,0xc,0x18,0x6d,0x8c,0x19,0xbd,
0x86,0x18,0x66,0x46,0xd9,0xbd,0x9c,0xd8,
0x6f,0x56,0x18,0x66,0xf6,0x71,0xc7,0x2d,
0xd3,0xc6,0x54,0x33,0x66,0x8c,0xab,0xed,
0x9c,0x72,0xa7,0x92,0x78,0x86,0x6,0x30,
0xcf,0x80,0x30,0xc3,0x4,0x68,0xc1,0x0,
0x0,0x8d,0x86,0x62,0xac,0xaa,0xe2,0xdf,
0xdc,0x93,0xa3,0x58,0xd9,0xcc,0x6,0xd8,
0x69,0x8c,0xdb,0xef,0xa4,0x40,0x21,0x68,
0x0,0xc0,0x3e,0x29,0x6e,0x80,0x60,0xc3,
0x8,0x30,0x3,0x30,0xc8,0x48,0x2,0xf8,
0x28,0x88,0x88,0x23,0xc,0x31,0xe3,0xc,
0xb2,0x28,0xa0,0x8a,0x8,0x22,0x88,0x88,
0x94,0x42,0x29,0xa2,0x82,0x2a,0x2,0x22,
0x25,0x36,0x50,0x84,0x18,0x18,0x60,0x0,
0x3,0xe8,0xa0,0x8a,0x2,0x1e,0x88,0x81,
0x24,0x22,0xa8,0xa2,0x8a,0x24,0x6,0x22,
0x25,0x2a,0x31,0xe2,0xc,0x30,0xc1,0x32,
0x82,0x2f,0x82,0x8,0x20,0xa0,0xfb,0xef,
0x88,0x20,0x88,0xa2,0xf3,0x8a,0x22,0x8a,
0x28,0xa2,0x7a,0x28,0x8e,0x20,0x8d,0x88,
0x8,0x88,0xa2,0x89,0xa7,0x9c,0x61,0x0,
0x8b,0x14,0xc6,0xf6,0xa,0x26,0x9a,0xa2,
0xc8,0xa2,0x88,0x0,0x8,0x6a,0xf8,0xc0,
0x4b,0xad,0x8c,0x38,0x6d,0x8c,0x19,0xbd,
0x80,0x18,0x66,0x46,0xd9,0xb1,0x8e,0xd0,
0x6c,0x56,0x18,0x66,0xc6,0x31,0xcd,0xad,
0xd3,0x66,0x14,0x63,0x66,0x8c,0xab,0x65,
0x36,0xaa,0xa4,0x12,0x0,0x0,0x0,0x30,
0xc0,0x1a,0x0,0x3,0x34,0x69,0xe7,0x0,
0x0,0x87,0x4,0x21,0xc9,0xb6,0x42,0x10,
0x3c,0x18,0xe7,0x5c,0xd9,0xcc,0x6,0xf8,
0x6d,0x8c,0xd8,0x67,0x3c,0x71,0xee,0xf0,
0x0,0x0,0x14,0xf2,0x6d,0x0,0x31,0x84,
0x88,0x30,0x3,0x20,0x70,0x4f,0xbc,0x13,
0xc7,0x8,0x71,0xc3,0x4,0x18,0x6,0x0,
0x82,0x2f,0x1e,0xf3,0xe8,0x1e,0x89,0xc7,
0x12,0x7a,0x28,0x9c,0x81,0xc9,0xbc,0x21,
0xe2,0x22,0x88,0x8f,0x9e,0x9,0xe0,0x0,
0x1,0xef,0x1c,0x79,0xc2,0x2,0x89,0xc1,
0x22,0x72,0x28,0x9c,0xf1,0xe4,0x1c,0x11,
0xe2,0x36,0x48,0x27,0x8e,0x31,0xc0,0x3e,
0x7a,0x28,0x3e,0xfb,0xef,0x9e,0x82,0x8,
0x8,0x20,0x8f,0xbe,0x81,0xeb,0xa2,0x8a,
0x28,0xa2,0xa,0x28,0x84,0x79,0xcf,0x8,
0xf8,0x88,0xa2,0x89,0x60,0x0,0xc9,0x0,
0x86,0x3c,0xc3,0x6c,0xfa,0x24,0x8c,0x79,
0xef,0xbe,0x88,0x0,0x8,0x2b,0x1a,0x40,
0x48,0x2c,0xbe,0x68,0x6d,0x8c,0x19,0xbf,
0x80,0xf1,0xe6,0xde,0x73,0xff,0xbe,0xc0,
0x6f,0xf6,0x18,0x67,0xc6,0x32,0x88,0x9a,
0x6b,0xc6,0x14,0xc1,0xc7,0xcc,0x71,0xcd,
0xb6,0x71,0xc3,0x92,0x7b,0xe7,0x9e,0x30,
0x82,0x2c,0x0,0x0,0x1c,0x0,0x0,0x0,
0x0,0x82,0x0,0x0,0x0,0x0,0x1,0xe3,
0x18,0x10,0xb6,0x4c,0xf9,0xcf,0xbe,0x1b,
0xef,0x8c,0xf8,0x60,0x7,0x58,0xac,0x0,
0x0,0xc0,0x0,0x20,0x6,0x80,0x0,0x0,
0x0,0x60,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0xc,
0x78,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x60,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3e,
0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0xe,
0x0,0x0,0x0,0x0,0x80,0x20,0x0,0x0,
0x0,0x0,0x3,0xc0,0x0,0x30,0x0,0x0,
0xc1,0xe7,0x1e,0x79,0xe7,0xb8,0x71,0xc7,
0x1c,0x71,0xc8,0xa2,0xf8,0x0,0x1c,0x71,
0xc7,0x9e,0xf1,0xc7,0x80,0x0,0x8c,0x30,
0x79,0xc7,0x1e,0x89,0x2f,0xbe,0x70,0x0,
0xf,0x4,0xc0,0x0,0x79,0xcb,0x10,0x0,
0x8,0xa2,0x70,0x0,0x0,0x29,0xe7,0x80,
0x10,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,
0x0,0x0,0x0,0x0,0x0,0x1,0x80,0x0,
0x3,0x6,0x0,0xf8,0xc,0x8,0x70,0x0,
0x1c,0xc0,0x80,0x0,0x0,0x0,0x0,0x33,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
};

static WORD sixhi_ch_ofst[257] = {
0,6,12,18,24,30,36,42,
48,54,60,66,72,78,84,90,
96,102,108,114,120,126,132,138,
144,150,156,162,168,174,180,186,
192,198,204,210,216,222,228,234,
240,246,252,258,264,270,276,282,
288,294,300,306,312,318,324,330,
336,342,348,354,360,366,372,378,
384,390,396,402,408,414,420,426,
432,438,444,450,456,462,468,474,
480,486,492,498,504,510,516,522,
528,534,540,546,552,558,564,570,
576,582,588,594,600,606,612,618,
624,630,636,642,648,654,660,666,
672,678,684,690,696,702,708,714,
720,726,732,738,744,750,756,762,
768,774,780,786,792,798,804,810,
816,822,828,834,840,846,852,858,
864,870,876,882,888,894,900,906,
912,918,924,930,936,942,948,954,
960,966,972,978,984,990,996,1002,
1008,1014,1020,1026,1032,1038,1044,1050,
1056,1062,1068,1074,1080,1086,1092,1098,
1104,1110,1116,1122,1128,1134,1140,1146,
1152,1158,1164,1170,1176,1182,1188,1194,
1200,1206,1212,1218,1224,1230,1236,1242,
1248,1254,1260,1266,1272,1278,1284,1290,
1296,1302,1308,1314,1320,1326,1332,1338,
1344,1350,1356,1362,1368,1374,1380,1386,
1392,1398,1404,1410,1416,1422,1428,1434,
1440,1446,1452,1458,1464,1470,1476,1482,
1488,1494,1500,1506,1512,1518,1524,1530,
1536,};

static struct font_hdr sixhi_font = {
STPROP, 8, "", 0, 255,
4, 4, 3, 1, 1,
5, 6, 0, 0,
1, 1, 0x5555, (short)0xaaaa,
0xc, NULL, 
sixhi_ch_ofst, sixhi_data,
192, 6,
NULL,
1, 0, /* x/y offset */
};

MgFont *mgTinyFont()
{
return &sixhi_font;
}

/* TinyBold.c - compiled data for font AdobeHelv-B-R-N--8-80-75-75-P-5 */
/* generated source code by utils/bdfToGem, do not edit */
/* BDF data file input: 75dpi/helvB08-L1.bdf */

static UBYTE TinyBold_data[2222] = {
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0x1,0x1,0x8,0x28,0x2,0,0,0x40,0x90,
0x10,0x80,0xa,0x40,0x42,0xa,0,0,0x20,0x21,
0,0x4,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x80,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0x80,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x82,0x14,0x51,0x45,0,0,
0x21,0x29,0x4b,0x50,0x14,0x20,0x85,0x14,0x50,0,
0x10,0x42,0x8a,0x8,0,0x8,0x12,0x14,0x4,0,
0x4,0x8,0x81,0x8,0x2,0x90,0x22,0x28,0,0x2,
0x4,0x40,0x8,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x30,0,0x80,0,0x80,0,
0,0,0,0,0,0,0,0,0,0x3,
0x80,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0x40,0xc0,0x18,0xc,0x18,0xac,0x40,
0,0,0,0x1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0xf3,0x80,0,0xf,0,0,0x40,
0,0x38,0x4,0x48,0xb1,0,0,0,0,0x2,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0x4,0x25,0x29,
0x4a,0,0x2,0x11,0x4a,0xb5,0xd5,0x8,0x45,0x51,
0x40,0x1,0x8,0xa5,0x10,0xa,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x35,0x51,0xcd,0x38,
0x94,0x40,0,0x2c,0x23,0x18,0x67,0x3b,0xcc,0x60,
0,0,0xcf,0xc7,0x3c,0x7b,0xcf,0x79,0xed,0xa3,
0x6d,0x8c,0x6c,0x9c,0xf1,0xcf,0x1e,0xfb,0x6e,0xb6,
0xdb,0x76,0xff,0x4c,0xc0,0,0xc0,0x18,0x18,0x18,
0xc,0x40,0,0,0,0x3,0,0,0,0,
0x13,0,0,0,0,0,0,0,0,0,
0,0x43,0x45,0x69,0xd5,0x99,0x80,0,0x9,0xbe,
0x4f,0x81,0xe0,0x68,0xc,0x99,0x32,0x1,0xc7,0x1c,
0x71,0xc7,0x1f,0x9e,0xf7,0xbd,0xea,0xa7,0x32,0x71,
0xc7,0x1c,0x70,0xe,0xed,0xb6,0xdb,0x76,0xc3,0x80,
0,0,0x4,0,0,0,0,0,0x60,0,
0,0,0,0x8,0,0,0x6,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0x35,0xfb,
0x16,0x28,0x14,0xe4,0,0x3a,0xe5,0xac,0xac,0x60,
0xda,0xb5,0x10,0x21,0x98,0x6d,0xb6,0xcb,0x6c,0x63,
0x2d,0xa3,0x69,0x8c,0x6c,0xb6,0xdb,0x6d,0xb0,0x63,
0x66,0xb6,0xdb,0x34,0x3a,0x44,0xc0,0x1c,0xe3,0x39,
0xbf,0x5c,0xad,0x5d,0x38,0xce,0x3a,0xbf,0xeb,0x55,
0x6d,0xaf,0x22,0x80,0,0,0,0,0,0,
0,0,0x4,0x45,0x3b,0x6b,0x1,0x6a,0x80,0,
0x16,0x8a,0x47,0x37,0xa0,0xf8,0x5,0xa,0x14,0x23,
0x6d,0xb6,0xdb,0x6d,0x8e,0x32,0xc6,0x31,0x8a,0xa5,
0xb2,0xdb,0x6d,0xb6,0xdb,0x5b,0x6d,0xb6,0xdb,0x34,
0xf3,0x5c,0xe7,0x39,0xce,0x7c,0x66,0x31,0x8c,0xaa,
0xa7,0x18,0xc6,0x31,0x84,0x76,0xb5,0xad,0x6b,0x9a,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0x20,0x53,0x9c,0x30,0x22,0x44,0,0x5a,0x61,0x99,
0xae,0x70,0xcc,0xb5,0x27,0x91,0x13,0x2d,0xbc,0xc3,
0x6f,0x7b,0xf,0xa3,0x71,0x8e,0xee,0xb2,0xdb,0x2d,
0xbc,0x63,0x66,0xb6,0x8e,0x34,0x32,0x25,0x20,0x6,
0xd6,0x5b,0x5a,0xda,0xad,0x5a,0xb5,0xad,0x5b,0xe3,
0x6b,0x55,0x6d,0xa3,0x22,0x8b,0,0,0,0,
0,0,0,0,0x5,0xec,0x29,0x63,0x81,0x88,
0x14,0xf0,0x16,0x8f,0xe9,0x37,0xac,0x42,0x85,0xa,
0x28,0x23,0x6d,0xb6,0xdb,0x6d,0x97,0xb0,0xf7,0xbd,
0xea,0xae,0xba,0xcb,0x2c,0xb2,0xc9,0xdb,0x6d,0xb6,
0xdb,0x34,0xdb,0x86,0x31,0x8c,0x63,0x1a,0xcd,0x6b,
0x5a,0xaa,0x77,0xb5,0xad,0x6b,0x40,0xd6,0xb5,0xad,
0x6b,0x5a,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0xf9,0xc7,0x7c,0x22,0x1e,0x38,0x5a,
0x63,0xd,0xf3,0x69,0x9a,0x70,0x40,0x8,0x15,0x2f,
0xb6,0xc3,0x6c,0x63,0x6d,0xa3,0x79,0x8f,0xef,0xb2,
0xf3,0x2f,0xe,0x63,0x66,0xb6,0x8e,0x3c,0x62,0x24,
0,0x1e,0xd6,0x5b,0xda,0xda,0xae,0x5a,0xb5,0xad,
0x5b,0x7b,0x6b,0x5f,0x39,0xa6,0x42,0x56,0,0,
0,0,0,0,0,0,0x1,0x86,0x3b,0xeb,
0x41,0x6b,0xa8,0x13,0x95,0x80,0x4e,0x35,0xac,0x79,
0x42,0x87,0xa,0x3,0xef,0xbe,0xfb,0xef,0xbe,0x30,
0xc6,0x31,0x8a,0xa5,0xbe,0xcb,0x2c,0xb2,0xc9,0xdd,
0x6d,0xb6,0xdb,0x3c,0xf3,0x5e,0xf7,0xbd,0xef,0x3e,
0xcf,0x7b,0xde,0xaa,0xd6,0xb5,0xad,0x6b,0x5e,0xd6,
0xb5,0xad,0x6b,0x5a,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x20,0xa0,0xcd,0x68,0x22,0x4,
0x82,0x9a,0x66,0x2c,0x6b,0x69,0x1a,0x35,0x27,0x91,
0x13,0x2d,0xb6,0xcb,0x6c,0x63,0x2d,0xab,0x6d,0x8d,
0x6d,0xb6,0xc3,0x6d,0xb6,0x63,0x67,0x1b,0x1b,0x18,
0xe2,0x14,0,0x16,0xd6,0x5b,0x1b,0xda,0xad,0x5a,
0xb5,0xad,0x5b,0x1b,0x79,0x9f,0x6c,0xec,0x22,0x80,
0,0,0,0,0,0,0,0,0x5,0xe5,
0x44,0xc9,0x41,0x98,0x14,0,0x18,0x80,0,0x3c,
0xa0,0x2,0x85,0x89,0x16,0x23,0x6d,0xb6,0xdb,0x6d,
0xb6,0x32,0xc6,0x31,0x8a,0xa5,0xb6,0xdb,0x6d,0xb6,
0xdb,0x5b,0x6d,0xb6,0xdb,0x18,0xc3,0x56,0xb5,0xad,
0x6b,0x58,0xcc,0x63,0x18,0xaa,0xd6,0xb5,0xad,0x6b,
0x40,0xd7,0xbd,0xef,0x3b,0x4c,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x20,0xa3,0x96,0x34,
0x22,0x4,0x82,0x8c,0x67,0x98,0x66,0x33,0xc,0xe5,
0x10,0x21,0x19,0xcd,0xbc,0x7b,0xcf,0x61,0xed,0xa6,
0x67,0xed,0x6c,0x9c,0xc1,0xed,0x9c,0x61,0xc2,0x1b,
0x1b,0x18,0xfa,0x14,0,0x1b,0xe3,0x39,0x98,0xda,
0xad,0x5a,0xb4,0xce,0x3b,0x71,0xa9,0x9,0x6c,0xcf,
0x22,0x80,0,0,0,0,0,0,0,0,
0xc,0x8f,0,0xc8,0xc0,0xf0,0,0,0xf,0x1,
0xe0,0x24,0xa0,0,0xb,0xd2,0x2f,0x23,0x6d,0xb6,
0xdb,0x6d,0xb7,0x9e,0xf7,0xbd,0xea,0xa7,0x32,0x71,
0xc7,0x1c,0x70,0x1e,0x38,0xe3,0x8e,0x18,0xc2,0x9b,
0xde,0xf7,0xbd,0xbe,0x66,0x31,0x8c,0xaa,0x66,0x98,
0xc6,0x31,0x84,0xe2,0x94,0xa5,0x33,0x8c,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0x1,
0,0,0x14,0x1,0,0,0,0,0,0,
0,0x2,0,0,0xc,0,0,0,0,0,
0,0,0,0,0,0,0,0x10,0,0,
0,0,0,0,0x2,0x4,0x1f,0,0,0,
0x3,0x80,0x40,0,0,0xc,0x18,0,0,0,
0,0xc0,0x13,0,0,0,0,0,0,0,
0,0,0xc,0x80,0,0x2,0xc0,0,0,0,
0,0,0,0x30,0xa1,0,0,0x83,0x2,0x60,
0,0,0,0,0,0x8,0,0,0,0,
0,0,0,0,0,0x20,0,0,0,0,
0,0,0,0,0,0,0x40,0,0,0,
0,0,0,0,0x1,0,0,0,0x33,0xc,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x14,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x3,0xc,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0xc,0,0,0x3,0x80,0,
0,0,0,0,0,0x30,0xa3,0,0,0,
0,0x78,0,0,0,0,0,0x18,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0xc0,0,
0,0,0,0,0,0,0,0,0,0,
0x3,0x80,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,
};

static WORD TinyBold_ch_ofst[225] = {
0,2,5,9,14,19,25,31,34,37,
40,43,48,50,54,56,59,64,69,74,
79,84,89,94,99,104,109,111,113,117,
122,126,131,140,146,152,158,164,169,174,
180,186,188,193,199,204,212,218,224,230,
236,242,248,254,260,266,275,281,288,294,
297,300,303,307,312,315,320,325,329,334,
339,342,347,352,354,356,361,363,370,375,
380,385,390,393,398,401,406,411,417,423,
428,433,437,439,443,448,450,452,454,456,
458,460,462,464,466,468,470,472,474,476,
478,480,482,484,486,488,490,492,494,496,
498,500,502,504,506,508,510,512,514,516,
519,524,529,534,540,542,547,550,558,562,
568,574,578,586,588,591,596,598,600,602,
607,612,614,616,618,622,628,635,642,649,
654,660,666,672,678,684,690,698,704,709,
714,719,724,726,728,730,732,738,744,750,
756,762,768,774,779,785,791,797,803,809,
816,822,827,832,837,842,847,852,857,864,
868,873,878,883,888,890,892,894,896,901,
906,911,916,921,926,931,936,941,946,951,
956,961,966,971,976,
};

static struct font_hdr TinyBold_font = {
STPROP, 8, "AdobeHelv-B-R-N--8-80-75-75-P-5", 32, 255,
11, 9, 5, 2, 2,
9, 9, 0, 0,
0, 0, 0x5555, (WORD)0xaaaa,
0x0, NULL,
TinyBold_ch_ofst, TinyBold_data,
202, 11,
NULL,
0, 0, /* x/y offset */
};

MgFont *mgTinyBoldFont()
{
return &TinyBold_font;
}

/* TinyFixed.c - compiled data for font -Misc-Fixed-M-R-N--8-80-75-75-C */
/* generated source code by utils/bdfToGem, do not edit */
/* BDF data file input: misc/5x8-L1.bdf */

static UBYTE TinyFixed_data[1696] = {
0,0,0xa2,0x1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0x30,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0x60,0x60,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x8e,0,0xc,0,0,0,
0,0x8,0xc0,0,0,0x1,0x8,0x8,0x42,0,
0x41,0x18,0xa9,0x30,0,0x41,0x19,0x24,0x8,0x8a,
0x2,0x90,0x46,0x2a,0x40,0x2,0x8,0xc9,0x8,0,
0x41,0x8,0xa0,0x30,0,0x41,0x18,0x4,0x8,0x80,
0xa2,0x90,0x46,0x28,0,0x2,0x8,0xc0,0x10,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0x1,0x14,0xa7,0x22,0x84,0x22,0,0,
0,0x2,0x21,0x19,0xe2,0x79,0x9e,0x63,0,0x1,
0x1,0x4,0x4b,0x38,0xce,0x7b,0xcc,0x93,0x9d,0x28,
0x4a,0x4c,0xe3,0x38,0xc7,0x4a,0x52,0x94,0x7c,0xe8,
0x38,0x80,0x40,0x20,0x1,0,0x80,0x81,0x5,0x6,
0,0,0,0,0x4,0,0,0,0,0x82,
0x11,0x40,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0x1,0,0x40,0x44,0x90,0x53,0x94,0,
0x1,0xce,0x20,0x14,0x22,0x1,0xe0,0x3,0x14,0x8,
0x41,0x4,0x22,0x25,0x40,0x49,0xcc,0x22,0x24,0x2,
0x11,0x40,0x75,0x8,0x89,0x50,0,0x71,0x11,0x20,
0x12,0xc,0x22,0x15,0x45,0x48,0,0x22,0x24,0xa2,
0x11,0x4a,0x45,0x8,0x89,0x52,0x40,0x1,0x11,0x29,
0x22,0x12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0x1,0x15,0xfa,0x2a,0x84,0x41,
0x24,0x40,0,0x2,0x53,0x24,0x46,0x42,0x2,0x94,
0x98,0x62,0,0x8a,0x9c,0xa5,0x29,0x42,0x12,0x91,
0x9,0x48,0x7b,0x52,0x94,0xa5,0x22,0x4a,0x52,0x94,
0x44,0x88,0x9,0x40,0x20,0x20,0x1,0x1,0x40,0x80,
0x1,0x2,0,0,0,0,0x4,0,0,0,
0,0x42,0x22,0x80,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0x8,0xa8,0xa8,0x9c,0x5,
0x4c,0,0x3,0xa0,0x51,0x4,0xc4,0x3,0xa0,0x1,
0x8,0x8,0x52,0,0x63,0x18,0xc6,0x32,0x92,0xf7,
0xbd,0xe7,0x39,0xce,0x4c,0x98,0xc6,0x31,0x80,0xb4,
0xa5,0x29,0x47,0x92,0,0,0,0x30,0,0,
0,0,0,0,0xa0,0,0,0,0x4,0,
0,0,0x2,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x1,0x14,0xa7,0x11,
0x4,0x41,0x18,0x40,0,0x4,0x51,0x4,0xca,0x73,
0x84,0x64,0x98,0x64,0x78,0x42,0xac,0xb9,0x9,0x73,
0x90,0xf1,0x9,0x88,0x7b,0xd2,0x94,0xa4,0x82,0x4a,
0x52,0x62,0x88,0x84,0x8,0,0x3,0xb8,0x67,0x31,
0xc,0xe3,0x5,0x22,0x6b,0x8c,0xe3,0xa8,0x6e,0x49,
0x51,0x94,0xbd,0x82,0x18,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0x1,0x1d,0xc7,0x7c,
0x12,0x6,0x40,0xa0,0x3,0x60,0x23,0x88,0x20,0x4b,
0xa0,0x1,0x1,0x4a,0x69,0x84,0x94,0xa5,0x29,0x4a,
0x90,0x84,0x21,0x2,0x10,0x84,0xee,0xa5,0x29,0x4a,
0x40,0xb4,0xa5,0x29,0x2a,0x54,0x73,0x9c,0xe7,0x3b,
0xc6,0x63,0x18,0xc6,0x31,0x8c,0x17,0x18,0xc6,0x31,
0x80,0x74,0xa5,0x29,0x4b,0x92,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0x1,0x1,
0xf2,0xaa,0x80,0x41,0x3d,0xf0,0x78,0x8,0x51,0x18,
0x2f,0xa,0x44,0x93,0x80,0x4,0,0x44,0xaf,0xa5,
0x9,0x42,0x16,0x91,0x9,0x48,0x4a,0xd2,0xe6,0xb8,
0x42,0x4a,0x5e,0x61,0x10,0x82,0x8,0,0x4,0xa4,
0x89,0x5b,0x92,0x91,0x5,0xc2,0x56,0x52,0x94,0xb4,
0xc4,0x49,0x55,0x64,0x88,0x42,0x20,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0x1,0x28,
0x85,0x10,0x8e,0x6,0x5d,0x47,0x3b,0xa0,0x1,0x1c,
0xc0,0x49,0xa4,0x3,0x9c,0xa6,0xa,0x88,0xf7,0xbd,
0xef,0x7b,0xd0,0xe7,0x39,0xc2,0x10,0x84,0x4d,0xa5,
0x29,0x4a,0x4a,0xd4,0xa5,0x29,0x12,0x54,0x94,0xa5,
0x29,0x49,0xa8,0xb5,0xad,0x62,0x10,0x84,0x74,0xa5,
0x29,0x4a,0x4e,0xb4,0xa5,0x29,0x4a,0x52,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0xa7,0xa,0x80,0x41,0x18,0x43,0,0x90,
0x51,0x21,0x22,0x4a,0x48,0x90,0x98,0x62,0x78,0x80,
0x94,0xa5,0x29,0x42,0x12,0x91,0x29,0x48,0x4a,0xd2,
0x85,0xa5,0x22,0x49,0x9e,0x91,0x20,0x81,0x8,0,
0x4,0xa4,0x89,0x61,0xe,0x91,0x5,0x22,0x56,0x52,
0xe3,0xa0,0x25,0x49,0x55,0x63,0x90,0x82,0x10,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0x1,0x28,0xa7,0x7c,0x82,0x5,0x40,0xa1,0x3,0x60,
0,0,0,0x48,0xa0,0,0x1,0x4f,0x13,0xca,
0x94,0xa5,0x29,0x4a,0x92,0x84,0x21,0x2,0x10,0x84,
0x4c,0xa5,0x29,0x4a,0x44,0xd4,0xa5,0x29,0x13,0x92,
0x94,0xa5,0x29,0x4a,0xc8,0xc6,0x31,0x82,0x10,0x84,
0x94,0xa5,0x29,0x4a,0x40,0xd4,0xa5,0x29,0x3b,0x8e,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0x1,0,0xa2,0x1,0x40,0x22,0x24,0x42,
0x1,0xd0,0x23,0xbc,0xc2,0x31,0x88,0x63,0x18,0x41,
0x1,0x4,0x44,0xb8,0xce,0x7a,0xc,0x93,0x91,0x2f,
0x4a,0x4c,0x83,0x24,0xc2,0x31,0x92,0x91,0x3c,0xe1,
0x38,0,0x3,0xb8,0x67,0x31,0x2,0x93,0x95,0x27,
0x56,0x4c,0x80,0xa0,0xc2,0x38,0x8a,0x94,0xbc,0x62,
0x60,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0x1,0x1d,0x48,0x90,0x9c,0x3,0x80,0x1,
0x1,0xc0,0x3,0x80,0,0x70,0xa0,0x20,0,0x2,
0x38,0x84,0x94,0xa5,0x29,0x4a,0xcc,0xf7,0xbd,0xe7,
0x39,0xce,0x74,0x98,0xc6,0x31,0x8a,0xe3,0x18,0xc6,
0x12,0x14,0x73,0x9c,0xe7,0x39,0xe6,0x63,0x18,0xc7,
0x39,0xce,0x64,0x98,0xc6,0x31,0x84,0xe3,0x9c,0xe7,
0x4a,0x12,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0x4,0,0x80,0,0,0,0,0,0,
0,0x80,0,0,0x30,0,0,0,0,0,
0,0,0,0,0,0x80,0,0,0,0,
0,0,0,0x1e,0,0,0,0,0xc,0,
0x8,0,0,0,0x80,0x80,0,0,0,0x3,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0x8,0,0,0,0,
0,0,0,0,0,0,0,0x40,0,0x40,
0,0,0,0,0,0,0,0,0x8,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0x4,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0x32,0xc,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,
};

static WORD TinyFixed_ch_ofst[225] = {
0,5,10,15,20,25,30,35,40,45,
50,55,60,65,70,75,80,85,90,95,
100,105,110,115,120,125,130,135,140,145,
150,155,160,165,170,175,180,185,190,195,
200,205,210,215,220,225,230,235,240,245,
250,255,260,265,270,275,280,285,290,295,
300,305,310,315,320,325,330,335,340,345,
350,355,360,365,370,375,380,385,390,395,
400,405,410,415,420,425,430,435,440,445,
450,455,460,465,470,475,480,485,490,495,
500,505,510,515,520,525,530,535,540,545,
550,555,560,565,570,575,580,585,590,595,
600,605,610,615,620,625,630,635,640,645,
650,655,660,665,670,675,680,685,690,695,
700,705,710,715,720,725,730,735,740,745,
750,755,760,765,770,775,780,785,790,795,
800,805,810,815,820,825,830,835,840,845,
850,855,860,865,870,875,880,885,890,895,
900,905,910,915,920,925,930,935,940,945,
950,955,960,965,970,975,980,985,990,995,
1000,1005,1010,1015,1020,1025,1030,1035,1040,1045,
1050,1055,1060,1065,1070,1075,1080,1085,1090,1095,
1100,1105,1110,1115,1120,
};

static struct font_hdr TinyFixed_font = {
STPROP, 11, "-Misc-Fixed-M-R-N--8-80-75-75-C", 32, 255,
8, 7, 4, 1, 1,
5, 5, 0, 0,
0, 0, 0x5555, (WORD)0xaaaa,
0x0, NULL,
TinyFixed_ch_ofst, TinyFixed_data,
212, 8,
NULL,
0, 0, /* x/y offset */
};

MgFont *mgTinyFixedFont()
{
return &TinyFixed_font;
}
