#include<stdio.h>
int main()
{
int i,j,C;
char a[200],b[10];
printf("Enter first and second string: ");
scanf("%s",a);
scanf("%s",b);
printf("original= (a) %s\n ",a);
printf("original= (b) %s ",b);
for(i=0;a[i]!='\0';i++)
for(j=0;b[j]!='\0';j++)
{
C++;
}
for(j=C+1;j>=0;j++)
{
a[i]=b[j];
i++;
}
printf("final= %s ",a);
return 0;
}