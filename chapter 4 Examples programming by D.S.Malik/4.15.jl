#include <iostream>
#include <string>
using namespace std;
int main(){
string str1 = "Hello";
string str2 = "Hi";
string str3 = "Air";
string str4 = "Bill";
string str5 = "Big";

if(str3 < "An")
cout<<"true";
else
cout<<"false";

if(str1 == "hello")
cout<<"true";
else
cout<<"false";

if(str3 <= str4)
cout<<"true";
else
cout<<"false";

if(str2 > str4)
cout<<"true";
else
cout<<"false";

if(str4 >= "Billy")
cout<<"true";
else
cout<<"false";

if(str5 <= "Bigger")
cout<<"true";
else
cout<<"false";
return 0;
}