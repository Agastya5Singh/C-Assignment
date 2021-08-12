#include <stdio.h>
int main()
{
   float num = 10, *p;
   *p=num;
   printf("Value of variable num is: %f", num);
   printf("\nAddress of variable num is: %p", &p);
   return 0;
}