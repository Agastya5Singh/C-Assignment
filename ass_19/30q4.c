#include <stdio.h>
int main()
{
    char a[20], b[40];
    printf("The 1st String formed is:");
    scanf("%s", a);
    printf("The 2nd String formed is:");
    scanf("%s", b);
    
    int l;
    for (l = 0; l < 20; l++)
    {
        if (a[l] == '\0')
            break;
    }

    int i, j;
    for (i = 0; i < l / 2; i++)
    {
        j = a[i];
        a[i] = a[l - 1 - i];
        a[l - 1 - i] = j;
    }

    while (b[i] != 0)
    {
        ++i;
    }
    for (j = 0; a[j] != '\0'; ++j, ++i)
    {
        b[i] = a[j];
    }

    b[i] = '\0';
    printf("The following Concatenated string formed is: %s", b);

    return 0;
}