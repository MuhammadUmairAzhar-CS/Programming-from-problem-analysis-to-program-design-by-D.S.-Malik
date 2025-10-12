#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    double hours = 35.45, rate = 15.00, tolerance = 0.01000;
    double pay = hours * rate;
    cout << "Default format:" << endl;
    cout << "hour = " << hours << ", rate = " << rate
    << ", pay = " << pay << ", tolerance = " << tolerance << endl << endl;
    cout << scientific;
    cout << "Scientific notation:" << endl;
    cout << "hour = " << hours << ", rate = " << rate
    << ", pay = " << pay << ", tolerance = " << tolerance << endl << endl;
    cout << fixed;
    cout << "Fixed decimal notation:" << endl;
    cout << "hour = " << hours << ", rate = " << rate
     << ", pay = " << pay << ", tolerance = " << tolerance << endl << endl;

    return 0;
}
