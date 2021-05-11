#include <iostream>
using namespace std;

int main(){

    int i,j,n;
    bool divided;
    cin >> n;
    if ( n>=1 && n<=100 ){
        cout << "2" << endl;
        i=3;
    	while (i<=n){
        divided=false;
        j=2;
        while (j<i){
            if (i%j==0){
                divided=true;
                break;
            }
            j++;
        	}
            if (divided){
            cout << "";
        	}
        	else {
            cout << i << endl;
        	}
            
        
        	i++;
    	}
    }
}




