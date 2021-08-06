#include<stdio.h>
int main()
{
    int i,j,n,m,sum;
    printf("Enter the rows:");
    scanf("%d",&n);
    printf("Enter the column:");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<m;j=j+1)
        {
            printf("Enter the values:");
            scanf("%d",&a[i][j]);
        }

    }
    printf("Displaying the output\n");
    for(i=0;i<n;i=i+1)
    {
        sum=0;
        for(j=0;j<m;j=j+1)
        {
            sum=sum+a[i][j];
        }
            printf("sum of Rows is %d\n",sum);
    }
    for(i=0;i<n;i=i+1)
    {
        sum=0;
        for(j=0;j<m;j=j+1)
        {
            sum=sum+a[j][i];
        }
        printf("sum of column is %d\n",sum);
    }
    return 0;
}