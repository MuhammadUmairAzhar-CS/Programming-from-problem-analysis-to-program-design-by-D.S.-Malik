// Example 6-3: courseGrade function with a simple test driver.
#include <iostream>
using namespace std;

char courseGrade(int score)
{
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int score;

    cout << "Enter course score (0 - 100): ";
    cin >> score;

    cout << "The course grade is " << courseGrade(score) << endl;

    return 0;
}
