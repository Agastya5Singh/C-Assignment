#include<stdio.h>
int main(void){
 int a,b,c,n;
 printf("Enter a Number: ");
 scanf("%d",&a);
 
 printf("Enter last Number: ");
 scanf("%d",&n);

 for(a=1;a<=n;a++){
     if(a%7==0 && a%18==0){
         printf("%d\n",a);
     }
 }
 return 0;
}