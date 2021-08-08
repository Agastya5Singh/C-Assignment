#include<stdio.h>
int main()
{
    int row,col;
    printf("enter the row and the column number:");
    scanf("%d %d",&row,&col);
    int array[row][col];
    int i,j;
    for(j=0;j<col;j++)
    {
        for(i=0;i<row;i++)
        {
            printf("enter the element:");
            scanf("%d",&array[i][j]);
        }
    }
    /* i=1;
    printf("Enter no. :");
    scanf("%d",&a[i]);
    start:
        printf("") */
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}