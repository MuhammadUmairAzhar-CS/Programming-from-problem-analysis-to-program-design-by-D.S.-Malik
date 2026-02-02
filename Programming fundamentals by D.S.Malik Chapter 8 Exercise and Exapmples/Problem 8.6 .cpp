// 6. Grade True/False test from file
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

char letterGrade(double percent)
{
    if (percent >= 90.0) return 'A';
    else if (percent >= 80.0) return 'B';
    else if (percent >= 70.0) return 'C';
    else if (percent >= 60.0) return 'D';
    else return 'F';
}

int main()
{
    ifstream inFile("tf_input.txt");
    if (!inFile)
    {
        cout << "Cannot open tf_input.txt" << endl;
        return 0;
    }

    const int NUM_QUESTIONS = 20;
    string key;
    getline(inFile, key);

    cout << fixed << showpoint << setprecision(2);

    string id, answers;
    while (inFile >> id)
    {
        inFile >> answers;

        int scoreRaw = 0;

        for (int i = 0; i < NUM_QUESTIONS; i++)
        {
            char correct = key[i];
            char ans = (i < static_cast<int>(answers.length()))
                           ? answers[i]
                           : ' ';

            if (ans == 'T' || ans == 'F')
            {
                if (ans == correct)
                    scoreRaw += 2;
                else
                    scoreRaw -= 1;
            }
        }

        double maxScore = 2.0 * NUM_QUESTIONS;
        double percent = (scoreRaw / maxScore) * 100.0;
        if (percent < 0.0) percent = 0.0;

        char grade = letterGrade(percent);

        cout << "ID: " << id
             << "  Answers: " << answers
             << "  Score: " << percent << "%  Grade: "
             << grade << endl;
    }

    inFile.close();
    return 0;
}
