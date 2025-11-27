#include <iostream>
#include <iomanip>
using namespace std;

const double RES_BILL_PROC_FEES     = 4.50;
const double RES_BASIC_SERV_COST    = 20.50;
const double RES_COST_PREM_CHANNEL  = 7.50;

const double BUS_BILL_PROC_FEES     = 15.00;
const double BUS_BASIC_SERV_COST    = 75.00;
const double BUS_BASIC_CONN_COST    = 5.00;
const double BUS_COST_PREM_CHANNEL  = 50.00;

double residential();
double business();

int main()
{
    int accountNumber;
    char customerType;
    double amountDue;
    ;
    cout << "Enter account number: ";
    cin  >> accountNumber;

    cout << "Enter customer type (R/r = Residential, B/b = Business): ";
    cin  >> customerType;
    cout << endl;

    switch (customerType)
    {
        case 'r':
        case 'R':
            amountDue = residential();
            cout << "Account Number : " << accountNumber << endl;
            cout << "Amount Due     : $" << amountDue   << endl;
            break;

        case 'b':
        case 'B':
            amountDue = business();
            cout << "Account Number : " << accountNumber << endl;
            cout << "Amount Due     : $" << amountDue   << endl;
            break;

        default:
            cout << "Error: Invalid customer type entered.\n";
    }

    return 0;
}
