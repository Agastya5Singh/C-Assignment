#include<stdio.h>
int main()
{
    float a,i=1,sum=0;
    printf("enter the no.:");
    scanf("%f",&a);
    while(i<=a)
    {
        printf("+%f",i);
        sum=sum+(1.0/i);
        i=i+1;
    }
    printf("=%f",sum);
    return 0;
}