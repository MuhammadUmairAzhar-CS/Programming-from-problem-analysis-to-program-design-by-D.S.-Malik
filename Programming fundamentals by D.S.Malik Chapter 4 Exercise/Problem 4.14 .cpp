// 14. Airport Parking Fee
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double hours;
    
    cout << "Enter parking hours: ";
    cin >> hours;
    
    double fee;
    if (hours <= 3)
        fee = 5.0;
    else if (hours <= 9)
        fee = 5 + (hours - 3) * 1.0;
    else if (hours <= 24)
        fee = 5 + 6 * 1.0 + (hours - 9) * 2.0;
    else
        fee = 5 + 6 * 1.0 + 15 * 2.0;
    
    cout << fixed << setprecision(2);
    cout << "Parking fee: $" << fee << endl;
    
    return 0;
}
