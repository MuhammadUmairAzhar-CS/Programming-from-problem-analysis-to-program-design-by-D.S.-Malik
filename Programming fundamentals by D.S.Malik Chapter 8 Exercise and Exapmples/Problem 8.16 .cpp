// 16. Pick-5 Lotto game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 5;

int seqSearch(const int list[], int size, int item)
{
    for (int i = 0; i < size; i++)
        if (list[i] == item)
            return i;
    return -1;
}

void generateLotto(int lotto[])
{
    int count = 0;
    while (count < SIZE)
    {
        int num = rand() % 9 + 1;

        if (seqSearch(lotto, count, num) == -1)
        {
            lotto[count] = num;
            count++;
        }
    }
}

void readUserNumbers(int user[])
{
    cout << "Enter 5 distinct numbers (1-9): ";
    for (int i = 0; i < SIZE; i++)
        cin >> user[i];
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int lotto[SIZE];
    int user[SIZE];

    generateLotto(lotto);
    readUserNumbers(user);

    bool identical = true;
    int matchCount = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (user[i] != lotto[i])
            identical = false;
        if (user[i] == lotto[i])
            matchCount++;
    }

    cout << "Lotto numbers: ";
    for (int i = 0; i < SIZE; i++)
        cout << lotto[i] << " ";
    cout << endl;

    cout << "Your numbers:  ";
    for (int i = 0; i < SIZE; i++)
        cout << user[i] << " ";
    cout << endl;

    if (identical)
        cout << "You win! Arrays are identical." << endl;
    else
    {
        cout << "No exact match. Matching digits in same position: "
             << matchCount << endl;
        cout << "Matching positions: ";
        for (int i = 0; i < SIZE; i++)
            if (user[i] == lotto[i])
                cout << i << " ";
        cout << endl;
    }

    return 0;
}
