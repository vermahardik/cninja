#include<iostream>
using namespace std;

int main() {
    int n,prev,current;
    bool isdec=true;
    cin >>n;
    cin >>prev;
	while (n>1){
        cin >> current;
        if (prev==current){
            cout << "false";
            break;
        }
        if (current>prev){
            isdec=false;
        }
        if (current<prev){
            if (isdec==false){
                cout << "false";
                break;
            }
            else if (isdec==true){
            }
        }
        prev=current;
        n--;
    }
    if (n==1){ //if we reach last hence n==1
    if (isdec==false){
        cout <<"true";
    }
    
    else if (isdec==true){
        cout <<"true";
    }
    }
}
