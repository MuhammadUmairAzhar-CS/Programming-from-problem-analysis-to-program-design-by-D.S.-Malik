#include<iostream>
 using namespace std;
 int main(){ 
    int i;
    for (i = 0; i < 5; i++);  /* due to semi colan at the end, the loop will terminate after 
                                running once. */
    {
      cout << "*" << endl;
   }
 return 0 ;
}