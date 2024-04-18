//
// Created by HP on 04.08.2022.
//

#ifndef KEYBOARD_CPP_ROTOR1_H
#define KEYBOARD_CPP_ROTOR1_H

#pragma once
#include "friend.h"
#include "Rotor.h"
#include <tuple>
class Rotor1 : public Rotor
{
public:

    friend class Keyboard;
    void setKeyboardData(Keyboard *keyboard, char keyboardData);
    char getKeyboardData(Keyboard *keyboard);
    Rotor1(const std::string &rotorNumber);
    int choose();
    void setRotor1();
    void getRotor1();
    void twistChar(char inputLetter);
};



#endif //KEYBOARD_CPP_ROTOR1_H
