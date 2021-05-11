#include<iostream>
using namespace std;

int main() {
	int n,c,prod,sum;
    prod=1;
    cout << "Enter n and c" << endl;
    cin >> n >>c;
    if ( c==1 ){
        if ( n>=1 && n<=12 ){
        sum=n*(n+1)/2;
        cout << sum;
    }
    }
    else if ( c==2 ){
        if ( n>=1 && n<=12 ){
            for (;n>0;n--){
                prod=prod*n;
            }
        cout << prod;
        }
    }
    else {
        cout << "-1";
    }
    
    
}


