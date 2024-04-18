cmake_minimum_required(VERSION 3.21)
project(Enigma)

set(CMAKE_CXX_STANDARD 14)

add_executable(Enigma main.cpp Plugboard.cpp Plugboard.h Keyboard.cpp Keyboard.h friend.h Rotor.cpp Rotor.h
        Rotor1.cpp Rotor1.h Rotor2.cpp Rotor2.h Rotor3.cpp Rotor3.h Reflector.cpp Reflector.h)
