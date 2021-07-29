#include<stdio.h>
void main()
{
int j,i=1;
printf("enter number: ");
scanf("%d",&j);
for(i=1;i<=j;i++,j--)
{
printf(" %d %d",i,j);
}
}