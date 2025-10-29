#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cout << "Enter two integers (first must be less than second): " << endl;
    cout << "First number: ";
    cin >> firstNum;
    cout << "Second number: ";
    cin >> secondNum;
    while (firstNum >= secondNum)
    {
        cout << "First number must be less than second. Please re-enter." << endl;
        cout << "First number: ";
        cin >> firstNum;
        cout << "Second number: ";
        cin >> secondNum;
    }
    cout << "Odd numbers: ";
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    int sumEven = 0;
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        }
    }
    cout << "Sum of even numbers: " << sumEven << endl;

    cout << "Numbers and their squares (1-10):" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " " << (i * i) << endl;
    }

    long long sumOddSquares = 0;
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 != 0) {
            sumOddSquares += (long long)i * i;
        }
    }
    cout << "Sum of squares of odd numbers: " << sumOddSquares << endl;

    cout << "Uppercase letters: ";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}