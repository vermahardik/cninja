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

complex sum(complex obj1,complex obj2)
    {
    complex obj3; 
    obj3.real=obj1.real+obj2.real; 
    obj3.imag=obj1.imag+obj2.imag; 
    return obj3; 
    };
    

int main() {
complex o1(7);
complex o2(21,32);
complex o3;
o3=sum(o1,o2);
cout<<o3.real<<"+"<<o3.imag<<"i"<<endl;
return 0;
}
