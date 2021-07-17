#include<stdio.h>
int main()
{
    long int n=12964573,a,b,c,d;
    a=n%100;
    b=(n/100)%100;
    c=(n/10000)%100;
    d=(n/1000000)%100;
    printf("\n the first two no are: %ld",a);
    printf("\nthe second two no are:%ld",b+9);
    printf("\nthe third two no are:%ld",c);
    printf("\nthe fourth two no are :%ld",d+9);
    printf("\nthe sum of the no is :%ld",a+b+c+d);
    return 0;

}