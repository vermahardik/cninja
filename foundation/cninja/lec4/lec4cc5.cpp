#include<iostream>
using namespace std;


#include<iostream>
using namespace std;
int main(){

    int n,k,i,j;
    cin >> n;
    char ch;
        i=1;
    	k=1;
    	if ( n>=0 && n<=13 ){
            while ( i<=n ){
                j=1;
                k=i;
                while ( j<=i ){
                    ch='A'+k-1;
                    cout << ch;
                    j++;
                    k++;
                }
                cout << endl;
                i++;
            }
        }
  
}
