#include<stdio.h>
int main()
{
     float i=1 , n ;
     float sum=0;
     printf("Sum 0f 0/1 + 1/2 + 2/3 +........+(n-1)/n\n");
     printf("Enter the value of n:");
     scanf("%f",&n);
     while(i<n)
     {
         sum=sum+(i/(i+2.0));            
         i=i+4;
     }
     printf("1/3 + 5/7 + 9/11 +........+(n-2)/n\n");
     printf("Sum = %f",sum);
     return 0;
}