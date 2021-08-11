#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    char *str1, *str2 ;
    str1=s1;
    str2=s2;
    int i ;
    printf("Enter the string: ") ;
    gets(str2);
    for(i = 0; *str2 != '\0' ; i++, str1++, str2++)
    *str1 = *str2 ;
    *str1 = '\0' ;
    str1 = str1 - i ;
    printf("\nCopied string is: %s", str1) ;
    return 0;
}