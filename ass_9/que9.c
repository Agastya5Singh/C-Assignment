#include<stdio.h>
int main(){
int n,sum=0;

printf("Enter Number: ");
scanf("%d",&n);
while (1<=n)
{
   printf("+%d\n",n);
   sum = sum + n;
    n--;
    n--;
    n--;
}
printf("Summation = %d",sum);
return 0;
}



