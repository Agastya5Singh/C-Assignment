#include <stdio.h>
void calc(int n1,int n2,char ch)
{
   int i,j;
   for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       printf("%c ",ch);
       printf("\n");
   }
   return;
}
void main()
{
    printf("A B \n");
    calc(2,3,'*');
    printf("C D \n");
    calc(2,4,'-');
    printf("D E \n");
    calc(3,5,'+');
}