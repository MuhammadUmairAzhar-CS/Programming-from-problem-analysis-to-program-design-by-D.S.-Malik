#include <iostream>
using namespace std;
int main(){
int i,j,n,m,a = 0,b = 0 ;

cout<<"Enter first number:";
cin>>n;
cout<<"Enter second number:";
cin>>m;

if(n<m){
    cout<<"The first number is less than the second .";
}else if(n<m){
    cout<<"The first number is equal to the second .";
}

if(n<0){
    cout<<"The first number is negative.";
}
if(n<0){
    cout<<"The second number is negative.";
}

 cout << "Enter the position of the desired Fibonacci number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Position must be greater than 0!" << endl;
        return 0;
    }


}