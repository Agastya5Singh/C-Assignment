#include<stdio.h>
int main()
{
    int a,n=1,sum=1;
    printf("enter the no.:");
    scanf("%d",&a);
    while (n<=a)
    {
      printf("+%d",n);
      sum=sum+n;
      n=n+2;
          }
    printf("=%d",sum);
    return 0;
}