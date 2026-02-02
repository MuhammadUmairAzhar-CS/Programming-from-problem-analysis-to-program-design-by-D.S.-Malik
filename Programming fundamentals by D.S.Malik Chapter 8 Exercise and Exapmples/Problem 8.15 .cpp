// 15. Same as 14, but sort array first (selection sort)
#include <iostream>
using namespace std;

void selectionSort(int list[], int n)
{
    for (int last = n - 1; last > 0; last--)
    {
        int maxIndex = 0;
        for (int i = 1; i <= last; i++)
            if (list[i] > list[maxIndex])
                maxIndex = i;

        int temp = list[last];
        list[last] = list[maxIndex];
        list[maxIndex] = temp;
    }
}

int main()
{
    const int SIZE = 50;
    int a[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++)
        cin >> a[i];

    selectionSort(a, SIZE);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << a[i] << " ";
    cout << endl << endl;

    for (int k = 0; k < SIZE; k++)
    {
        bool found = false;

        for (int i = 0; i < SIZE; i++)
        {
            int left = i + 1;
            int right = SIZE - 1;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                int sum = a[i] + a[mid];

                if (sum == a[k])
                {
                    if (!found)
                    {
                        cout << a[k]
                             << " can be written as sum of: ";
                        found = true;
                    }
                    cout << "(" << a[i] << ", " << a[mid] << ") ";
                    int t = mid + 1;
                    while (t < SIZE && a[i] + a[t] == a[k])
                    {
                        cout << "(" << a[i] << ", " << a[t] << ") ";
                        t++;
                    }
                    break;
                }
                else if (sum < a[k])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }

        if (found)
            cout << endl;
    }

    return 0;
}
