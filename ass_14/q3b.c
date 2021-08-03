#include<stdio.h>
int main()
{
int n,i,c=25;
printf("Enter array size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
a[i]=c;
c=c-2;
printf("%d ",a[i]);
}
return 0;
}