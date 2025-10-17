#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int newNum;
    double average; 
    for (int i = 0; i < 5; i++) { 
       cout << "Enter a number: "; 
       cin >> newNum;
        sum = sum + newNum;
    }
    average = static_cast<double>(sum) / 5; 
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    return 0;
}