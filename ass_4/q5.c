# include<stdio.h>
int main()
{
    int a=9467,b,c,d,e;
     b=a%10;
    c=(a/1000)%10;
    d=(a/100)%10;
    e=(a/10)%10;
    printf("the revers no. is: %d%d%d%d",b,e,d,c);
    return 0;
    
}