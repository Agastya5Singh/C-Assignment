#include<stdio.h>
int main()
{
    int input , a , m , b , d;
    printf("Enter Number: ");
    scanf("%d",&input);
    a=input;
    b=input;
    int n=0;
    for(n=0;a>0;n++)
    {
        a=a/10;
    }
    if(n%2==0)
    {
        m=(n/2)-1;
        for(int i=0;i<m;i++)
        {
            b=b/10;
        }
        d=b%100;
        printf("%d",d);
    }
    else
        {
        m=(n/2);
        for(int i=0;i<m;i++)
        {
            b=b/10;
        }
        d=b%10;
        printf("%d",d);
    }
    return 0;
}