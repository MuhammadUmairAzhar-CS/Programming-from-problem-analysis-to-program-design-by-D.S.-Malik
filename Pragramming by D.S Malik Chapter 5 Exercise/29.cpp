#include <iostream>
using namespace std;

int main() {
    int n;
     long long int factorial = 1; 

    cout << "Enter a nonnegative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}
