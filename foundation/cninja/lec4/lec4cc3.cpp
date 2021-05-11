#include<iostream>
using namespace std;


int main(){

    int n,i,j;
    cin >> n;
        i=1;
    	if ( n>=0 && n<=50 ){
            while ( i<=n ){
                j=1;
                while ( j<=i ){
                    cout << i;
                    j++;
                }
                cout << endl;
                i++;
            }
        }
  
}




