#include<iostream>
using namespace std;
int main(){
int i;
i=15;
cout<<&i<<endl;
int* p=&i;
cout<<&*p<<endl;
cout<<p<<endl;
cout<<sizeof(p)<<endl;
float f=9.1;
cout<<&f<<endl;
float *pf=&f;
cout<<&*pf<<endl;
double d=1222.342;
cout<<&d<<endl;
double* pd=&d;
cout<<&*pd<<endl;

}
