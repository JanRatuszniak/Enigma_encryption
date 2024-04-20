#include <iostream>
#include "friend.h"
#include <string>
#include <fstream>

using namespace std;
bool flag1;
bool flag2 = false;

int main() {
    char letter;
    std::string line;

    auto *plugboard = new FriendNS::Plugboard();
    auto *keyboard = new FriendNS::Keyboard();
    auto *reflector = new FriendNS::Reflector();
    auto *rotor1 = new FriendNS::Rotor1("pierwszyRotor");
    auto *rotor2 = new FriendNS::Rotor2("drugiRotor");
    auto *rotor3 = new FriendNS::Rotor3("trzeciRotor");

    cout << "This is Enigma encryption virtual machine." << endl;
    cout << "Manual:\n  ! It encodes only letters as original machine (write numbers in words)" << endl;
    cout << "  ! It has separate encryption and decryption mode" << endl;
    cout << "1. Choose mode" << endl;
    cout << "2. Write message (you can divide text with space and enter, program will ignore it)" << endl;
    cout
            << "3. End work by typing or adding any number on the end of text(program will stop execute when it find number)"
            << endl;
    cout << "  ! The message will be saved on Desktop either encrypted/decrypted_message" << endl;
    cout << "  ! Program having found existing file will add data to it in new line" << endl;

    cout << "\nType: \n'1' for encryption:\n" << "'2' for decryption:\n";
    int num;
    cin >> num;
    while (cin.fail() || num > 2) {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "WRONG INPUT, try again\n";
        cout << "encryption: '1'\n" << "decryption: '2'\n";

        cin >> num;
    }

    fstream plik;


    if (num == 1) {
        rotor1->cryptionType = false;
        rotor2->cryptionType = false;
        rotor3->cryptionType = false;
        plik.open(R"(C:\Users\HP\Desktop\encrypted_message.txt)", ios::out | ios::app);
    } else if (num == 2) {

        rotor1->cryptionType = true;
        rotor2->cryptionType = true;
        rotor3->cryptionType = true;
        plik.open(R"(C:\Users\HP\Desktop\decrypted_message.txt)", ios::out | ios::app);
    }


    cout << "enter rotors starting states (from 1 to 26)" << endl;
    cout << "rotor1 state:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> num;
        while (cin.fail() || num < 1 || num > 26) {
            cin.clear(); // clear input buffer to restore cin to a usable state
            cin.ignore(INT_MAX, '\n'); // ignore last input
            cout << "WRONG INPUT, try again\n";
            cin >> num;
        }
        if (i == 0) {
            rotor1->rotorState = num;
            cout << "rotor2 state:" << endl;
        } else if (i == 1) {
            rotor2->rotorState = num;
            cout << "rotor3 state:" << endl;
        } else {
            rotor3->rotorState = num;
        }
    }


    cout << "enter rotors hubs (from 1 to 2)" << endl;
    cout << "rotor1 hub:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> num;
        while (cin.fail() || num < 1 || num > 2) {
            cin.clear(); // clear input buffer to restore cin to a usable state
            cin.ignore(INT_MAX, '\n'); // ignore last input
            cout << "WRONG INPUT, try again\n";
            cin >> num;
        }
        if (i == 0) {
            rotor1->rotorHub = num;
            rotor1->setRotor1();
            cout << "rotor2 hub:" << endl;
        } else if (i == 1) {
            rotor2->rotorHub = num;
            rotor2->setRotor2();
            cout << "rotor3 hub:" << endl;
        } else {
            rotor3->rotorHub = num;
            rotor3->setRotor3();
        }
    }

///////////////////////////////////////////////////////////////////////////dorobić obsluge plugboard i bedzie git
    std::string s;

    if ( !getline( cin, s ) )    // reads a whole line
        cout << "Error or end-of-file\n";

    else if ( s.size() != 1 )
        cout << "Input was not a single character\n";

    else if ( !isalpha(s[0]) )
        cout << "Input was not a letter\n";

    else
        cout<<"You are a letter"<<endl;



//    char chuj;char chuj2;
//for(int i=0;i<4;i+=2) {
//    cout << "enter plugboard configuration" << endl;
//    cin >> chuj;
//    cin >> chuj2;
//    if (typeid(chuj) == typeid(char)) {
//        cout<<chuj<<"  "<<chuj2<<endl;
//    } else {
//        std::cout << "Incorrect data" << std::endl;
//        i=i-2;
//    }
//
//    plugboard->charTab[0+i] = chuj;
//    plugboard->charTab[1+i] = chuj2;
//    plugboard->checkConfiguration(i);
//
//}


////////////////////////////////////////////////////////////////////////

    cout << "enter message: " << endl;
    start:
    while (cin >> letter) {

        if (!(letter >= 'a' && letter <= 'z')) {
            flag2 = true;
            plik << endl;
            plik.close();

        }
        break;
    }


///////////start of coding
    plugboard->setPlugboardData(letter);
    plugboard->setKeyboardData(keyboard, plugboard->getPlugboardData());
    rotor1->twistChar(keyboard->getKeyboardData());
    rotor1->setKeyboardData(keyboard, rotor1->outputLetter);
    rotor2->twistChar(keyboard->getKeyboardData());
    rotor2->setKeyboardData(keyboard, rotor2->outputLetter);
    rotor3->twistChar(keyboard->getKeyboardData());
    rotor3->setKeyboardData(keyboard, rotor3->outputLetter);
    reflector->setReflectorData(keyboard->getKeyboardData());
    reflector->setKeyboardData(keyboard, reflector->getReflectorData());
    rotor3->twistChar(keyboard->getKeyboardData());
    rotor3->setKeyboardData(keyboard, rotor3->outputLetter);
    rotor2->twistChar(keyboard->getKeyboardData());
    rotor2->setKeyboardData(keyboard, rotor2->outputLetter);
    rotor1->twistChar(keyboard->getKeyboardData());
    rotor1->setKeyboardData(keyboard, rotor1->outputLetter);
    plugboard->setPlugboardData(keyboard->getKeyboardData());
    plugboard->setKeyboardData(keyboard, plugboard->getPlugboardData());
    //////////////end of coding


    plik << keyboard->getKeyboardData();


    if (!flag1) {
        cout << "(remember to add any number to end message, special characters will do job as well)\n";
        flag1 = true;
    }

    if (!flag2) { goto start; }


    return EXIT_SUCCESS;
}


