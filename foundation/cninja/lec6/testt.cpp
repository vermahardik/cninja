#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cin >> n;
    if (n>=0 && n<=100000000){
    if (n==0){
          cout << "0";
      }
      while (n > 0) { 
      int last = n % 10; 
      if (last==0){
      }
      else {
          cout << last;
      }
      n = n / 10; 
      }
      }
      else {
          cout << "0";
      }
}