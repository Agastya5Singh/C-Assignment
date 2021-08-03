# include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int x=0,y=1,sum=0;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        sum=x+y;
        a[i]=sum;
        x=y;
        y=sum;
    }
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
    return 0;
}