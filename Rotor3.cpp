#include "Rotor.h"
#include "friend.h"

using namespace std;
namespace FriendNS {
    Rotor3::Rotor3(const string &rotorNumber) : Rotor(rotorNumber) {

    }

    int Rotor3::choose() {
        return 1;
    }

    void Rotor3::setRotor3() {
        setRotorHub();
    }


    void Rotor3::twistChar(char inputLetter) {

        letterList(inputLetter);

        if (!cryptionType) { shiftedLetterNumber = inputLetterNumber + rotorState - 1; }///enkrypcja
        else { shiftedLetterNumber = inputLetterNumber - rotorState + 1; }     ///dekrypcja

        keyCounter++;

        if (shiftedLetterNumber > 26) { shiftedLetterNumber = shiftedLetterNumber - 26; }
        else if (shiftedLetterNumber < 1) { shiftedLetterNumber = shiftedLetterNumber + 26; }

        if (keyCounter == 676 * 2) {
            keyCounter = 0;
            rotorState++;
        }

        if (rotorState == 26) { rotorState = 1; }

        switch (shiftedLetterNumber) {
            case 1:
                this->outputLetter = r_positionA;
                break;
            case 2:
                this->outputLetter = r_positionB;
                break;
            case 3:
                this->outputLetter = r_positionC;
                break;
            case 4:
                this->outputLetter = r_positionD;
                break;
            case 5:
                this->outputLetter = r_positionE;
                break;
            case 6:
                this->outputLetter = r_positionF;
                break;
            case 7:
                this->outputLetter = r_positionG;
                break;
            case 8:
                this->outputLetter = r_positionH;
                break;
            case 9:
                this->outputLetter = r_positionI;
                break;
            case 10:
                this->outputLetter = r_positionJ;
                break;
            case 11:
                this->outputLetter = r_positionK;
                break;
            case 12:
                this->outputLetter = r_positionL;
                break;
            case 13:
                this->outputLetter = r_positionM;
                break;
            case 14:
                this->outputLetter = r_positionN;
                break;
            case 15:
                this->outputLetter = r_positionO;
                break;
            case 16:
                this->outputLetter = r_positionP;
                break;
            case 17:
                this->outputLetter = r_positionQ;
                break;
            case 18:
                this->outputLetter = r_positionR;
                break;
            case 19:
                this->outputLetter = r_positionS;
                break;
            case 20:
                this->outputLetter = r_positionT;
                break;
            case 21:
                this->outputLetter = r_positionU;
                break;
            case 22:
                this->outputLetter = r_positionV;
                break;
            case 23:
                this->outputLetter = r_positionW;
                break;
            case 24:
                this->outputLetter = r_positionX;
                break;
            case 25:
                this->outputLetter = r_positionY;
                break;
            case 26:
                this->outputLetter = r_positionZ;
                break;
        }

    }

    void Rotor3::setKeyboardData(Keyboard *keyboard, char keyboardData) {
        keyboard->keyboardData = keyboardData;
    }

    char Rotor3::getKeyboardData(Keyboard *keyboard) {
        return keyboard->keyboardData;
    }


}