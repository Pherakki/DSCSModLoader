#pragma once

#include <stdint.h>

#include <map>
#include <vector>

typedef uint8_t undefined;

namespace dscs
{
    // forward declaration
    struct BankSaveEntry;
    struct FarmSaveEntry;

    struct DigimonMove
    {
        uint32_t type;
        uint32_t move;
    };

    struct ScanData
    {
        uint16_t digimonId;
        uint16_t scanrate;
    };

    struct Digimon
    {
        undefined field0_0x0;
        undefined field1_0x1;
        undefined field2_0x2;
        undefined field3_0x3;
        uint32_t digimonId;
        undefined field5_0x8;
        undefined field6_0x9;
        undefined field7_0xa;
        undefined field8_0xb;
        undefined field9_0xc;
        undefined field10_0xd;
        undefined field11_0xe;
        undefined field12_0xf;
        undefined field13_0x10;
        undefined field14_0x11;
        undefined field15_0x12;
        undefined field16_0x13;
        char name[72];
        int16_t memoryCost;
        undefined field19_0x5e;
        undefined field20_0x5f;
        undefined field21_0x60;
        undefined field22_0x61;
        undefined field23_0x62;
        undefined field24_0x63;
        undefined field25_0x64;
        undefined field26_0x65;
        undefined field27_0x66;
        undefined field28_0x67;
        int16_t level;
        int16_t levelCapBonus;
        int16_t levelCapBase;
        undefined field32_0x6e;
        undefined field33_0x6f;
        uint32_t exp;
        undefined field35_0x74;
        undefined field36_0x75;
        undefined field37_0x76;
        undefined field38_0x77;
        uint32_t personality;
        uint32_t currentHP;
        int32_t baseHP;
        uint16_t trainedHP;
        undefined field43_0x86;
        undefined field44_0x87;
        uint32_t currentSP;
        uint32_t baseSP;
        uint16_t trainedSP;
        uint16_t baseOff;
        uint16_t trainedATK;
        uint16_t baseDef;
        uint16_t trainedDef;
        uint16_t baseInt;
        uint16_t trainedInt;
        uint16_t baseSpd;
        uint16_t trainedSpd;
        uint16_t abi;
        uint16_t cam;
        undefined field58_0xa6;
        undefined field59_0xa7;
        DigimonMove move[6];
        undefined field66_0xd8;
        undefined field67_0xd9;
        undefined field68_0xda;
        undefined field69_0xdb;
        undefined field70_0xdc;
        undefined field71_0xdd;
        undefined field72_0xde;
        undefined field73_0xdf;
        undefined field74_0xe0;
        undefined field75_0xe1;
        undefined field76_0xe2;
        undefined field77_0xe3;
        undefined field78_0xe4;
        undefined field79_0xe5;
        undefined field80_0xe6;
        undefined field81_0xe7;
        undefined field82_0xe8;
        undefined field83_0xe9;
        undefined field84_0xea;
        undefined field85_0xeb;
        undefined field86_0xec;
        undefined field87_0xed;
        undefined field88_0xee;
        undefined field89_0xef;
        undefined field90_0xf0;
        undefined field91_0xf1;
        undefined field92_0xf2;
        undefined field93_0xf3;
        undefined field94_0xf4;
        undefined field95_0xf5;
        undefined field96_0xf6;
        undefined field97_0xf7;
        undefined field98_0xf8;
        undefined field99_0xf9;
        undefined field100_0xfa;
        undefined field101_0xfb;
        undefined field102_0xfc;
        undefined field103_0xfd;
        undefined field104_0xfe;
        undefined field105_0xff;
        undefined field106_0x100;
        undefined field107_0x101;
        undefined field108_0x102;
        undefined field109_0x103;
        undefined field110_0x104;
        undefined field111_0x105;
        undefined field112_0x106;
        undefined field113_0x107;
        undefined field114_0x108;
        undefined field115_0x109;
        undefined field116_0x10a;
        undefined field117_0x10b;
        undefined field118_0x10c;
        undefined field119_0x10d;
        undefined field120_0x10e;
        undefined field121_0x10f;
        undefined field122_0x110;
        undefined field123_0x111;
        undefined field124_0x112;
        undefined field125_0x113;
        undefined field126_0x114;
        undefined field127_0x115;
        undefined field128_0x116;
        undefined field129_0x117;
        undefined field130_0x118;
        undefined field131_0x119;
        undefined field132_0x11a;
        undefined field133_0x11b;
        undefined field134_0x11c;
        undefined field135_0x11d;
        undefined field136_0x11e;
        undefined field137_0x11f;
        undefined field138_0x120;
        undefined field139_0x121;
        undefined field140_0x122;
        undefined field141_0x123;
        undefined field142_0x124;
        undefined field143_0x125;
        undefined field144_0x126;
        undefined field145_0x127;
        undefined field146_0x128;
        undefined field147_0x129;
        undefined field148_0x12a;
        undefined field149_0x12b;
        undefined field150_0x12c;
        undefined field151_0x12d;
        undefined field152_0x12e;
        undefined field153_0x12f;
        undefined field154_0x130;
        undefined field155_0x131;
        undefined field156_0x132;
        undefined field157_0x133;
        undefined field158_0x134;
        undefined field159_0x135;
        undefined field160_0x136;
        undefined field161_0x137;
        undefined field162_0x138;
        undefined field163_0x139;
        undefined field164_0x13a;
        undefined field165_0x13b;
        undefined field166_0x13c;
        undefined field167_0x13d;
        undefined field168_0x13e;
        undefined field169_0x13f;
        undefined field170_0x140;
        undefined field171_0x141;
        undefined field172_0x142;
        undefined field173_0x143;
        undefined field174_0x144;
        undefined field175_0x145;
        undefined field176_0x146;
        undefined field177_0x147;
        undefined field178_0x148;
        undefined field179_0x149;
        undefined field180_0x14a;
        undefined field181_0x14b;
        undefined field182_0x14c;
        undefined field183_0x14d;
        undefined field184_0x14e;
        undefined field185_0x14f;
        undefined field186_0x150;
        undefined field187_0x151;
        undefined field188_0x152;
        undefined field189_0x153;
        undefined field190_0x154;
        undefined field191_0x155;
        undefined field192_0x156;
        undefined field193_0x157;
        undefined field194_0x158;
        undefined field195_0x159;
        undefined field196_0x15a;
        undefined field197_0x15b;
        undefined field198_0x15c;
        undefined field199_0x15d;
        undefined field200_0x15e;
        undefined field201_0x15f;
        undefined field202_0x160;
        undefined field203_0x161;
        undefined field204_0x162;
        undefined field205_0x163;
        undefined field206_0x164;
        undefined field207_0x165;
        undefined field208_0x166;
        undefined field209_0x167;
        undefined field210_0x168;
        undefined field211_0x169;
        undefined field212_0x16a;
        undefined field213_0x16b;
        undefined field214_0x16c;
        undefined field215_0x16d;
        undefined field216_0x16e;
        undefined field217_0x16f;
        undefined field218_0x170;
        undefined field219_0x171;
        undefined field220_0x172;
        undefined field221_0x173;
        undefined field222_0x174;
        undefined field223_0x175;
        undefined field224_0x176;
        undefined field225_0x177;
        undefined field226_0x178;
        undefined field227_0x179;
        undefined field228_0x17a;
        undefined field229_0x17b;
        undefined field230_0x17c;
        undefined field231_0x17d;
        undefined field232_0x17e;
        undefined field233_0x17f;
        undefined field234_0x180;
        undefined field235_0x181;
        undefined field236_0x182;
        undefined field237_0x183;
        undefined field238_0x184;
        undefined field239_0x185;
        undefined field240_0x186;
        undefined field241_0x187;
        undefined field242_0x188;
        undefined field243_0x189;
        undefined field244_0x18a;
        undefined field245_0x18b;
        undefined field246_0x18c;
        undefined field247_0x18d;
        undefined field248_0x18e;
        undefined field249_0x18f;
        undefined field250_0x190;
        undefined field251_0x191;
        undefined field252_0x192;
        undefined field253_0x193;
        undefined field254_0x194;
        undefined field255_0x195;
        undefined field256_0x196;
        undefined field257_0x197;
        undefined field258_0x198;
        undefined field259_0x199;
        undefined field260_0x19a;
        undefined field261_0x19b;
        undefined field262_0x19c;
        undefined field263_0x19d;
        undefined field264_0x19e;
        undefined field265_0x19f;
        undefined field266_0x1a0;
        undefined field267_0x1a1;
        undefined field268_0x1a2;
        undefined field269_0x1a3;
        undefined field270_0x1a4;
        undefined field271_0x1a5;
        undefined field272_0x1a6;
        undefined field273_0x1a7;
        undefined field274_0x1a8;
        undefined field275_0x1a9;
        undefined field276_0x1aa;
        undefined field277_0x1ab;
        undefined field278_0x1ac;
        undefined field279_0x1ad;
        undefined field280_0x1ae;
        undefined field281_0x1af;
        undefined field282_0x1b0;
        undefined field283_0x1b1;
        undefined field284_0x1b2;
        undefined field285_0x1b3;
        undefined field286_0x1b4;
        undefined field287_0x1b5;
        undefined field288_0x1b6;
        undefined field289_0x1b7;
        undefined field290_0x1b8;
        undefined field291_0x1b9;
        undefined field292_0x1ba;
        undefined field293_0x1bb;
        undefined field294_0x1bc;
        undefined field295_0x1bd;
        undefined field296_0x1be;
        undefined field297_0x1bf;
        undefined field298_0x1c0;
        undefined field299_0x1c1;
        undefined field300_0x1c2;
        undefined field301_0x1c3;
        undefined field302_0x1c4;
        undefined field303_0x1c5;
        undefined field304_0x1c6;
        undefined field305_0x1c7;
        undefined field306_0x1c8;
        undefined field307_0x1c9;
        undefined field308_0x1ca;
        undefined field309_0x1cb;
        undefined field310_0x1cc;
        undefined field311_0x1cd;
        undefined field312_0x1ce;
        undefined field313_0x1cf;
        undefined field314_0x1d0;
        undefined field315_0x1d1;
        undefined field316_0x1d2;
        undefined field317_0x1d3;
        undefined field318_0x1d4;
        undefined field319_0x1d5;
        undefined field320_0x1d6;
        undefined field321_0x1d7;
        undefined field322_0x1d8;
        undefined field323_0x1d9;
        undefined field324_0x1da;
        undefined field325_0x1db;
        undefined field326_0x1dc;
        undefined field327_0x1dd;
        undefined field328_0x1de;
        undefined field329_0x1df;
        undefined field330_0x1e0;
        undefined field331_0x1e1;
        undefined field332_0x1e2;
        undefined field333_0x1e3;
        undefined field334_0x1e4;
        undefined field335_0x1e5;
        undefined field336_0x1e6;
        undefined field337_0x1e7;
        undefined field338_0x1e8;
        undefined field339_0x1e9;
        undefined field340_0x1ea;
        undefined field341_0x1eb;
        undefined field342_0x1ec;
        undefined field343_0x1ed;
        undefined field344_0x1ee;
        undefined field345_0x1ef;
        undefined field346_0x1f0;
        undefined field347_0x1f1;
        undefined field348_0x1f2;
        undefined field349_0x1f3;
        undefined field350_0x1f4;
        undefined field351_0x1f5;
        undefined field352_0x1f6;
        undefined field353_0x1f7;
        undefined field354_0x1f8;
        undefined field355_0x1f9;
        undefined field356_0x1fa;
        undefined field357_0x1fb;
        undefined field358_0x1fc;
        undefined field359_0x1fd;
        undefined field360_0x1fe;
        undefined field361_0x1ff;
        undefined field362_0x200;
        undefined field363_0x201;
        undefined field364_0x202;
        undefined field365_0x203;
        undefined field366_0x204;
        undefined field367_0x205;
        undefined field368_0x206;
        undefined field369_0x207;
        undefined field370_0x208;
        undefined field371_0x209;
        undefined field372_0x20a;
        undefined field373_0x20b;
        undefined field374_0x20c;
        undefined field375_0x20d;
        undefined field376_0x20e;
        undefined field377_0x20f;
        undefined field378_0x210;
        undefined field379_0x211;
        undefined field380_0x212;
        undefined field381_0x213;
        undefined field382_0x214;
        undefined field383_0x215;
        undefined field384_0x216;
        undefined field385_0x217;
        undefined field386_0x218;
        undefined field387_0x219;
        undefined field388_0x21a;
        undefined field389_0x21b;
        short numEquipSlots;
        short equip[3];
        short accessory;
        undefined field393_0x226;
        undefined field394_0x227;
        undefined field395_0x228;
        undefined field396_0x229;
        undefined field397_0x22a;
        undefined field398_0x22b;
        undefined field399_0x22c;
        undefined field400_0x22d;
        undefined field401_0x22e;
        undefined field402_0x22f;
        undefined field403_0x230;
        undefined field404_0x231;
        undefined field405_0x232;
        undefined field406_0x233;
    };

    struct PartyEntry
    {
        bool isFilled;
        undefined field1_0x1;
        undefined field2_0x2;
        undefined field3_0x3;
        uint32_t field4_0x4;
        uint32_t field5_0x8;
        uint32_t field6_0xc;
        Digimon* digimonPtr;

        PartyEntry& operator=(const BankSaveEntry& entry);

        PartyEntry& operator=(const BankSaveEntry* entry);

        PartyEntry& operator=(const FarmSaveEntry& entry);

        PartyEntry& operator=(const FarmSaveEntry* entry);
    };

    struct DigimonContext
    {
        void** functions;
        std::map<int, ScanData*> scanData;
        int32_t bankSize;
        undefined pad1[4];
        std::vector<PartyEntry*> bank;
        std::vector<PartyEntry*> farm[5];
        std::vector<PartyEntry*> party;
        std::vector<PartyEntry*> guestDigimon;
        int32_t story;
        undefined pad2[4];
        std::vector<PartyEntry*> partyBackup;
        std::vector<PartyEntry*> partyBackup2;
    };

} // namespace dscs