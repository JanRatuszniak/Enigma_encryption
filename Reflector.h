#ifndef KEYBOARD_CPP_REFLECTOR_H
#define KEYBOARD_CPP_REFLECTOR_H

#include "friend.h"

class Reflector
{
private:
    char reflectorData;

public:
    Reflector(void);
    Reflector(char reflectorData);
    ~Reflector(void);
    friend class Keyboard;
    void setReflectorData(char reflectorData);
    char getReflectorData(void);

    void twistChar(char znak);

    void setKeyboardData(Keyboard *keyboard, char keyboardData);
    char getKeyboardData(Keyboard *keyboard);


};

#endif //KEYBOARD_CPP_REFLECTOR_H
