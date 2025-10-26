#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double R;
    cout << "Enter the radius of the circular waxed paper: ";
    cin >> R;
    
    double x_optimal = 2 * M_PI * R * (1 - sqrt(2.0/3.0));
    
    cout << fixed << setprecision(2);
    cout << "Length of the removed sector for maximum volume: " << x_optimal << endl;
    
    return 0;
}