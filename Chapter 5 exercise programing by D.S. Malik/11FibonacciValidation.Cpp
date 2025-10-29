#include <iostream>
using namespace std;
int main()
{
    int i;
    long long first, second, n, result, prev1, prev2;
    do {
        cout <<"Enter the first positive number= ";
        cin >> first;
    } while (first < 0);
    do {
        cout << "Enter the second positive number=  ";
        cin >> second;
    } while(second<0 || second<=first);
    do {
        cout <<"Enter the position of the desired positive number= ";
        cin >> n;
    }while (n<= 0);
    if (n == 1)
        result = first;
    else if (n == 2)
        result = second;
    else{
        prev1 = second;
        prev2 = first;
        for (i=3; i<=n; ++i)
        {
            result = prev1 + prev2;
            prev2 = prev1;
            prev1 = result;
        }
    }
    cout <<"The number at position "<<n<<" is: "<<result;
    return 0;
}