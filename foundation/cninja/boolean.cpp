#include<iostream>
using namespace std;
int main()
{
int a,b;
cout << "Enter two numbers For comparison" <<endl;
cin >> a >> b;

bool isequal = (a==b);
bool isless = (a<b);
bool isgreater = (a>b);

cout << "are both equal?" << isequal << endl;
cout << " is a less than b?" << isless << endl;
cout << "is a greater than b?" << isgreater << endl;

cout << "is not equal?" << !isequal << endl;
bool third = isequal && isgreater;
bool fourth = isequal || isgreater;
cout << "equal n greater?" << third << endl;
cout<< "equal or greater?" << fourth << endl;
bool fifth = isless || isequal;
cout << "less or equal?" << fifth <<endl;
}
