// 24. 20x20 board – find peaks
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int R = 20;
const int C = 20;

bool isPeak(const int board[R][C], int i, int j, bool& isMaxPeak)
{
    int val = board[i][j];
    bool greater = true;
    bool less = true;

    for (int r = i - 1; r <= i + 1; r++)
        for (int c = j - 1; c <= j + 1; c++)
        {
            if (r < 0 || r >= R || c < 0 || c >= C)
                continue;
            if (r == i && c == j) continue;

            if (board[r][c] >= val)
                greater = false;
            if (board[r][c] <= val)
                less = false;
        }

    if (greater)
    {
        isMaxPeak = true;
        return true;
    }
    if (less)
    {
        isMaxPeak = false;
        return true;
    }
    return false;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int board[R][C];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            board[i][j] = rand() % 100;

    cout << "Board:" << endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }

    cout << "\nPeaks:" << endl;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            bool isMax;
            if (isPeak(board, i, j, isMax))
            {
                cout << "board[" << i << "][" << j << "] = "
                     << board[i][j]
                     << " is a " << (isMax ? "maximum" : "minimum")
                     << " peak." << endl;
            }
        }

    return 0;
}
