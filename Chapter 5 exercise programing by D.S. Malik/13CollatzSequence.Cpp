#include <iostream>
using namespace std;
int main()
{
    long long x, a_n;
    int k=0;
    cout << "Enter the value of x: ";
    cin >> x;
    a_n = x;
    cout <<"Sequence: ";
    while (a_n!=1)
    {
        cout << a_n << ", ";
        if (a_n%2 == 0)
            a_n = a_n/2;
        else
            a_n = 3*a_n+1;
        k++;
    }
    cout << 1<< endl; 
    cout <<"The value of k is= "<<k;
    return 0;
}