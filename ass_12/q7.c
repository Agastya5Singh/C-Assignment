#include <stdio.h>
void main()
{
     int i,j,k;
   for(i=1;i<=3;i++)
   {
       for(k=3;k>=i;k--)
        printf(" ");
       for(j=1; j<=i;j++)
        printf("1 ");
     printf("\n");
   }
}