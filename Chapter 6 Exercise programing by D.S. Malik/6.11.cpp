#include <iostream>
using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
    int noOfLines;
    int noOfBlanks;

    cout << "Enter the number of star lines (1 to 20) to be printed: ";
    cin >> noOfLines;

    while (noOfLines < 1 || noOfLines > 20)
    {
        cout << "Invalid input. Enter a number between 1 and 20: ";
        cin >> noOfLines;
    }

    cout << endl;

    noOfBlanks = 30;

    for (int counter = 1; counter <= noOfLines; counter++)
    {
        printStars(noOfBlanks, counter);
        noOfBlanks--;
    }

    return 0;
}

void printStars(int blanks, int starsInLine)
{
    for (int count = 1; count <= blanks; count++)
        cout << ' ';

    for (int count = 1; count <= starsInLine; count++)
        cout << " *";

    cout << endl;
}
