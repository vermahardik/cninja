#include<iostream>
using namespace std;


int main(){
int s,s2,w,e,f,c;
cin >> s >>e >>w;
if ( s>=0 && s<=80 && e>=s && e<=900 && w>=0 && w<=40 ){
    s2=s;}
while ( s2<=e){
c=(5.0/9)*(s2-32);
cout << s2 << "\t" << c <<endl;
s2=s2+w;}
}
