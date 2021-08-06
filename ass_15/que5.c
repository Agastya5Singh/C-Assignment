#include<stdio.h>
int main()
{
    int n,i,key,j;
    scanf("%d",&n);
    printf("\n");
    scanf("%d",&key);
    int arr_1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr_1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr_1[i]==key)
        {
            printf("Key found at %d",i+1);
        }
        else{
            continue;
        }
    }
    printf("\n");
    int row,col;
    scanf("%d",&row);
    printf("\n");
    scanf("%d",&col);
    printf("\n");
    int arr_2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr_2[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(key==arr_2[i][j])
            {
                printf("Key found at %d , %d",i,j);
            }
            else{
                continue;
            }
        }
    }
    return 0;
}