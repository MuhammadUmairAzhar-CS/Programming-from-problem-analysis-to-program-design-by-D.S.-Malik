#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, limit;
    cout <<"Enter a positive integer: ";
    cin >>n;
    bool isPrime = true;
    if (n <= 1)
        isPrime = false;
    else if (n == 2)
        isPrime = true;
    else if (n%2 == 0)
        isPrime = false;
    else
    {
        limit = sqrt(n);
        for (int i=3; i<= limit; i += 2)
        {
            if (n%i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout <<n<<" is a prime number.";
    else
        cout <<n<< " is not a prime number.";    
    return 0;
}