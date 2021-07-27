# include<stdio.h>
int main()
{
    int i=0,a,sum1=0;
    while (i<6)
    {
        scanf("%d",&a);
         if(a%3==0 && a%5==0)
          {
              sum1=sum1+a;
          }
        
          i++;
    }
    printf("%d\n",sum1);
    return 0;
    
}