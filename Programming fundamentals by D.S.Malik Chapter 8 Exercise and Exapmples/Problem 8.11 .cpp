// 11. Add two large (up to 20-digit) integers using arrays
#include <iostream>
#include <string>
using namespace std;

const int MAX_DIGITS = 20;

void readNumber(int digits[], int& size)
{
    string s;
    cin >> s;

    size = static_cast<int>(s.length());
    for (int i = 0; i < size; i++)
        digits[i] = s[size - 1 - i] - '0';

    for (int i = size; i < MAX_DIGITS; i++)
        digits[i] = 0;
}

int add(const int a[], int sizeA, const int b[], int sizeB, int sum[])
{
    int carry = 0;
    int maxSize = (sizeA > sizeB ? sizeA : sizeB);

    for (int i = 0; i < maxSize; i++)
    {
        int s = a[i] + b[i] + carry;
        sum[i] = s % 10;
        carry = s / 10;
    }

    int sizeSum = maxSize;
    if (carry > 0)
    {
        sum[sizeSum] = carry;
        sizeSum++;
    }
    return sizeSum;
}

void printNumber(const int digits[], int size)
{
    for (int i = size - 1; i >= 0; i--)
        cout << digits[i];
}

int main()
{
    int a[MAX_DIGITS], b[MAX_DIGITS], sum[MAX_DIGITS + 1];
    int sizeA, sizeB, sizeSum;

    cout << "Enter first positive integer (<= 20 digits): ";
    readNumber(a, sizeA);

    cout << "Enter second positive integer (<= 20 digits): ";
    readNumber(b, sizeB);

    sizeSum = add(a, sizeA, b, sizeB, sum);

    if (sizeSum > MAX_DIGITS)
    {
        cout << "Sum = ";
        printNumber(sum, sizeSum);
        cout << " (more than 20 digits)" << endl;
    }
    else
    {
        cout << "Sum = ";
        printNumber(sum, sizeSum);
        cout << endl;
    }

    return 0;
}
