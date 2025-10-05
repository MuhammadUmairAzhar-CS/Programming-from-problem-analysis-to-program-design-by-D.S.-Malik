#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare named constant for PI
    const double PI = 3.141593;
    
    double radius;
    double area;
    double circumference;
    
    // Prompt user for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Display the results
    cout << fixed << setprecision(6);
    cout << "\n=== CIRCLE CALCULATIONS ===" << endl;
    cout << "Radius: " << radius << endl;
    cout << "PI: " << PI << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    
    // Test with multiple values
    cout << "\n=== TEST CASES ===" << endl;
    
    // Test case 1: radius = 1
    double testRadius1 = 1.0;
    double testArea1 = PI * testRadius1 * testRadius1;
    double testCirc1 = 2 * PI * testRadius1;
    cout << "Test 1 - Radius " << testRadius1 << ": Area = " << testArea1 
         << ", Circumference = " << testCirc1 << endl;
    
    // Test case 2: radius = 5
    double testRadius2 = 5.0;
    double testArea2 = PI * testRadius2 * testRadius2;
    double testCirc2 = 2 * PI * testRadius2;
    cout << "Test 2 - Radius " << testRadius2 << ": Area = " << testArea2 
         << ", Circumference = " << testCirc2 << endl;
    
    // Test case 3: radius = 10.5
    double testRadius3 = 10.5;
    double testArea3 = PI * testRadius3 * testRadius3;
    double testCirc3 = 2 * PI * testRadius3;
    cout << "Test 3 - Radius " << testRadius3 << ": Area = " << testArea3 
         << ", Circumference = " << testCirc3 << endl;
    
    return 0;
}