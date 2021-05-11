include <stdio.h>
int main()
{ 
    int n;
     scanf("%d",&n); 
     int evenSum = 0, oddSum = 0; 
     while(n > 0) { int last = n % 10; 
     if(last % 2 == 0) 
     { evenSum += last; } 
     else { oddSum += last; } 
     n = n / 10; 
     } 
     printf("%d %d",evenSum,oddSum);
    }