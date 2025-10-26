#include <iostream>
using namespace std;

int main() {
    int a, b, t;   // a = time for first dish, b = increase, t = total time
    int totalTime = 0;
    int dishes = 0;

    cout << "Enter time for the first dish (a): ";
    cin >> a;

    cout << "Enter additional time for each next dish (b): ";
    cin >> b;

    cout << "Enter total available time (t): ";
    cin >> t;

    while (totalTime + a <= t) {
        totalTime = totalTime + a;  // add time for this dish
        dishes++;                   // count this dish
        a = a + b;                  // next dish takes b more minutes
    }

    cout << "Bianca can prepare " << dishes << " dishes." << endl;

    return 0;
}
