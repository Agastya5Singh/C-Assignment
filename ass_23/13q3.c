#include <stdio.h>
void calc(int x,int y,int z,int *p,int *q,int *r)
{
    *r=(x+y+z)/3;
    if(x>y && x>z)
    *p=x;
    else if(y>x && y>z)
    *p=y;
    else
    *p=z;
    if(x<y && x<z)
    *q=x;
    else if(y<x && y<z)
    *q=y;
    else
    *q=z;
}
int main() 
{
    int a,b,c,avg,max,min;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    calc(a,b,c,&max,&min,&avg);
    printf("MAX = %d  MIN = %d   AVG = %d",max,min,avg);
    return 0;
}