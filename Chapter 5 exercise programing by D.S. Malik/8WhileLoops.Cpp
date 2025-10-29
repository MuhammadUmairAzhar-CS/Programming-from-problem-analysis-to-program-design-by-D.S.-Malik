#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, sumEven=0;
    long long sumOddSquares = 0;
    char c ='A';
    cout << "Enter two integers= ";    
    cin >> n1>>n2;
    while (n1 >= n2)
    {
        cout <<"1st number must be less than second.Please re-enter."<< endl;
        cout <<"1st number: ";
        cin >>n1;
        cout <<"2nd number: ";
        cin >>n2;
    }
    cout <<"Odd numbers: ";
    i = n1;
    while (i<=n2)
    {
        if (i%2 != 0)       
            cout << i << " ";        
        i++;
    }
    cout<<endl;
    i = n1;
    while (i <= n2) {
        if (i % 2 == 0) {
            sumEven += i;
        }
        i++;
    }
    cout <<"Sum of even numbers: " << sumEven << endl;
    cout <<"Numbers and their squares (1-10):" << endl;
    i = 1;
    while (i <= 10) {
        cout << i << " " << (i * i) << endl;
        i++;
    }    
    i = n1;
    while (i<=n2)
    {
        if (i % 2 != 0)
        {
            sumOddSquares +=(long long)i * i;
        }
        i++;
    }
    cout <<"Sum of squares of odd numbers= "<<sumOddSquares<<endl;
    cout <<"Uppercase letters= ";   
    while (c<='Z')
    {
        cout <<c<<" ";
        c++;
    }
    return 0;
}