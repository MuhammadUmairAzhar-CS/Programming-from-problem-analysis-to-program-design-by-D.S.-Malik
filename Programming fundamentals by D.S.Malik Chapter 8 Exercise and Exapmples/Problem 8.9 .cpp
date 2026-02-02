// 9. Monthly high/low temperatures
#include <iostream>
#include <iomanip>
using namespace std;

const int MONTHS = 12;
const int COLS = 2; // 0: high, 1: low

void getData(int temps[][COLS], int months);
double averageHigh(int temps[][COLS], int months);
double averageLow(int temps[][COLS], int months);
int indexHighTemp(int temps[][COLS], int months);
int indexLowTemp(int temps[][COLS], int months);

int main()
{
    int temps[MONTHS][COLS];

    getData(temps, MONTHS);

    double avgH = averageHigh(temps, MONTHS);
    double avgL = averageLow(temps, MONTHS);
    int hiIdx = indexHighTemp(temps, MONTHS);
    int loIdx = indexLowTemp(temps, MONTHS);

    cout << fixed << showpoint << setprecision(2);
    cout << "Average high: " << avgH << endl;
    cout << "Average low : " << avgL << endl;
    cout << "Highest high temperature: " << temps[hiIdx][0]
         << " (month " << hiIdx + 1 << ")" << endl;
    cout << "Lowest low temperature: " << temps[loIdx][1]
         << " (month " << loIdx + 1 << ")" << endl;

    return 0;
}

void getData(int temps[][COLS], int months)
{
    for (int m = 0; m < months; m++)
    {
        cout << "Enter high and low for month "
             << m + 1 << ": ";
        cin >> temps[m][0] >> temps[m][1];
    }
}

double averageHigh(int temps[][COLS], int months)
{
    int sum = 0;
    for (int m = 0; m < months; m++)
        sum += temps[m][0];
    return static_cast<double>(sum) / months;
}

double averageLow(int temps[][COLS], int months)
{
    int sum = 0;
    for (int m = 0; m < months; m++)
        sum += temps[m][1];
    return static_cast<double>(sum) / months;
}

int indexHighTemp(int temps[][COLS], int months)
{
    int idx = 0;
    for (int m = 1; m < months; m++)
        if (temps[m][0] > temps[idx][0])
            idx = m;
    return idx;
}

int indexLowTemp(int temps[][COLS], int months)
{
    int idx = 0;
    for (int m = 1; m < months; m++)
        if (temps[m][1] < temps[idx][1])
            idx = m;
    return idx;
}
