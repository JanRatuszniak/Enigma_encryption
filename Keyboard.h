#include "friend.h"
#include <tuple>
class Keyboard
{
private:


public:
    Keyboard();
    Keyboard(char keyboardData);
    ~Keyboard();

    char keyboardData;
    char getKeyboardData();

    void setKeyboardData(char keyboardData);
};

