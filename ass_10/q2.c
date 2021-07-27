# include<stdio.h>
int main()
{
    int a=1,i=1,mul=1;
    while(a!=0)
    {
        scanf("%d",&a);
        if(a%2==1)
          {
              mul=mul*a;
          } 
             
    }
    printf("%d\n",mul);
    return 0;
}