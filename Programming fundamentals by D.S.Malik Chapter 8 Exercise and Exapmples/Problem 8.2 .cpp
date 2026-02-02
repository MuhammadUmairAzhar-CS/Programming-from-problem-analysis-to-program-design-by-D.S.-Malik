// 2. smallestIndex: first occurrence of smallest element
#include <iostream>
using namespace std;

int smallestIndex(const int list[], int size)
{
    if (size <= 0)
        return -1;

    int minIndex = 0;

    for (int i = 1; i < size; i++)
        if (list[i] < list[minIndex])
            minIndex = i;

    return minIndex;
}

int main()
{
    const int SIZE = 15;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];

    int idx = smallestIndex(arr, SIZE);

    if (idx == -1)
        cout << "Array is empty." << endl;
    else
    {
        cout << "Index of first smallest element: " << idx << endl;
        cout << "Smallest element: " << arr[idx] << endl;
    }

    return 0;
}
