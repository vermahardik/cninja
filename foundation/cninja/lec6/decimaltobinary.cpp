#include<cmath>
#include<iostream>
using namespace std;

int main() {
	int n,i,pow;
    cin >> n;
    pow=1;
    while (n>=pow){
    		pow=pow*2;
        }
        pow/=2;
    while (pow>1){
        if (n==pow){
            cout << "1";
            n-=pow;
        }
        else {
        	n-=pow;
            if (n>0){
            cout << "1";
        }
        else {
            cout << "0";
            n+=pow;
        }
        }
            pow=pow/2;
    }
    if (pow<=1){ /*since we are doing pow/2 above so if pow=1, it will become 1/2*/
         if (n==1){
            cout << "1";
        }
        else if (n==0){
            cout << "0";
        }
    }

}
