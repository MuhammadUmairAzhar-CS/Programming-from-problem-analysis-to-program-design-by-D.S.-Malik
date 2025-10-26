#include <iostream>
using namespace std;

int main() {
    double popA, popB;        
    double rateA, rateB;      
    int years = 0;            

    cout << "Enter population of town A: ";
    cin >> popA;

    cout << "Enter growth rate of town A (in %): ";
    cin >> rateA;

    cout << "Enter population of town B: ";
    cin >> popB;

    cout << "Enter growth rate of town B (in %): ";
    cin >> rateB;

    if (popA >= popB) {
        cout << "Error: Population of town A must be less than town B." << endl;
        return 0;
    }

    if (rateA <= rateB) {
        cout << "Error: Growth rate of town A must be greater than town B." << endl;
        return 0;
    }

    while (popA < popB) {
        popA = popA + (popA * rateA / 100.0);  
        popB = popB + (popB * rateB / 100.0);  
        years++;  
    }

    cout << endl;
    cout << "After " << years << " years:" << endl;
    cout << "Population of town A = " << popA << endl;
    cout << "Population of town B = " << popB << endl;

    return 0;
}
