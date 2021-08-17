#include <stdio.h>

int counter(int a)
{
    int count=0;
    while(a>0)
    {
        count++;
        a=a/10;
    }
    printf("%d",count);
}



int main()
{ 
    int a;
    scanf("%d",&a);
    counter(a);
    return 0;
}