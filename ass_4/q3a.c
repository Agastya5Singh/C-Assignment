# include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no.:");
    scanf("%d",&a);
    printf("enter the second no.:");
    scanf("%d",&b);
     c = (a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
    printf("%d",c);
    return 0;
}