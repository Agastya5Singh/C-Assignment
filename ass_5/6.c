#include<stdio.h>
int main()
{
  int num,a,b,c,d,e,f,g;
    printf("enter the 4 digit no.:",num);
    scanf("%d",&num);
    a=num%10;
    b=(num%100)/10;
    c=(num%1000)/100;
    d=(num/1000);
    e=(c*10+b);
    f=(d*10+a);
    g=(c+b*10);
    (f==e||f==g)?printf("y"):printf("n");
    return 0;
}  