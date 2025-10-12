#include <iostream>
using namespace std;
int main()
{
int d,c,a,b;
b=5;
a=2;
c=b+(a++); // a=3
d=b+(++a); // a=4
cout<<c<<endl;
cout<<d;
return 0;
}