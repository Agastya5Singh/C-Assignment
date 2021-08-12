#include<stdio.h>
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int ind,i;
    scanf("%d",&ind);
    int *p;
    p=a+ind;
    for(i=0;i<9-ind;i++)
    {
        printf("forword:%d\n",p[i]);
    }
    for(i=2;i<=ind;i++)
    {
        printf("backword:%d\n",p[-i]);
    }
    return 0;
}    