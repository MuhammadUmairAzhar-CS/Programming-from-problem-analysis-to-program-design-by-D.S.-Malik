#include <iostream>
using namespace std;
int main()
{
int d,c,a,b;
b=5;
a=2;
c=b+(a++);
d=b+(++a);
cout<<c<<endl;
cout<<d;
return 0;
}