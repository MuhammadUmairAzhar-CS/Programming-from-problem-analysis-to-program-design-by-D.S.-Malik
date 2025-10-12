#include <iostream>
#include <string>
using namespace std;
int main() {
   string myString = "It is a beautiful day.";
    char firstChar = myString[0]; 
    cout << "First character: " << firstChar <<endl;
    int lem;
    lem=myString.length();
    cout <<  lem <<endl;
    return 0;
}