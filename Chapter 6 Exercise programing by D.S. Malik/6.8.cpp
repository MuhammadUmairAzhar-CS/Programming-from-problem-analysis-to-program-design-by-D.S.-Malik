#include <iostream>
using namespace std;

void funExp(int a, double b, char c, int x)
{
    cout << "Integer: " << a << ", Double: " << b 
         << ", Char: " << c << ", Another int: " << x << endl;
}

int main()
{
    funExp(5, 3.14, 'A', 10);
    return 0;
}
//Note that this code is self written as the book has only given us the perimeteres.