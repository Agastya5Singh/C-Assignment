#include <stdio.h>

int main()
{
   int n; 
   float sum=0.0, a, i=1.0; 
  
   printf("Enter the value of 'n': "); 
   scanf ("%d", &n); 
   while(i<=n) 
   { 
      a=1/(i*i); 
      sum = sum +a;
      i=i+1;
    } 
    printf("\nThe sum of series 1/(1*1) + 1/(2*2) +... + l/(%d*%d) = %f",n,n,sum); 
    return 0;
}