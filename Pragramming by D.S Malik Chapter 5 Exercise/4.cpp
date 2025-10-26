#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter a telephone number (in capital letters and without spaces): ";
        getline(cin >> ws, word); 

        int count = 0; 

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];
            if (count == 7)
                break;
            if (ch >= 'A' && ch <= 'C')
                cout << "2";
            else if (ch >= 'D' && ch <= 'F')
                cout << "3";
            else if (ch >= 'G' && ch <= 'I')
                cout << "4";
            else if (ch >= 'J' && ch <= 'L')
                cout << "5";
            else if (ch >= 'M' && ch <= 'O')
                cout << "6";
            else if (ch >= 'P' && ch <= 'S')
                cout << "7";
            else if (ch >= 'T' && ch <= 'V')
                cout << "8";
            else if (ch >= 'W' && ch <= 'Z')
                cout << "9";  

            count++;
            if (count == 3)
                cout << "-";
        }

        cout << endl << endl;

        cout << "Do you want to enter another telephone number? (y/n): ";
        cin >> choice;
        cout << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
