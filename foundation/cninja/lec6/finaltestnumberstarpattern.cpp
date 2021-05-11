#include<iostream>
using namespace std;


int main(){
    int i,j,k,n;
    cin >>n;
    i=1;
    while(i<=n){
        j=n+1-i;
        k=1;
        while (k<=j){
            cout <<k;
            k++;
        }
        j=i-1;
        while(j>0){
            cout<<"*";
            j--;
        }
        j=i-1;
        while(j>0){
            cout<<"*";
            j--;
        }
        j=n+1-i;
        while(j>0){
            cout<<j;
            j--;
        }
        i++;
        cout<<endl;
    }
    
}


