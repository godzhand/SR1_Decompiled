#include "booleans.h";
#include "strings.h";
#include "ints.h";
#include "unknown_data_types.h";

void F_823a5a5c_multi_mode(void)

{
  undefined uVar1;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *puVar13;
  int iVar14;
  ulonglong uVar10;
  int in_r11;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double in_f31;
  double dVar30;
  undefined4 in_stack_00000070;
  int in_stack_00000074;
  int iStack00000098;
  undefined4 uStack000000cc;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  
  uVar6 = DAT_827fd2f0;
  lVar15 = countLeadingZeros((uint)*(byte *)(in_r11 + -0xca4));
  uStack000000cc = DAT_827c8550;
  if (((ulonglong)(lVar15 << 0x20) >> 0x25 & 1) != 0) goto LAB_823a6370;
  DAT_827fd2f4 = DAT_827fd2f0;
  puVar11 = (undefined4 *)(**(code **)(PTR_PTR_FUN_827fd2c8 + 0xc))(0xffffffff827fd2c8,0x10,0);
  iVar14 = 4;
  puVar20 = puVar11;
  do {
    uVar12 = (**(code **)(PTR_PTR_FUN_827fd2c8 + 0xc))(0xffffffff827fd2c8,0x40,0);
    iVar14 = iVar14 + -1;
    *puVar20 = uVar12;
    puVar20 = puVar20 + 1;
  } while (iVar14 != 0);
  uVar18 = 0xffffffff8203c1a4;
  uVar16 = uVar18;
  if (bool_835f4ac6 != '\0') {
    uVar8 = FUN_8264ddc8(str_82070cc8_MULTI_LOBBY_GAME_TYPE,0);
    uVar9 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
    uVar16 = 0xffffffff8203c1a4;
    if ((uVar9 & 0xffffffff) != 0) {
      uVar16 = uVar9;
    }
  }
  Function_8265ED68(*puVar11,uVar16);
  uVar16 = uVar18;
  if (DAT_835f4ac6 != '\0') {
    uVar8 = FUN_8264ddc8(str_82070ce0_MULTI_LOBBY_GAME_MODE,0);
    uVar9 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
    uVar16 = 0xffffffff8203c1a4;
    if ((uVar9 & 0xffffffff) != 0) {
      uVar16 = uVar9;
    }
  }
  Function_8265ED68(puVar11[1],uVar16);
  uVar17 = 0;
  if ((*(int *)(in_r11 + -0x29b8) == 1) || (uVar12 = 0, *(int *)(in_r11 + -0x29b8) == 2)) {
    uVar12 = 1;
  }
  lVar15 = countLeadingZeros(uVar12);
  uVar16 = (ulonglong)(lVar15 << 0x20) >> 0x25 & 1;
  if (uVar16 == 0) {
    *(undefined2 *)puVar11[2] = 0;
  }
  else if (DAT_835f4ac6 == '\0') {
    Function_8265ED68(puVar11[2],0xffffffff8203c1a4);
  }
  else {
    uVar8 = FUN_8264ddc8(str_82070cf8_MULTI_LOBBY_GAME_LEVEL,0);
    uVar10 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
    uVar9 = uVar18;
    if ((uVar10 & 0xffffffff) != 0) {
      uVar9 = uVar10;
    }
    Function_8265ED68(puVar11[2],uVar9);
  }
  if (DAT_835f4ac6 == '\0') {
LAB_823a5c60:
    uVar9 = 0xffffffff8203c1a4;
  }
  else {
    uVar8 = FUN_8264ddc8(str_82070d10_MULTI_LOBBY_GAME_STATUS,0);
    uVar9 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
    if ((uVar9 & 0xffffffff) == 0) goto LAB_823a5c60;
  }
  Function_8265ED68(puVar11[3],uVar9);
  puVar13 = (undefined4 *)(**(code **)(PTR_PTR_FUN_827fd2c8 + 0xc))(0xffffffff827fd2c8,0x10,0);
  iVar14 = 4;
  puVar20 = puVar13;
  do {
    uVar12 = (**(code **)(PTR_PTR_FUN_827fd2c8 + 0xc))(0xffffffff827fd2c8,0x80,0);
    iVar14 = iVar14 + -1;
    *puVar20 = uVar12;
    puVar20 = puVar20 + 1;
  } while (iVar14 != 0);
  Function_8265ED68(*puVar13,(&DAT_835f40b0)[*(int *)(in_r11 + -0x29b8)]);
  Function_8265ED68(puVar13[1],(&PTR_u_MULTI_MODE_1_827f5fe8)[*(int *)(in_r11 + -0x29b4)]);
  if (uVar16 == 0) {
    *(undefined2 *)puVar13[2] = 0;
  }
  else if ((DAT_835f3522 == '\x01') && (DAT_835f33df == '\0')) {
    Function_8265ED68(puVar13[2],0xffffffff82f5f2b0);
  }
  else if (CONCAT22(DAT_835f3c9c._0_2_,DAT_835f3c9c._2_2_) == -1) {
    if (DAT_835f4ac6 == '\0') {
      Function_8265ED68(puVar13[2],0xffffffff8203c1a4);
    }
    else {
      uVar8 = FUN_8264ddc8(str_82070d28_MULTI_LOBBY_UNKNOWN, 0);
      uVar10 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
      uVar9 = uVar18;
      if ((uVar10 & 0xffffffff) != 0) {
        uVar9 = uVar10;
      }
      Function_8265ED68(puVar13[2],uVar9);
    }
  }
  else {
    iVar14 = Function_82387F88(*(undefined4 *)(in_r11 + -0x29b4));
    Function_8265ED68(puVar13[2],*(undefined4 *)(iVar14 + 4));
  }
  if ((*(int *)(in_r11 + -0x29b8) == 0) || (DAT_835f366e != '\0')) {
    uVar8 = countLeadingZeros(DAT_8284d05c);
    lVar15 = countLeadingZeros((int)uVar8);
    if (((ulonglong)(lVar15 << 0x20) >> 0x25 & 1) == 1) {
      if (DAT_835f4ac6 != '\0') {
        uVar8 = str_82070d74_MULTI_LOBBY_WAITING;
        goto LAB_823a5ec0;
      }
      uVar18 = 0xffffffff8203c1a4;
      goto LAB_823a5ee4;
    }
    Function_823F14B0(&stack0x000000c0,5,0xffffffff8284d05c,&stack0x00000078,1);
    if (DAT_835f4ac6 == '\0') {
      Function_8265ED68(puVar13[3],0xffffffff8203c1a4,&stack0x000000c0);
    }
    else {
      uVar8 = FUN_8264ddc8(str_82070d58_MULTI_LOBBY_START_IN_COUNTS,0);
      uVar9 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
      if ((uVar9 & 0xffffffff) != 0) {
        uVar18 = uVar9;
      }
      Function_8265ED68(puVar13[3],uVar18,&stack0x000000c0);
    }
  }
  else {
    if (DAT_835f4ac6 != '\0') {
      uVar8 = 0xffffffff82070d3c;
LAB_823a5ec0:
      uVar8 = FUN_8264ddc8(uVar8,0);
      uVar9 = FUN_82534cb8(0xffffffff83d6a2f8,uVar8);
      uVar18 = 0xffffffff8203c1a4;
      if ((uVar9 & 0xffffffff) != 0) {
        uVar18 = uVar9;
      }
    }
LAB_823a5ee4:
    Function_8265ED68(puVar13[3],uVar18);
  }
  iVar14 = 0;
  iVar21 = 4;
  puVar20 = puVar11;
  do {
    Function_82665500(&stack0x00000074,&stack0x000000a0,*puVar20,0xffffffffffffffff,DAT_827f6f4 0);
    if (iVar14 < in_stack_00000074) {
      iVar14 = in_stack_00000074;
    }
    iVar21 = iVar21 + -1;
    puVar20 = puVar20 + 1;
  } while (iVar21 != 0);
  iVar21 = 0;
  iVar19 = 4;
  puVar20 = puVar13;
  do {
    Function_82665500(&stack0x00000074,&stack0x000000a0,*puVar20,0xffffffffffffffff,DAT_827f6f4 0);
    iVar7 = DAT_82ede190;
    if (iVar21 < in_stack_00000074) {
      iVar21 = in_stack_00000074;
    }
    iVar19 = iVar19 + -1;
    puVar20 = puVar20 + 1;
  } while (iVar19 != 0);
  dVar29 = 0.8700000047683716;
  fVar5 = DAT_82ede18c;
  if (DAT_82ede18c - DAT_82ede188 <= 0.0) {
    fVar5 = DAT_82ede188;
  }
  dVar23 = 0.0;
  dVar27 = (double)((float)(longlong)(iVar21 + iVar14) * fVar5 * 0.87 + DAT_82f62e5c * 2.0 +
                   DAT_82f62e60);
  dVar22 = (double)DAT_82f62e54;
  dVar24 = 0.5;
  dVar28 = dVar23;
  if (dVar27 < dVar22) {
    dVar28 = (double)((float)(dVar22 - dVar27) * 0.5);
    dVar27 = dVar22;
  }
  lVar15 = countLeadingZeros((int)uVar16);
  dVar22 = (double)(float)(in_f31 * 255.0);
  dVar30 = (double)((float)(longlong)*(int *)(in_r11 + -0x2998) * DAT_82ede18c +
                   (float)(longlong)DAT_82ede194);
  dVar25 = (double)((float)(((ulonglong)(lVar15 << 0x20) >> 0x25 & 1 ^ 1) + 3) * DAT_82f62e58 +
                   DAT_82f62e5c * 2.0);
  dVar26 = (double)((float)(longlong)*(int *)(in_r11 + -0x2994) * DAT_82ede188 +
                   (float)(longlong)DAT_82ede190);
  Function_82654CF0(0xff,0xff,0xff,in_stack_00000070);
  Function_823EBFE0(dVar30,dVar26,dVar27,dVar25);
  do {
    if ((uVar17 != 2) || ((int)uVar16 != 0)) {
      Function_82654CF0(0x8f,0x8a,0x84,in_stack_00000070);
      iVar21 = (int)(((ulonglong)uVar17 & 0x3fffffff) << 2);
      Function_82665500(&stack0x00000074,&stack0x000000a0,*(undefined4 *)(iVar21 + (int)puVar11 ),
                        0xffffffffffffffff,DAT_827f6f40);
      dVar27 = (double)DAT_82ede18c;
      if (0.0 <= (float)((double)DAT_82ede18c - (double)DAT_82ede188)) {
        dVar27 = (double)DAT_82ede188;
      }
      dVar25 = (double)(longlong)(iVar14 - in_stack_00000074);
      Function_82664F40((double)(float)(dVar27 * dVar29),
                        (int)((double)(float)((double)(float)(dVar25 * dVar27 + (double)DAT_82f62 e5c
                                                             ) + dVar30) + dVar28),in_stack_0000007 0
                        ,*(undefined4 *)(iVar21 + (int)puVar11));
      dVar27 = (double)DAT_82ede18c;
      if (0.0 <= (float)((double)DAT_82ede18c - (double)DAT_82ede188)) {
        dVar27 = (double)DAT_82ede188;
      }
      Function_82664F40((double)(float)(dVar27 * dVar29),
                        (int)((double)(float)((double)(float)(dVar27 * dVar25 + (double)DAT_82f62 e5c
                                                             ) + dVar30) + dVar28),in_stack_0000007 0
                        ,*(undefined4 *)(iVar21 + (int)puVar11));
      uVar1 = DAT_82836ff0;
      uVar2 = DAT_82836ff1;
      uVar3 = DAT_82836ff2;
      uVar4 = DAT_82836ff3;
      if ((uVar17 == 2) && (CONCAT22(DAT_835f3c9c._0_2_,DAT_835f3c9c._2_2_) == -1)) {
        uVar1 = DAT_82837014._0_1_;
        uVar2 = DAT_82837014._1_1_;
        uVar3 = DAT_82837014._2_1_;
        uVar4 = (undefined)DAT_82837014;
      }
      Function_82654CF0(uVar1,uVar2,uVar3,uVar4);
      if (dVar22 < dVar23) {
        dVar27 = dVar22 - dVar24;
      }
      else {
        dVar27 = dVar22 + dVar24;
      }
      Function_82654DE0((int)dVar27);
      dVar27 = (double)DAT_82ede18c;
      if (0.0 <= (float)((double)DAT_82ede18c - (double)DAT_82ede188)) {
        dVar27 = (double)DAT_82ede188;
      }
      dVar25 = (double)(longlong)iVar14;
      iStack00000098 = iVar7 >> 0x1f;
      Function_82664F40((double)(float)(dVar27 * dVar29),iStack00000098,in_stack_00000070,
                        *(undefined4 *)(iVar21 + (int)puVar13));
      dVar27 = (double)DAT_82ede18c;
      if (0.0 <= (float)((double)DAT_82ede18c - (double)DAT_82ede188)) {
        dVar27 = (double)DAT_82ede188;
      }
      Function_82664F40((double)(float)(dVar27 * dVar29),
                        (int)((double)(float)((double)((float)(dVar27 * dVar25 +
                                                              (double)DAT_82f62e5c) + DAT_82f62e60 )
                                             + dVar30) + dVar28),in_stack_00000070,
                        *(undefined4 *)(iVar21 + (int)puVar13));
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 4);
  Function_82649828(0xffffffff827fd2c8,uVar6);
LAB_823a6370:
  FUN_82712cc0(uStack000000cc);
  FUN_82719730();
  Function_82719050();
  return;
}