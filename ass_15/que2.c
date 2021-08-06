#include<stdio.h>
int main()
{
    int i , j , a[3][3];
    printf("Enter the elements in array: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the elements of array: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("3rd row: \n");
    for(i=0;i<3;i++)
    {
        if(i==2)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    

    printf("\n");
    printf("3rd column: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==2)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}