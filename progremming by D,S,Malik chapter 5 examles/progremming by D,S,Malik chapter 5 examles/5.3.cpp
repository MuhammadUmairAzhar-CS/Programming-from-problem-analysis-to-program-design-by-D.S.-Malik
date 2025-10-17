#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;

    int counter;                             //supposed
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the number of volunteers: ";
    cin >> numOfVolunteers;
    cout << endl;
    totalNumOfBoxesSold = 0;
    counter = 0;
    while (counter < numOfVolunteers)
    {
        cout << "Enter the volunteer's name and the number of boxes sold: ";
        cin >> name >> numOfBoxesSold;
        cout << endl;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        counter++;
    }
    cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl;
    cout << "Enter the cost of one box: ";
    cin >> costOfOneBox;
    cout << endl;
    cout << "The total money made by selling cookies: $"
         << totalNumOfBoxesSold * costOfOneBox << endl;
    if (counter != 0)
        cout << "The average number of boxes sold by each volunteer: "
             << totalNumOfBoxesSold / counter << endl;
    else
        cout << "No input." << endl;
    return 0;
}
