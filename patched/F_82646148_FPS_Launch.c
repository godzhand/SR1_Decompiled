#include "booleans.h";
#include "strings.h";
#include "ints.h";
#include "unknown_data_types.h";


void F_82646148_FPS_Launch(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_83199720;
  DAT_827ca748 = 0x3d088889;
  DAT_827ca69c = 0x3d088889;
  DAT_835f4d30 = 0;
  DAT_827ca750 = 0x41f00000;
  DAT_835f4d38 = 0;
  DAT_835f4d44 = 0;
  DAT_827ca754 = 0x3f800000;
  DAT_827ca758 = 0x3c088889;
  DAT_827ca75c = 0x3e800000;
  DAT_835f4d48 = 0;
  lVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_835f4d40 = 0;
  return;
}
