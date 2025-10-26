#include <iostream>
using namespace std;

int main() {
    char letter;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter an uppercase or lowercase letter: ";
        cin >> letter;

        if (letter == 'a' || letter == 'A' || letter == 'b' || letter == 'B' || letter == 'c' || letter == 'C')
            cout << "Telephone digit: 2";
        else if (letter == 'd' || letter == 'D' || letter == 'e' || letter == 'E' || letter == 'f' || letter == 'F')
            cout << "Telephone digit: 3";
        else if (letter == 'g' || letter == 'G' || letter == 'h' || letter == 'H' || letter == 'i' || letter == 'I')
            cout << "Telephone digit: 4";
        else if (letter == 'j' || letter == 'J' || letter == 'k' || letter == 'K' || letter == 'l' || letter == 'L')
            cout << "Telephone digit: 5";
        else if (letter == 'm' || letter == 'M' || letter == 'n' || letter == 'N' || letter == 'o' || letter == 'O')
            cout << "Telephone digit: 6";
        else if (letter == 'p' || letter == 'P' || letter == 'q' || letter == 'Q' || letter == 'r' || letter == 'R' || letter == 's' || letter == 'S')
            cout << "Telephone digit: 7";
        else if (letter == 't' || letter == 'T' || letter == 'u' || letter == 'U' || letter == 'v' || letter == 'V')
            cout << "Telephone digit: 8";
        else if (letter == 'w' || letter == 'W' || letter == 'x' || letter == 'X' || letter == 'y' || letter == 'Y' || letter == 'z' || letter == 'Z')
            cout << "Telephone digit: 9";
        else
            cout << "Error: please enter a valid letter.";

        cout << endl << endl;
        cout << "Do you want to enter another letter? (y/n): ";
        cin >> choice;
        cout << endl;
    }

    return 0;
}
