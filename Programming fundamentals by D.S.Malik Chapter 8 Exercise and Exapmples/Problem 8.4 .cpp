// 4. Count scores in fixed ranges from a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("scores.txt");
    if (!inFile)
    {
        cout << "Cannot open scores.txt" << endl;
        return 0;
    }

    int ranges[8] = {0};
    int score;

    while (inFile >> score)
    {
        if (score < 0 || score > 200)
            continue;

        if (score <= 24) ranges[0]++;
        else if (score <= 49) ranges[1]++;
        else if (score <= 74) ranges[2]++;
        else if (score <= 99) ranges[3]++;
        else if (score <= 124) ranges[4]++;
        else if (score <= 149) ranges[5]++;
        else if (score <= 174) ranges[6]++;
        else ranges[7]++;
    }

    inFile.close();

    cout << "0  - 24 : " << ranges[0] << endl;
    cout << "25 - 49 : " << ranges[1] << endl;
    cout << "50 - 74 : " << ranges[2] << endl;
    cout << "75 - 99 : " << ranges[3] << endl;
    cout << "100-124: " << ranges[4] << endl;
    cout << "125-149: " << ranges[5] << endl;
    cout << "150-174: " << ranges[6] << endl;
    cout << "175-200: " << ranges[7] << endl;

    return 0;
}
