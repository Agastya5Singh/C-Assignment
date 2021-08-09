#include <stdio.h>
int main()
{   int i;
    char str[]="Myself AGASTYA SINGH";
    for (i = 0; str[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
    return 0;
}