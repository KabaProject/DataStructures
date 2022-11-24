#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List list;
    int value, option;

    // Get input
    do {
        cout << "Choose option: \n"
            << "\t1. Shift\n" << "\t2. Append\n" << "\t3. Quit\n"
            << "> ";
        cin >> option;

        if (option >= 3) break;
        system("CLS");

        cout << "Enter values (quit with -1): \n";
        do {
            cout << "> ";
            cin >> value;

            if (value == -1) break;

            switch (option) {
                case 1:
                    list.shift(value);
                    break;
                case 2:
                    list.append(value);
                    break;
            }
        } while (true);
        system("CLS");

    } while (true);

    list.show();
}
