#include<iostream>
using namespace std;


int main(){
int s,w,e,f,c;
cout << "Enter start,end and step size" <<endl;
cin >> s >>e >>w;
while ( s>=0 && s<=80 && e>=s && e<=900 && w>=0 && w<=40 ){
if ( s<=e){
c=(5.0/9)*(s-32);
cout << s << "\t" << c <<endl;
s=s+w;}
}
}
