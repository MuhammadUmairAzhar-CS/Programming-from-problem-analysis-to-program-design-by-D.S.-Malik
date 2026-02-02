// 12. Marathon miles – 5 runners, 7 days, from file
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_RUNNERS = 5;
const int NUM_DAYS = 7;

void readData(const string& fileName,
              string names[], double miles[][NUM_DAYS])
{
    ifstream inFile(fileName.c_str());
    if (!inFile)
    {
        cout << "Cannot open " << fileName << endl;
        exit(0);
    }

    for (int i = 0; i < NUM_RUNNERS; i++)
    {
        inFile >> names[i];
        for (int d = 0; d < NUM_DAYS; d++)
            inFile >> miles[i][d];
    }

    inFile.close();
}

void computeTotals(const double miles[][NUM_DAYS],
                   double totalMiles[], double avgPerDay[])
{
    for (int i = 0; i < NUM_RUNNERS; i++)
    {
        double sum = 0.0;
        for (int d = 0; d < NUM_DAYS; d++)
            sum += miles[i][d];

        totalMiles[i] = sum;
        avgPerDay[i] = sum / NUM_DAYS;
    }
}

void outputResults(const string names[],
                   const double miles[][NUM_DAYS],
                   const double totalMiles[],
                   const double avgPerDay[])
{
    cout << fixed << showpoint << setprecision(2);

    cout << left << setw(10) << "Runner";
    for (int d = 1; d <= NUM_DAYS; d++)
        cout << setw(7) << ("D" + to_string(d));
    cout << setw(10) << "Total" << setw(10) << "Avg/Day" << endl;

    for (int i = 0; i < NUM_RUNNERS; i++)
    {
        cout << left << setw(10) << names[i];
        for (int d = 0; d < NUM_DAYS; d++)
            cout << setw(7) << miles[i][d];
        cout << setw(10) << totalMiles[i]
             << setw(10) << avgPerDay[i] << endl;
    }
}

int main()
{
    string names[NUM_RUNNERS];
    double miles[NUM_RUNNERS][NUM_DAYS];
    double totalMiles[NUM_RUNNERS];
    double avgPerDay[NUM_RUNNERS];

    readData("runners.txt", names, miles);
    computeTotals(miles, totalMiles, avgPerDay);
    outputResults(names, miles, totalMiles, avgPerDay);

    return 0;
}
