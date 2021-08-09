#include<stdio.h>
int main()
{
    char str[100];
    int len, i,j;
    printf("Please insert the string you want to reverse: ");
    scanf( "%s",str);
    for(j=0; str[j]!='\0'; ++j);
     printf("\nLength of input string: %d",j);
     printf("\n");
    len=j;
    for(i= len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}