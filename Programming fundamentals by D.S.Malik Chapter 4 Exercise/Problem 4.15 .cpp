// 15. Account Balance (File-based)
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    double balance, withdrawal;
    
    inFile.open("Ch4_Ex15_Data.txt");
    inFile >> balance;
    inFile.close();
    
    cout << "Account balance: $" << fixed << setprecision(2) << balance << endl;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;
    
    double serviceCharge = 2.0;
    balance -= (withdrawal + serviceCharge);
    
    cout << "Balance after withdrawal: $" << balance << endl;
    
    outFile.open("Ch4_Ex15_Output.txt");
    outFile << fixed << setprecision(2) << balance << endl;
    outFile.close();
    
    return 0;
}
