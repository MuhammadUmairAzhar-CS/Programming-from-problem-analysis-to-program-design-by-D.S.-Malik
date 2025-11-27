#include <iostream>
#include <cmath>
using namespace std;

void factorization(int b, int c, int& u1, int& v1, bool& isFactorable);

int main()
{
    int coeffOfX, constantTerm;
    int u, v;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << "Enter the constant term: ";
    cin >> constantTerm;

    factorization(coeffOfX, constantTerm, u, v, isPolynomialFactorable);

    if (isPolynomialFactorable)
    {
        cout << "x^2";

        if (coeffOfX > 0)
            cout << " + " << coeffOfX << "x";
        else if (coeffOfX < 0)
            cout << " - " << abs(coeffOfX) << "x";

        if (constantTerm > 0)
            cout << " + " << constantTerm;
        else if (constantTerm < 0)
            cout << " - " << abs(constantTerm);

        cout << " = (x";
        if (u > 0)
            cout << " - " << u << ")";
        else if (u < 0)
            cout << " + " << abs(u) << ")";

        cout << "(x";
        if (v > 0)
            cout << " - " << v << ")" << endl;
        else if (v < 0)
            cout << " + " << abs(v) << ")" << endl;
    }
    else
    {
        cout << "The polynomial is not factorable." << endl;
    }

    return 0;
}

void factorization(int b, int c, int& u1, int& v1, bool& isFactorable)
{
    isFactorable = false;

    for (int i = -abs(c); i <= abs(c); i++)
    {
        if (i == 0) continue;
        if (c % i != 0) continue;

        int j = c / i;

        if (i + j == b)
        {
            u1 = i;
            v1 = j;
            isFactorable = true;
            return;
        }
    }
}
