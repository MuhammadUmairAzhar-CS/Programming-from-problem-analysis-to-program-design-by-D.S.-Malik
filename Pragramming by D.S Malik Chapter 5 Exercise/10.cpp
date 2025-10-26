#include <iostream>
using namespace std;

int main() {
    int n, m;
    int oddSum = 0, evenSum = 0, oddSq = 0;

    cout << "Enter first number: ";
    cin >> n;

    cout << "Enter last number: ";
    cin >> m;

    int i = n;
    do {
        if (i % 2 != 0) {
            oddSum = oddSum + i;     
            oddSq = oddSq + (i * i); 
        } else {
            evenSum = evenSum + i;   
        }
        i++;
    }while (i <= m);
     
        cout<<endl;
    cout << "Sum of odd numbers = " << oddSum << endl;
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of squares of odd numbers = " << oddSq << endl;
            
            cout<<endl;

    cout << "\nNumbers and their squares between 1 and 10:" << endl;
    int j = 1;
    do {
        cout << "The square of " << j << " is = " << (j * j) << endl;
        j++;
    }while (j <= 10);
                cout<<endl;
    cout << "All uppercase letters:" << endl;
    char letter = 'A';
    do{
        cout << letter << " ";
        letter++;
    }while (letter <= 'Z') ;
    cout << endl;

    return 0;
}
