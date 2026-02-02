// 18. 4x4 Memory game with 8 matching pairs (numbers 1–8)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

void initBoard(int board[ROWS][COLS])
{
    int values[ROWS * COLS];
    int k = 0;
    for (int v = 1; v <= 8; v++)
    {
        values[k++] = v;
        values[k++] = v;
    }

    for (int i = 0; i < ROWS * COLS; i++)
    {
        int j = rand() % (ROWS * COLS);
        int temp = values[i];
        values[i] = values[j];
        values[j] = temp;
    }

    k = 0;
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            board[r][c] = values[k++];
}

void initVisible(bool vis[ROWS][COLS])
{
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            vis[r][c] = false;
}

void displayBoard(const int board[ROWS][COLS],
                  const bool vis[ROWS][COLS])
{
    cout << "    ";
    for (int c = 0; c < COLS; c++)
        cout << setw(3) << c;
    cout << endl;

    for (int r = 0; r < ROWS; r++)
    {
        cout << setw(3) << r << " ";
        for (int c = 0; c < COLS; c++)
        {
            if (vis[r][c])
                cout << setw(3) << board[r][c];
            else
                cout << setw(3) << "*";
        }
        cout << endl;
    }
}

bool allRevealed(const bool vis[ROWS][COLS])
{
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            if (!vis[r][c]) return false;
    return true;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int board[ROWS][COLS];
    bool visible[ROWS][COLS];

    initBoard(board);
    initVisible(visible);

    while (!allRevealed(visible))
    {
        displayBoard(board, visible);

        int r1, c1, r2, c2;
        cout << "Enter coordinates of first card (row col): ";
        cin >> r1 >> c1;
        cout << "Enter coordinates of second card (row col): ";
        cin >> r2 >> c2;

        if (r1 < 0 || r1 >= ROWS || c1 < 0 || c1 >= COLS ||
            r2 < 0 || r2 >= ROWS || c2 < 0 || c2 >= COLS ||
            (r1 == r2 && c1 == c2) ||
            visible[r1][c1] || visible[r2][c2])
        {
            cout << "Invalid selection. Try again." << endl;
            continue;
        }

        visible[r1][c1] = true;
        visible[r2][c2] = true;

        displayBoard(board, visible);

        if (board[r1][c1] != board[r2][c2])
        {
            cout << "No match." << endl;
            visible[r1][c1] = false;
            visible[r2][c2] = false;
        }
        else
            cout << "Match!" << endl;
    }

    cout << "All cards matched. Game over." << endl;
    return 0;
}
