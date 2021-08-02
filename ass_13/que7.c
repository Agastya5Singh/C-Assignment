#include <stdio.h>
int main()
{
    int x=0,y=0,s=0;
   
    printf("Enter the Side:");
    scanf("%d",&s);
    for(x=1; x<=s; x=x+1)
    {
        for(y=1; y<=s; y=y+1)
        {
            
            if((x==1) || (  x==s  )|| (y==1) || (y==s) || (  x==y  ))
                
                {printf("  *");
            }
            else
            {
                
                printf("   ");
            }
        }
       
        printf("\n");
    }
    return 0;
}  