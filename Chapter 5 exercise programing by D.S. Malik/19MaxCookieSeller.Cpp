#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    ifstream file("cookies.txt");
    if (!file) {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    double boxCost;
    string studentName;
    int boxesSold;
    int totalBoxes = 0;
    int maxBoxes = 0;
    vector<string> maxStudents;

    file >> boxCost;

    while (file >> studentName >> boxesSold) {
        totalBoxes += boxesSold;
        
        if (boxesSold > maxBoxes) {
            maxBoxes = boxesSold;
            maxStudents.clear();
            maxStudents.push_back(studentName);
        } else if (boxesSold == maxBoxes) {
            maxStudents.push_back(studentName);
        }
    }

    file.close();

    cout << fixed << setprecision(2);
    cout << "Total boxes sold: " << totalBoxes << endl;
    cout << "Total money earned: $" << totalBoxes * boxCost << endl;
    cout << endl;

    cout << "Top sellers (with " << maxBoxes << " boxes):" << endl;
    for (int i = 0; i < maxStudents.size(); ++i) {
        cout << maxStudents[i] << endl;
    }

    double donation = (maxBoxes * boxCost) * 0.10;
    cout << "Donation amount: $" << donation << endl;

    return 0;
}