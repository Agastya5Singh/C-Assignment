# include <stdio.h>
int main ()
{   float a;
    printf("enter the no.:");
    scanf("%f",&a);
     if(a<=0){
         printf("it is a negative no.");
     }
     else if (a>0){
         printf("it is a positive no.");
     }
     
    return 0;
}