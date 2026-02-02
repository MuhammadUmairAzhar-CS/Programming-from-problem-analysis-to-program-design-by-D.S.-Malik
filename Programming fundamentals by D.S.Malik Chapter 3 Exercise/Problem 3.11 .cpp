// 11. Candy Bar Reduction
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double length, width, height, percentReduction;
    double originalVolume, newVolume;
    double reductionAmount, newLength, newWidth;
    
    cout << "Enter original length: ";
    cin >> length;
    cout << "Enter original width: ";
    cin >> width;
    cout << "Enter height (unchanged): ";
    cin >> height;
    cout << "Enter percent volume reduction: ";
    cin >> percentReduction;
    
    originalVolume = length * width * height;
    newVolume = originalVolume * (1 - percentReduction / 100.0);
    
    reductionAmount = (length * width - newVolume / height) / 2.0;
    newLength = length - reductionAmount;
    newWidth = width - reductionAmount;
    
    cout << fixed << setprecision(2);
    cout << "New dimensions: " << newLength << " x " 
         << newWidth << " x " << height << endl;
    
    return 0;
}
