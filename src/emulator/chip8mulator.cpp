//
// Created by niozor on 8/24/19.
//

#include "chip8mulator.hpp"

namespace chip8 {

void Chip8Mulator::load_game(std::istream& stream_) {
    _init();
}

void Chip8Mulator::run() {
    while (!_stop) {
        _emulate_cycle();
    }
}

void Chip8Mulator::stop() {
    _stop = true;
}

void Chip8Mulator::_init() {

}

void Chip8Mulator::_emulate_cycle() {

}

} // !namespace chip8
