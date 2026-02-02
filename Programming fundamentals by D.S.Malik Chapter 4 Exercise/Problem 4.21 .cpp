// 21. Line Equation
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x1, y1, x2, y2, m, b;
    bool vertical = false;
    
    cout << "Enter point 1 (x y): ";
    cin >> x1 >> y1;
    cout << "Enter point 2 (x y): ";
    cin >> x2 >> y2;
    
    if (x1 == x2)
    {
        cout << "Vertical line: x = " << x1 << endl;
        vertical = true;
    }
    else
    {
        m = (y2 - y1) / (x2 - x1);
        b = y1 - m * x1;
        
        cout << fixed << setprecision(2);
        cout << "Equation: y = " << m << "x + " << b << endl;
        
        if (m == 0)
            cout << "Horizontal line" << endl;
        else if (m > 0)
            cout << "Increasing line" << endl;
        else
            cout << "Decreasing line" << endl;
    }
    
    return 0;
}
