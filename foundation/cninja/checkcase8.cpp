#include<iostream>
using namespace std;

int main() 
{
	int x,n,pow,count;
    cin >> x >>n;
    count=1;
    if ( x==0 && n!=0){
        cout << "0";
    }
    else if (n==0 ){
            cout <<"1";
    }
   		else if ( x>0 && x<=8 && n>0 && n<=9 ){
            pow=1;
            while ( count <= n ){
                pow=pow*x;
                count=count+1;
            }
            cout << pow;
        }
}



/* a lil wrong
{
    int x,n,pow,count;
    cout <<"enter x and power n";
    cin >> x >>n;
    count=1;
    if ( x==0){
        cout << "0";
    }
    else if ( x>0 && x<=8 ){

        pow=1;

        if (n==0){
            cout << "1";
        }
        else if ( n>0 && n<=9 ){
            
            while ( count <=n ){
                pow=pow*x;
                count=count+1;

            }
        }

    cout << pow;

    }



}*/
