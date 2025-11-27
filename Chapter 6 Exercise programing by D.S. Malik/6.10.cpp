#include <iostream>
#include <iomanip>
using namespace std;

void averageAndGrade(int testScore, int progScore, double& average, char& grade);

int main()
{
    int testScore, progScore;
    double average;
    char grade;

    cout << "Enter your test score: ";
    cin >> testScore;
    cout << "Enter your prog score: ";
    cin >> progScore;

    averageAndGrade(testScore, progScore, average, grade);

    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

void averageAndGrade(int testScore, int progScore, double& average, char& grade)
{
    average = (testScore + progScore) / 2.0;

    if (average >= 90.0)
        grade = 'A';
    else if (average >= 80.0)
        grade = 'B';
    else if (average >= 70.0)
        grade = 'C';
    else if (average >= 60.0)
        grade = 'D';
    else
        grade = 'F';
}
