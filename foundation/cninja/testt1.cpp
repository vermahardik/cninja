#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    char ch;
    cin >> n;
    
    	i=1;
        if ( n>=0 && n<=26 ){
            while ( i<=n ){
                j=1;
                while ( j<=i ){
                    ch='A'+n-1;
                    cout << ch;
                    j++; 
                }   
                cout << endl;
                i++; 
            }   
        }   
        
}