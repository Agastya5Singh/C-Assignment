# include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n enter the 1st no.",a);
     scanf("%d",&a);
    printf("\n enter the 2nd no.",b);
     scanf("%d",&b);
    printf("\n enter the 3rd no.",c);
    scanf("%d",&c);
    int e;
    (a>b)&&(a<c)?(e=a):(a>c)&&(a<b)?(e=a):(b>a)&&(b<c)?(e=b):(b>c)&&(b<a)?(e=b):(e=c);    
    
    printf(" 2nd min no. is :%d ",e);
    return 0;

}