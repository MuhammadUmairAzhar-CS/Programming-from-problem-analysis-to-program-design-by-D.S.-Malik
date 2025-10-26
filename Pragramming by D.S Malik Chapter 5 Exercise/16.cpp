#include <iostream>
#include <cstdlib>  // for rand() and abs()
#include <ctime>    // for time()
using namespace std;

int main() {
    int num;      
    int guess;     
    int diff;      
    int tries = 0; 
    bool guessed = false;

    srand(time(0));       // seed random number
    num = rand() % 100;   // number between 0 and 99

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 0 and 99." << endl;
    cout << "You have 5 tries." << endl;

    while (tries < 5 && guessed == false) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        diff = abs(num - guess);  
        tries++;                  

        if (diff == 0) {
            cout << "You guessed the correct number!" << endl;
            guessed = true;
        }
        else if (guess > num) {
            if (diff >= 50)
                cout << "Your guess is VERY HIGH." << endl;
            else if (diff >= 30)
                cout << "Your guess is HIGH." << endl;
            else if (diff >= 15)
                cout << "Your guess is MODERATELY HIGH." << endl;
            else
                cout << "Your guess is SOMEWHAT HIGH." << endl;
        }
        else { 
            if (diff >= 50)
                cout << "Your guess is VERY LOW." << endl;
            else if (diff >= 30)
                cout << "Your guess is LOW." << endl;
            else if (diff >= 15)
                cout << "Your guess is MODERATELY LOW." << endl;
            else
                cout << "Your guess is SOMEWHAT LOW." << endl;
        }
    }

    if (guessed == false) {
        cout << "\nYou lost! The correct number was " << num << "." << endl;
    }

    cout << "Game over." << endl;

    return 0;
}
