// 17. House Models Price per SqFt
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double colonialPrice, colonialArea;
    double splitPrice, splitArea;
    double singlePrice, singleArea;
    
    cout << "Enter colonial base price and area: ";
    cin >> colonialPrice >> colonialArea;
    cout << "Enter split-entry base price and area: ";
    cin >> splitPrice >> splitArea;
    cout << "Enter single-story base price and area: ";
    cin >> singlePrice >> singleArea;
    
    double colonialPPSF = colonialPrice / colonialArea;
    double splitPPSF = splitPrice / splitArea;
    double singlePPSF = singlePrice / singleArea;
    
    cout << fixed << setprecision(2);
    cout << "Colonial: $" << colonialPPSF << "/sqft" << endl;
    cout << "Split-entry: $" << splitPPSF << "/sqft" << endl;
    cout << "Single-story: $" << singlePPSF << "/sqft" << endl;
    
    double minPPSF = colonialPPSF;
    string bestModel = "Colonial";
    
    if (splitPPSF < minPPSF)
    {
        minPPSF = splitPPSF;
        bestModel = "Split-entry";
    }
    if (singlePPSF < minPPSF)
    {
        minPPSF = singlePPSF;
        bestModel = "Single-story";
    }
    
    cout << "Best value: " << bestModel << endl;
    
    return 0;
}
