// 22. Prime Number Check
#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;
    int primes[11] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    
    cout << "Enter number (1-1000): ";
    cin >> number;
    
    if (number <= 1 || number > 1000)
    {
        cout << number << " is not prime" << endl;
        return 0;
    }
    
    for (int i = 0; i < 11; i++)
    {
        if (number == primes[i])
        {
            cout << number << " is prime" << endl;
            return 0;
        }
        if (number % primes[i] == 0)
        {
            isPrime = false;
            cout << number << " is not prime" << endl;
            cout << "Divisible by: ";
            for (int j = 0; j < 11; j++)
            {
                if (number % primes[j] == 0)
                    cout << primes[j] << " ";
            }
            cout << endl;
            return 0;
        }
    }
    
    cout << number << " is prime" << endl;
    return 0;
}
