// 5. Convert a string to uppercase using a char array
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    const int SIZE = 1000;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    for (int i = 0; str[i] != '\0'; i++)
        str[i] = static_cast<char>(toupper(str[i]));

    cout << "Uppercase: " << str << endl;

    return 0;
}
