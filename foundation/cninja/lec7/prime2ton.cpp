#include<iostream>
using namespace std;
bool isprime (int n){
int d=2;
while (d<n){
if (n%d==0){
return false;
}
d++;
}
return true;
}
int main(){
int n;
cin>>n;
int i=1;
for(i=1;i<=n;i++){
if(isprime(i)){
cout<<i<<endl;
}
i++;
}

}

                                                                             
                                                                               
