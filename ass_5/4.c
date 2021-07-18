#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the 4 digit no.:",a);
    scanf("%d",&a);
    b=a%10;
    c=(a%100)/10;
    d=(a%1000)/100;
    e=(a/1000);
    f=b*1000+c*100+d*10+e;
    
    (a==f)?printf("its a palindrome no."):printf("its not a palindrome no.");


    return 0;


}