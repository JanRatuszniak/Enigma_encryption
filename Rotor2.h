#ifndef KEYBOARD_CPP_ROTOR2_H
#define KEYBOARD_CPP_ROTOR2_H

#pragma once
#include "friend.h"
#include "Rotor.h"
#include <tuple>
class Rotor2 : public Rotor
{
public:
    friend class Keyboard;

    void setKeyboardData(Keyboard *keyboard, char keyboardData);
    char getKeyboardData(Keyboard *keyboard);
    Rotor2(const std::string &rotorNumber);
    int choose();
    void setRotor2();
    void getRotor2();
    void twistChar(char inputLetter);
};



#endif //KEYBOARD_CPP_ROTOR2_H
