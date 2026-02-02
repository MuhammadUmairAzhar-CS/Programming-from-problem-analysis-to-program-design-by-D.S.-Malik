// 1. Number Sign Check
#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The number " << number << " is ";
    if (number > 0)
        cout << "positive";
    else if (number < 0)
        cout << "negative";
    else
        cout << "zero";
    
    cout << endl;
    
    return 0;
}
