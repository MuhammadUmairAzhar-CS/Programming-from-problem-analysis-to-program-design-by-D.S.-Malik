// 1. Array alpha: first 25 = i^2, last 25 = 3*i, 10 per line
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 50;
    double alpha[SIZE];

    for (int i = 0; i < 25; i++)
        alpha[i] = static_cast<double>(i * i);

    for (int i = 25; i < SIZE; i++)
        alpha[i] = static_cast<double>(3 * i);

    cout << fixed << showpoint << setprecision(2);

    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(8) << alpha[i];
        if ((i + 1) % 10 == 0)
            cout << endl;
    }

    if (SIZE % 10 != 0)
        cout << endl;

    return 0;
}
