#include <stdio.h>
int main()
{
    int a = 55;
    int *b = &a;
    int **c = &b;
    printf("The value of a is: %d\n", a);
    printf("The address of pointer to a is: %p\n", &a);
    printf("The value of b is: %d\n", b);
    printf("The address of pointer to b is: %p\n", &b);
    printf("The value of a is: %d\n", *b);
    printf("The value of b is: %d\n", *&b);
    return 0;
}