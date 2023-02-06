#include "booleans.h";
#include "strings.h";
#include "ints.h";
#include "unknown_data_types.h";

void F_82646200_FPS(undefined8 param_1,double param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong local_a0;
  longlong local_98;
  longlong local_90 [18];
  
  FUN_82719028();
  cVar2 = FUN_827196e8();
  iVar5 = 0;
  DAT_835f4d34 = DAT_835f4d34 + 1;
  dVar8 = extraout_f1;
  if (bool_LaunchFPS_Unlock_Funct_835f4d4c == '\0') {
    F_82646148_FPS_Launch();
    bool_LaunchFPS_Unlock_835f4d4c = '\x01';
  }
  if (bool_835f4d4c == 0) {
    dVar11 = 1000.0;
    dVar10 = 0.5;
    dVar13 = 9.999999974752427e-07;
    dVar15 = 1.0;
    dVar12 = 0.0;
    dVar14 = 1000000.0;
    while( true ) {
      iVar5 = iVar5 + 1;
      FUN_8272e5c8(&local_a0);
      local_98 = local_a0 - DAT_83199a90;
      iVar6 = (int)(longlong)((double)local_98 * DAT_83199a88);
      iVar4 = iVar6 - DAT_835f4d44;
      if (iVar4 < 0) {
        iVar4 = (int)((double)DAT_827ca748 * dVar14);
      }
      if (param_2 <= dVar12) {
        local_90[0] = (longlong)iVar4;
        dVar7 = (double)local_90[0] * dVar13;
      }
      else {
        dVar7 = dVar15 / param_2;
      }
      DAT_827ca748 = (float)dVar7;
      dVar9 = (double)DAT_827ca748;
      dVar7 = (double)DAT_827ca758;
      DAT_827ca69c = DAT_827ca748;
      if (dVar7 <= dVar9) break;
      if (iVar5 != 1) goto LAB_82646388;
      if ((double)(float)(dVar7 - dVar9) < dVar10) {
        FUN_8272c7d0((int)((double)(float)(dVar7 - dVar9) * dVar11));
      }
    }
    dVar7 = (double)DAT_827ca75c;
    dVar14 = dVar9;
    if (dVar9 <= dVar7) goto LAB_82646390;
LAB_82646388:
    dVar14 = dVar7;
    DAT_827ca69c = (float)dVar7;
LAB_82646390:
    if (cVar2 == '\x01') {
      if (-(double)(float)((double)(longlong)(int)(dVar14 / dVar8) * dVar8 - dVar14) != dVar12)  {
        local_90[0] = (longlong)((int)(dVar14 / dVar8) + 1);
        iVar5 = 0;
        dVar15 = (double)(float)((double)(float)((double)local_90[0] * dVar8) * dVar11 -
                                (double)(float)(dVar14 * dVar11));
        dVar8 = dVar15 * dVar11;
        if (0 < (int)dVar8) {
          do {
            FUN_8272e5c8(local_90);
            local_98 = local_90[0] - DAT_83199a90;
            local_a0 = (longlong)((double)local_98 * DAT_83199a88);
            iVar5 = (int)local_a0 - iVar6;
          } while (iVar5 < (int)dVar8);
          dVar9 = (double)DAT_827ca748;
          dVar14 = (double)DAT_827ca69c;
        }
        local_90[0] = (longlong)iVar5;
        DAT_827ca69c = (float)(dVar15 * 0.001000000047497451 + dVar14);
        DAT_827ca748 = (float)((double)local_90[0] * dVar13 + dVar9);
        FUN_8272e5c8(local_90);
        dVar9 = (double)DAT_827ca748;
        iVar6 = (int)(longlong)((double)(local_90[0] - DAT_83199a90) * DAT_83199a88);
        dVar14 = (double)DAT_827ca69c;
      }
    }
    uVar3 = DAT_835f4d40 + 1;
    fVar1 = (float)(&DAT_83199720)[DAT_835f4d40];
    DAT_835f4d44 = iVar6;
    (&DAT_83199720)[DAT_835f4d40] = (float)dVar14;
    DAT_835f4d30 = DAT_835f4d30 + 1;
    DAT_835f4d48 = (float)((double)(DAT_835f4d48 - fVar1) + dVar14);
    dVar8 = (double)DAT_835f4d48;
    DAT_835f4d40 = uVar3 + (((int)uVar3 >> 4) + (uint)((int)uVar3 < 0 && (uVar3 & 0xf) != 0)) *
                           -0x10;
    if (dVar8 <= dVar12) {
      DAT_827ca750 = (float)dVar12;
    }
    else if (DAT_835f4d30 < 0x10) {
      DAT_827ca750 = (float)((double)(longlong)DAT_835f4d30 / dVar8);
    }
    else {
      DAT_827ca750 = (float)(16.0 / dVar8);
    }
    DAT_827ca74c = (float)dVar14;
    DAT_827ca69c = (float)(dVar14 / (double)DAT_827ca754);
    dVar8 = (double)((float)((double)DAT_827ca69c * dVar11) + DAT_83f99154);
    if (dVar8 < dVar12) {
      dVar13 = dVar8 - dVar10;
    }
    else {
      dVar13 = dVar8 + dVar10;
    }
    iVar5 = (int)dVar13;
    local_90[0] = (longlong)iVar5;
    DAT_83f99154 = (float)(dVar8 - (double)local_90[0]);
    if (_DAT_835f4d2c == 0) {
      DAT_827ca760 = DAT_827ca760 + iVar5;
      if (1800000000 < DAT_827ca760) {
        DAT_827ca760 = DAT_827ca760 + -1800000000;
      }
    }
    DAT_827ca764 = DAT_827ca764 + iVar5;
    if (1800000000 < DAT_827ca764) {
      DAT_827ca764 = DAT_827ca764 + -1800000000;
    }
    if (_DAT_835f4d50 == 0) {
      iVar5 = FUN_82649b08();
      DAT_835f4d38 = iVar5 + DAT_835f4d38;
    }
    dVar8 = (double)(float)(dVar9 * dVar11);
    if (dVar8 < dVar12) {
      dVar8 = dVar8 - dVar10;
    }
    else {
      dVar8 = dVar8 + dVar10;
    }
    DAT_835f4d3c = DAT_835f4d3c + (int)dVar8;
  }
  FUN_82719734();
  return;
}
