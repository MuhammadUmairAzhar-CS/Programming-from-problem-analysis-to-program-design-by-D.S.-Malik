#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i;
    double e_approx = 1.0, factorial = 1.0;
    cout <<"Enter the value of n for the approximation= ";
    cin >> n;  
    for (i = 1; i<=n; ++i)
    {
        factorial *= i;
        e_approx += (1.0 / factorial);
    }
    cout << fixed << setprecision(15);
    cout << "Approximation of e= " <<e_approx;
    return 0;
}