// Array-processing functions
#include <iostream>
using namespace std;

void initializeArray(int list[], int listSize)
{
    for (int index = 0; index < listSize; index++)
        list[index] = 0;
}

void fillArray(int list[], int listSize)
{
    for (int index = 0; index < listSize; index++)
        cin >> list[index];
}

void printArray(const int list[], int listSize)
{
    for (int index = 0; index < listSize; index++)
        cout << list[index] << " ";
}

int sumArray(const int list[], int listSize)
{
    int sum = 0;

    for (int index = 0; index < listSize; index++)
        sum = sum + list[index];

    return sum;
}

int indexLargestElement(const int list[], int listSize)
{
    int maxIndex = 0;

    for (int index = 1; index < listSize; index++)
        if (list[maxIndex] < list[index])
            maxIndex = index;

    return maxIndex;
}

void copyArray(int list1[], int src, int list2[],
               int tar, int numOfElements)
{
    for (int index = src; index < src + numOfElements; index++)
    {
        list2[tar] = list1[index];
        tar++;
    }
}

int main()
{
    const int SIZE = 10;
    int list[SIZE];
    int listCopy[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    fillArray(list, SIZE);

    cout << "You entered: ";
    printArray(list, SIZE);
    cout << endl;

    cout << "Sum of elements = " << sumArray(list, SIZE) << endl;

    int maxIndex = indexLargestElement(list, SIZE);
    cout << "Largest element = " << list[maxIndex]
         << " at index " << maxIndex << endl;

    copyArray(list, 0, listCopy, 0, SIZE);

    cout << "Copied array: ";
    printArray(listCopy, SIZE);
    cout << endl;

    return 0;
}
