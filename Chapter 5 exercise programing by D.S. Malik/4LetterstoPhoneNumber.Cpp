#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string input;
    int digitCount;
    char response;
    do{
        cout << "Enter a telephone number (only alphabets): ";
        getline(cin, input);
        cout << "\nThe corresponding number is: ";
        digitCount = 0;
        for (int i = 0; i < input.length(); ++i)
        {
            if (digitCount == 7)
                break;            
            char c = toupper(input[i]);
            if (isspace(c))
                continue;            
            if (isalpha(c))
            {
                switch (c)
                {
                    case 'A': case 'B': case 'C':
                        cout << 2;
                        break;
                    case 'D': case 'E': case 'F':
                        cout << 3;
                        break;
                    case 'G': case 'H': case 'I':
                        cout << 4;
                        break;
                    case 'J': case 'K': case 'L':
                        cout << 5;
                        break;
                    case 'M': case 'N': case 'O':
                        cout << 6;
                        break;
                    case 'P': case 'Q': case 'R': case 'S':
                        cout << 7;
                        break;
                    case 'T': case 'U': case 'V':
                        cout << 8;
                        break;
                    case 'W': case 'X': case 'Y': case 'Z':
                        cout << 9;
                        break;
                }
                digitCount++;
                if (digitCount == 3)
                    cout << "-";                
            }
        }
        cout <<"\nDo you want to process another number? (y/n): ";
        cin >> response;
        cin.ignore();     
    }
    while(response == 'y' || response == 'Y');
    return 0;
}