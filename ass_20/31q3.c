#include<stdio.h>
int main()
{
    int a[8]={5,2,7,8,3,4,6,2};
    int i;
    int *p = &a[0];
    printf("Array is :\n");
    for(i=0 ; i<8 ; i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\nReverse Array is : \n");
    for(i=7; i>=0 ; i--)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}