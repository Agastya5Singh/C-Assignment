# include<stdio.h>
int main()
{
    int a,n;
    printf("find the no.\n");
      while((a*a)<=2500)
      {
        if((a*a)>=1000 && (a*a)<=2500)
        {
          n=a;
        }
        if(n>1)
          {
             printf("no. are :%d\n",n);
          }   
        
        a++;
      }
    return 0;
}