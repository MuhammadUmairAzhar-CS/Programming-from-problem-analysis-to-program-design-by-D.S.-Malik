#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double advertisedGB;
    double advertisedBytes;
    double actualGB;
    
    // Constants for conversion
    const long long MANUFACTURER_GB = 1000000000;  // 1 GB = 1,000,000,000 bytes (manufacturer)
    const long long COMPUTER_GB = 1073741824;      // 1 GB = 1,073,741,824 bytes (computer)
    
    // Prompt user for advertised hard drive size
    cout << "Enter the advertised hard drive size (in GB): ";
    cin >> advertisedGB;
    
    // Calculate total bytes (manufacturer's definition)
    advertisedBytes = advertisedGB * MANUFACTURER_GB;
    
    // Calculate actual GB (computer's definition)
    actualGB = advertisedBytes / COMPUTER_GB;
    
    // Display the results
    cout << fixed << setprecision(2);
    cout << "\n=== HARD DRIVE STORAGE ANALYSIS ===" << endl;
    cout << "Advertised capacity: " << advertisedGB << " GB" << endl;
    cout << "Actual storage capacity: " << actualGB << " GB" << endl;
    cout << "Difference: " << (advertisedGB - actualGB) << " GB" << endl;
    cout << "Percentage of advertised: " << (actualGB / advertisedGB * 100) << "%" << endl;
    
    return 0;
}