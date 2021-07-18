# include<stdio.h>
int main ()
{
    int num,a,b,c,d,e,f,g;
    printf("enter the 4 digit no.:",num);
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    (a<5)?(a=0):(a=0,b=b+1);
    printf("%d%d%d%d",d,c,b,a);
    return 0;

}