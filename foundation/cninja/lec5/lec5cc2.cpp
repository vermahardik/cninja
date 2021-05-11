#include<iostream>
using namespace std;


int main(){

    int n,i,j;
    cin >> n;
    i=1;
    while ( i<=n ){
        
        j=1;
        
        while ( j <= n-i+1){
            cout << n-i+1;
            j++;
        }
        cout << endl;
        i++;
    }
  
}




