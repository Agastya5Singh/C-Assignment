#include<stdio.h>
int main ()
{
    int a=19327,b,c,d,e,f;
    b=a%10;
    c=(a/1000)%10;
    d=(a/100)%100;
    e=(a/10)%100;
    f=(a/10000)%10;
    printf("\nthe first pattern is:%d%d%d%d",e,f,d,b,c);
     printf("\nthe first pattern is:%d%d%d%d",f,b,d,f,e);
      printf("\nthe first pattern is:%d%d%d%d",b,c,d,e,f);
      return 0;

}