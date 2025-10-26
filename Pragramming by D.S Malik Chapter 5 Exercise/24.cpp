#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile("Exp_5_23.txt");
    if (!infile) {
        cerr << "Error: Cannot open file Exp_5_23.txt" << endl;
        return 1;
    }

    int counter = 0;
    int num, sum;

    while (counter < 5) {
        sum = 0;
        infile >> num;

        while (num != -999) {
            sum += num;
            infile >> num;
        }

        cout << "Line " << counter + 1 << ": Sum = " << sum << endl;
        counter++;
    }

    infile.close();
    return 0;
}
