#include<iostream>
using namespace std;


int main(){

    int i,j,k,m,o,n;
    cout << "Enter n";
    cin >> n;
    i=1;
    if ( (n%2)!=0 ){
        o=(n+1)/2;
            while ( i<=o ){
            m=((n+1)-2*i)/2;
        	j=1;
        	k=1;
            while (j<=m){
                cout << " ";
                j=j+1;
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
            cout << endl;
            i++;
        }
            while ( i>o && i<=n ){
            m=(((n+1)-2*i)/(-2));
                j=1;
                k=i;
                while ( j<=m){
                    cout << " ";
                    j++;
                }
                while ( k<=n ){
                    cout << "*";
                    k++;
                }
                j=1;
                while ( j< o-m ){
                    cout << "*";
                    j++;
                }
                
            cout <<endl;
            i++;

        }
    
        }
    }
  
