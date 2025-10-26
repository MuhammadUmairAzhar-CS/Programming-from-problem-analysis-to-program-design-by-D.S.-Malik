#include <iostream>
using namespace std;

int main() {
    int i, n;
    int flag = 0;
    cout << "Enter your integer: ";
    cin >> n;


    for ( i = 1; i <= n; i++) {
        if (i % 2 == 0)
         {
            flag = 1;
            break;
         }
    }
    if (flag == 0)
         {
          cout << "The number is prime" << endl;  
         }else
     {cout << "The number is not prime" << endl; }
   

    return 0;
}
