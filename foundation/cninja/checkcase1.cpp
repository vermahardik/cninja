#include<iostream>
using namespace std;
int main()
{
char a;
cout << "Enter character a" <<endl;
cin >> a;
if ( a >= 65 && a <= 90){
cout << "1" <<endl;}
else if ( a >=97 && a <=122 ){
cout << "0" <<endl;}
else
cout << "-1" <<endl;
}
