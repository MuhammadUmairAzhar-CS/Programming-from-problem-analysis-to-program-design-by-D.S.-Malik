#include <iostream>
using namespace std;
int main()
{
    long long n, tempN=n; 
    int alternatingSum=0;
    cout <<"Enter a positive integer=";
    cin >> n;
    bool add = true;
    while (tempN > 0)
    {
        int digit = tempN%10;
        if (add)
            alternatingSum += digit;
        else
            alternatingSum -= digit;
        add = !add;
        tempN /= 10;
    }

    if (alternatingSum%11 == 0)
        cout <<n<<" is divisible by 11";
    else
        cout <<n<< " is not divisible by 11";
    return 0;
}