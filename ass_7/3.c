# include<stdio.h>
int main ()

{
    printf("enter the no.\n");
    int a;
    scanf("%d",&a);
    if(a<=999&&a>=100){
        printf("it is a 3 digit integer");
    }
    else if (a<=9999&&a>=1000){
        printf("it is a 4 digit integer");
    }
    else if(a<=99999&&a>=10000){
        printf("it is a 5  digit integer");
    }
        return 0;
}
