// PROGRAM 6: Letter Frequency Counter
// C++ Program to count letter frequencies from text file and calculate percentages

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct letterCountType {
    int upperCount;
    int lowerCount;
    double upperPercent;
    double lowerPercent;
};

void openFile(ifstream& inFile, ofstream& outFile);
void count(ifstream& inFile, letterCountType letterCounts[]);
void printResult(ofstream& outFile, letterCountType letterCounts[]);

int main() {
    ifstream inFile;
    ofstream outFile;
    letterCountType letterCounts[26];
    
    openFile(inFile, outFile);
    
    for (int i = 0; i < 26; i++) {
        letterCounts[i].upperCount = 0;
        letterCounts[i].lowerCount = 0;
        letterCounts[i].upperPercent = 0.0;
        letterCounts[i].lowerPercent = 0.0;
    }
    
    count(inFile, letterCounts);
    printResult(outFile, letterCounts);
    
    inFile.close();
    outFile.close();
    
    return 0;
}

void openFile(ifstream& inFile, ofstream& outFile) {
    string inFileName, outFileName;
    
    cout << "Enter input file name: ";
    cin >> inFileName;
    cout << "Enter output file name: ";
    cin >> outFileName;
    
    inFile.open(inFileName.c_str());
    if (!inFile) {
        cout << "Input file does not exist!" << endl;
        exit(1);
    }
    
    outFile.open(outFileName.c_str());
}

void count(ifstream& inFile, letterCountType letterCounts[]) {
    char ch;
    int totalUpper = 0, totalLower = 0;
    
    while (inFile.get(ch)) {
        if (isupper(ch)) {
            letterCounts[ch - 'A'].upperCount++;
            totalUpper++;
        }
        else if (islower(ch)) {
            letterCounts[ch - 'a'].lowerCount++;
            totalLower++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (totalUpper > 0)
            letterCounts[i].upperPercent = (letterCounts[i].upperCount * 100.0) / totalUpper;
        if (totalLower > 0)
            letterCounts[i].lowerPercent = (letterCounts[i].lowerCount * 100.0) / totalLower;
    }
}

void printResult(ofstream& outFile, letterCountType letterCounts[]) {
    outFile << "Letter Counts and Percentages:" << endl << endl;
    
    outFile << "Capital Letters:" << endl;
    for (int i = 0; i < 26; i++) {
        outFile << char('A' + i) << ": " << letterCounts[i].upperCount 
                << " (" << (int)letterCounts[i].upperPercent << "%)" << endl;
    }
    
    outFile << "\nSmall Letters:" << endl;
    for (int i = 0; i < 26; i++) {
        outFile << char('a' + i) << ": " << letterCounts[i].lowerCount 
                << " (" << (int)letterCounts[i].lowerPercent << "%)" << endl;
    }
}
