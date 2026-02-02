// Arrays as parameters – simple skeleton
#include <iostream>
using namespace std;

void funcArrayAsParam(int listOne[], double listTwo[])
{
    for (int i = 0; i < 5; i++)
        listOne[i] = i * 2;

    for (int i = 0; i < 5; i++)
        listTwo[i] = i * 1.5;
}

void initialize(int list[], int listSize)
{
    for (int count = 0; count < listSize; count++)
        list[count] = 0;
}

int main()
{
    int a[5];
    double b[5];

    initialize(a, 5);
    funcArrayAsParam(a, b);

    cout << "Array a: ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Array b: ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}
