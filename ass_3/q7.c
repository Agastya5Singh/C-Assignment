#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter the date at which you were born:");
    scanf("%f", &a);
    printf("\n enter the month you were born:");
    scanf("%f", &b);
    printf("\n enter the year you were born:");
    scanf("%f", &c);
    printf("\n enter the current year:");
    scanf("%f",&d);
    printf("\n no. of years: %f",(d-c)+(b/12)+(a/365));
    printf("\n no. of months:%f",b+(d-c)*12+(a/31));
    printf("\n no. of days:%f",a+(b*12)+(d-c)*365);
    return 0;
}