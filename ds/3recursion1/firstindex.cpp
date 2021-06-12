#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
	if (size==1){
        if (input[size-1]==x){
            return (size-1);
        }
        else {
            return -1;
        }
    }
    int output=firstIndex(input+1,size-1,x);
    return output;
}
int main(){
int x;
int n;
cin>>n;
int arr[50];
for (int i=0;i<n;i++){
cin >>arr[i];
}
cin >>x;
cout<<firstIndex(arr,n,x)<<endl;
}
