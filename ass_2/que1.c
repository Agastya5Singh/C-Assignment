# include<stdio.h>
int main ()
{
    float num;
    int a,b,c,d,e,f;
    printf("enter the no.:",num);
    /* real no. like   19.6345 &  it will give output 19.63 */
    scanf("%f",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=(num/10000)%10;
    f=(num/100000)%10;
    (b<5)?(b=0):(b=0,c=c+1);
    printf("%d%d%d%d",f,e,d,c);
    return 0;

}