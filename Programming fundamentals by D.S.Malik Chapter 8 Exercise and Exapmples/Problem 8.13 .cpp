// 13. Students’ averages, grades, and class average
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int STUDENTS = 10;
const int TESTS = 5;

void readData(string names[], int scores[][TESTS])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        cin >> names[i];
        for (int j = 0; j < TESTS; j++)
            cin >> scores[i][j];
    }
}

char gradeFromAverage(double avg)
{
    if (avg >= 90.0) return 'A';
    else if (avg >= 80.0) return 'B';
    else if (avg >= 70.0) return 'C';
    else if (avg >= 60.0) return 'D';
    else return 'F';
}

void computeAveragesAndGrades(const int scores[][TESTS],
                              double averages[], char grades[])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        int sum = 0;
        for (int j = 0; j < TESTS; j++)
            sum += scores[i][j];

        averages[i] = static_cast<double>(sum) / TESTS;
        grades[i] = gradeFromAverage(averages[i]);
    }
}

double classAverage(const double averages[])
{
    double sum = 0.0;
    for (int i = 0; i < STUDENTS; i++)
        sum += averages[i];
    return sum / STUDENTS;
}

void outputResults(const string names[], const int scores[][TESTS],
                   const double averages[], const char grades[])
{
    cout << fixed << showpoint << setprecision(2);

    cout << left << setw(10) << "Name";
    for (int j = 1; j <= TESTS; j++)
        cout << setw(6) << ("T" + to_string(j));
    cout << setw(10) << "Average" << setw(6) << "Grade" << endl;

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << left << setw(10) << names[i];
        for (int j = 0; j < TESTS; j++)
            cout << setw(6) << scores[i][j];
        cout << setw(10) << averages[i]
             << setw(6) << grades[i] << endl;
    }
}

int main()
{
    string names[STUDENTS];
    int scores[STUDENTS][TESTS];
    double averages[STUDENTS];
    char grades[STUDENTS];

    readData(names, scores);
    computeAveragesAndGrades(scores, averages, grades);
    outputResults(names, scores, averages, grades);

    double cAvg = classAverage(averages);
    cout << "Class average: " << cAvg << endl;

    return 0;
}
