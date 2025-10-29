#include <iostream>
using namespace std;
int main()
{
    long long x, a_n, maxVal;
    int k = 0, maxPos;
    cout << "Enter the value of x: ";
    cin >> x;
    a_n = x;
    maxVal = x;
    maxPos = 0;
    cout << "Sequence: ";
    while (a_n != 1)
    {
        cout << a_n << ", ";
        if (a_n % 2 == 0)
            a_n = a_n / 2;
        else
            a_n = 3 * a_n + 1;
        k++;
        if (a_n > maxVal)
        {
            maxVal = a_n;
            maxPos = k;
        }
    }
    cout << 1 << endl;
    cout <<"The value of k is: " << k << endl;
    cout <<"Largest number: " << maxVal << endl;
    cout <<"Position of largest: " << maxPos << endl;
    return 0;
}