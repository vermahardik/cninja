#include<iostream>
using namespace std;


int main(){
int i,j,n,k;
char c=42;
cout << "Enter Value of n" <<endl;
cin >> n;
i=1;
while (i<=n){
j=1;
k=i;
while (k<n){
cout << " ";
k=k+1;}
while (2*i>j){
cout << c;
j=j+1;
}
cout <<endl;
i=i+1;
}
}



