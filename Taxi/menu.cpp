#include "MENU.h"
#include <iomanip>

void Menu::printTopOrBottom (char firstChar,char lastChar) {
// Print the first character, lines and the last character.

    cout << "\t\t" << setiosflags (ios::right) << char (firstChar) << setfill (char(196)) << setw (42) << char (lastChar) << "\n";
}


void Menu::printLine (string text) {
// Print an | followed by the string, followed by |.

    cout << "\t\t" << char (179) << text << char (179) << "\n";
}
// Output the menu.

unsigned short Menu::printAndGetChoice () {
// Print the main menu.

    unsigned short choice;
    bool OK;

    cout << "\n\n";
    do {
        printTopOrBottom (218, 191);
        printLine ("          CallOut Services 2018          ");
        printLine (" ________________________________________");
        printLine ("                                         ");
        printLine ("                                         ");
        printLine (" 1. Booking            2. Vehicle Details");
        printLine ("                                         ");
        printLine (" 3. Drivers Details    4. Daily Report   ");
        printLine ("                                         ");
        printLine (" 5. Exit                                 ");
        printLine ("                                         ");
        printTopOrBottom (192, 217);
        cout << "\n\n\t\t\t\t> ";
        cin >> choice;
        OK = validate (choice);
        if (!OK)
            cout << "\a\a\n\n\t" << choice << " is not a valid choice. Please reenter when prompted.\n\n\n";
        }
    while (!OK);
    return choice;
    }

bool Menu::validate (unsigned short choice) {
// Accept choice and return true if valid, false if invalid.

    return (choice >= 1 && choice <= 5);
    }
