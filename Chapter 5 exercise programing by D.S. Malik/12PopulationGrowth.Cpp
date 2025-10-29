#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double popA, rateA, popB, rateB;

    cout << "Enter population of town A: ";
    cin >> popA;
    cout << "Enter growth rate of town A (%): ";
    cin >> rateA;
    cout << "Enter population of town B: ";
    cin >> popB;
    cout << "Enter growth rate of town B (%): ";
    cin >> rateB;

    rateA /= 100.0;
    rateB /= 100.0;

    int years = 0;

    while (popA < popB) {
        popA *= (1 + rateA);
        popB *= (1 + rateB);
        years++;
    }

    cout << "After " << years << " years:" << endl;
    cout << "Population of town A: " << static_cast<int>(popA) << endl;
    cout << "Population of town B: " << static_cast<int>(popB) << endl;

    return 0;
}