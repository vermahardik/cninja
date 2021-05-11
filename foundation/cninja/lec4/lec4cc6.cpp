#include<iostream>
using namespace std;
int main(){

    int n,k,i,j;
    cin >> n;
    char ch;
        i=1;
        if ( n>=0 && n<=26 ){
            while ( i<=n ){
                j=1;
                k=0;
                while ( j<=i ){
                    ch='A'+n-i+k;
                    cout << ch;
                    j++; 
                    k++; 
                }   
                cout << endl;
                i++; 
            }   
        }   
        
}
