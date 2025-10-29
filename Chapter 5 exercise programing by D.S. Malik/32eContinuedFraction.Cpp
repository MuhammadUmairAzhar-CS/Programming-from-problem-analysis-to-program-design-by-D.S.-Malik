#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the value of n for the approximation= ";
    cin >>n;
    double result;
    if (n <= 0)
    {
        cout <<"n must be positive." << endl;
        return 1;
    }
    if (n == 1)
        result = 1.0;
    else
    {
        result = (double)(n-1) / n;
        result = (n-1) + result;
        for (i =n-2; i >= 2; i--)
        {
            result = (double)i + (i/result);
        }            
        result = 1.0 + (1.0/result);
        result = 1.0 + (1.0/result);
    }
    cout << fixed <<setprecision(15);
    cout << "Approximation of e= "<<result;
    return 0;
}