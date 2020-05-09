#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

class Menu {
public:
    unsigned short printAndGetChoice ();
private:
    void printTopOrBottom (char, char);
    void printLine (string);
    bool validate (unsigned short);
    };


#endif // MENU_H

