//
// Created by HP on 11.08.2022.
//

#ifndef KEYBOARD_CPP_ROTOR3_H
#define KEYBOARD_CPP_ROTOR3_H

#pragma once
#include "friend.h"
#include "Rotor.h"
#include <tuple>
class Rotor3 : public Rotor
{
public:
    friend class Keyboard;

    void setKeyboardData(Keyboard *keyboard, char keyboardData);
    char getKeyboardData(Keyboard *keyboard);
    Rotor3(const std::string &rotorNumber);
    int choose();
    void setRotor3();
    void getRotor3();
    void twistChar(char inputLetter);
};




#endif //KEYBOARD_CPP_ROTOR3_H
