#include<iostream>
using namespace std;
int main(){
int sum=0,i=1,d=2,n;
cout << "enter n" <<endl;
cin >> n;
while(i<=n){
if(i%d==0){
sum=sum+i;
}
i=i+1;
}
cout << sum <<endl;
}
