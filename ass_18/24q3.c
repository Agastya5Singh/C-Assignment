#include <stdio.h>
int main()
{
    char s[300];
    int c = 0, i;
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i]==' ' && s[i+1] !=' ')
        {
             c++;    
        }
    }
    printf("Number of words in given string are: %d\n",c+1);
    return 0;
}