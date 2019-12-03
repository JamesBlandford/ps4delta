
// Copyright (C) 2019 Force67

// This file was generated on Sat Sep  7 22:01:27 2019

#include "../../ModuleLinker.h"

#include "libSceNpTrophy.h"

static const mlink::FunctionInfo functions[] = {
	{0x6939C7B3B5BFF549, &sceNpTrophyAbortHandle},
	{0x72A1A460037F811C, &sceNpTrophyCaptureScreenshot},
	{0x5DB9236E86D99426, &sceNpTrophyCreateContext},
	{0xABB53AB440107FB7, &sceNpTrophyCreateHandle},
	{0x1355ABC1DD3B2EBF, &sceNpTrophyDestroyContext},
	{0x18D705E2889D6346, &sceNpTrophyDestroyHandle},
	{0x1CBC33D5F448C9C0, &sceNpTrophyGetGameIcon},
	{0x6183F77F65B4F688, &sceNpTrophyGetGameInfo},
	{0xC38B8C3E612B0F82, &sceNpTrophyGetGroupIcon},
	{0xC1353019FB292A27, &sceNpTrophyGetGroupInfo},
	{0x7812FE97A1C6F719, &sceNpTrophyGetTrophyIcon},
	{0xAAA515183810066D, &sceNpTrophyGetTrophyInfo},
	{0x2C7B9298EDD22DDF, &sceNpTrophyGetTrophyUnlockState},
	{0xBBDA6592A6B67B49, &sceNpTrophyIntAbortHandle},
	{0xA44E7286BA32F66D, &sceNpTrophyIntCheckNetSyncTitles},
	{0x79D3C8385A4402F5, &sceNpTrophyIntCreateHandle},
	{0x0D2877117A6A010E, &sceNpTrophyIntDestroyHandle},
	{0xB2783DF2A50BCCF0, &sceNpTrophyIntGetLocalTrophySummary},
	{0xB77090CDA83BFF3B, &sceNpTrophyIntGetProgress},
	{0x8C5FE60A01AEBDB4, &sceNpTrophyIntGetRunningTitle},
	{0x3DE0320630B9929F, &sceNpTrophyIntGetRunningTitles},
	{0x3C4A34F4392ABF4A, &sceNpTrophyIntGetTrpIconByUri},
	{0x905F738E7940CC80, &sceNpTrophyIntNetSyncTitle},
	{0x5178B27DA6F114D4, &sceNpTrophyIntNetSyncTitles},
	{0x4C9080C6DA3D4845, &sceNpTrophyRegisterContext},
	{0x77D8E974FCF97FFF, &sceNpTrophyShowTrophyList},
	{0xFEA8E6D9F144EB83, &sceNpTrophySystemIsServerAvailable},
	{0xDBCC6645415AA3AF, &sceNpTrophyUnlockTrophy},
	{0x052A128223151E76, &unk_BSoSgiMVHnY},
	{0x149656DA81D41C59, &unk_FJZW2oHUHFk},
	{0x1EDE8C35397F8DEE, &unk_Ht6MNTl_je4},
	{0x213526BE904F686D, &unk_ITUmvpBPaG0},
	{0x24C49AA44B431FD4, &unk_JMSapEtDH9Q},
	{0x26C4670CA473BD1C, &unk_JsRnDKRzvRw},
	{0x27325D87F24BB6ED, &unk_JzJdh_JLtu0},
	{0x316E7282866A101B, &unk_MW5ygoZqEBs},
	{0x3686D5C03F2A7106, &unk_NobVwD8qcQY},
	{0x39C9651C515C4242, &unk_OcllHFFcQkI},
	{0x435F36C74AD3EF92, &unk_Q182x0rT75I},
	{0x45DD8504E404D3DE, &unk_Rd2FBOQE094},
	{0x464B746D5C9A6B86, &unk_Rkt0bVyaa4Y},
	{0x468E2C23DC60625E, &unk_Ro4sI9xgYl4},
	{0x4AC18B2937D67E6D, &unk_SsGLKTfWfm0},
	{0x5344CE4A29DFBAFC, &unk_U0TOSinfuvw},
	{0x59D0945092D0A1D3, &unk_WdCUUJLQodM},
	{0x5EA2CBB2F978F240, &unk_XqLLsvl48kA},
	{0x5F8EECE006A63C68, &unk_X47s4AamPGg},
	{0x69786F7F63A66E21, &unk_aXhvf2OmbiE},
	{0x701CD711DCD5CEFB, &unk_cBzXEdzVzvs},
	{0x764DBBA254B80841, &unk_dk27olS4CEE},
	{0x795D6BB4BAFE7B2B, &unk_eV1rtLr_eys},
	{0x83477104D4ECA42D, &unk_g0dxBNTspC0},
	{0x86F75386756FC1D6, &unk_hvdThnVvwdY},
	{0x8AA61FC42D76B1A9, &unk_iqYfxC12sak},
	{0x915E033F439330DA, &unk_kV4DP0OTMNo},
	{0x9469E6E4A83FCE90, &unk_lGnm5Kg_zpA},
	{0x959499A0DF01B2D2, &unk_lZSZoN8BstI},
	{0x9611385D2F4E257B, &unk_lhE4XS9OJXs},
	{0x996B6C9C763C2598, &unk_mWtsnHY8JZg},
	{0x9D7AF9461A3C06A9, &unk_nXr5Rho8Bqk},
	{0x9DD2DE3561317991, &unk_ndLeNWExeZE},
	{0x9F2B4DFF7FE976F2, &unk_nytN_3_pdvI},
	{0x9F80071876FFA5F6, &unk_n4AHGHb_pfY},
	{0xA732FE680934B500, &unk_pzL_aAk0tQA},
	{0xA89DC8BEB3A85E0D, &unk_qJ3IvrOoXg0},
	{0xABA78032E7172043, &unk_q6eAMucXIEM},
	{0xB094839C94491E12, &unk_sJSDnJRJHhI},
	{0xB0A185158E7D92C6, &unk_sKGFFY59ksY},
	{0xB40C675E9CC3805C, &unk_tAxnXpzDgFw},
	{0xB50DED5DF559ADE5, &unk_tQ3tXfVZreU},
	{0xB55D7C9FC39C85E2, &unk_tV18n8OcheI},
	{0xC8327FAFFF1FE12E, &unk_yDJ_r_8f4S4},
	{0xC9726581796322D9, &unk_yXJlgXljItk},
	{0xCC38C5D86FBAB48D, &unk_zDjF2G_6tI0},
	{0xCFC4423F9DFA18E3, &unk_z8RCP536GOM},
	{0xDB4C0031B5CFFEED, &unk_20wAMbXP_u0},
	{0xDED58AA4D2A7E7E2, &unk_3tWKpNKn5_I},
	{0xE10605C02EED9F85, &unk_4QYFwC7tn4U},
	{0xE7406F618CCF4EC6, &unk_50BvYYzPTsY},
	{0xE8439F4B9483828A, &unk_6EOfS5SDgoo},
	{0xECA87CEAF26AB71C, &unk_7Kh86vJqtxw},
	{0xED63E3E0A085DC3F, &unk_7WPj4KCF3D8},
	{0xEFE391D5353940E0, &unk_7_OR1TU5QOA},
	{0xF1A2E52C728FF8DA, &unk_8aLlLHKP_No},
	{0xF8EF6F5350A91990, &unk__O9vU1CpGZA},
	{0xFA7A2DD770447552, &unk__not13BEdVI},
	{0xFCB0BD86E7660FE6, &unk__LC9hudmD_Y},
};

MODULE_INIT(libSceNpTrophy);