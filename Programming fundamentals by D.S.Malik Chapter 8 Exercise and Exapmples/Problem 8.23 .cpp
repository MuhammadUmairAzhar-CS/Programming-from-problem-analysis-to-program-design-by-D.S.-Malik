// 23. 3x3 magic square tester, random fills
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 3;

void fillRandom(int a[N][N])
{
    int vals[9];
    for (int i = 0; i < 9; i++)
        vals[i] = i + 1;

    for (int i = 0; i < 9; i++)
    {
        int j = rand() % 9;
        int temp = vals[i];
        vals[i] = vals[j];
        vals[j] = temp;
    }

    int k = 0;
    for (int r = 0; r < N; r++)
        for (int c = 0; c < N; c++)
            a[r][c] = vals[k++];
}

bool isMagic(const int a[N][N])
{
    int sum = 0;
    for (int c = 0; c < N; c++)
        sum += a[0][c];

    for (int r = 1; r < N; r++)
    {
        int rowSum = 0;
        for (int c = 0; c < N; c++)
            rowSum += a[r][c];
        if (rowSum != sum) return false;
    }

    for (int c = 0; c < N; c++)
    {
        int colSum = 0;
        for (int r = 0; r < N; r++)
            colSum += a[r][c];
        if (colSum != sum) return false;
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < N; i++)
    {
        diag1 += a[i][i];
        diag2 += a[i][N - 1 - i];
    }
    if (diag1 != sum || diag2 != sum) return false;

    return true;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int trials = 1000;
    int magicCount = 0;
    int a[N][N];

    for (int t = 0; t < trials; t++)
    {
        fillRandom(a);
        if (isMagic(a))
            magicCount++;
    }

    cout << "Out of " << trials
         << " random 3x3 boards, "
         << magicCount << " were magic squares." << endl;

    return 0;
}
