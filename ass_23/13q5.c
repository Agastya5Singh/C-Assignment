#include<stdio.h>
int GCD(int x, int y)
{
    int GCD = 1;
    while (y%x != 0)
    {
        int c = y%x;
        y = x;
        x = c;
        
    }
    if (y%x == 0)
    {
        GCD = x;
    }
    
    return GCD;
}
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int p;
    for (int i = 0; i < n; i++)
    {
        p=GCD(a[i],a[i+1]);   
    }
    printf("GCD=%d",p);

    return 0;
}