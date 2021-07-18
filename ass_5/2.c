#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter the 1st no:",a);
    scanf("%d",&a);
    printf("enter the 2st no:",b);
    scanf("%d",&b);
    printf("enter the 3st no:",c);
    scanf("%d",&c);
    printf("enter the 4st no:",d);
    scanf("%d",&d);
    printf("enter the 5st no:",e);
    scanf("%d",&e);
    printf("enter the 6st no:",f);
    scanf("%d",&f);

    g=(a<b)?((a<c)?a:c):((b<c)?b:c);
    h=(e<d)?((e<f)?e:f):((d<f)?d:f);
    i=(g<h)?g:h;
        printf("\n %d is sallest",i);
    return 0;

}