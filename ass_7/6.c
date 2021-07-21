# include<stdio.h>
int main()
{
    int h1,h2,m1,m2;
    printf("Enter a time:");
    scanf("%d%d",&h1,&m1);
    printf("Enter another time:");
    scanf("%d%d",&h2,&m2);
    int w,m,h;
    if(h1<h2)
    {
        printf("%d:%d is earlier\n",h1,m1);
        w=2;
    }
    else
    {
        if(h1>h2)
        {
            printf("%d:%d is earlier.",h2,m2);
            w=1;
        }
        else
        {
            if(m1<m2)
            {
                printf("%d:%d is earlier.",h1,m1);
                w=2;
            }
                else
                {
                    printf("%d:%d is earlier.",h2,m2);
                   w=1;
                }

        }
    }
    if(w==1)
    {
        if(m1>m2)
        {
            m=m1-m2;
        }
        else
        {
            h1=h1-1;
            m=m1+60-m2;
        }
        h=h1-h2;
    }
    else
    {
        if(m2>m1)
        {
            m=m2-m1;
        }
        else
        {
            h2=h2-1;
            m=m2+60-m1;
        }
        h=h2-h1;
    }
    printf("\nThe time difference is: %d hours and %d min.",h,m);
return 0;

}