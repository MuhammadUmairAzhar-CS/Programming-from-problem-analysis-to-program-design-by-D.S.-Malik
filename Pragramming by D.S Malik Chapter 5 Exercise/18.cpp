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
    double costOfBox;             

    infile.open("salesData.txt"); 

    if (!infile) {
        cout << "Cannot open the file." << endl;
        return 0;
    }

    infile >> costOfBox;
 
    while (infile >> name >> boxes) {
        totalBoxes = totalBoxes + boxes;
        volunteers = volunteers + 1;
    }

    infile.close(); 

    cout << "Total boxes sold: " << totalBoxes << endl;
    cout << "Total money made: $" << totalBoxes * costOfBox << endl;

    if (volunteers > 0)
        cout << "Average boxes sold per volunteer: "
             << totalBoxes / volunteers << endl;
    else
        cout << "No volunteer data in file." << endl;

    return 0;
}
