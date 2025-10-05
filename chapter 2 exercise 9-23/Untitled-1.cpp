#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    double score1, score2, score3, score4, score5;
    double average;
    
    // Prompt user for five test scores
    cout << "Enter five test scores:" << endl;
    cout << "Score 1: ";
    cin >> score1;
    
    cout << "Score 2: ";
    cin >> score2;
    
    cout << "Score 3: ";
    cin >> score3;
    
    cout << "Score 4: ";
    cin >> score4;
    
    cout << "Score 5: ";
    cin >> score5;
    
    // Calculate the average
    average = (score1 + score2 + score3 + score4 + score5) / 5.0;
    
    // Display the result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nThe average test score is: " << average << endl;
    
    return 0;
}