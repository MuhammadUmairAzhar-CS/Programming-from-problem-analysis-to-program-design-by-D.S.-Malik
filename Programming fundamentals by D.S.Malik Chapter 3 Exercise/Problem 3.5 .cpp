// 5. Employee Pay Increase
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    string lastName, firstName;
    double currentSalary, payIncrease;
    double updatedSalary;
    
    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");
    
    outFile << fixed << setprecision(2);
    
    while (inFile >> lastName >> firstName >> currentSalary >> payIncrease)
    {
        updatedSalary = currentSalary * (1 + payIncrease / 100.0);
        outFile << firstName << " " << lastName << " " << updatedSalary << endl;
    }
    
    inFile.close();
    outFile.close();
    
    return 0;
}
