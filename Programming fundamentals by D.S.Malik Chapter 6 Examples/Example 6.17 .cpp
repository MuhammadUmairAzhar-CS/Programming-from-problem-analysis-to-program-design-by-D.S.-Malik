#include <iostream>
using namespace std;

const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();
void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);
void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);

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
            cout << "Enter feet and inches (separated by space): ";
            cin >> feet >> inches;
            cout << endl;

            feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);

            cout << "Equivalent length is "
                 << meters << " meter(s) and "
                 << centimeters << " centimeter(s)." << endl;
            break;

        case 2:
            cout << "Enter meters and centimeters (separated by space): ";
            cin >> meters >> centimeters;
            cout << endl;

            metersAndCentTofeetAndInches(meters, centimeters, feet, inches);

            cout << "Equivalent length is "
                 << feet << " foot/feet and "
                 << inches << " inch(es)." << endl;
            break;

        case 3:
            cout << "Program terminated." << endl;
            break;

        default:
            cout << "Invalid choice. Try again." << endl;
        }

        cout << endl;

    } while (choice != 3);

    return 0;
}

void showChoices()
{
    cout << "Enter 1: To convert from feet and inches"
         << " to meters and centimeters." << endl;
    cout << "Enter 2: To convert from meters and centimeters"
         << " to feet and inches." << endl;
    cout << "Enter 3: To quit the program." << endl;
    cout << "Your choice: ";
}

void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct)
{
    int totalInches = f * INCHES_IN_FOOT + in;
    double totalCentimeters = totalInches * CONVERSION;

    mt = static_cast<int>(totalCentimeters / CENTIMETERS_IN_METER);
    ct = static_cast<int>(totalCentimeters) % CENTIMETERS_IN_METER;
}

void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in)
{
    int totalCentimeters = mt * CENTIMETERS_IN_METER + ct;
    double totalInches = totalCentimeters / CONVERSION;

    int totalInchesInt = static_cast<int>(totalInches + 0.5);

    f = totalInchesInt / INCHES_IN_FOOT;
    in = totalInchesInt % INCHES_IN_FOOT;
}
