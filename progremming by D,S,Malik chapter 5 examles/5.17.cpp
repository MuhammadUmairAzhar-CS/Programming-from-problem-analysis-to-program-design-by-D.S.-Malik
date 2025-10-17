#include <iostream>
using namespace std;
int main()
{
    int i;
    int sum;
    int N;

    cout << "Enter the number of positive integers to be added: ";
    cin >> N;
    sum = 0;
    cout << endl;

    for (i = 1; i <= N; i++)
        sum = sum + i;

    cout << "The sum of the first " << N
         << " positive integers is " << sum << endl;

    return 0;
}
