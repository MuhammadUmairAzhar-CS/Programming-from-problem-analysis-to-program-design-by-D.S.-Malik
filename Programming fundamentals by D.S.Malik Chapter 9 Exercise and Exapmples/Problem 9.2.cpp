// EXAMPLE 9-2: houseType Structure - Array of Structures
// C++ Program demonstrating array of houseType structures

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct houseType {
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};

void printHouse(const houseType& house);

int main() {
    const int NUM_HOUSES = 3;
    houseType houses[NUM_HOUSES];
    
    // Initialize first house
    houses[0].style = "Colonial";
    houses[0].numOfBedrooms = 4;
    houses[0].price = 350000;
    
    // Input for remaining houses
    for (int i = 1; i < NUM_HOUSES; i++) {
        cout << "Enter style, bedrooms, price for house " << i + 1 << ": ";
        cin >> houses[i].style >> houses[i].numOfBedrooms >> houses[i].price;
    }
    
    cout << "\nAll Houses:" << endl;
    for (int i = 0; i < NUM_HOUSES; i++) {
        printHouse(houses[i]);
    }
    
    return 0;
}

void printHouse(const houseType& house) {
    cout << fixed << setprecision(2);
    cout << house.style << ": " << house.numOfBedrooms 
         << " beds, $" << house.price << endl;
}
