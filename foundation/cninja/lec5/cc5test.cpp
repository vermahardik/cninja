#include<iostream>
using namespace std;


int main(){

    int i,j,k,m,n,o;
    cout << "Enter n";
    cin >> n;
    if ( (n%2)!= 0 ){
        i=1;
        m=((n+1-(2*i))/2);
        o=((n+1)/2);
        while ( m>=0){
        while ( i<=n ){
        j=1;
        k=1;
            while (j<=m){
                cout << " ";
                j++;
            }
            while (k<=(o-m)){
                cout << "*";
                k++;
            }
            cout <<endl;
            i++;
        }
        }
    }
}
