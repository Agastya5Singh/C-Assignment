#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
        for(j=i*2; j<n*2; j++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k=k-1)
        {
          printf("%d",  i);
        }
        printf("\n");
    }
    return 0;
}