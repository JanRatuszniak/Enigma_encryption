#include "friend.h"
#include "Plugboard.h"


namespace FriendNS {

    Plugboard::Plugboard() {
        this->plugboardData = 0;
    }

    Plugboard::~Plugboard() {
    }

    void Plugboard::setPlugboardData(char plugboardData) {
        this->plugboardData = plugboardData;
        twistChar(plugboardData);
    }

    char Plugboard::getPlugboardData() {
        return this->plugboardData;
    }

    void Plugboard::setKeyboardData(Keyboard *keyboard, char keyboardData) {
        keyboard->keyboardData = keyboardData;
        return;
    }

    char Plugboard::getKeyboardData(Keyboard *keyboard) {
        return keyboard->keyboardData;
    }


    void Plugboard::twistChar(char znak) {      //plugboard ustawic znaki

        znak = getPlugboardData();
        bool flag = 0;


        if (znak == charTab[0] || znak == charTab[1]) {
            if (znak == charTab[0]) {
                znak = charTab[1];
                flag = 1;
            }
            if (flag == 0) { znak = charTab[0];}
        }


        if (znak == charTab[2] || znak == charTab[3] ) {
            if (znak == charTab[2] ) {
                znak = charTab[3];
                flag = 1;
            }
            if (flag == 0) { znak = charTab[2] ;}
        }



        this->plugboardData=znak;

    }

    void Plugboard::checkConfiguration(int i) {



    }

}
