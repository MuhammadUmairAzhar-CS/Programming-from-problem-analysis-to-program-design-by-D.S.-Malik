#include <iostream> 
using namespace std; 
int main() 
{ 
int fahrenheit; 
int celsius;
cout << "Enter temperature in Fahrenheit: "; 
cin >> fahrenheit; 
cout << endl; 
cout << "5 / 9 = " << 5 / 9<< "; fahrenheit - 32 = "<< fahrenheit - 32 << endl; 
celsius = 5 / 9 * (fahrenheit - 32); 
cout << fahrenheit << " degree F = "<< celsius << " degree C. " << endl; 
return 0; 
}