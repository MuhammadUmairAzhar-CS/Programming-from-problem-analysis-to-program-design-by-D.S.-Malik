// 8. alpha, beta, matrix with helper functions
#include <iostream>
using namespace std;

const int SIZE_1D = 20;
const int ROWS = 10;
const int COLS = 4;

void inputArray(int alpha[], int size);
void doubleArray(const int alpha[], int beta[], int size);
void copyAlphaBeta(const int alpha[], const int beta[],
                   int matrix[][COLS]);
void printArray(const int list[], int size);
void printMatrix(const int matrix[][COLS], int rows);

int main()
{
    int alpha[SIZE_1D];
    int beta[SIZE_1D];
    int matrix[ROWS][COLS];

    inputArray(alpha, SIZE_1D);
    doubleArray(alpha, beta, SIZE_1D);
    copyAlphaBeta(alpha, beta, matrix);

    cout << "alpha:" << endl;
    printArray(alpha, SIZE_1D);
    cout << endl << "beta:" << endl;
    printArray(beta, SIZE_1D);
    cout << endl << "matrix:" << endl;
    printMatrix(matrix, ROWS);

    return 0;
}

void inputArray(int alpha[], int size)
{
    cout << "Enter " << size << " integers for alpha: ";
    for (int i = 0; i < size; i++)
        cin >> alpha[i];
}

void doubleArray(const int alpha[], int beta[], int size)
{
    for (int i = 0; i < size; i++)
        beta[i] = 2 * alpha[i];
}

void copyAlphaBeta(const int alpha[], const int beta[],
                   int matrix[][COLS])
{
    int index = 0;
    for (int row = 0; row < 5; row++)
        for (int col = 0; col < COLS; col++)
            matrix[row][col] = alpha[index++];

    index = 0;
    for (int row = 5; row < 10; row++)
        for (int col = 0; col < COLS; col++)
            matrix[row][col] = beta[index++];
}

void printArray(const int list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
        if ((i + 1) % 15 == 0)
            cout << endl;
    }
    if (size % 15 != 0)
        cout << endl;
}

void printMatrix(const int matrix[][COLS], int rows)
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < COLS; c++)
            cout << matrix[r][c] << " ";
        cout << endl;
    }
}
