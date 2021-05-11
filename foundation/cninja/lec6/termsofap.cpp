#include<iostream>
using namespace std;

int main() {
    int i=1,x;   
    cin>>x;
    while(i<=x) 
    { 
        int temp=3*i+2;
        if(temp%4!=0)
        {
            cout<<temp<<" ";
        }
       else
        {
            x++;
        }
     
        i++;
    }
	
}
/*
a lil wrong
instead of increasing x I decreased count and that was giving problems
#include<iostream>
using namespace std;
smart thing did here was count<=x+x/4 since loop was running for 
x times including where multiple of 4 was obtained,differentiation of
3n+2 was n hence every 4 times there will be a multiple of 4 hence x+x/4
int main() {
    
    int n,x,ser,count;
	cout << "enter x";
    cin >> x;
    n=1;
    if ( x>=1 && x<=1000 ){
        
        for (count=1;count<=x+n/4;count++){
            ser=3*n+2;
            n++;
            if (ser%4==0){
                continue;
            }
            cout << ser << " ";
        }
        
    }
    
} */

/*
#include<iostream>
using namespace std;

int main() {
    
    int n,x,ser,count;
    cin >> x;
    n=1;
    if ( x>=1 && x<=1000 ){
        if ( x<4 ){
        for (count=1;count<=x+1;count++){
            ser=3*n+2;
            n++;
            if (ser%4==0){
                continue;
            }
            cout << ser << " ";
        }
        }
        if (x==6){
            for (count=1;count<=x+n/4+0.5;count++){
            ser=3*n+2;
            n++;
            if (ser%4==0){
                continue;
            }
            cout << ser << " ";
            }
        }
     	if ( x>=4 && x!=6){
            for (count=1;count<=x+n/4;count++){
            ser=3*n+2;
            n++;
            if (ser%4==0){
                continue;
            }
            cout << ser << " ";
        }
        }
        
    }
    	
}

*/


