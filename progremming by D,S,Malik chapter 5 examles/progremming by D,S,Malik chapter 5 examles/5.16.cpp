#include <iostream>
using namespace std; //Full fibonacci code for nth value.
int main()
{
    int nthFibonacci;
    int counter;
    int previous1 = 1;
    int previous2 = 1;
    int current;
    cout << "Enter the position (n) of the Fibonacci number you want to compute (n >= 1): ";
    cin >> nthFibonacci;
    if (nthFibonacci <= 0)
    {
        cout << "Invalid input. Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    if (nthFibonacci == 1 || nthFibonacci == 2)
    {
        cout << "Fibonacci number at position " << nthFibonacci << " is 1." << endl;
    }
    else
    {
        for (counter = 3; counter <= nthFibonacci; counter++)
        {
            current = previous1 + previous2;
            previous1 = previous2;
            previous2 = current;
        }
        cout << "Fibonacci number at position " << nthFibonacci << " is " << current << "." << endl;
    }

    return 0;
}
