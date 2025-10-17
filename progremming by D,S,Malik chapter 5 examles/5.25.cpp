#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("input.txt");
    int ID;
    string name;
    char ch;
    int num, sum;

    infile >> ID;
    while (infile) {
        infile.get(ch);
        getline(infile, name);
        sum = 0;
        infile >> num;
        while (num != -999) {
            sum = sum + num;
            infile >> num;
        }
        cout << "Name: " << name << ", Votes: " << sum << endl;
        infile >> ID;
    }

    infile.close();
    return 0;
}
