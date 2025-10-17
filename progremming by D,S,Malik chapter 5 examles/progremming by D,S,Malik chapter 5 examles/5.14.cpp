#include<iostream>
 using namespace std;
 int main(){ 
    int i;
    for (i = 10; i <= 9; i++)      //False condition.
    cout << i << " ";
 cout << endl;
  for (i = 9; i >= 10; i--)         //False condition.
    cout << i << " ";
 cout << endl;
  for (i = 10; i <= 10; i++)        //False condition.
    cout << i << " ";   
cout << endl;  
 for (i = 1; i <= 10; i++);         //symmetic error (semiclon at the end of for-loop)
    cout << i << " ";   
cout << endl;  
 for (i = 1; ; i++)                 //(condition is not defined)
    cout << i << " ";
 cout << endl;
  for (i = 2; i < 100; i = 2 * i)
    cout << i << " "; 
    cout << endl;               //output power of 2
 return 0 ;
}