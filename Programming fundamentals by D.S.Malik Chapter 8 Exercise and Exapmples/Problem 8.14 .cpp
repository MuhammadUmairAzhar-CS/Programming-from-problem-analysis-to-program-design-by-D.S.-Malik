// 14. 50 integers – find elements that are sum of two others
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 50;
    int a[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++)
        cin >> a[i];

    cout << endl;

    for (int k = 0; k < SIZE; k++)
    {
        bool found = false;

        for (int i = 0; i < SIZE; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                if (a[i] + a[j] == a[k])
                {
                    if (!found)
                    {
                        cout << a[k] << " can be written as sum of: ";
                        found = true;
                    }
                    cout << "(" << a[i] << ", " << a[j] << ") ";
                }
            }
        }

        if (found)
            cout << endl;
    }

    return 0;
}
