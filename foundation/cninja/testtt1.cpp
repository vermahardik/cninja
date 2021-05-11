#include<iostream>
using namespace std;
int main(){

    int fir,sec,thi,fou,fif,six,sev,eig,nin,n,evsum,odsum;
    cout << "Enter integer N" <<endl;
    cin >> n;
    if ( n>=0 && n<=100000000){
        fir=n%10;
        sec=(n%100-fir)/10;
        thi=(((n%1000)-sec)/100);
        fou=(((n%10000)-thi)/1000);
        fif=(((n%100000)-fou)/10000);
        six=(((n%1000000)-fif)/100000);
        sev=(((n%10000000)-six)/1000000);
        eig=(((n%100000000)-sev)/10000000);
        nin=(n/100000000);
    }
    cout << fir <<endl << sec <<endl << thi <<endl << fou <<endl << fif <<endl << six <<endl << sev <<endl << eig <<endl << nin <<endl;
}
