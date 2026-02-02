#include <iostream>
using namespace std;

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

int main()
{
    int testScore, progScore;
    double average;
    char grade;

    cout << "Enter test score: ";
    cin >> testScore;

    cout << "Enter programming score: ";
    cin >> progScore;

    averageAndGrade(testScore, progScore, average, grade);

    cout << "\nAverage Score: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
