#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int temp, count;
    double length, width, area;
    char ch;
    string name;

    count = 1;
    cout << "count = " << count << endl;

    count = count + 1;
    cout << "count = count + 1: " << count << endl;

    cout << "Enter your length: ";
    cin >> length;

    cout << "Enter your width: ";
    cin >> width;

    area = length * width;

    cout << "Enter your name: ";
    cin >> name; 

    length = length + 2;
    width = 2 * length - width * 5;

    cout << "Enter your character: ";
    cin >> ch;

    temp = count + (int)ch;

    return 0;
}
