#include <iostream>
using namespace std;

const double CONVERSION = 2.54;  // 1 inch = 2.54 cm
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();
void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);
void metersAndCentToFeetAndInches(int mt, int ct, int& f, int& in);

int main()
{
    int feet, inches;
    int meters, centimeters;
    int choice;

    do
    {
        showChoices();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                cout << "Enter feet and inches: ";
                cin >> feet >> inches;
                feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);
                cout << feet << " feet, " << inches << " inches = "
                     << meters << " meter(s), " << centimeters << " centimeter(s)." << endl;
                break;

            case 2:
                cout << "Enter meters and centimeters: ";
                cin >> meters >> centimeters;
                metersAndCentToFeetAndInches(meters, centimeters, feet, inches);
                cout << meters << " meter(s), " << centimeters << " centimeter(s) = "
                     << feet << " feet, " << inches << " inches." << endl;
                break;

            case 99:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid input." << endl;
        }
        cout << endl;
    }
    while (choice != 99);

    return 0;
}

void showChoices()
{
    cout << "Enter--" << endl;
    cout << "1: Convert from feet and inches to meters and centimeters." << endl;
    cout << "2: Convert from meters and centimeters to feet and inches." << endl;
    cout << "99: Quit the program." << endl;
}

void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct)
{
    int totalInches = f * INCHES_IN_FOOT + in;
    double totalCm = totalInches * CONVERSION;
    mt = static_cast<int>(totalCm) / CENTIMETERS_IN_METER;
    ct = static_cast<int>(totalCm) % CENTIMETERS_IN_METER;
}

void metersAndCentToFeetAndInches(int mt, int ct, int& f, int& in)
{
    int totalCm = mt * CENTIMETERS_IN_METER + ct;
    double totalInches = totalCm / CONVERSION;
    f = static_cast<int>(totalInches) / INCHES_IN_FOOT;
    in = static_cast<int>(totalInches) % INCHES_IN_FOOT;
}
