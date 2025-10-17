#include <iostream>
using namespace std;
int main()
{ int sum = 0;
 int num;
 cin >> num;
 while (cin)
 {    
    sum = sum + num;    // Enter any alphabet to exit.
    cin >> num;       
}
 cout << "Sum = " << sum << endl;
 return 0;
}