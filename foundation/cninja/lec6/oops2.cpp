#include <iostream>
using namespace std;
 
class complex
{
 
   public:
       int imag=0;
       int real=0;
       complex()
       {
       }
       complex(int r)
       {
           this->imag=r;
           this->real=r;
       }
       complex(int r, int i)
       {
           this->real=r;
           this->imag=i;
       }
};
 
complex sum(complex obj1,complex obj2){
   complex obj3;
   obj3.real=obj1.real+obj2.real;
   obj3.imag=obj1.imag+obj2.imag;
   return obj3;
};
 
 
int main() {
   int x1,x2,x3;
   cout<<"Enter the value of real and imaginary part of Complex No.1:"<<endl;
   cin>>x1;
   complex o1(x1);
   cout<<"Enter the value of real part of Complex No.2:"<<endl;
   cin>>x2;
   cout<<"Enter the value of imaginary part of Complex No.2:"<<endl;
   cin>>x3;
   complex o2(x2,x3);
   complex o3;
   o3=sum(o1,o2);
   cout<<"Sum of Complex No.1 and Complex No.2 is:- "<<o3.real<<"+"<<o3.imag<<"i"<<endl;
   return 0;
}