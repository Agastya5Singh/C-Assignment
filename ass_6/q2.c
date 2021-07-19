# include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter any no.:");
    scanf("%d",&a);
    b=a & 0X000000FF;
    printf("\n %d",b);
    c=a & 0X0000FF00;
    c=c>>8;
    printf("\n %d",c);
    d=a & 0X00FF0000;
    b=b>>16;
    printf("\n %d",d);
    e=a & 0XFF000000;
    e=e>>24;
    printf("\n %d",e);
    return 0;
    
    }