// 23. TV Screen Calculator
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double diagonal;
    char tvType;
    
    cout << "Enter diagonal length (inches): ";
    cin >> diagonal;
    cout << "Enter TV type (t=traditional, l=lcd): ";
    cin >> tvType;
    
    double length, width, area;
    
    if (tvType == 't' || tvType == 'T')
    {
        length = diagonal * 4 / sqrt(25);
        width = diagonal * 3 / sqrt(25);
    }
    else
    {
        length = diagonal * 16 / sqrt(337);
        width = diagonal * 9 / sqrt(337);
    }
    
    area = length * width;
    
    cout << fixed << setprecision(2);
    cout << "Screen length: " << length << " inches" << endl;
    cout << "Screen width: " << width << " inches" << endl;
    cout << "Screen area: " << area << " sq inches" << endl;
    
    return 0;
}
