#include<stdio.h>
int main()
{
 int num,i;
 num=2;
 i=2;
 p:
 printf("%d  ",num);
 num=num+i;
 i=i+2;
 if(num<=50)
 goto p;
 return 0;
}