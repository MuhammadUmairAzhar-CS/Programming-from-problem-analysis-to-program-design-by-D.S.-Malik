// 3. Number to Letter (0-35)
#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter an integer between 0 and 35: ";
    cin >> number;
    
    if (number >= 0 && number <= 9)
        cout << number << endl;
    else if (number >= 10 && number <= 35)
        cout << static_cast<char>('A' + number - 10) << endl;
    else
        cout << "Invalid input" << endl;
    
    return 0;
}
