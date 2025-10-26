#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile("Exp_5_23.txt");
    if (!infile) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    int counter = 0;
    int num, sum;

    infile >> num;
    while (infile) {
        sum = 0;
        while (num != -999) {
            sum += num;
            infile >> num;
        }
        counter++;
        cout << "Line " << counter << ": Sum = " << sum << endl;
        infile >> num;
    }

    infile.close();
    return 0;
}
