#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)    
        cout << "Factorial of negative numbers can't be calculate." << endl;
    else
    {
        if (n > 0)
        {
            for (int i = 1; i <= n; ++i)
                factorial *= i;        
        }
        cout <<n<<"! = "<<factorial;
    }
    return 0;
}