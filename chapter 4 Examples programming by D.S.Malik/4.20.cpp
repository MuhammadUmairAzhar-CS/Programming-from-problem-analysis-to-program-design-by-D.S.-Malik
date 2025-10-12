#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   int gender,age,policyRate;
   cout<<"Enter First alphabet of your gender(M or F)";
   cin>>gender;
     cout<<"Enter your age)";
   cin>>age;
   if (gender == 'M') 
if (age < 21 ) 
policyRate = 0.05;
else 
policyRate = 0.35; 
else if (gender == 'F') 
if (age < 21 ) 
policyRate = 0.04; 
else 
policyRate = 0.30;
    return 0;
}
