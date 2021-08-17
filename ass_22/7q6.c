#include<stdio.h>
int operation(int a,int b, char c)
{
int k;
if(c=='*'){
k=a*b;
return k;
}
else if(c=='/'){
k=a/b;
return k;
}
else if(c=='+'){
k=a+b;
return k;
}
else if(c=='-'){
k=a-b;
return k;
}
}
void main()
{
int x,y;
char s;
printf("Enter the type of operation you want: ");
scanf("%c",&s);
printf("Enter two numbers: ");
scanf("%d%d",&x,&y);
printf("\nInput: %d %d %c",x,y,s);
printf("\nDesired output: %d",operation(x,y,s));
}