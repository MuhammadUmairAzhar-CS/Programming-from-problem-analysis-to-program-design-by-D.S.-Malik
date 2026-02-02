// 13. Paper Lines Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double paperLength, paperWidth;
    double topMargin, bottomMargin, leftMargin, rightMargin;
    double pointSize;
    char spacing;
    
    cout << "Enter paper length (inches): ";
    cin >> paperLength;
    cout << "Enter paper width (inches): ";
    cin >> paperWidth;
    cout << "Enter top margin (inches): ";
    cin >> topMargin;
    cout << "Enter bottom margin (inches): ";
    cin >> bottomMargin;
    cout << "Enter left margin (inches): ";
    cin >> leftMargin;
    cout << "Enter right margin (inches): ";
    cin >> rightMargin;
    cout << "Enter point size: ";
    cin >> pointSize;
    cout << "Enter spacing (s/d): ";
    cin >> spacing;
    
    if (spacing == 'd' || spacing == 'D')
        pointSize *= 2;
    
    double printableHeight = paperLength - topMargin - bottomMargin;
    double printableWidth = paperWidth - leftMargin - rightMargin;
    
    double charsPerLine = printableWidth * 72 / pointSize;
    double linesPerPage = printableHeight * 72 / pointSize;
    
    cout << fixed << setprecision(0);
    cout << "Characters per line: " << charsPerLine << endl;
    cout << "Lines per page: " << linesPerPage << endl;
    
    return 0;
}
