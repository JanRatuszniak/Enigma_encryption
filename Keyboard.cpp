#include "friend.h"
#include "Keyboard.h"

namespace FriendNS
{

    Keyboard::Keyboard()
    {
        this->keyboardData = 0;
    }

    Keyboard::Keyboard(char keyboardData)
    {
        this->keyboardData = keyboardData;
    }

    Keyboard::~Keyboard()
    {
    }

    void Keyboard::setKeyboardData(char keyboardData)
    {
        this->keyboardData = keyboardData;
    }

    char Keyboard::getKeyboardData()
    {
        return this->keyboardData;
    }


}

