#include <stdio.h>
 
int main()
{
  int i = 2, num, j = 0; 
   
  printf("Enter Number: ");
  scanf("%d", &num);
 
  while(i <= num/2)
   {
     if(num%i == 0)
     {
        j++;
	break;
      }
      i++;	
   }
   if(j==0 && num != 1)
   {
   	printf("%d is a Prime number", num);
   }
   else
   {
 	printf("%d is Not a Prime number", num);
   }
  return 0;
}
