#ifndef KEYBOARD_CPP_ROTOR_H
#define KEYBOARD_CPP_ROTOR_H
#pragma once
#include <string>
#include <tuple>

class Rotor {
public:
    virtual int choose() = 0;
    Rotor(const std::string &rotorNumber);

    std::string number;

    char r_positionA;
    char r_positionB;
    char r_positionC;
    char r_positionD;
    char r_positionE;
    char r_positionF;
    char r_positionG;
    char r_positionH;
    char r_positionI;
    char r_positionJ;
    char r_positionK;
    char r_positionL;
    char r_positionM;
    char r_positionN;
    char r_positionO;
    char r_positionP;
    char r_positionQ;
    char r_positionR;
    char r_positionS;
    char r_positionT;
    char r_positionU;
    char r_positionV;
    char r_positionW;
    char r_positionX;
    char r_positionY;
    char r_positionZ;

    char outputLetter;

    int inputLetterNumber;
    int shiftedLetterNumber;
    int keyCounter=0;

    int rotorState;
    int rotorHub;

    bool cryptionType;

    void letterList(char letter);

    void setRotorHub();
};
//rotor1-co każde kliknięcie
//rotor2-co 26
//rotor3-co  676 kliknięć

#endif //KEYBOARD_CPP_ROTOR_H
