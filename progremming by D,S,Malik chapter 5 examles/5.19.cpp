#include <iostream>
using namespace std;
int main()
{
int i;
 i = 11;                                        //A 
 while (i <= 10)
 {
 cout << i << " ";
 i = i + 5;
 }
 cout << endl;

 i = 11;                                        //B
 do
 {
 cout << i << " ";
 i = i + 5;
 }
 while (i <= 10);
 cout << endl;

  int score;                                    //C
 do 
{
    cout << "Enter a score between 0 and 50: ";
    cin >> score;
    cout << endl;
 }
 while (score < 0 || score > 50);
    return 0;
}