// 20. Modified Example 8-7: user-specified times
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_POINTS = 20;

void getData(double time[], double dist[], int& n)
{
    cout << "How many data points (2-" << MAX_POINTS << ")? ";
    cin >> n;
    if (n < 2) n = 2;
    if (n > MAX_POINTS) n = MAX_POINTS;

    cout << "Enter time and total distance for each point (time distance):" << endl;
    for (int i = 0; i < n; i++)
        cin >> time[i] >> dist[i];
}

void computeAverageSpeeds(const double time[], const double dist[],
                          double avgSpeed[], int n)
{
    for (int i = 0; i < n - 1; i++)
        avgSpeed[i] = (dist[i + 1] - dist[i]) /
                      (time[i + 1] - time[i]);
}

void printResults(const double time[], const double dist[],
                  const double avgSpeed[], int n)
{
    cout << fixed << showpoint << setprecision(2);
    cout << setw(8) << "t"
         << setw(12) << "Distance"
         << setw(20) << "Avg speed (interval)" << endl;

    cout << setw(8) << time[0]
         << setw(12) << dist[0]
         << setw(20) << " - " << endl;

    for (int i = 1; i < n; i++)
    {
        cout << setw(8) << time[i]
             << setw(12) << dist[i]
             << setw(20) << avgSpeed[i - 1]
             << "  [" << time[i - 1] << ", " << time[i] << "]"
             << endl;
    }
}

int main()
{
    double time[MAX_POINTS], dist[MAX_POINTS], avgSpeed[MAX_POINTS];

    int n;
    getData(time, dist, n);
    computeAverageSpeeds(time, dist, avgSpeed, n);
    printResults(time, dist, avgSpeed, n);

    return 0;
}
