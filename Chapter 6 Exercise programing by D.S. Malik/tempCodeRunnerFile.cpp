#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

char courseGrade(int score);
int main()
{   
    char score;
    char grade;
   cout<<"Enter your score : ";
   cin>>score;
   
    grade = courseGrade(score);
    cout<<grade;
    return 0;
}
 
    char courseGrade(int score)
{
    switch (score / 10)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    return 'D';
    case 7:
    return 'C';
    case 8:
    return 'B';
    case 9:
    case 10:
    return 'A';
    }
}