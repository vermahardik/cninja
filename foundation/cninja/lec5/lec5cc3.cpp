#include<iostream>
using namespace std;


int main(){

    int i,j,k,n;
    cin >> n;
    i=1;
    if ( n>=0 && n<=50 ){
        while ( i<=n ){
        j=1;
        k=1;
            while (j<=n-i){
                cout << " ";
                j++;
            }
            while (k<=i){
                cout << "*";
                k++;
            }
            j=i-1;
            while (j>=1){
                cout << "*";
                j--;
            }
          cout <<endl;
        i++;
      
        }
        }
  
}




