#ifndef PROFILES_H
#define PROFILES_H

Profile XP_SP2_X86 = {
	2600,
	2,
	32,
	1,
	{ 0x0088, 0x0084, 0x01b0, 0x0174, 0x011c, 0x0190, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x022c, 0x0228, 0x01ec, 0x0004 },
};
Profile XP_SP3_X86 = {
	2600,
	3,
	32,
	1,
	{ 0x0088, 0x0084, 0x01b0, 0x0174, 0x011c, 0x0190, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x022c, 0x0228, 0x01ec, 0x0004 },
};
Profile WIN7_SP0_X86 = {
	7601,
	0,
	32,
	0,
	{ 0x00b8, 0x00b4, 0x01a8, 0x016c, 0x0278, 0x0188, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0268, 0x0260, 0x022c, 0x0004 },
};
Profile WIN7_SP1_X86 = {
	7601,
	1,
	32,
	0,
	{ 0x00b8, 0x00b4, 0x01a8, 0x016c, 0x0278, 0x0188, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0268, 0x0260, 0x022c, 0x0004 },
};
Profile WIN7_SP0_X64 = {
	7601,
	0,
	64,
	0,
	{ 0x0188, 0x0180, 0x0338, 0x02e0, 0x0448, 0x0308, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0420, 0x0410, 0x03b0, 0x0008 },
};
Profile WIN7_SP1_X64 = {
	7601,
	1,
	64,
	0,
	{ 0x0188, 0x0180, 0x0338, 0x02e0, 0x0448, 0x0308, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0420, 0x0410, 0x03b0, 0x0008 },
};
Profile WIN8_SP0_X64 = {
	9200,
	0,
	64,
	0,
	{ 0x02E8, 0x02E0, 0x03E8, 0x0438, 0x0590, 0x0470, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0400, 0x03F0, 0x0398, 0x0008 },
};
Profile WIN8_SP0_X86 = {
	9200,
	0,
	32,
	0,
	{ 0xB8, 0xB4, 0x0140, 0x0170, 0x0274, 0x0194, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x024C, 0x0244, 0x0214, 0x0004 },
};
Profile WIN8_SP1_X64 = {
	// 8.1
	9200,
	1,
	64,
	0,
	{ 0x02E8, 0x02E0, 0x03E8, 0x0438, 0x05D8, 0x0470, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0688, 0x0678, 0x0620, 0x0008 },
};
Profile WIN8_SP1_X86 = {
	// 8.1
	9200,
	1,
	32,
	0,
	{ 0xB8, 0xB4, 0x0140, 0x0170, 0x0274, 0x0194, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x039C, 0x0394, 0x0364, 0x0004 },
};
Profile WIN10_RS1_X64 = {
	// Windows 10 (Anniversary Update)
	14393,
	0,
	64,
	0,
	{ 0x02f0, 0x02e8, 0x03f8, 0x0450, 0x0620, 0x0488, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0698, 0x0688, 0x0630, 0x0008 },
};
Profile WIN10_RS4_X64 = {
	// Windows 10 (April 2018 Update)
	17134,
	0,
	64,
	0,
	{ 0x02e8, 0x02e0, 0x03f8, 0x0450, 0x0628, 0x0488, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x06a8, 0x0690, 0x0638, 0x0008 },
};
Profile WIN10_19H1_X64 = {
	// Windows 10 (May 2019 Update)
	18362,
	0,
	64,
	0,
	{ 0x02f0, 0x02e8, 0x03f8, 0x0450, 0x0658, 0x0488, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x06b8, 0x06a0, 0x0648, 0x0008 },
};
Profile WIN11_22000 = {
	22000,
	0,
	64,
	0,
	{ 0x0400, 0x03f8, 0x0508, 0x0560, 0x0898, 0x0598, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x0558, 0x0540, 0x04e8, 0x0008 },
};
Profile VISTA_SP0_X86 = {
	6000,
	0,
	32,
	0,
	{ 0x00a0, 0x009c, 0x0188, 0x014c, 0x0238, 0x0168, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0248, 0x0240, 0x020c, 0x0004 },
};
Profile VISTA_SP0_X64 = {
	6000,
	0,
	64,
	0,
	{ 0x00e8, 0x00e0, 0x0290, 0x0238, 0x0380, 0x0260, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x03f0, 0x03e0, 0x0380, 0x0008 },
};
Profile VISTA_SP1_X86 = {
	6000,
	1,
	32,
	0,
	{ 0x00a0, 0x009c, 0x0188, 0x014c, 0x0238, 0x0168, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0248, 0x0240, 0x020c, 0x0004 },
};
Profile VISTA_SP1_X64 = {
	6000,
	1,
	64,
	0,
	{ 0x00e8, 0x00e0, 0x0290, 0x0238, 0x0380, 0x0260, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x03f0, 0x03e0, 0x0380, 0x0008 },
};
Profile VISTA_SP2_X86 = {
	6002,
	2,
	32,
	0,
	{ 0x00a0, 0x009c, 0x0188, 0x014c, 0x0238, 0x0168, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0248, 0x0240, 0x020c, 0x0004 },
};
Profile VISTA_SP2_X64 = {
	6002,
	2,
	64,
	0,
	{ 0x00e8, 0x00e0, 0x0290, 0x0238, 0x0380, 0x0260, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x03f0, 0x03e0, 0x0380, 0x0008 },
};
Profile WIN2003_SP0_X86 = {
	3790,
	0,
	32,
	0,
	{ 0x0088, 0x0084, 0x0190, 0x0154, 0x0258, 0x0170, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0234, 0x0230, 0x01f4, 0x0004 },
};
Profile WIN2003_SP1_X86 = {
	3790,
	1,
	32,
	0,
	{ 0x0098, 0x0094, 0x01a0, 0x0164, 0x0250, 0x0180, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0224, 0x0220, 0x01e4, 0x0004 },
};
Profile WIN2003_SP1_X64 = {
	3790,
	1,
	64,
	0,
	{ 0x00e0, 0x00d8, 0x02c0, 0x0268, 0x0398, 0x0290, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x03e8, 0x03e0, 0x0370, 0x0008 },
};
Profile WIN2003_SP2_X86 = {
	3790,
	2,
	32,
	0,
	{ 0x0098, 0x0094, 0x01a0, 0x0164, 0x0250, 0x0180, 0x0018, 0x0008, 0x0010, 0x0038, 0x0000, 0x0224, 0x0220, 0x01e4, 0x0004 },
};
Profile WIN2003_SP2_X64 = {
	3790,
	2,
	64,
	0,
	{ 0x00e0, 0x00d8, 0x02c0, 0x0268, 0x0398, 0x0290, 0x0028, 0x0010, 0x0020, 0x0060, 0x0000, 0x03d0, 0x03c8, 0x0358, 0x0008 },
};

static Profile *p_table[] = {
	&XP_SP2_X86,
	&XP_SP3_X86,
	&WIN7_SP0_X86,
	&WIN7_SP1_X86,
	&WIN7_SP0_X64,
	&WIN7_SP1_X64,
	&WIN8_SP0_X86,
	&WIN8_SP1_X86,
	&WIN8_SP0_X64,
	&WIN8_SP1_X64,
	&VISTA_SP0_X86,
	&VISTA_SP0_X64,
	&VISTA_SP1_X86,
	&VISTA_SP1_X64,
	&VISTA_SP2_X86,
	&VISTA_SP2_X64,
	&WIN2003_SP0_X86,
	&WIN2003_SP1_X86,
	&WIN2003_SP1_X64,
	&WIN2003_SP2_X86,
	&WIN2003_SP2_X64,
	&WIN10_RS1_X64, // Windows 10 (Anniversary Update)
	&WIN10_RS4_X64, // Windows 10 (April 2018 Update)
	&WIN10_19H1_X64, // Windows 10 (May 2019 Update)
	&WIN11_22000, // Windows 11 (Initial Release)
	NULL,
};

#endif
