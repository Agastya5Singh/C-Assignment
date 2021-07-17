# include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the first no.:");
    scanf("%f",&a);
    printf("enter the second no.:");
    scanf("%f",&b);
     c = (a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
    printf("%f",c);
    return 0;
}