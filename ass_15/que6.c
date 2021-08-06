#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the rows:");
    scanf("%d",&n);
    printf("Enter the colum");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<m;j=j+1)
        {
            printf("Enter the elements of matrix:");
            scanf("%d",&a[i][j]);

        }

    }
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<m;j=j+1)
        {
           printf(" %d",a[i][j]);


        }
        printf("\n");
    }
    printf("The elements next to digonal are: ");
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<m;j=j+1)
        {
            if(i+1==j)
            {
                printf(" %d",a[i][j]);
            }

        }
    }

          for(i=0;i<n;i=i+1)
    {
        for(j=0;j<m;j=j+1)
        {
            if(i-1==j)
            {
                printf(" \n %d",a[i][j]);
            }

        }
    }

    return 0;

}