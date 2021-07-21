# include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("enter any 4 no.:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     if(a>b&&a>c){
        e=a;
    }
    else{
        if(b>c){
          e=b;
               }
         else{
             e=c;
         }      
    }
    if(e>d){
        printf("%d is the second highest",d);
    } 
    else{
        printf("%d is the second",e);
    }
    return 0;
}
