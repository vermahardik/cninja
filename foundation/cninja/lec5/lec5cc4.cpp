#include<iostream>
using namespace std;


int main(){

    int i,j,k,count,n;
    cin >> n;
    if ( n>=0 && n<=50 ){
        i=1;
        while ( i<=n ){
        j=1;
        k=1;
        count=i;
            while (j<=n-i){
                cout << " ";
                j++;
            }
            while (k<=i){
                cout << count;
                k++;
                count++;
            }
            j=i-1;
            count=count-2;
            while (j>=1){
                cout <<count;
                j--;
                count--;
            }
          cout <<endl;
        i++;
      
        }
        }
  
}





