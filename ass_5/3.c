# include<stdio.h>
int main()
    {
     int a,b,c,d,e,f,s;
     printf("enter the 4 digit no.");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     (a<b)&&(a<c)&&(a<d)?(s=a):(b<a)&&(b<c)&&(b<d)?(s=b):(c<a)&&(c<b)&&(c<d)?(s=c):(s=d);
     printf("smallest no. is :%d",s);
     return 0;
    }
