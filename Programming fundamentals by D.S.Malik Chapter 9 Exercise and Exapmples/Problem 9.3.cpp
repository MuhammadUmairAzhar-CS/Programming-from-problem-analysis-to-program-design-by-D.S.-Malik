// EXAMPLE 9-3: houseType Structure - Function Parameters
// C++ Program demonstrating houseType as function parameter (pass by value/reference)

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

void initializeHouse(houseType& house);
void printHouse(const houseType& house);
double calculateTax(houseType house);

int main() {
    houseType myHouse;
    
    initializeHouse(myHouse);
    cout << "\nHouse Details:" << endl;
    printHouse(myHouse);
    
    double taxAmount = calculateTax(myHouse);
    cout << "Calculated Tax: $" << fixed << setprecision(2) << taxAmount << endl;
    
    return 0;
}

void initializeHouse(houseType& house) {
    cout << "Enter house details:" << endl;
    cout << "Style: ";
    cin.ignore();
    getline(cin, house.style);
    cout << "Bedrooms: ";
    cin >> house.numOfBedrooms;
    cout << "Bathrooms: ";
    cin >> house.numOfBathrooms;
    cout << "Garage cars: ";
    cin >> house.numOfCarsGarage;
    cout << "Year built: ";
    cin >> house.yearBuilt;
    cout << "Square footage: ";
    cin >> house.finishedSquareFootage;
    cout << "Price: ";
    cin >> house.price;
}

void printHouse(const houseType& house) {
    cout << fixed << setprecision(2);
    cout << "\nStyle: " << house.style << endl;
    cout << "Bedrooms/Bathrooms: " << house.numOfBedrooms << "/" << house.numOfBathrooms << endl;
    cout << "Garage: " << house.numOfCarsGarage << " cars" << endl;
    cout << "Year: " << house.yearBuilt << ", SqFt: " << house.finishedSquareFootage << endl;
    cout << "Price: $" << house.price << endl;
}

double calculateTax(houseType house) {
    // Pass by value - modifications don't affect original
    house.tax = house.price * 0.0175;  // 1.75% property tax rate
    return house.tax;
}
