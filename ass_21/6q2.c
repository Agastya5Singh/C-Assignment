#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter the first string \n");
    scanf("%s",a);
    printf("Enter the first string \n");
    scanf("%s",a+5);
    printf("Enter the first string \n");
    scanf("%s",a+10);
    printf("Enter the first string \n");
    scanf("%s",a+15);
    printf("%s ",a);
    printf("%s ",a+5);
    printf("%s ",a+10);
    printf("%s ",a+15);
    return 0;
}