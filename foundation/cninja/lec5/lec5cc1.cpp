#include<iostream>
using namespace std;


int main(){

    int n,i,j,k;
    cin >> n;
    if ( n>=0 && n<=50 ){
        i=1;
        while ( i<=n){
            j=1;
            k=1;
            while ( j<=n-i){
                cout << " ";
                j++;
            } 
            while ( k<=i ){
                cout << k;
                k++;
            }
            cout << endl;
            i++;
        }
        
        
    }
  
}




