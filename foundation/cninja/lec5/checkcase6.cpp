#include<iostream>
using namespace std;
int main(){

int basic,hra,da,allow,pf,total;
char grade;
cout << "Enter Basic salary & Grade(separated by space)" <<endl;
cin >> basic >> grade;
while ( basic>=0 && basic<=7500000 ){
hra=((2*basic)/10);
da=((5*basic)/10);
pf=((11*basic)/10);
if ( grade == 65 ){
allow=1700;}
else if ( grade == 66 ){
allow=1500;
}
else {
allow=1300;
}
total=(basic+hra+da+allow+pf);
cout << total <<endl;
}
}
