#include <iostream>
using namespace std;

int main() {
    int n;
    double e;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 1) {
        cout << "n must be a positive integer." << endl;
        return 0;
    }

    e = n; // start with the innermost denominator (n)

    // Work backwards through the fraction
    for (int i = n - 1; i >= 1; i--) {
        e = i + 1.0 / e;
    }

    // Add the leading 1
    e = 1 + 1.0 / e;

    cout << "Approximation of e for n = " << n << " is " << e << endl;

    return 0;
}

