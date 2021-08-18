#include<stdio.h>
void word(char *b)
{
int j=0;
for(int i=0;i<20;i++)
{
if(b[i]==' ')
{
j++;
}
}
printf("No. of words: %d ",(j+1));
}
void main()
{
char a[20];
printf("Please enter a string with less than 20 characters (with or without space): ");
scanf("%[^\n]s",a);
word(a);

}