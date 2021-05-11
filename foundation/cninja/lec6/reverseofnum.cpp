#include <iostream>
using namespace std;
int main()
{ 
    // A lil wrong since I ignored if 0 came but if in between not to be ignored
    // int n;
    //cin >> n;
    //if (n==0){
      //  cout << "0";
    //}
    //while (n > 0) { 
    //int last = n % 10; 
    //if (last==0){
    //}
    //else {
      //  cout << last;
    //}
    //n = n / 10; 
    //}
    int n;
    cin >> n;
    int ans = 0;
    
    while(n>0){
        int last = n%10;
        ans = (ans*10)+last;
        n/=10;
    }
    cout << ans;
    
} 
    