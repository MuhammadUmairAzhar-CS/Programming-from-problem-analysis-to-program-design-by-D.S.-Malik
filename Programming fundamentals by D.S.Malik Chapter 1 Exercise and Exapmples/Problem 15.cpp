#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double radius, price, area, pricePerSqInch;
    const double PI = 3.141592;
    
    cout << "Enter pizza radius (inches): ";
    cin >> radius;
    cout << "Enter pizza price: $";
    cin >> price;
    
    area = PI * pow(radius, 2);
    pricePerSqInch = price / area;
    
    cout << fixed << setprecision(4);
    cout << "Price per square inch: $" << pricePerSqInch << endl;
    
    return 0;
}
