// 3. lastLargestIndex: last occurrence of largest element
#include <iostream>
using namespace std;

int lastLargestIndex(const int list[], int size)
{
    if (size <= 0)
        return -1;

    int maxIndex = 0;

    for (int i = 1; i < size; i++)
        if (list[i] >= list[maxIndex])
            maxIndex = i;

    return maxIndex;
}

int main()
{
    const int SIZE = 15;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];

    int idx = lastLargestIndex(arr, SIZE);

    if (idx == -1)
        cout << "Array is empty." << endl;
    else
    {
        cout << "Index of last largest element: " << idx << endl;
        cout << "Largest element: " << arr[idx] << endl;
    }

    return 0;
}
