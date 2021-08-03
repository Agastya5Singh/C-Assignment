#include<stdio.h>
int main()
{
int a[7]={2,9,6,4,8,7,2};
int i,sum=0;
for(i=0;i<7;i++)
{
if(a[i]%2!=0)
{
sum=sum+a[i];
}
}
printf("%d",sum);
}