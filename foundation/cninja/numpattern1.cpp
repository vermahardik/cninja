#include<iostream>
using namespace std;
int main(){

int i=1,j=1,count,n;
cout << "Enter Value of n" <<endl;
cin >> n;
while (i<=n){
j=i;
count=1;
while (count<=i){
cout << j;
j=j+1;
count=count+1;
}
cout <<endl;
i=i+1;
}

}
