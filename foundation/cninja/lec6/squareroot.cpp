#include<iostream>
#include<cmath>
using namespace std;

/* int main() {
	int n,sqrt;
    cin >> n;
    sqrt=pow(n,0.5);
    cout << sqrt;
} */
int main(){
    int n,output;
    cin >> n;
    output=0;
        while (n>=output*output){
            output++;        
    }
    output--;
    cout << output <<endl;

}
