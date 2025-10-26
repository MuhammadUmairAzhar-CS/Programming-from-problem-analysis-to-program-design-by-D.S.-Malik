#include <iostream>
using namespace std;

int main() {
    long long x;  
    int k = 0;    

    cout << "Enter the starting number (x): ";
    cin >> x;
    
    if (x <= 0) {
        cout << "Error: x must be a positive integer!" << endl;
        return 0;
    }

    cout << "\nSequence: " << x << " ";  
    while (x != 1) {
        if (x % 2 == 0)
            x = x / 2;      
        else
            x = 3 * x + 1;   

        cout << x << " ";    
        k++;
    }

    cout << endl;
    cout << "Total steps (k) = " << k << endl;

    return 0;
}
