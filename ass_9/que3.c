#include<stdio.h>
int main()
{
int i,n;
scanf("%d%d",&i,&n);
if(i>n){
        while(i>=n){
            printf("%d\n",i);
            i--;
        }
    }
    else{
        while (n>=i)
        {
            printf("%d \n",n);
            n--;
        }
        
    }
    return 0;
}
