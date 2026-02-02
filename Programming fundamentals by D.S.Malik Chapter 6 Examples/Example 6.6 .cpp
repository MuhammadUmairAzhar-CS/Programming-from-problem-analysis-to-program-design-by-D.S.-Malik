// isPalindrome function with a small driver.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int length = static_cast<int>(str.length());

    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - 1 - i])
            return false;

    return true;
}

int main()
{
    string s;

    cout << "Enter a string (no spaces) to test for palindrome: ";
    cin >> s;

    if (isPalindrome(s))
        cout << s << " is a palindrome." << endl;
    else
        cout << s << " is not a palindrome." << endl;

    return 0;
}
