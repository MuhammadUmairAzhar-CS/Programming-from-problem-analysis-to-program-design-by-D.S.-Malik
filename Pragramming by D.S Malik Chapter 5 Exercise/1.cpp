#include <iostream>
using namespace std;

int main() {
    int n, num, digit, sum = 0, rev = 0;

    cout << "Enter an integer: ";
    cin >> n;

    num = -(n);   
    int i = num;
    while (i > 0) {
        digit = i % 10;
        rev = rev * 10 + digit;
        i = i / 10;
    }

    while (rev > 0) {
        digit = rev % 10;
        cout << digit << " ";
        sum = sum + digit;
        rev = rev / 10;
    }

    cout << endl;
    cout << "Sum of digits = " << sum;

    return 0;
}
