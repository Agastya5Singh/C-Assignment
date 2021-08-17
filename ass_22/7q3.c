#include<stdio.h>
int fact(int x)
{
    int fact = 1;
    if (x==0||x==1)
    {
        return 1;
    }else
    {
        for ( ; x >= 2; x--)
        {
            fact = fact*x;
        }
        return fact;
    }
    
    
}
int main()
{
    float res;
    res = 1.0/fact(1) + 1.0/fact(3) + 1.0/fact(5) + 1.0/fact(7);
    printf("result=%f",res);
    return 0;
}