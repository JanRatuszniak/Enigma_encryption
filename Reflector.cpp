#include "friend.h"


namespace FriendNS {

    Reflector::Reflector(void) {
        this->reflectorData = 0;
    }

    Reflector::Reflector(char reflectorData) {
        this->reflectorData = reflectorData;
    }

    Reflector::~Reflector(void) {
    }

    void Reflector::setReflectorData(char reflectorData) {
        this->reflectorData = reflectorData;
        twistChar(reflectorData);
        return;

    }

    char Reflector::getReflectorData(void) {
        return this->reflectorData;
    }

    void Reflector::setKeyboardData(Keyboard *keyboard, char keyboardData) {
        keyboard->keyboardData = keyboardData;
        return;
    }

    char Reflector::getKeyboardData(Keyboard *keyboard) {
        return keyboard->keyboardData;
    }


    void Reflector::twistChar(char znak) {

        znak = getReflectorData();
        bool flag = 0;
//std::cout<<"Reflector     get: "<<znak<<", ";
//////////////////////////////////////////////////////////
        if (znak == 'a' || znak == 'b') {
            if (znak == 'a') {
                znak = 'b';
                flag = 1;
            }
            if (flag == 0) { znak = 'a';}
        }
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
        if (znak == 'c' || znak == 'd') {
            if (znak == 'c') {
                znak = 'd';
                flag = 1;
            }
            if (flag == 0) { znak = 'c';}
        }
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'e' || znak == 'f') {
            if (znak == 'e') {
                znak = 'f';
                flag = 1;
            }
            if (flag == 0) { znak = 'e';}
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'g' || znak == 'h') {//a//b
            if (znak == 'g') {//a
                znak = 'h';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'g';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'i' || znak == 'j') {//a//b
            if (znak == 'i') {//a
                znak = 'j';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'i';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'k' || znak == 'l') {//a//b
            if (znak == 'k') {//a
                znak = 'l';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'k';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'm' || znak == 'n') {//a//b
            if (znak == 'm') {//a
                znak = 'n';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'm';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'o' || znak == 'p') {//a//b
            if (znak == 'o') {//a
                znak = 'p';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'o';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'q' || znak == 'r') {//a//b
            if (znak == 'q') {//a
                znak = 'r';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'q';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 's' || znak == 't') {//a//b
            if (znak == 's') {//a
                znak = 't';//b
                flag = 1;
            }
            if (flag == 0) { znak = 's';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'u' || znak == 'v') {//a//b
            if (znak == 'u') {//a
                znak = 'v';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'u';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'w' || znak == 'x') {//a//b
            if (znak == 'w') {//a
                znak = 'x';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'w';}//a
        }
///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        if (znak == 'y' || znak == 'z') {//a//b
            if (znak == 'y') {//a
                znak = 'z';//b
                flag = 1;
            }
            if (flag == 0) { znak = 'y';}//a
        }
///////////////////////////////////////////////////////////
        this->reflectorData=znak;
       // std::cout<<"give: "<<znak<<"\n";
    }

}
