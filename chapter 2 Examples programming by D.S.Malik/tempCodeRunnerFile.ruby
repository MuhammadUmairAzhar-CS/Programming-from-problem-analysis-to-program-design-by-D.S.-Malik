#include <iostream> 
using namespace std; 
int main() {
int firstNum; 
int secondNum; 
const int NUMBER = 12; 
firstNum = 18; 
cout << "Line 9: firstNum = " << firstNum
<< endl; 
cout << "Line 10: Enter an integer: "; 
cin >> secondNum; 
cout << endl; 
cout << "Line 13: secondNum = " << secondNum
<< endl; 
firstNum = firstNum + NUMBER + 2 * secondNum; 
cout << "Line 15: The new value of "
<< "firstNum = " << firstNum << endl; //Line 15
return 0; //Line 16
}