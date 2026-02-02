// Processing an array (sum, average, largest element)
#include <iostream>
using namespace std;

int main()
{
    double sales[10];
    double largestSale, sum, average;

    for (int index = 0; index < 10; index++)
        sales[index] = 0.0;

    cout << "Enter 10 sales values: ";
    for (int index = 0; index < 10; index++)
        cin >> sales[index];

    cout << "Sales values: ";
    for (int index = 0; index < 10; index++)
        cout << sales[index] << " ";
    cout << endl;

    sum = 0.0;
    for (int index = 0; index < 10; index++)
        sum = sum + sales[index];

    average = sum / 10.0;

    largestSale = sales[0];
    for (int index = 1; index < 10; index++)
        if (sales[index] > largestSale)
            largestSale = sales[index];

    cout << "Total sales = " << sum << endl;
    cout << "Average sale = " << average << endl;
    cout << "Largest sale = " << largestSale << endl;

    return 0;
}
