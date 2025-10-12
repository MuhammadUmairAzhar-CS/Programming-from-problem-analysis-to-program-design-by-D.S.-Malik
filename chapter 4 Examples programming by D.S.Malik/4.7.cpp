#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double wages, rate, hours;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter working hours and hourly rate: ";
    cin >> hours >> rate;

    if (hours > 40.0)
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);  // overtime pay
    else
        wages = hours * rate;

    cout << endl;
    cout << "Total wages: $" << wages << endl;

    return 0;
}
