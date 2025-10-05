#include <iostream>

using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds;
    
    // Prompt user for elapsed time in seconds
    cout << "Enter the elapsed time in seconds: ";
    cin >> totalSeconds;
    
    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remainder after hours, then get minutes
    seconds = totalSeconds % 60;           // Remainder after minutes
    
    // Display the result in hh:mm:ss format
    cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}