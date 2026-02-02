#include <iostream>
#include <cmath>
using namespace std;

void factorization(int b, int c, int& u1, int& v1, bool& isFactorable);

int main()
{
    int coeffOfX;
    int constantTerm;
    int u;
    int v;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;

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
            cout << " - " << u << ")(x";
        else if (u < 0)
            cout << " + " << abs(u) << ")(x";

        if (v > 0)
            cout << " - " << v << ")" << endl;
        else if (v < 0)
            cout << " + " << abs(v) << ")" << endl;
    }
    else
        cout << "The polynomial is not factorable." << endl;

    return 0;
}

// Factor x^2 + b x + c into (x - u1)(x - v1) if possible over the integers.
void factorization(int b, int c, int& u1, int& v1, bool& isFactorable)
{
    int discriminant = b * b - 4 * c;

    if (discriminant < 0)
    {
        isFactorable = false;
        return;
    }

    int d = static_cast<int>(sqrt(static_cast<double>(discriminant)));

    if (d * d != discriminant)
    {
        isFactorable = false;
        return;
    }

    int n1 = -b + d;
    int n2 = -b - d;

    if (n1 % 2 != 0 || n2 % 2 != 0)
    {
        isFactorable = false;
        return;
    }

    int r1 = n1 / 2;
    int r2 = n2 / 2;

    u1 = r1;
    v1 = r2;
    isFactorable = true;
}
