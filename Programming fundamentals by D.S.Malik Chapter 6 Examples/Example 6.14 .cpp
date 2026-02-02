// reference and value parameters.
#include <iostream>
using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int& x, int y, char& w);

int main()
{
    int num1, num2;
    char ch;

    num1 = 10;
    num2 = 15;
    ch = 'A';

    cout << "Line 12: Inside main: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = "
         << ch << endl;

    funOne(num1, num2, ch);

    cout << "Line 14: After funOne: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = "
         << ch << endl;

    funTwo(num2, 25, ch);

    cout << "Line 16: After funTwo: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = "
         << ch << endl;

    return 0;
}

void funOne(int a, int& b, char v)
{
    int one;

    one = a;
    a++;
    b = b * 2;
    v = 'B';
}

void funTwo(int& x, int y, char& w)
{
    x = x - 3;
    y = y + 5;
    w = 'C';
}
