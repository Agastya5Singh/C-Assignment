#include <stdio.h>
void main()
{
     int i,j,k,x;
     printf("enter the no. of lines wanted:");
     scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
       for(k=(x-1);k>=i;k--)
       { printf(" ");}
       for(j=1; j<=i;j++)
        {printf("* ");}
     printf("\n");
   }
    for(i=(x-1);i>=1;i--)
   {
        for(k=(x-1);k>=i;k--)
       { printf(" ");}
       for(j=1; j<=i;j++)
        {printf("* ");}
     printf("\n");
   }
}