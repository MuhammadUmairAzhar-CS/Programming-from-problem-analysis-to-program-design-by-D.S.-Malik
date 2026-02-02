// EXAMPLE 9-1: houseType Structure Demonstration
// C++ Program showing struct declaration, initialization, and input operations

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
    
    ryanHouse.style = "Colonial";
    ryanHouse.numOfBedrooms = 3;
    ryanHouse.numOfBathrooms = 2;
    ryanHouse.numOfCarsGarage = 2;
    ryanHouse.yearBuilt = 2005;
    ryanHouse.finishedSquareFootage = 2250;
    ryanHouse.price = 290000;
    ryanHouse.tax = 5000.50;
    
    cout << "Enter Anita's house details:" << endl;
    cin >> anitaHouse.style >> anitaHouse.numOfBedrooms >> anitaHouse.price;
    
    cout << "\nRyan's House:" << endl;
    cout << "Style: " << ryanHouse.style << endl;
    cout << "Bedrooms: " << ryanHouse.numOfBedrooms << endl;
    cout << "Price: $" << ryanHouse.price << endl;
    
    cout << "\nAnita's House:" << endl;
    cout << "Style: " << anitaHouse.style << endl;
    cout << "Bedrooms: " << anitaHouse.numOfBedrooms << endl;
    cout << "Price: $" << anitaHouse.price << endl;
    
    return 0;
}
