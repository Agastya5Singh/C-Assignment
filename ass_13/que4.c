#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
    int k = (n*(n+1))/2;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--,k--)
        {
            printf("%4d", k);
        }
 
        printf("\n");
    }
}