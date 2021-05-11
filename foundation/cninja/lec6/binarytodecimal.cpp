#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,dec,i,last;
    dec=0;
    cin >> n;
    i=0;
    while (n>0){
        last=n%10;
        dec=dec+last*pow(2,i);
        i++;
        n/=10;
        if (n==0){
            break;
        }
    }
    cout << dec <<endl;
}
