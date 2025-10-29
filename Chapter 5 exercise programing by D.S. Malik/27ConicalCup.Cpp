#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double R, rem_length;
    const double PI = 3.1415926535;
    cout <<"Enter the radius of the waxed paper= ";
    cin >> R;
    rem_length = 2*PI*R* (1-sqrt(2/3.0));
    cout << fixed << setprecision(2);
    cout <<"The length of the removed sector is: "<<rem_length;
    return 0;
}