#include "6502.h"
#include <iostream>

int main(int argc, char* argv[]) {
    printf("6502 Emulator\n");
    printf("Charlotte White\n");
    printf(".................\n");

    MOS_6502 mos_6502;

    mos_6502.memory_dump();

    return 0;
}