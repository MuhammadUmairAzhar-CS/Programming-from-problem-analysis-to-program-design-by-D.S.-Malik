#include <iostream>
using namespace std;
int main(){
    float hours,wages,rate;
    cout<<"Enter your hours";
    cin>>hours;
     cout<<"Enter your rate";
    cin>>rate;
    if(hours>=40)
    wages=40*rate+1.5*rate*(hours-40);
    else
    wages=hours*rate;
    cout<<"wages="<<wages<<endl;
    return 0;
}
