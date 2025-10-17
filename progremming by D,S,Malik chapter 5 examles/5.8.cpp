#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    double testScore;
    char grade = ' ';
    double sum = 0;
    int count = 0;

    ifstream inFile;
    ofstream outFile;

    inFile.open("Ch5_stData.txt");
    if (!inFile)
    {
        cout << "Cannot open input file. Program terminates!" << endl;
        return 1;
    }

    outFile.open("Ch5_stData.out");
    outFile << fixed << showpoint << setprecision(2);

    inFile >> firstName >> lastName;
    inFile >> testScore;

    while (inFile)
    {
        sum = sum + testScore;
        count++;

        switch (static_cast<int>(testScore) / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
        case 10:
            grade = 'A';
            break;
        default:
            cout << "Invalid score." << endl;
        }

        outFile << left << setw(12) << firstName
                << setw(12) << lastName
                << right << setw(4) << testScore
                << setw(2) << grade << endl;

        inFile >> firstName >> lastName;
        inFile >> testScore;
    }

    outFile << endl;

    if (count != 0)
        outFile << "Class Average: " << sum / count << endl;
    else
        outFile << "No data." << endl;

    inFile.close();
    outFile.close();

    return 0;
}
