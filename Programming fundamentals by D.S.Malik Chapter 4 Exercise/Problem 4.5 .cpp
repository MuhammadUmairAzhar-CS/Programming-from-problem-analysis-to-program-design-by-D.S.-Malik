// 5. Right Triangle Check
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double side1, side2, side3;
    
    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
    
    if ((pow(side1, 2) == pow(side2, 2) + pow(side3, 2)) ||
        (pow(side2, 2) == pow(side1, 2) + pow(side3, 2)) ||
        (pow(side3, 2) == pow(side1, 2) + pow(side2, 2)))
        cout << "It is a right triangle" << endl;
    else
        cout << "It is not a right triangle" << endl;
    
    return 0;
}
