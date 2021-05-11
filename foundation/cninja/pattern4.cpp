#include <iostream>
using namespace std;
int main(){
int n,i=1,j=1,count;
cout <<"Enter n" <<endl;
cin >> n;
while (i<=n){
count=1;
int k=1;
while (k<=n-1){
    cout << " ";
    k=k+1;
}
while (count<=i){   
cout << j ;
j=j+1;
count=count+1;
}
cout <<endl;
i=i+1;
}
}
