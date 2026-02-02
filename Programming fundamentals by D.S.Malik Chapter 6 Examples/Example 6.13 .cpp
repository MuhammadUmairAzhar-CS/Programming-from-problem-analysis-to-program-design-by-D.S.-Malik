// Calculate grade.
#include <iostream>
using namespace std;

void getScore(int& score)
{
    cout << "Enter the course score: ";
    cin >> score;
    cout << "The course score is " << score << endl;
}

void printGrade(int score)
{
    char grade;

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "The course grade is " << grade << endl;
}

int main()
{
    int courseScore;

    cout << "Line 8: Based on the course score, \n"
         << " this program computes the "
         << "course grade." << endl;

    getScore(courseScore);
    printGrade(courseScore);

    return 0;
}
