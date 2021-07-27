#include<stdio.h>
int main()
{
    int j,k=1,dt=1;
   
   printf("\n\nEnter First Day Start From <1-Mon....6-Sat & 7-Sun> End With Sunday : ");
   scanf("%d",&k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf("___________________________________________________\n\n");

 /* for(j=k;j>=1 && j<=7;j--)
    {
        printf("\t");
    }
*/  j=k;
    while(j>1)
    {
        
        printf("\t");

        j--;
    }  
    while(dt>0 && dt<=31)
    {
         if(k%8==0)
        {
         printf("\n");
         k=1;
        }
       else  
       { printf("%d\t",dt);
        dt++;
        k++;
    }

    }
    return 0;
}