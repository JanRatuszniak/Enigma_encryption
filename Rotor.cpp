#include <iostream>
#include "Rotor.h"
using namespace std;
#include <tuple>

    Rotor::Rotor(const string &rotorNumber) : number(rotorNumber) {
    }

void Rotor::letterList(char letter) {

    if(letter=='a') this->inputLetterNumber=1;
    if(letter=='b') this->inputLetterNumber=2;
    if(letter=='c') this->inputLetterNumber=3;
    if(letter=='d') this->inputLetterNumber=4;
    if(letter=='e') this->inputLetterNumber=5;
    if(letter=='f') this->inputLetterNumber=6;
    if(letter=='g') this->inputLetterNumber=7;
    if(letter=='h') this->inputLetterNumber=8;
    if(letter=='i') this->inputLetterNumber=9;
    if(letter=='j') this->inputLetterNumber=10;
    if(letter=='k') this->inputLetterNumber=11;
    if(letter=='l') this->inputLetterNumber=12;
    if(letter=='m') this->inputLetterNumber=13;
    if(letter=='n') this->inputLetterNumber=14;
    if(letter=='o') this->inputLetterNumber=15;
    if(letter=='p') this->inputLetterNumber=16;
    if(letter=='q') this->inputLetterNumber=17;
    if(letter=='r') this->inputLetterNumber=18;
    if(letter=='s') this->inputLetterNumber=19;
    if(letter=='t') this->inputLetterNumber=20;
    if(letter=='u') this->inputLetterNumber=21;
    if(letter=='v') this->inputLetterNumber=22;
    if(letter=='w') this->inputLetterNumber=23;
    if(letter=='x') this->inputLetterNumber=24;
    if(letter=='y') this->inputLetterNumber=25;
    if(letter=='z') this->inputLetterNumber=26;

}

void Rotor::setRotorHub() {
cout<<"setRouterHub: "<<rotorHub<<endl;
    switch (rotorHub) {

        case 1:
            this->r_positionA = 'z';
            this->r_positionB = 'y';
            this->r_positionC = 'x';
            this->r_positionD = 'w';
            this->r_positionE = 'v';
            this->r_positionF = 'u';
            this->r_positionG = 't';
            this->r_positionH = 's';
            this->r_positionI = 'r';
            this->r_positionJ = 'q';
            this->r_positionK = 'p';
            this->r_positionL = 'o';
            this->r_positionM = 'n';
            this->r_positionN = 'm';
            this->r_positionO = 'l';
            this->r_positionP = 'k';
            this->r_positionQ = 'j';
            this->r_positionR = 'i';
            this->r_positionS = 'h';
            this->r_positionT = 'g';
            this->r_positionU = 'f';
            this->r_positionV = 'e';
            this->r_positionW = 'd';
            this->r_positionX = 'c';
            this->r_positionY = 'b';
            this->r_positionZ = 'a';
    break;

        case 2:
            this->r_positionA = 'a';
            this->r_positionB = 'b';
            this->r_positionC = 'c';
            this->r_positionD = 'd';
            this->r_positionE = 'e';
            this->r_positionF = 'f';
            this->r_positionG = 'g';
            this->r_positionH = 'h';
            this->r_positionI = 'i';
            this->r_positionJ = 'j';
            this->r_positionK = 'k';
            this->r_positionL = 'l';
            this->r_positionM = 'm';
            this->r_positionN = 'n';
            this->r_positionO = 'o';
            this->r_positionP = 'p';
            this->r_positionQ = 'q';
            this->r_positionR = 'r';
            this->r_positionS = 's';
            this->r_positionT = 't';
            this->r_positionU = 'u';
            this->r_positionV = 'v';
            this->r_positionW = 'w';
            this->r_positionX = 'x';
            this->r_positionY = 'y';
            this->r_positionZ = 'z';

    break;
            }
    }

