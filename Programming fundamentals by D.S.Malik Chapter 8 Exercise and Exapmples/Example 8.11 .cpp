// Two-dimensional arrays as parameters to functions.
#include <iostream>
#include <iomanip>
using namespace std;

const int NUMBER_OF_ROWS = 6;
const int NUMBER_OF_COLUMNS = 5;

void printMatrix(int matrix[][NUMBER_OF_COLUMNS],
                 int numberOfRows);
void sumRows(int matrix[][NUMBER_OF_COLUMNS],
             int numberOfRows);
void largestInRows(int matrix[][NUMBER_OF_COLUMNS],
                   int numberOfRows);

int main()
{
    int board[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS]
        = {{17, 8, 24, 10, 28},
           {9, 20, 16, 55, 90},
           {25, 45, 35, 8, 78},
           {5, 0, 96, 45, 38},
           {76, 30, 8, 14, 28},
           {9, 60, 55, 62, 10}};

    printMatrix(board, NUMBER_OF_ROWS);
    cout << endl;

    sumRows(board, NUMBER_OF_ROWS);
    cout << endl;

    largestInRows(board, NUMBER_OF_ROWS);

    return 0;
}

void printMatrix(int matrix[][NUMBER_OF_COLUMNS],
                 int numberOfRows)
{
    cout << "Matrix:" << endl;

    for (int row = 0; row < numberOfRows; row++)
    {
        for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
            cout << setw(5) << matrix[row][col];
        cout << endl;
    }
}

void sumRows(int matrix[][NUMBER_OF_COLUMNS],
             int numberOfRows)
{
    cout << "Sum of each row:" << endl;

    for (int row = 0; row < numberOfRows; row++)
    {
        int sum = 0;

        for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
            sum += matrix[row][col];

        cout << "Row " << row << " sum = " << sum << endl;
    }
}

void largestInRows(int matrix[][NUMBER_OF_COLUMNS],
                   int numberOfRows)
{
    cout << "Largest element in each row:" << endl;

    for (int row = 0; row < numberOfRows; row++)
    {
        int largest = matrix[row][0];

        for (int col = 1; col < NUMBER_OF_COLUMNS; col++)
            if (matrix[row][col] > largest)
                largest = matrix[row][col];

        cout << "Row " << row << " largest = " << largest << endl;
    }
}
