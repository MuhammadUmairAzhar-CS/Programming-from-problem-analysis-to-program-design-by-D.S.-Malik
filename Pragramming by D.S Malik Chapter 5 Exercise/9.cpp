#include <iostream>
using namespace std;

int main() {
    int n, m;
    int oddSum = 0, evenSum = 0, oddSq = 0;

    cout << "Enter first number: ";
    cin >> n;

    cout << "Enter last number: ";
    cin >> m;

    
    for(int i = n; i<=m ; i++) {
        if (i % 2 != 0) {
            oddSum = oddSum + i;     
            oddSq = oddSq + (i * i); 
        } else {
            evenSum = evenSum + i;   
        }
    }
     
        cout<<endl;
    cout << "Sum of odd numbers = " << oddSum << endl;
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of squares of odd numbers = " << oddSq << endl;
            
            cout<<endl;

    cout << "\nNumbers and their squares between 1 and 10:" << endl;
    
    for (int j = 1;j<= 10;j++) {
        cout << "The square of " << j << " is = " << (j * j) << endl;
    }
                cout<<endl;
    cout << "All uppercase letters:" << endl;
    char letter = 'A';
    for (letter = 'A';letter <= 'Z';letter++) {
        cout << letter << " ";
        
    }
    cout << endl;

    return 0;
}
