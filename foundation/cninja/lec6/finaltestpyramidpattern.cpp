#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >>n;
    i=1;
    while (i<=n){
        j=n-i;
        while (j>0){
            cout <<" ";
            j--;
        }
        j=i;
        while(j>1){
            cout<<j;
            j--;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
        
    }


}