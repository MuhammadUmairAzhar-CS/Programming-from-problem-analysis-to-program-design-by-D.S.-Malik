#include <iostream>
using namespace std;

int main() {
    int n;
    double e = 1.0;  // start with 1 (the first term in the series)
    double factorial = 1.0;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 1) {
        cout << "n must be a positive integer." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;   // calculate i!
        e = e + 1.0 / factorial;     // add 1/i! to the sum
    }

    cout << "Approximation of e for n = " << n << " is " << e << endl;

    return 0;
}
