#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    do {
        cout << "Enter two integers (first must be less than second): " << endl;
        cout << "First number: ";
        cin >> n1;
        cout << "Second number: ";
        cin >> n2;
        if (n1 >= n2)
        {
            cout << "First number must be less than second. Please re-enter." << endl;
        }
    } while (n1 >= n2);


    cout << "Odd numbers: ";
    int i = n1;
    if (i <= n2) {
        do {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++;
        } while (i <= n2);
    }
    cout << endl;
    int sumEven = 0;
    i = n1;
     if (i <= n2)
     {
        do {
            if (i % 2 == 0)
            {
                sumEven += i;
            }
            i++;
        } while (i <= n2);
     }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Numbers and their squares (1-10):" << endl;
    i = 1;
    do {
        cout <<i<<" "<< (i*i) << endl;
        i++;
    } while (i <= 10);
    long long sumOddSquares = 0;
    i = n1;
    if (i <= n2) {
        do {
            if (i % 2 != 0) {
                sumOddSquares += (long long)i * i;
            }
            i++;
        } while (i <= n2);
    }
    cout << "Sum of squares of odd numbers: " << sumOddSquares << endl;
    cout << "Uppercase letters: ";
    char c = 'A';
    do {
        cout << c << " ";
        c++;
    } while (c <= 'Z');
    cout << endl;
    return 0;
}