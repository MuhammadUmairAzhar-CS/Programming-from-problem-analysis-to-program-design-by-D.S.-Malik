#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
    int n1, n2, temp, fivesCount=0, threesCount=0;
    cout <<"Enter two integers= ";
    cin >> n1>>n2;
    if (n1>n2)
    {        
        temp = n1;
        n1=n2;
        n2=temp;
    }    
    for (int i =n1; i<=n2; ++i)
    {
        if (i%3 == 0)
        {    
            threesCount++;
        }
        if (i%5 == 0)        
            fivesCount++;        
    }
    cout <<"Multiples of 3= "<<threesCount << endl;
    cout <<"Multiples of 5= "<<fivesCount;
    return 0;
}