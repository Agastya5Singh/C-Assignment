#include<stdio.h>
int main()
{
    int a,n=1,sum=0;
    printf("enter the no.:");
    scanf("%d",&a);
    while (n<=a)
    {
      printf("+%d",n);
      sum=sum+n;
      n=n+1;
    }
    printf("=%d",sum);
    return 0;
}