// chip8mulator::emulator::cpu::registers.hpp
// CPU registers
//

#pragma once

namespace chip8::CPU {
    struct Registers {
        unsigned short pc;
        unsigned short I;
        unsigned char  V[16];
    };
} // !namespace chip8::CPU
