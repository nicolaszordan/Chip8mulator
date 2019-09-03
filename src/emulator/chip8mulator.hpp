//
// Created by niozor on 8/24/19.
//

#pragma once

#include "Iemulator.hpp"
#include "cpu/registers.hpp"

namespace chip8 {
    class Chip8Mulator : public IEmulator {
    public:
        void run() override;
        void stop() override;

        void load_game(std::istream& stream_) override;

    private:
        void _init();
        void _emulate_cycle();

    private:
        bool _stop = false;
        unsigned short _current_op;
        CPU::Registers _reg;
        unsigned char _ram[4096];
    };
}
