#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string names[100];
    double scores[100], total = 0, average, maxScore = -1;
    int numStudents, countBelowAvg = 0, maxCount = 0;
    string maxStudents[100];
    
    cout << "Enter number of students: ";
    cin >> numStudents;
    
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter test score: ";
        cin >> scores[i];
        total += scores[i];
        
        // Track maximum score
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxCount = 1;
            maxStudents[0] = names[i];
        } else if (scores[i] == maxScore) {
            maxStudents[maxCount++] = names[i];
        }
    }
    
    average = total / numStudents;
    
    cout << "\nAverage test score: " << fixed << setprecision(2) << average << endl;
    
    cout << "\nStudents below average:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (scores[i] < average) {
            cout << names[i] << " (" << scores[i] << ")" << endl;
            countBelowAvg++;
        }
    }
    
    cout << "\nHighest test score: " << maxScore << endl;
    cout << "Students with highest score:" << endl;
    for (int i = 0; i < maxCount; i++) {
        cout << maxStudents[i] << endl;
    }
    
    return 0;
}
