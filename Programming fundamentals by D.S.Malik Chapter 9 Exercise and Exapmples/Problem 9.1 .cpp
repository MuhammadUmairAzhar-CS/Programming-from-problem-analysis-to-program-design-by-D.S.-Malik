// EXAMPLE 9-1: houseType Structure - Declaration and Assignment
// C++ Program demonstrating struct variable declaration and direct assignment

#include <iostream>
#include <string>
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

int main() {
    houseType ryanHouse;
    houseType anitaHouse;
    
    // Direct assignment to ryanHouse members
    ryanHouse.style = "Colonial";
    ryanHouse.numOfBedrooms = 3;
    ryanHouse.numOfBathrooms = 2;
    ryanHouse.numOfCarsGarage = 2;
    ryanHouse.yearBuilt = 2005;
    ryanHouse.finishedSquareFootage = 2250;
    ryanHouse.price = 290000;
    ryanHouse.tax = 5000.50;
    
    // Input for anitaHouse using cin
    cout << "Enter style, bedrooms, price for Anita's house: ";
    cin >> anitaHouse.style >> anitaHouse.numOfBedrooms >> anitaHouse.price;
    
    cout << "\nRyan House: " << ryanHouse.style << ", " 
         << ryanHouse.numOfBedrooms << " beds, $" << ryanHouse.price << endl;
    cout << "Anita House: " << anitaHouse.style << ", " 
         << anitaHouse.numOfBedrooms << " beds, $" << anitaHouse.price << endl;
    
    return 0;
}
