#ifndef MOS_6502_H
#define MOS_6502_H

#include <cstdint>

/* 64 kB memory */
const unsigned int MEMORY_SIZE = 64 * 1000;
const unsigned int ZERO_PAGE_SIZE = 256; 

class MOS_6502 {
    public: 
        MOS_6502();
        ~MOS_6502();

    private:
        uint8_t memory[MEMORY_SIZE];
};

#endif