#include <iostream>
#include <fstream>
#include <string>
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

    file >> boxCost;

    while (file >> studentName >> boxesSold) {
        cout << "Student: " << studentName << ", Boxes: " << boxesSold << endl;
        totalBoxes += boxesSold;
    }

    file.close();

    cout << fixed << setprecision(2);
    cout << "Total boxes sold: " << totalBoxes << endl;
    cout << "Total money earned: $" << totalBoxes * boxCost << endl;

    return 0;
}