#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    bool won = false;

    cout << "I'm thinking of a number between 1 and 100. You have 5 tries." << endl;

    for (int tries = 1; tries <= 5; ++tries) {
        cout << "Try " << tries << ": Enter your guess: ";
        cin >> guess;

        if (guess == num) {
            cout << "You win!" << endl;
            won = true;
            break;
        } else if (guess < num) {
            cout << "Your guess is low." << endl;
        } else {
            cout << "Your guess is high." << endl;
        }
    }

    if (!won) {
        cout << "You lose! The correct number was " << num << "." << endl;
    }

    return 0;
}