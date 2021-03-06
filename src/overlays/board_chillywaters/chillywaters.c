#include "common.h"
#include "../../process.h"
#include "../../object.h"
#include "../../spaces.h"

extern u8 D_800CB99C;
extern u8 D_800CD059;
extern s8 D_800CD05A;
extern s8 D_800CD05B;
extern s8 D_800CD067;
extern u16 D_800CD0B4[];
extern u16 D_800CE198;
extern u16 D_800D037C;
extern u8 D_800D03F8[];

extern void *D_8011A8D8;
extern s32 D_8011E280[];
extern s16 D_8011D2C0[];
extern s32 D_8011D308;
extern struct object *D_8011D314;
extern struct object *D_8011D318;
extern void *D_8011D31C;
extern void *D_8011D320;
extern void *D_8011E2CC;
extern void *D_8011E344;
extern void *D_8011E4D8;
extern void *D_8011E718;
extern void *D_8011E8B8;
extern f64 D_8011F968;
extern void *D_8011FAEC;
extern void *D_8011FB08;
extern void *D_8011FB0C;
extern void *D_8011FB10;
extern void *D_8011FB18[];
extern void *D_8011FB58;
extern s32 D_8011FB68;
extern s32 D_80121D80[];

extern void func_80089A10(void *, f32, f32, f32);
extern f32 func_8008EF20(f32);
extern f32 func_800D8790(struct coords_3d *);
extern u16 func_800D9E0C(struct object *);
extern u16 func_800D9E80(struct object *);
extern f32 func_800EA660(f32);
extern f32 func_800EEF80(f32);
extern void func_800F68E0(s8, s32, s16);

extern s32 func_8010DE7C_3239EC();
extern s32 func_8010F2FC_324E6C();
extern s32 func_8010F6C4_325234();
extern s32 func_8010F730_3252A0();
extern s32 func_80117C60_32D7D0();
extern s32 func_8011093C_3264AC();
extern s32 func_80110BC8_326738();
extern s32 func_8010FC24_325794();
extern s32 func_80110194_325D04();
extern s32 func_801104E0_326050();
extern s32 func_80116F5C_32CACC();
extern s32 func_801177DC_32D34C();
extern s32 func_80111018_326B88();
extern s32 func_801112D8_326E48();
extern s32 func_80111678_3271E8();
extern s32 func_80112074_327BE4();
extern void func_80112BCC_32873C();
extern s32 func_801138E4_329454();
extern s32 func_80114B80_32A6F0();
extern s32 func_80115B80_32B6F0();
extern s32 func_80116DAC_32C91C();
extern s32 func_801176A4_32D214();
extern s32 func_8011C88C_3323FC();
extern s32 func_80118B7C_32E6EC();

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801059D0_31B540);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105A64_31B5D4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105DB8_31B928);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105E20_31B990);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105E80_31B9F0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105EA8_31BA18);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80105FB0_31BB20);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010603C_31BBAC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801060E0_31BC50);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80106154_31BCC4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80106544_31C0B4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801065D0_31C140);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010698C_31C4FC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80106EEC_31CA5C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80106F60_31CAD0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80106FE8_31CB58);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107044_31CBB4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107114_31CC84);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107174_31CCE4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107408_31CF78);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107620_31D190);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107750_31D2C0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801078E8_31D458);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107BB4_31D724);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80107BD4_31D744);

// entrypoint 0
void func_80107BF4_31D764() {
    D_800CD059 = 0;
    func_80047160(0xA, 0);
    func_80048228(0x47, 0, 0x192);
}

// entrypoint 1
void func_80107C2C_31D79C(void) {
    func_80047160(0xA, 0);

    func_800ED91C(0, 0, 0);
    func_800ED91C(1, 0, 0);
    func_800ED91C(2, 0, 0);
    func_800ED91C(3, 0, 0);

    func_80035FDC(3);
    func_80105EA8_31BA18();
    func_8003602C(0x12);

    D_800CD0B4[0] = 0;
    D_800CD0B4[-3] = 0;
    D_800CD0B4[-4] = 0;
    D_800CD0B4[-14] = 0;

    func_8004819C(1);
}

// setup routine
void func_80107CC4_31D834(void) {
    struct space_data *spacedata;
    struct coords_3d subroutine_arg4;

    func_80047160(0xA0, 0x28);
    func_80019514(1, 0xFF, 0xFF, 0xFF);
    func_80019514(2, 0xC8, 0xC8, 0xC8);
    func_800F89D0(3, 0x23A, 5, 0);
    func_800EBCFC(&D_8011D31C);
    func_800EBD54(&D_8011D320);
    spacedata = GetSpaceData(0x77);
    func_800ECB58(&(spacedata->coords), &(GetSpaceData(0x73)->coords), &subroutine_arg4);
    func_800EA660(func_800D8790(&subroutine_arg4) + 180.0f);
    spacedata = GetSpaceData(0x7C);
    func_800ECB58(&(spacedata->coords), &(GetSpaceData(0x6E)->coords), &subroutine_arg4);
    func_800EA660(func_800D8790(&subroutine_arg4) + 180.0f);
    spacedata = GetSpaceData(0x8F);
    func_800ECB58(&(spacedata->coords), &(GetSpaceData(0x80)->coords), &subroutine_arg4);
    func_800EA660(func_800D8790(&subroutine_arg4) + 180.0f);

    func_800E2960(0, func_8010DE7C_3239EC);
    func_800E2960(1, func_8010F2FC_324E6C);
    func_800E2960(9, func_8010F6C4_325234);
    func_800E2960(2, func_8010F730_3252A0);
    func_800E2960(3, func_80117C60_32D7D0);
    func_800E2960(4, func_8011093C_3264AC);
    func_800E2960(5, func_80110BC8_326738);
    func_800E2960(6, func_8010FC24_325794);
    func_800E2960(7, func_80110194_325D04);
    func_800E2960(8, func_801104E0_326050);
    func_800E2960(0xA, func_80116F5C_32CACC);
    func_800E2960(0xB, func_801177DC_32D34C);
    func_800E2960(0xE, func_80111018_326B88);
    func_800E2960(0xF, func_801112D8_326E48);
    func_800E2960(0x10, func_80111678_3271E8);
    func_800E2960(0x11, func_80112074_327BE4);
    func_800E2960(0x12, func_80112BCC_32873C);
    func_800E2960(0x13, func_801138E4_329454);
    func_800E2960(0x14, func_80114B80_32A6F0);
    func_800E2960(0x15, func_80115B80_32B6F0);
    func_800E2960(0xC, func_80116DAC_32C91C);
    func_800E2960(0xD, func_801176A4_32D214);
    func_800DA748(func_8011C88C_3323FC);

    {
        s32 i = 0;
        for (i = 0; i < 8; i++) {
            func_800EA6E0(i, D_8011D2C0[i]);
        }
    }

    if (func_80035F98(0xE) != 0) {
        func_8003602C(0xE);
        func_80105FB0_31BB20();
    }

    func_8010603C_31BBAC();
    func_80108250_31DDC0();
    func_8010841C_31DF8C();
    func_801086E0_31E250();
    func_801088B4_31E424();
    func_80108B24_31E694();
    func_80108BA4_31E714();
    func_80116AA0_32C610();
    func_800EBDAC();
    func_80047EA0(func_80118B7C_32E6EC, 0x4800, 0, 0);
}

// entrypoint 2
void func_80108014_31DB84(void) {
    func_8004A520(0x18);
    D_800CE198 = 0x18;
    func_800F8D6C(0x18);
    func_80012220(2);
    func_80107CC4_31D834();
    func_800EBA60(&D_8011E2CC);
    func_800EBA60(&D_8011E718);
    func_800F8D48(&D_8011A8D8);
    func_800EBA60(&D_8011E344);
    func_800EBA60(&D_8011E4D8);
    func_800FF41C(0);
}

// entrypoint 3
void func_80108098_31DC08() {
    func_80012220(1);
    func_80107CC4_31D834();
    func_800FF41C(1);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801080C4_31DC34);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801081EC_31DD5C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108250_31DDC0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801082FC_31DE6C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010841C_31DF8C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108478_31DFE8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108574_31E0E4, s16 arg0);

// draw bank coins
void func_801086E0_31E250(void) {
    s32 i;

    D_8011FB10 = NULL;
    for (i = 0; i < 10; i++) {
        D_8011FB18[i] = NULL;
        func_80108574_31E0E4(i);
    }

    func_80108478_31DFE8();
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108748_31E2B8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801088B4_31E424);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108914_31E484);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108970_31E4E0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108A38_31E5A8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108AE8_31E658);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108B24_31E694);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108BA4_31E714);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108C1C_31E78C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108CA4_31E814);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108CC8_31E838);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108D28_31E898);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108D60_31E8D0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108D98_31E908);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108DD0_31E940);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80108E80_31E9F0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109390_31EF00);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801093C8_31EF38);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109400_31EF70);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109430_31EFA0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109474_31EFE4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801094A4_31F014);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801094E8_31F058);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109518_31F088);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010955C_31F0CC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010958C_31F0FC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801095D0_31F140);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109600_31F170);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109644_31F1B4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109674_31F1E4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801096B8_31F228);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109718_31F288);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010973C_31F2AC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109760_31F2D0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109784_31F2F4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801097E4_31F354);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109808_31F378);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010982C_31F39C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109850_31F3C0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109874_31F3E4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801098D4_31F444);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801098F8_31F468);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010991C_31F48C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109940_31F4B0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109964_31F4D4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109988_31F4F8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801099AC_31F51C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801099D0_31F540);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801099F4_31F564);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109A28_31F598);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109A6C_31F5DC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109A90_31F600);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109AB4_31F624);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109AD8_31F648);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109E84_31F9F4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109EB4_31FA24);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109EF8_31FA68);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80109F54_31FAC4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A068_31FBD8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A098_31FC08);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A134_31FCA4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A3B8_31FF28);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A474_31FFE4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A4B4_320024);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010A860_3203D0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010B394_320F04);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010B41C_320F8C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010B484_320FF4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010B65C_3211CC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010C914_322484);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010C9B4_322524);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010CA54_3225C4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010CE9C_322A0C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010CEC0_322A30);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010DCEC_32385C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010DE40_3239B0);

// boo event
INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010DE7C_3239EC);
// void func_8010DE7C_3239EC() {
//     struct player *player;
//     s16 space_index;
//     struct space_data *spacedata;
//     struct object *obj;
//     f32 temp_f22;
//     f32 phi_f20;
//     struct coords_3d subroutine_arg1A;
//     struct process *temp_s0_4_process;
//     struct coords_3d subroutine_arg23; // type guess, not known

//     func_800EBCC8(0);

//     player = GetPlayerStruct(-1);
//     func_800F2304(-1, -1, 2, func_800DBEC0(D_800CD067));

//     // GetAbsSpaceIndexFromChainSpaceIndex
//     space_index = func_800EB184(player->cur_chain_index, player->cur_space_index, 0);

//     if (space_index != 0x92) {
//         func_800D9B24(&obj, func_800D975C(D_8011FB08, -1, (u16)-1));
//         obj->unk30 = 30.0f;
//         spacedata = GetSpaceData(space_index); // GetSpaceData
//         func_80089A10(&obj->coords, spacedata->coords->x, spacedata->coords->y + 10.0f, spacedata->coords->z);
//         phi_s4 = NULL;
//     }
//     else {
//         spacedata = GetSpaceData(0x6A);
//         func_8004AA88(0x125, D_8011FB0C);
//         obj = func_800D90C8(0x33, NULL);
//         if (D_80121D80[D_800CD058] != 0) {
//             func_8001ED54(obj->unk3C->unk40->unk0);
//         }
//         func_8001C448(obj->unk3C->unk40->unk0);
//         func_800D9714(obj);
//         func_80089AB0(&subroutine_arg1A, &(GetSpaceData(space_index)->coords), spacedata);
//         func_800D88E8(&subroutine_arg1A);
//         func_80089A20(&obj->unk18, &subroutine_arg1A);
//         obj->unk28 = 0.0f;
//         func_80089A20(&obj->coords, spacedata);
//         func_800D9CE8(obj, -1, 1);
//         func_800D9AA4(obj);
//         temp_f22 = 1.0f / func_8008EF20(50.0f);

//         phi_f20 = 0.0f;
//         do {
//             obj->unk28 = func_8008EF20(phi_f20) * temp_f22;
//             obj->unk24 = (func_8008EF20(phi_f20) * temp_f22 * 0.99f) + 0.01f;
//             obj->unk2C = (func_8008EF20(phi_f20) * temp_f22 * 0.99f) + 0.01f;
//             if (D_8011E280[D_800CD058] != 0) {
//                 obj->unk24 = -obj->unk24;
//             }
//             SleepVProcess();
//             phi_f20 += 11.25f;
//         }
//         while (temp_f20 < 90.0f);

//         while (50.0f < phi_f20) {
//             obj->unk28 = func_8008EF20(phi_f20) * temp_f22;
//             obj->unk24 = (func_8008EF20(phi_f20) * temp_f22 * 0.99f) + 0.01f;
//             obj->unk2C = (func_8008EF20(phi_f20) * temp_f22 * 0.99f) + 0.01f;
//             if (D_8011E280[D_800CD058] != 0) {
//                 obj->unk24 = -obj->unk24;
//             }
//             SleepVProcess();
//             phi_f20 -= 11.25f;
//         }

//         obj->unk28 = 1.0f;
//         obj->unk24 = 1.0f;
//         obj->unk2C = 1.0f;

//         if (D_80121D80[D_800CD058] != 0) {
//             obj->unk24 = -1.0f;
//         }
//         func_800D9CE8(obj, -1, 0);
//         func_8001C92C(obj->unk3C->unk40->unk0, 1.2f); //0x3F99999A, 1.20000004768

//         while (TRUE) {
//             if (func_800D9E0C(obj) == 0) {
//                 SleepVProcess();
//                 continue;
//             }
//         }
//     }

//     func_8004AA88(0x257);
//     func_8010C914_322484(subroutine_arg23);
//     if (/*temp_s0_3*/ space_index != -1) {
//         func_800D9F5C(subroutine_arg23, &(GetSpaceData(space_index)->coords), 5);
//         func_800ED20C(-1, 5, temp_s0_3);
//         SleepProcess(5);
//         temp_s0_4_process = GetCurrentProcess();
//         LinkChildProcess(temp_s0_4_process, func_800E8EDC(1.6f)); // 0x3FCCCCCD
//         WaitForChildProcess();
//     }

//     if (gPlayers[current_player_index].flags < 5) {
//         func_800EC590(7, 0x6201);
//     }
//     else {
// loop_23:
// loop_24:
//         if (phi_s0 != D_800CD067) {
//             temp_v1 = ((phi_s0 * 8) - phi_s0) * 8;
//             phi_v0 = phi_s0 < 4;
//             if (gPlayers[temp_v1].coins == 0) {
//                 phi_v0 = phi_s0 < 4;
//                 if (gPlayers[temp_v1].stars == 0) {
// block_27:
//                     temp_s0_5 = phi_s0 + 1;
//                     temp_v0_3 = temp_s0_5 < 4;
//                     phi_s0 = temp_s0_5;
//                     phi_v0 = temp_v0_3;
//                     if (temp_v0_3 != 0) {
//                         goto loop_24;
//                     }
//                 }
//             }
//         } else {
//             goto block_27;
//         }
//         if (phi_v0 == 0) {
//             func_800EC590(7, 0x6202);
//         } else {
//             phi_s0_2 = 0;
// loop_31:
//             if ((phi_s0_2 == D_800CD067) || (phi_s0_3 = phi_s0_2, (((((phi_s0_2 * 8) - phi_s0_2) * 8) + 0x800D0000)->unk1112 == 0))) {
//                 temp_s0_6 = phi_s0_2 + 1;
//                 phi_s0_2 = temp_s0_6;
//                 phi_s0_3 = temp_s0_6;
//                 if (temp_s0_6 < 4) {
//                     goto loop_31;
//                 }
//             }
//             if (phi_s0_3 == 4) {

//             }
//             phi_s0_4 = 0;
// loop_38:
//             if ((phi_s0_4 == D_800CD067) || (phi_s0_5 = phi_s0_4, (((((phi_s0_4 * 8) - phi_s0_4) * 8) + 0x800D0000)->unk1116 == 0))) {
//                 temp_s0_7 = phi_s0_4 + 1;
//                 phi_s0_4 = temp_s0_7;
//                 phi_s0_5 = temp_s0_7;
//                 if (temp_s0_7 < 4) {
//                     goto loop_38;
//                 }
//             }
//             if ((phi_s0_5 != 4) && (temp_v1_2 = D_800CD067 * 0x38, (((s32) (temp_v1_2 + 0x800D0000)->unk1112 < 0x32) == 0))) {
//                 if ((s32) (temp_v1_2 + 0x800D0000)->unk1116 >= 0x63) {
// block_45:
//                 }
//             } else {
//                 goto block_45;
//             }
//             func_800EC8EC(7, 0x6200, &subroutine_arg8, &subroutine_argC, 0, 0, 0, (u8)0, (u8)1, (u8)1);
//             temp_s0_8 = func_80107BB4_31D724(&subroutine_arg18);
//             func_800EC6C8(temp_s0_8);
//             func_800EC6EC();
//             temp_s0_8 = temp_s0_8;
//             if (temp_s0_8 != 2) {
//                 if ((s32) temp_s0_8 >= 3) {
//                     if (temp_s0_8 != 3) {

//                     } else {
//                         if (subroutine_arg25 == -1) {
//                             func_80106FE8_31CB58();
//                             D_800CB99C = 1;
//                             func_80049FB8();
//                         } else {
//                             func_80106F60_31CAD0();
//                         }
//                         goto loop_23;
//                     }
//                 } else if ((s32) temp_s0_8 >= 0) {
// loop_53:
// loop_54:
// loop_55:
//                     if (phi_s0_6 != D_800CD067) {
//                         temp_v0_4 = phi_s0_6 * 8;
//                         if (subroutine_arg2F == 0) {
//                             temp_v0_5 = &subroutine_arg18 + phi_s1;
//                             phi_v0_2 = temp_v0_5;
//                             if ((((temp_v0_4 - phi_s0_6) * 8) + 0x800D0000)->unk1112 != 0) {
//                                 *temp_v0_5 = (u8)1;
// block_63:
//                                 *(&subroutine_arg8 + (phi_s1 * 0x10)) = (u8)8;
//                             } else {
// block_61:
//                                 *phi_v0_2 = (u8)0;
//                                 *(&subroutine_arg8 + (phi_s1 * 0x10)) = (u8)1;
//                             }
//                         } else if ((((temp_v0_4 - phi_s0_6) * 8) + 0x800D0000)->unk1116 == 0) {
// block_60:
//                             phi_v0_2 = &subroutine_arg18 + phi_s1;
//                             goto block_61;
//                         } else {
//                             *(&subroutine_arg18 + phi_s1) = (u8)1;
//                             goto block_63;
//                         }
//                     } else {
//                         goto block_60;
//                     }
//                     func_800E2260(phi_s0_6, &subroutine_arg8 + (phi_s1 * 0x10) + 1);
//                     temp_s0_9 = phi_s0_6 + 1;
//                     phi_s0_6 = temp_s0_9;
//                     phi_s1 = phi_s1 + 1;
//                     if (temp_s0_9 < 4) {
//                         goto loop_55;
//                     }
//                     func_800EC8EC(7, 0x5C02, &subroutine_arg8, &subroutine_argC, &subroutine_arg10, &subroutine_arg14, 0, (u8)1, (u8)1);
//                     temp_s0_10 = func_80107BD4_31D744(&subroutine_arg18);
//                     temp_s2_2 = temp_s0_10;
//                     func_800EC6C8();
//                     func_800EC6EC();
//                     temp_s0_10 = temp_s0_10;
//                     if (temp_s0_10 != 4) {
//                         if ((s32) temp_s0_10 < 5) {
//                             if (temp_s0_10 == -1) {
//                                 goto loop_23;
//                             }
//                             phi_s1_3 = 0;
//                             phi_s2_2 = temp_s2_2;
//                         } else {
//                             phi_s1_3 = 0;
//                             phi_s2_2 = temp_s2_2;
//                             if (temp_s0_10 == 5) {
//                                 if (subroutine_arg25 == -1) {
//                                     func_80106FE8_31CB58();
//                                     D_800CB99C = 1;
//                                     func_80049FB8();
//                                     phi_s0_6 = 0;
//                                     phi_s1 = 0;
//                                 } else {
//                                     func_80106F60_31CAD0();
//                                     goto loop_53;
//                                 }
//                                 goto loop_54;
//                             }
//                         }
//                     } else {
//                         phi_s0_7 = 0;
//                         phi_s2 = 0;
// loop_74:
//                         phi_s1_2 = 0;
// loop_75:
//                         phi_s2_3 = phi_s2;
//                         if (phi_s0_7 == func_800EE9C0(phi_s1_2)) {
//                             phi_s2_3 = phi_s2;
//                             if (D_800CD067 != phi_s1_2) {
//                                 ((phi_s2 * 4) + &subroutine_arg8)->unk58 = phi_s1_2;
//                                 phi_s2_3 = phi_s2 + 1;
//                             }
//                         }
//                         temp_s1_2 = phi_s1_2 + 1;
//                         phi_s1_2 = temp_s1_2;
//                         phi_s2 = phi_s2_3;
//                         if (temp_s1_2 < 4) {
//                             goto loop_75;
//                         }
//                         temp_s0_11 = phi_s0_7 + 1;
//                         phi_s0_7 = temp_s0_11;
//                         phi_s2 = phi_s2_3;
//                         if (temp_s0_11 < 4) {
//                             goto loop_74;
//                         }
//                         phi_v0_3 = 0 * 4;
//                         phi_s0_8 = 0;
// loop_81:
//                         phi_s0_10 = phi_s0_8;
//                         if (func_800EEF80(100.0f) >= *(phi_v0_3 + 0x8011E274)) {
//                             temp_s0_12 = phi_s0_8 + 1;
//                             phi_v0_3 = temp_s0_12 * 4;
//                             phi_s0_8 = temp_s0_12;
//                             phi_s0_10 = temp_s0_12;
//                             if (temp_s0_12 < 3) {
//                                 goto loop_81;
//                             }
//                         }
//                         phi_s0_9 = phi_s0_10;
//                         if ((subroutine_arg2B << 0x10) != 0) {
// loop_84:
//                             temp_v1_3 = ((phi_s0_9 * 4) + &subroutine_arg8)->unk58;
//                             if (((temp_v1_3 * 0x38) + 0x800D0000)->unk1116 == 0) {
//                                 phi_s0_9 = phi_s0_9 - 1;
//                                 goto loop_84;
//                             }
// loop_86:
//                             if (temp_v1_3 != D_800CD067) {
//                                 goto loop_86;
//                             }
//                             phi_s0_9 = phi_s0_9 - 1;
//                             goto loop_84;
//                         }
//                         phi_v0_4 = phi_s0_10 * 4;
//                         phi_s0_11 = phi_s0_10;
//                         if (phi_s0_10 >= 0) {
// loop_90:
//                             temp_v1_4 = (phi_v0_4 + &subroutine_arg8)->unk58;
//                             temp_s0_13 = phi_s0_11 - 1;
//                             if ((((temp_v1_4 * 0x38) + 0x800D0000)->unk1112 == 0) || (temp_v1_4 == D_800CD067)) {
//                                 phi_v0_4 = temp_s0_13 * 4;
//                                 phi_s0_11 = temp_s0_13;
//                                 if (temp_s0_13 >= 0) {
//                                     goto loop_90;
//                                 }
//                             }
//                         }
//                         phi_v0_5 = 2 * 4;
//                         phi_s0_12 = 2;
// loop_94:
//                         temp_v1_5 = (phi_v0_5 + &subroutine_arg8)->unk58;
//                         if ((((temp_v1_5 * 0x38) + 0x800D0000)->unk1112 == 0) || (phi_v0_7 = phi_s0_12 * 4, (temp_v1_5 == D_800CD067))) {
//                             temp_s0_14 = phi_s0_12 - 1;
//                             temp_v0_6 = temp_s0_14 * 4;
//                             phi_v0_5 = temp_v0_6;
//                             phi_s0_12 = temp_s0_14;
//                             phi_v0_7 = temp_v0_6;
//                             if (temp_s0_14 >= 0) {
//                                 goto loop_94;
//                             }
//                         }
//                         phi_s1_3 = 1;
//                         phi_s2_2 = (s16) (sp + phi_v0_7)->unk7A;
//                     }
//                     if ((subroutine_arg2B << 0x10) == 0) {
//                         func_800E1F48(D_800CD067, -5);
//                         phi_a1 = -5;
//                     } else {
//                         func_800E1F48(D_800CD067, -0x32);
//                         phi_a1 = -0x32;
//                     }
//                     func_800F5D44(D_800CD067, phi_a1);
//                     SleepProcess(0x1E);
//                     if ((s16) subroutine_arg2B == 1) {
//                         if (phi_s1_3 != 0) {
//                             phi_a1_2 = 0x6206;
// block_111:
//                             func_800EC590(7, phi_a1_2);
//                         }
//                     } else {
//                         temp_a0 = D_800CD05B;
//                         phi_v0_6 = 0U * 2;
//                         phi_s0_13 = 0U;
// loop_105:
//                         temp_v1_6 = phi_v0_6 + phi_s0_13;
//                         if (((s32) temp_a0 < (s32) (temp_v1_6 + 0x80121DD4) || ((s32) (temp_v1_6 + 0x80121DD3) < (s32) temp_a0)) {
//                             temp_s0_15 = phi_s0_13 + 1;
//                             phi_v0_6 = temp_s0_15 * 2;
//                             phi_s0_13 = temp_s0_15;
//                             if (temp_s0_15 < 6U) {
//                                 goto loop_105;
//                             }
//                         }
//                         if (phi_s1_3 == 0) {
//                             phi_a1_2 = func_800EEF80(6.0f, temp_a0) + 0x6207;
//                         } else {
//                             phi_a1_2 = 0x620D;
//                         }
//                         goto block_111;
//                     }
//                     func_8010C9B4_322524(subroutine_arg23);
//                     if ((subroutine_arg2B << 0x10) == 0) {
//                         temp_s0_16 = phi_s2_2;
//                         temp_s6 = func_8010CEC0_322A30(temp_s0_16);
//                         func_8010C914_322484(subroutine_arg23);
//                         phi_s6_3 = temp_s6;
//                         if (temp_s6 != -2) {
//                             if (temp_s6 == -1) {
//                                 temp_s6_2 = gPlayers[temp_s0_16].flags;
//                                 func_8007BDC0(&subroutine_arg8, 0x8011F8D4, temp_s6_2);
//                                 phi_a1_3 = 0x6214;
//                                 phi_s6 = temp_s6_2;
//                             } else {
//                                 func_8007BDC0(&subroutine_arg8, 0x8011F8D4, temp_s6);
//                                 phi_s0_14 = 0;
//                                 while (TRUE) {
//                                     phi_s0_15 = phi_s0_14;
//                                     if ((subroutine_arg27 - temp_s6) < (s32) (phi_s0_14 + 0x80121D94)) {
//                                         temp_s0_17 = phi_s0_14 + 1;
//                                         phi_s0_14 = temp_s0_17;
//                                         phi_s0_15 = temp_s0_17;
//                                         if (temp_s0_17 < 4) {
//                                             continue;
//                                         }
//                                         break;
//                                     }
//                                 }
//                                 phi_a1_3 = phi_s0_15 + 0x6210;
//                                 phi_s6 = temp_s6;
//                             }
//                             func_800EC8EC(7, phi_a1_3, &subroutine_arg8, 0);
//                             func_800EC6C8();
//                             func_800EC6EC();
//                             phi_s6_3 = phi_s6;
//                             if (phi_s6 != -2) {
//                                 D_800D037C = 0;
//                                 D_8011FB58 = func_800D90C8(0x19, 0);
//                                 func_800D9714(D_8011FB58);
//                                 func_800D9B24(D_8011FB58);
//                                 phi_s6_3 = phi_s6;
//                                 if (phi_s6 != 0) {
//                                     phi_f20_3 = 0.0f;
//                                     phi_s6_4 = phi_s6;
//                                     while (TRUE) {
//                                         temp_f20_3 = phi_f20_3 + ((f32) phi_s6 / 90.0f);
//                                         phi_s6_2 = phi_s6_4;
//                                         phi_f20_3 = temp_f20_3;
//                                         if (1.0f <= temp_f20_3) {
//                                             func_8010DE40_3239B0(subroutine_arg23);
//                                             func_800F5D44(D_800CD067, 1);
//                                             func_800F5BF4(phi_s2_2, -1, 0);
//                                             phi_s6_2 = phi_s6_4 - 1;
//                                             phi_f20_3 = temp_f20_3 - 1.0f;
//                                         }
//                                         SleepVProcess();
//                                         phi_s6_4 = phi_s6_2;
//                                         phi_s6_3 = phi_s6_2;
//                                         if (phi_s6_2 != 0) {
//                                             continue;
//                                         }
//                                         break;
//                                     }
//                                 }
//                                 func_800FFAEC(func_800FFA4C(phi_s2_2, 3, 5));
//                                 SleepProcess(0x14);
//                                 func_800D9B54(D_8011FB58);
//                                 func_800ECC0C(&(GetPlayerStruct(-1)->obj->unk18));
//                                 func_800F2304(-1, 5, 0);
//                                 SleepProcess(5);
//                                 func_8004ACE0(0x274, D_800CD067);
//                                 SleepProcess(0x2D);
//                                 D_800D037C = 1;
//                             } else {
// block_130:
//                             }
//                         } else {
//                             goto block_130;
//                         }
//                     } else {
//                         temp_s0_18 = func_8010CA54_3225C4(phi_s2_2);
//                         func_8010C914_322484(subroutine_arg23);
//                         if (temp_s0_18 != 0) {
//                             func_800EC590(7, 0x6205);
//                             D_8011D308 = 1;
//                             func_80106EEC_31CA5C(subroutine_arg23);
//                             D_8011D308 = 0;
//                             phi_s6_3 = (u16)0;
//                         } else {
//                             phi_s6_3 = (u16)-2;
//                             goto block_130;
//                         }
//                     }
//                     if (subroutine_arg25 == -1) {
//                         SleepProcess(0x14);
//                         func_800F2304(-1, -1, 2);
//                     }
//                     if (phi_s6_3 == -2) {
//                         SleepProcess(0x1E);
//                         func_800EC590(7, 0x6215);
//                     }
//                 }
//             } else {
//                 func_8010C9B4_322524(subroutine_arg23);
//                 func_800EC590(7, 0x6203);
//             }
//         }
//     }

//     if ((s16) subroutine_arg2B != 2) {
//         func_8010C9B4_322524(subroutine_arg23);
//     }

//     func_800ECC0C(subroutine_arg23 + 0x18);

//     if (subroutine_arg25 == -1) {
//         func_800D9B54(subroutine_arg23);
//     }

//     if ((s16) subroutine_arg29 != -1) {
//         func_8004AA88(0x126);
//         func_800D9CE8(phi_s4, -1, 4);
//         func_8001C92C(*phi_s4->unk3C->unk28, 1.2f); // 0x3F99999A
//         temp_a0_2 = *phi_s4->unk3C->unk28;
//         func_8001C6A8(temp_a0_2,
//             (f32) ((((temp_a0_2 * 0xC0) + D_800D03F8)->unk2 * 0x18) + D_800CCF58)->unk2);

//         while (func_800D9E80(phi_s4) == 0) {
//             SleepVProcess();
//         }

//         temp_f22_2 = 1.0f / func_8008EF20(50.0f);
//         phi_f20_4 = 50.0f;
//         while (TRUE) {
//             phi_s4->unk28 = (f32) (func_8008EF20(phi_f20_4) * temp_f22_2);
//             phi_s4->unk24 = (f32) ((func_8008EF20(phi_f20_4) * temp_f22_2 * 0.2f) + 0.8f);
//             phi_s4->unk2C = (f32) ((func_8008EF20(phi_f20_4) * temp_f22_2 * 0.2f) + 0.8f);
//             if (*(((void *)0x800CD058->unk1 * 4) + 0x8011E280) != 0) {
//                 phi_s4->unk24 = (f32) -phi_s4->unk24;
//             }
//             SleepVProcess();
//             temp_f20_4 = phi_f20_4 + 11.25f;
//             phi_f20_4 = temp_f20_4;
//             if (temp_f20_4 < 90.0f) {
//                 continue;
//             }
//             break;
//         }

//         {
//             f32 phi_f20_5 = 90.0f;
//             while (TRUE) {
//                 phi_s4->unk28 = (f32) (func_8008EF20(phi_f20_5) * temp_f22_2);
//                 phi_s4->unk24 = (f32) ((func_8008EF20(phi_f20_5) * temp_f22_2 * 0.2f) + 0.8f);
//                 phi_s4->unk2C = (f32) ((func_8008EF20(phi_f20_5) * temp_f22_2 * 0.2f) + 0.8f);
//                 if (D_8011E280[0x800CD059] != 0) {
//                     phi_s4->unk24 = -phi_s4->unk24;
//                 }
//                 SleepVProcess();
//                 temp_f20_5 = phi_f20_5 - 11.25f;
//                 phi_f20_5 = temp_f20_5;
//                 if (0.0f < temp_f20_5) {
//                     continue;
//                 }
//                 break;
//             }
//         }

//         phi_s4->unk28 = 0.0f;
//         phi_s4->unk24 = 0.0f;
//         phi_s4->unk2C = 0.0f;

//         func_800D9B54(phi_s4);
//     }

//     if (subroutine_arg2D != 0) {
//         func_800DB884(D_800CD058->unkF);
//     }

//     {
//         struct process *proc;
//         if (subroutine_arg25 != -1) {
//             proc = GetCurrentProcess();
//             LinkChildProcess(proc, func_800E8EDC(1.3f)); // 0x3FA66666
//             WaitForChildProcess();
//         }
//     }

//     func_8010A098_31FC08();
// }

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F050_324BC0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F06C_324BDC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F088_324BF8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F1E4_324D54);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F2FC_324E6C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F6C4_325234);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F730_3252A0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010F8F0_325460);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010FB54_3256C4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010FC24_325794);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8010FE54_3259C4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80110024_325B94);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80110194_325D04);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801104E0_326050);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801106A4_326214);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011093C_3264AC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80110BC8_326738);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80110E08_326978);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80111018_326B88);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801112D8_326E48);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80111678_3271E8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80112074_327BE4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801125BC_32812C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801127D8_328348);

void func_80112BCC_32873C(void) {
    s32 i;

    SleepProcess(10);
    for (i = 1; i < 64; i++) {
        func_800F68E0(D_800CD067, func_800E4A7C(), 255.0f - (i * 3.984f));
        SleepVProcess();
    }

    func_800F68E0(D_800CD067, func_800E4A7C(), 0);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80112C88_3287F8);
// void func_80112C88_3287F8() {
//     f32 temp_f0;
//     f32 temp_f20;
//     f64 temp_f22;
//     struct object *temp_s0;
//     struct object *temp_s1;
//     f32 phi_f20;

//     temp_s1 = GetCurrentProcess()->user_data;
//     temp_s0 = func_800D975C(D_8011FB68);
//     func_80089A20(&temp_s0->coords, &temp_s1->coords);
//     func_80089A10(&temp_s0->unk24, 2.0f, 2.0f, 2.0f);
//     temp_s0->unk30 = temp_s1->unk30 + 10.0f;
//     func_800D9AA4(temp_s0);
//     temp_f22 = D_8011F968;
//     phi_f20 = func_800EEF80(360.0f);

//     while (TRUE) {
//         SleepVProcess();
//         temp_f0 = temp_s0->unk30 + temp_f22;
//         temp_s0->unk30 = temp_f0;

//         if ((!((temp_s1->unk30 + 35.0f) <= temp_f0))) {
//             temp_f20 = phi_f20 + 40.0f;
//             func_8008A2A0((temp_s0->unk3C->unk3C * 0xC0) + D_800D03F8 + 0x74, temp_f20);
//             phi_f20 = temp_f20;
//             continue;
//         }
//         break;
//     }

//     func_800D9B54(temp_s0);
//     func_80048008(0);
// }

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80112DDC_32894C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80112E18_328988);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80112FA8_328B18);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80113364_328ED4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801135FC_32916C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80113708_329278);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801138E4_329454);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80114590_32A100);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80114650_32A1C0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80114B80_32A6F0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011548C_32AFFC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801155C4_32B134);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80115734_32B2A4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801158FC_32B46C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80115B80_32B6F0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116484_32BFF4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011667C_32C1EC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801166F4_32C264);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116758_32C2C8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116904_32C474);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116A04_32C574);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116AA0_32C610);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116BA0_32C710);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116DAC_32C91C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116F0C_32CA7C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80116F5C_32CACC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801174D4_32D044);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801176A4_32D214);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_801177DC_32D34C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80117C60_32D7D0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80118308_32DE78);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80118A98_32E608);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80118AE8_32E658);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80118B7C_32E6EC);

struct object *func_80118D6C_32E8DC() {
    struct object *temp_a0;
    struct object *temp_ret;
    struct object *temp_v0;
    struct object *temp_v0_2;

    temp_v0 = D_8011D318;
    if (temp_v0 == NULL) {
        temp_v0_2 = func_800D90C8(0x2E, 0);
        D_8011D318 = temp_v0_2;
        func_800D9714(temp_v0_2);
        func_80089A20(&(D_8011D318->coords), &(GetSpaceData(0x81)->coords));
        temp_a0 = D_8011D318;
        temp_a0->coords.x = temp_a0->coords.x + 1.0f;
        temp_a0->coords.z = temp_a0->coords.z - 20.0f;
        temp_a0->unk24 = 1.2f;
        temp_a0->unk2C = 1.2f;
        func_800D9AA4(temp_a0);
        temp_ret = func_800D9B54(D_8011D314);
        D_8011D314 = NULL;
        return temp_ret;
    }
    return temp_v0;
}

void *func_80118E2C_32E99C() {
    struct object *temp_a0;
    struct object *temp_ret;
    struct object *temp_v0;
    struct object *temp_v0_2;

    temp_v0 = D_8011D314;
    if (temp_v0 == NULL) {
        temp_v0_2 = func_800D90C8(0x2D, 0);
        D_8011D314 = temp_v0_2;
        func_800D9714(temp_v0_2);
        func_80089A20(&(D_8011D314->coords), &(GetSpaceData(0x81)->coords));
        temp_a0 = D_8011D314;
        temp_a0->coords.x = temp_a0->coords.x + 1.0f;
        temp_a0->coords.z = temp_a0->coords.z - 20.0f;
        temp_a0->unk24 = 1.2f;
        temp_a0->unk2C = 1.2f;
        func_800D9AA4(temp_a0);
        temp_ret = func_800D9B54(D_8011D318);
        D_8011D318 = NULL;
        return temp_ret;
    }
    return temp_v0;
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80118EEC_32EA5C);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80119924_32F494);

s32 func_80119A20_32F590(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_80119924_32F494(arg0++);
    return temp_s1 + func_80119924_32F494(arg0);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80119A60_32F5D0);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80119B3C_32F6AC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80119C54_32F7C4);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_80119D08_32F878);

void func_8011A764_3302D4() {
    s32 temp_v0;

    temp_v0 = func_800D90C8(0x36, 0);
    D_8011FAEC = temp_v0;
    func_800D9B24(temp_v0);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011A794_330304);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011A838_3303A8);

void func_8011A8B8_330428() {
    func_800D9B54(D_8011FAEC);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011A8D8_330448);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011B9A0_331510);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011BBA4_331714);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011BD48_3318B8);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011BD8C_3318FC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011BF3C_331AAC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011C470_331FE0);

// entrypoint 4
void func_8011C58C_3320FC() {
    func_80012220(2);
    func_800124BC(1, &D_8011E8B8);
    func_80107CC4_31D834();
    func_800FF41C(2);
    func_80047EA0(func_801065D0_31C140, 0x1005, 0x1000, 0);
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011C5E0_332150);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011C68C_3321FC);

s32 func_8011C750_3322C0() {
    s32 temp_s0;
    s32 phi_v1;

    temp_s0 = D_800CD05A - D_800CD05B + 1;

    phi_v1 = func_800E49DC(-1);
    if (phi_v1 == -1) {
        phi_v1 = 3;
    }

    return (phi_v1 < temp_s0) ? 0 : 1;
}

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011C7A4_332314);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011C88C_3323FC);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011CE94_332A04);

INCLUDE_ASM(s32, "overlays/board_chillywaters/chillywaters", func_8011D1F8_332D68);
