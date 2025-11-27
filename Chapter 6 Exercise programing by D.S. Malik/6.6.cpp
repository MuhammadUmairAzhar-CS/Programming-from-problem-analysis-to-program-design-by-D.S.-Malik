#include <iostream>
using namespace std;

bool isPalindrome(string str);

int main()
{
    string str;
    bool result;

    cout << "Enter your number, word or phrase: ";
    cin >> str; 

    result = isPalindrome(str);

    if (result)
        cout << "This is a palindrome.\n";
    else
        cout << "This is NOT a palindrome.\n";

    return 0;
}

bool isPalindrome(string str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - 1 - i])
            return false;
    return true;
}
