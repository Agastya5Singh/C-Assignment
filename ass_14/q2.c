#include <stdio.h>

int main()
{int i,n;
printf("enter the no. of digits wanted:");
scanf("%d",&n);
int a[n];

for (i=0;i<=(n-1);i++)
{a[i]=i+1;
printf("%d",a[i]);}
    return 0;
}