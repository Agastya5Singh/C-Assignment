#include <stdio.h>

int main()
{
    int x = 6, y = 8, z= 4;
    int a,b,c;
    a = y*y;
    b = z*z;
    c= z*z*z;
    printf("         %d       \n",x);
    printf("     %d      %d \n",y,a);
    printf("%d       %d      %d\n" , z,b,c);
    printf("     %d      %d \n",y,a);
    printf("         %d     \n",x);

    return 0;
}
