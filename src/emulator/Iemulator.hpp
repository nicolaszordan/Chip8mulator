// chip8mulator::emulator::Iemulator.hpp
// emulator interface
//

#pragma once

#include <istream>
#include <fstream>
#include <string_view>

namespace chip8 {
    class IEmulator {
    public:
        virtual ~IEmulator() = default;

    public:
        virtual void run() = 0;
        virtual void stop() = 0;

        virtual void load_game(std::istream& stream_) = 0;

    public:
        virtual void load_game(const std::string& file_name_) {
            std::ifstream file{file_name_};
            load_game(file);
        }

//        virtual void pause() = 0;
//        virtual void resume() = 0;

//        virtual void save_state() = 0;
//        virtual void load_state() = 0;
    };
}
