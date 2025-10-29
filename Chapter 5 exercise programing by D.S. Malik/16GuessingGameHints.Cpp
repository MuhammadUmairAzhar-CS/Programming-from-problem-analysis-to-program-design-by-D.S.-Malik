#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    srand(time(0));
    int num = rand() % 100 + 1, guess, tries;
    bool won = false;
    cout <<"I am thinking of a number between 1 and 100. You have 5 tries." << endl;
    for (tries = 1; tries <= 5; ++tries)
    {
        cout << "Try " << tries << ": Enter your guess: ";
        cin >> guess;
        int diff = abs(num - guess);
        if (diff == 0)
        {
            cout << "You win!" << endl;
            won = true;
            break;
        }
        else
        {
            string h_l = (guess > num) ? "high" : "low";
            if (diff >= 50)
                cout << "Your guess is very " << h_l << "." << endl;
            else if (diff >= 30)
                cout << "Your guess is " << h_l << "." << endl;
            else if (diff >= 15)
                cout << "Your guess is moderately " << h_l << "." << endl;
            else
                cout << "Your guess is somewhat " << h_l << "." << endl;
        }
    }
    if (!won)
        cout << "You lose! The correct number was " << num << "." << endl;
    return 0;
}