#include<stdio.h>
int main()
{
     int i=1 , n , mul=1;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     while(i<=n)
     { 
        mul=mul*i;
        i++;
     }

     printf("%d ",mul);

     return 0;
}