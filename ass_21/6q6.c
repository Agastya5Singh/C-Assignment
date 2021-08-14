#include <stdio.h>
int main()
{
    char a[20];
    int i, j = 0;
    printf("Enter the first string:");
    scanf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;

    printf("Enter the secound string:");
    scanf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;

    printf("Enter the Third string:");
    scanf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;

    printf("Enter the fourth string string:");
    scanf("%s", a + j);

    i, j = 0;
    printf("The string is: ");
    printf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;

    printf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;

    printf("%s", a + j);
    for (i = j; a[i] != '\0'; i++)
        ;
    j = i + 1;
    printf("%s", a + j);

    return 0;
}