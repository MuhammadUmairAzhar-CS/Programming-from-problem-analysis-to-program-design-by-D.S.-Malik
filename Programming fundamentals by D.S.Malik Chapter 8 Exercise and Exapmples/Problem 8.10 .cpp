// 10. Mean and standard deviation of up to 100 numbers
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int MAXN = 100;
    double x[MAXN];
    int n;

    cout << "How many numbers (1-" << MAXN << ")? ";
    cin >> n;
    if (n <= 0 || n > MAXN)
    {
        cout << "Invalid n." << endl;
        return 0;
    }

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> x[i];

    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += x[i];

    double mean = sum / n;

    double sumSq = 0.0;
    for (int i = 0; i < n; i++)
    {
        double diff = x[i] - mean;
        sumSq += diff * diff;
    }

    double s = sqrt(sumSq / n);

    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << s << endl;

    return 0;
}
