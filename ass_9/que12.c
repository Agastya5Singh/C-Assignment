#include<stdio.h>
int main(){
float i=0,j=1,n;
float sum =0;
printf("Enter Last No For Total Additon: ");
scanf("%f",&n);
while (i<j && j<=n)
{
    printf("+%f\n",j);
    sum = sum + (i/j);
    i++;
    j++;
    
}
printf("Summation = %f",sum);
return 0;
}