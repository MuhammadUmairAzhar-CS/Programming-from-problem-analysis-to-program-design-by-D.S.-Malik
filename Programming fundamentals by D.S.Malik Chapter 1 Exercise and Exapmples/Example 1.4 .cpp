#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num, guess;
    char playAgain;
    
    do {
        num = rand() % 100;
        
        cout << "\nGuess the number (0-99): ";
        cin >> guess;
        
        while (guess != num) {
            if (guess < num)
                cout << "Your guess is lower than the number. Guess again! ";
            else
                cout << "Your guess is higher than the number. Guess again! ";
            cin >> guess;
        }
        
        cout << "You guessed the correct number!" << endl;
        cout << "The number was: " << num << endl;
        
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    
    return 0;
}
