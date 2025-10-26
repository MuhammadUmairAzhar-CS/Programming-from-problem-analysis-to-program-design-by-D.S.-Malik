#include <iostream>
using namespace std;

int main() {
    int m, n;
    int k = 0, l = 0;
    cout << "Enter the first integer: ";
    cin >> m;

    cout << "Enter the last integer: ";
    cin >> n;

    for (int i = m; i <= n; i++) {
        if (i % 3 == 0)
            k++;
        if (i % 5 == 0)
            l++;
    }

    cout << "Multiples of 3 are: " << k << endl;
    cout << "Multiples of 5 are: " << l << endl;

    return 0;
}
