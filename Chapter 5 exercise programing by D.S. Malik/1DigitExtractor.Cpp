#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, dig, nForDig, nForSum, sum, pow10;
    cout <<"Enter an integer= ";
    cin >> num;
    nForDig = abs(num);
    nForSum = abs(num);
    cout <<"Individual digits: ";
    if (nForDig == 0)
    {
        cout << 0;
    }
    else
    {
        pow10 = 1;
        while(pow10 <= nForDig/10)
        {
            pow10 *=10;
        }
        while (pow10>0)
        {
            dig = nForDig/pow10;
            cout <<dig<<" ";
            nForDig %=pow10;
            pow10/=10;
        }
    }
    cout<<endl;
    sum = 0;
    if (nForSum == 0)
    {
        sum = 0;
    }
    else
    {
        while(nForSum > 0)
        {
            sum+=nForSum%10;
            nForSum/=10;
        }
    }
    cout <<"Sum of digits= "<<sum;
    return 0;
}