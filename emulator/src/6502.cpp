/*
6502 emulator
Charlotte White 2025
*/

#include "6502.h"
#include "util.h"


MOS_6502::MOS_6502() {
    intialize_memory();
}


MOS_6502::~MOS_6502() {

}


/* Initialize memory */
void MOS_6502::intialize_memory() {
    // Zero out memory
    for (int i = 0; i < MEMORY_SIZE; i++) {
        memory[i] = 0;
    }

    // $FFFA to $FFFF
    // TODO

    memory[0xFFFA] = 0xA;
    memory[0xFFFB] = 0xB;

    memory[0xFFFC] = 0xC;
    memory[0xFFFD] = 0xD;
    
    memory[0xFFFE] = 0xE;
    memory[0xFFFF] = 0xF;
}


/* Dump all memory */
void MOS_6502::full_memory_dump() {
    printf("memory dump\n");

    printf("zero page\n");
    zero_page_dump();

    printf("stack\n");
    stack_dump();

    printf("memory\n");
    memory_dump();
}


/* Dump memory */
void MOS_6502::memory_dump() {
    for (int i = 2 * PAGE_SIZE; i < MEMORY_SIZE; i++) {
        printf("%02X ", memory[i]);
    }
    printf("\n");

    // TODO separate ending interrupt handler etc addresses
}


/* Dump zero page */
void MOS_6502::zero_page_dump() {
    for (int i = 0; i < PAGE_SIZE; i++) {
        printf("%02X ", memory[i]);
    }
    printf("\n\n");
}


/* Dump stack */
void MOS_6502::stack_dump() {
    for (int i = PAGE_SIZE; i < 2 * PAGE_SIZE; i++) {
        printf("%02X ", memory[i]);
    }
    printf("\n\n");
}