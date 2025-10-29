#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    int dishes = 0, timeSpent = 0, currentDishTime;
    cout <<"Enter time for first dish= ";
    cin >>a;
    cout <<"Enter extra time per dish= ";
    cin >>b;
    cout <<"Enter total time available= ";
    cin >>t;
    currentDishTime =a;
    while (timeSpent+currentDishTime <= t)
    {
        timeSpent += currentDishTime;
        currentDishTime += b;
        dishes++;
    }
    cout << "Bianca can prepare "<<dishes<<" dishes." << endl;
    return 0;
}