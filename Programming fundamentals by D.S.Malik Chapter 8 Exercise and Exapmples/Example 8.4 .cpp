// Average test score and scores less than average
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int test[5];
    int sum = 0;
    double average;
    int index;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter five test scores: ";
    for (index = 0; index < 5; index++)
    {
        cin >> test[index];
        sum = sum + test[index];
    }

    cout << endl;

    average = sum / 5.0;
    cout << "The average test score = " << average << endl;

    for (index = 0; index < 5; index++)
        if (test[index] < average)
            cout << test[index]
                 << " is less than the average "
                 << "test score." << endl;

    return 0;
}
