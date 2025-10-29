#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double n, e_approx;
    cout << fixed << setprecision(15);
    cout <<"Calculating e using (1 + 1/n)^n" << endl;
    cout <<"Value of e: 2.718281828459045" << endl;
    cout <<"Range 100 to 10,000 (step 100)" << endl;
    for (double n = 100; n <= 10000; n += 100)
    {
        e_approx = pow(1.0+1.0/n, n);
        cout << "n = " << setw(7)<<n<<", e ~ "<<e_approx<< endl;
    }
    cout <<"Range 1,000 to 1,000,000 (step 1000) " << endl;
    for (n = 1000; n <= 1000000; n += 1000)
    {
        e_approx = pow(1.0 + 1.0 / n, n);
        cout <<"n = "<< setw(7)<<n<<", e ~ "<<e_approx<<"\n";
    }
    return 0;
}