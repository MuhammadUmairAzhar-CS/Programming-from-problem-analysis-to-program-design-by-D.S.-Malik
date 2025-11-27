#include <iostream>
using namespace std;

void funcValueParam(int num);

int main()
{
    int number = 6;
    cout << "Before calling the function funcValueParam, number = " << number << endl;

    funcValueParam(number);

    cout << "After calling the function funcValueParam, number = " << number << endl;

    return 0;
}

void funcValueParam(int num)
{
    cout << "In the function funcValueParam, before changing, num = " << num << endl;

    num = 15;

    cout << "In the function funcValueParam, after changing, num = " << num << endl;
}
