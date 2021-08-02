#include <stdio.h>
int main() 
{
   int n, i, j, num = 1;
   printf("Enter the number: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i=i+1) 
   {
      for (j = 1; j <= i; j=j+1) 
      {
         printf("%d ", num);
         num=num+1;
      }
      printf("\n");
   }
   return 0;
}