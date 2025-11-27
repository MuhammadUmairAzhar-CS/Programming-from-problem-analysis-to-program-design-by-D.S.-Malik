#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

double larger(double a, double b); 
double compareThree(double x, double y, double z);

int main()
{
double num1 = 13.00;
double num2 = 36.53;
double maxnumber;
cout<<"The larger of 5 and 6 is "<<larger(5,6)<<endl;
cout<<"The larger of "<<num1<<"and"<<num2<<"is"<<larger(num1,num2)<<endl;
cout<<"The larger of "<<num1<<"and 29 is"<<larger(num1,29)<<endl;
maxnumber = larger(38.45,56.78);

    return 0;
}

double larger(double a, double b)
{
    if (a >= b)
        return a;
    else
        return b;
}

double compareThree(double x, double y, double z)
{
return larger(x, larger(y, z));
}