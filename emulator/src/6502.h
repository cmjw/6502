#ifndef MOS_6502_H
#define MOS_6502_H

#include <cstdint>
#include <iostream>

/* 64 kB memory */
const unsigned int MEMORY_SIZE = 64 * 1024;
const unsigned int PAGE_SIZE = 256; 

class MOS_6502 {
    public: 
        MOS_6502();
        ~MOS_6502();

        void full_memory_dump();
        void memory_dump();
        void zero_page_dump();
        void stack_dump();

    private:
        uint8_t memory[MEMORY_SIZE];

        void intialize_memory();
};

#endif