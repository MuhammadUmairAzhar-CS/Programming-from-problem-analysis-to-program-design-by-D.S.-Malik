// 21. Check primality using first 1230 prime numbers (simplified)
// For demo, we will generate primes up to some limit instead of hardcoding 1230 primes.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void generatePrimes(vector<int>& primes, int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= limit; p++)
        if (isPrime[p])
            for (int k = p * p; k <= limit; k += p)
                isPrime[k] = false;

    for (int i = 2; i <= limit; i++)
        if (isPrime[i]) primes.push_back(i);
}

int main()
{
    vector<int> primes;
    generatePrimes(primes, 100000);

    long long t;
    cout << "Enter integer t (2 - 100000000): ";
    cin >> t;

    bool isPrimeNum = true;
    int factor = -1;

    for (size_t i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        if (1LL * p * p > t) break;
        if (t % p == 0)
        {
            isPrimeNum = false;
            factor = p;
            break;
        }
    }

    if (isPrimeNum)
        cout << t << " is prime." << endl;
    else
        cout << t << " is not prime. One prime factor: "
             << factor << endl;

    return 0;
}
