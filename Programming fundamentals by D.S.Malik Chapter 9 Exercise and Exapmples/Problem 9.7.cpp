// PROGRAM 7: Football Players Database
// Menu-driven C++ Program for managing football player data

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct footballPlayerType {
    string name;
    string position;
    int touchdowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

void inputData(footballPlayerType players[]);
void outputData(const footballPlayerType players[]);
int searchPlayer(const footballPlayerType players[], string playerName);
void updatePlayer(footballPlayerType players[], int index);
void saveData(const footballPlayerType players[]);

int main() {
    footballPlayerType players[10];
    int choice, index;
    string playerName;
    
    inputData(players);
    
    do {
        cout << "\n=== Football Players Database ===" << endl;
        cout << "1. Display all players" << endl;
        cout << "2. Search player" << endl;
        cout << "3. Update player data" << endl;
        cout << "4. Save data to file" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                outputData(players);
                break;
            case 2:
                cout << "Enter player name: ";
                cin.ignore();
                getline(cin, playerName);
                index = searchPlayer(players, playerName);
                if (index != -1)
                    cout << "Player found at index " << index << endl;
                else
                    cout << "Player not found!" << endl;
                break;
            case 3:
                cout << "Enter player name to update: ";
                cin.ignore();
                getline(cin, playerName);
                index = searchPlayer(players, playerName);
                if (index != -1) {
                    updatePlayer(players, index);
                } else {
                    cout << "Player not found!" << endl;
                }
                break;
            case 4:
                saveData(players);
                cout << "Data saved to file!" << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    
    return 0;
}

void inputData(footballPlayerType players[]) {
    ifstream inFile("players.txt");
    if (inFile) {
        for (int i = 0; i < 10; i++) {
            getline(inFile, players[i].name);
            getline(inFile, players[i].position);
            inFile >> players[i].touchdowns >> players[i].catches 
                   >> players[i].passingYards >> players[i].receivingYards 
                   >> players[i].rushingYards;
            inFile.ignore();
        }
        inFile.close();
    } else {
        cout << "No input file found. Using default data." << endl;
        for (int i = 0; i < 10; i++) {
            players[i].name = "Player " + to_string(i + 1);
            players[i].position = "Unknown";
            players[i].touchdowns = 0;
            players[i].catches = 0;
            players[i].passingYards = 0;
            players[i].receivingYards = 0;
            players[i].rushingYards = 0;
        }
    }
}

void outputData(const footballPlayerType players[]) {
    cout << "\nFootball Players Data:" << endl;
    cout << left << setw(15) << "Name" << setw(12) << "Position" 
         << setw(8) << "TD" << setw(8) << "Catches" 
         << setw(10) << "Pass Yds" << setw(10) << "Rec Yds" << "Rush Yds" << endl;
    cout << string(70, '-') << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << left << setw(15) << players[i].name 
             << setw(12) << players[i].position 
             << setw(8) << players[i].touchdowns 
             << setw(8) << players[i].catches 
             << setw(10) << players[i].passingYards 
             << setw(10) << players[i].receivingYards 
             << players[i].rushingYards << endl;
    }
}

int searchPlayer(const footballPlayerType players[], string playerName) {
    for (int i = 0; i < 10; i++) {
        if (players[i].name == playerName) {
            return i;
        }
    }
    return -1;
}

void updatePlayer(footballPlayerType players[], int index) {
    cout << "\nUpdating " << players[index].name << endl;
    cout << "Enter new data:" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, players[index].name);
    cout << "Position: ";
    getline(cin, players[index].position);
    cout << "Touchdowns: ";
    cin >> players[index].touchdowns;
    cout << "Catches: ";
    cin >> players[index].catches;
    cout << "Passing Yards: ";
    cin >> players[index].passingYards;
    cout << "Receiving Yards: ";
    cin >> players[index].receivingYards;
    cout << "Rushing Yards: ";
    cin >> players[index].rushingYards;
    cout << "Player updated!" << endl;
}

void saveData(const footballPlayerType players[]) {
    ofstream outFile("players.txt");
    for (int i = 0; i < 10; i++) {
        outFile << players[i].name << endl;
        outFile << players[i].position << endl;
        outFile << players[i].touchdowns << " " << players[i].catches << " "
                << players[i].passingYards << " " << players[i].receivingYards << " "
                << players[i].rushingYards << endl;
    }
    outFile.close();
}
