// 17. Weekly pay for 10 temporary workers, average, and above-average earners
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int EMPLOYEES = 10;
const int COLS = 3; // 0: hours, 1: rate, 2: weekly pay

void readData(const string& fileName,
              string names[], double data[][COLS])
{
    ifstream inFile(fileName.c_str());
    if (!inFile)
    {
        cout << "Cannot open " << fileName << endl;
        exit(0);
    }

    for (int i = 0; i < EMPLOYEES; i++)
        inFile >> names[i] >> data[i][0] >> data[i][1];

    inFile.close();
}

void computeWeeklyPay(double data[][COLS])
{
    for (int i = 0; i < EMPLOYEES; i++)
    {
        double hours = data[i][0];
        double rate  = data[i][1];
        double pay   = 0.0;

        if (hours <= 40.0)
            pay = hours * rate;
        else
            pay = 40.0 * rate + (hours - 40.0) * 1.5 * rate;

        data[i][2] = pay;
    }
}

double averagePay(const double data[][COLS])
{
    double sum = 0.0;
    for (int i = 0; i < EMPLOYEES; i++)
        sum += data[i][2];
    return sum / EMPLOYEES;
}

void printAboveAverage(const string names[],
                       const double data[][COLS],
                       double avg)
{
    cout << "Employees with pay >= average (" << avg << "):" << endl;
    for (int i = 0; i < EMPLOYEES; i++)
        if (data[i][2] >= avg)
            cout << names[i] << "  $" << data[i][2] << endl;
}

void printAll(const string names[], const double data[][COLS])
{
    cout << fixed << showpoint << setprecision(2);
    cout << left << setw(12) << "Name"
         << right << setw(10) << "Hours"
         << setw(10) << "Rate"
         << setw(12) << "Weekly Pay" << endl;

    for (int i = 0; i < EMPLOYEES; i++)
        cout << left << setw(12) << names[i]
             << right << setw(10) << data[i][0]
             << setw(10) << data[i][1]
             << setw(12) << data[i][2] << endl;
}

int main()
{
    string names[EMPLOYEES];
    double data[EMPLOYEES][COLS];

    readData("workers.txt", names, data);
    computeWeeklyPay(data);
    double avg = averagePay(data);

    printAll(names, data);
    cout << "Average weekly pay: " << avg << endl << endl;
    printAboveAverage(names, data, avg);

    return 0;
}
