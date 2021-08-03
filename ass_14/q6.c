#include<stdio.h>
int main()
{
     int i , a[7] , sum=0;
     a[0]=2;
     a[1]=9;
     a[2]=6;
     a[3]=4;
     a[4]=8;
     a[5]=7;
     a[6]=2;
     printf("The no. in array are: ");
     for(i=0;i<7;i++)
     {
         printf("%d ",a[i]);
     }
     for(i=0;i<7;i++)
     {
         if(a[i]%a[6]==0)
         {
             sum=sum+a[i];
         }
     }

     printf("\nSum of all no. which are multiple of last no. i.e %d = %d",a[6],sum);

     return 0;


}