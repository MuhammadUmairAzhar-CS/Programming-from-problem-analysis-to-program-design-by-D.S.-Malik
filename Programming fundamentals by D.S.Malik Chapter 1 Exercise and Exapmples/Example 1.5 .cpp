#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string names[10];
    double testScores[10][5], sum, average, classTotal = 0;
    char grade;
    
    cout << "Enter data for 10 students:\n";
    
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        cout << "Name: ";
        cin >> names[i];
        
        sum = 0;
        for (int j = 0; j < 5; j++) {
            cout << "Test " << (j + 1) << " score: ";
            cin >> testScores[i][j];
            sum += testScores[i][j];
        }
        
        average = sum / 5;
        classTotal += average;
        
        // Determine grade
        if (average >= 90) grade = 'A';
        else if (average >= 80) grade = 'B';
        else if (average >= 70) grade = 'C';
        else if (average >= 60) grade = 'D';
        else grade = 'F';
        
        cout << fixed << setprecision(2);
        cout << "Average: " << average << ", Grade: " << grade << endl;
    }
    
    cout << "\nClass average: " << (classTotal / 10) << endl;
    
    return 0;
}
