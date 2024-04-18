#ifndef ENIGMA_ME_H
#define ENIGMA_ME_H
/* File: me.h */

#include "friend.h"

class Plugboard
{
private:
    char plugboardData;

public:
    Plugboard();
    ~Plugboard();

    void setPlugboardData(char plugboardData);
    char getPlugboardData();

    void twistChar(char znak);

    void checkConfiguration(int i);
    void setKeyboardData(Keyboard *keyboard, char keyboardData);
    char getKeyboardData(Keyboard *keyboard);

    char charTab[3];


    friend class Keyboard;
};


#endif //ENIGMA_ME_H