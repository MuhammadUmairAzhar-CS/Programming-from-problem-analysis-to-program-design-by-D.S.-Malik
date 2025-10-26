#include <iostream>
using namespace std;

int main() {
    long long n;
    int position = 1; 
    int digit, oddSum = 0, evenSum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;  

        if (position % 2 == 1)
            oddSum += digit;   
        else
            evenSum += digit;  
        n = n / 10;  
        position++; 
    }

    int t = oddSum - evenSum;

    cout << "Difference  = " << t << endl;
    if (t % 11 == 0)
        cout << "The number is divisible by 11." << endl;
    else
        cout << "The number is NOT divisible by 11." << endl;

    return 0;
}
