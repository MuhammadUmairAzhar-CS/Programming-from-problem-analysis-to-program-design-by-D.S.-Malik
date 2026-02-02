// 7. Local election – 5 candidates
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int NUM = 5;
    string names[NUM];
    int votes[NUM];
    int totalVotes = 0;

    cout << "Enter last name and votes for "
         << NUM << " candidates:" << endl;

    for (int i = 0; i < NUM; i++)
    {
        cin >> names[i] >> votes[i];
        totalVotes += votes[i];
    }

    cout << fixed << showpoint << setprecision(2);

    cout << left << setw(12) << "Candidate"
         << right << setw(15) << "Votes Received"
         << setw(18) << "% of Total Votes" << endl;

    int winnerIndex = 0;

    for (int i = 0; i < NUM; i++)
    {
        double percent = (static_cast<double>(votes[i]) /
                          totalVotes) * 100.0;

        cout << left << setw(12) << names[i]
             << right << setw(15) << votes[i]
             << setw(18) << percent << endl;

        if (votes[i] > votes[winnerIndex])
            winnerIndex = i;
    }

    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is "
         << names[winnerIndex] << "." << endl;

    return 0;
}
