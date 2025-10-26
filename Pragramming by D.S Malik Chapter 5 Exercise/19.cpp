#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile;
    string name;
    int boxes;
    int totalBoxes = 0;
    int volunteers = 0;
    int maxBoxes = 0;
    double costPerBox;
    double donationAmount = 0.0;
    string topSellers = "";

    infile.open("salesData.txt");

    if (!infile) {
        cout << "Cannot open the file." << endl;
        return 0;
    }

    infile >> costPerBox;

    while (infile >> name >> boxes) {
        totalBoxes = totalBoxes + boxes;
        volunteers = volunteers + 1;

        if (boxes > maxBoxes) {
            maxBoxes = boxes;
            topSellers = name;
        }
        else if (boxes == maxBoxes) {
            topSellers = topSellers + ", " + name;
        }
    }

    infile.close();

    cout << "Total boxes sold: " << totalBoxes << endl;
    cout << "Total money made: $" << totalBoxes * costPerBox << endl;

    if (volunteers > 0)
        cout << "Average boxes sold per volunteer: "
             << totalBoxes / volunteers << endl;
    else
        cout << "No volunteer data in file." << endl;

    cout << endl;
    cout << "Maximum boxes sold: " << maxBoxes << endl;
    cout << "Top seller(s): " << topSellers << endl;

    donationAmount = (maxBoxes * costPerBox) * 0.10;
    cout << "Donation to each top seller’s favorite charity: $"
         << donationAmount << endl;

    return 0;
}
