// 9. Floating Point Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1, num2;
    char operation;
    
    cout << "Enter two numbers and operation (+,-,*,/) separated by spaces: ";
    cin >> num1 >> num2 >> operation;
    
    cout << fixed << setprecision(2);
    cout << num1 << " " << operation << " " << num2 << " = ";
    
    switch (operation)
    {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Division by zero" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
    
    return 0;
}
