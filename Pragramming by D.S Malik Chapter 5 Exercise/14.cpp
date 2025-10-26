#include <iostream>
using namespace std;

int main() {
    long long int x;          
    int k = 0;            
    long long int largest;    
    int position = 0;     

    cout << "Enter the starting number (x): ";
    cin >> x;

    if (x <= 0) {
        cout << "Error: x must be a positive integer!" << endl;
        return 0;
    }

    long long current = x;
    largest = x;   
    cout << "\nSequence: " << current << " ";

    while (current != 1) {
        k++; 

        if (current % 2 == 0)
            current = current / 2;
        else
            current = 3 * current + 1;

        cout << current << " ";

        if (current > largest) {
            largest = current;
            position = k;
        }
    }

    cout << endl;
    cout << "Total steps (k) = " << k << endl;
    cout << "Largest number in sequence = " << largest << endl;
    cout << "Position of largest number = " << position << endl;

    return 0;
}
