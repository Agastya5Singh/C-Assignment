#include <stdio.h>
int main()
{
    int a[10],max,max2;
    printf("Enter the values of the array \n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    max2=max=a[0];
    for(int i=0;i<10;i++)
    {
        if((a+i)>max)
        max=(a+i);
    }
    for(int i=0;i<10;i++)
    {
        if((a+i)>max2&&((a+i)!=max))
        max2=*(a+i);
    }
    printf("The maximum is = %d , The second maximum is = %d ",max,max2);
    return 0;
}