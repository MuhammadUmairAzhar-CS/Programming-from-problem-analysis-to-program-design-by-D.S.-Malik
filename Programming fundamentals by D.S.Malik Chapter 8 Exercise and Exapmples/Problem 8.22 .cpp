// 22. Factor m into primes (using primes generated as in 21)
#include <iostream>
#include <vector>
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
    long long m;
    cout << "Enter integer m (2 - 100000000): ";
    cin >> m;

    vector<int> primes;
    generatePrimes(primes, 100000);

    long long temp = m;
    vector<long long> factors;

    for (size_t i = 0; i < primes.size(); i++)
    {
        int p = primes[i];
        if (1LL * p * p > temp) break;
        while (temp % p == 0)
        {
            factors.push_back(p);
            temp /= p;
        }
    }
    if (temp > 1) factors.push_back(temp);

    if (factors.size() == 1 && factors[0] == m)
        cout << m << " is prime." << endl;
    else
    {
        cout << m << " = ";
        for (size_t i = 0; i < factors.size(); i++)
        {
            cout << factors[i];
            if (i + 1 < factors.size())
                cout << " * ";
        }
        cout << endl;
    }

    return 0;
}
