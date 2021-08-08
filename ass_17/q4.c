#include <stdio.h>

int main()
{
    int num,digit;
    printf("Enter the value of n: ");
    scanf("%d",&num);
    START:
    digit=num%10;
        num=num/10;
        printf("%d",digit);
        if(num>0)
        goto START;

    return 0;
}