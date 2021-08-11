#include <stdio.h>
int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
 }
 int main()
 {
     int num;
     printf("Enter Integer :: ");
     scanf("%d",&num);
     int diff1=0, diff2=0;
     int i,j;
     int num1=0, num2=0;
     for(i=num;;i++)
     {
        if(isPrime(i)==1)
        {
            diff1=i-num;
            num1=i;
            break;
        }
     }
    for(i=num;;i--)
    {
        if(isPrime(i)==1)
        {
            diff2=num-i;
            num2=i;
            break;
        }
    }
        printf("The Nearest Prime Number :: ");
        if(diff1<=diff2)
        printf("%d",num1);
        else if(diff2<=diff1)
        printf("%d",num2);
        return 0;
 }