# include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&b);
    for(a=1;a<b;a++)
    {
        printf("%d\n",a);
    }
    for(b=1;b<=a;a--)
    {
        printf("%d\n",a);
    }    
    return 0;

}