#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
string firstName,lastName; 
int age; 
double weight; 
cout << "Enter first name"; 
cin>>firstName;
cout << "Enter last name"; 
cin>>lastName;
cout << "Enter age";
cin>>age; 
cout << "Enter weight";
cin>>weight; 
cout<<"Name:"<<firstName<<lastName<<endl;
cout<<"age="<<age<<endl;
cout<<"weight="<<weight<<endl;
 return 0;
}