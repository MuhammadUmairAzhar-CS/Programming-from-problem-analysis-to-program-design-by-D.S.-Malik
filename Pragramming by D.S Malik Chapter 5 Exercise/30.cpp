#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double e = 2.718281827;
    
    cout << fixed << setprecision(9);
    cout << "e = " << e << endl << endl;
    
    cout << "n\t\t(1+1/n)^n" << endl;
    
    for (int n = 100; n <= 10000; n += 100) {
        double result = pow(1 + 1.0/n, n);
        cout << n << "\t\t" << result << endl;
    }
    
    return 0;
}