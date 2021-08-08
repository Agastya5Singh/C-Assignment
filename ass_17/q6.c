#include<stdio.h>
int main()
{
    int a[6][6]={
        {1,0,0,0,0,0},
        {1,1,1,1,1,1},
        {0,0,0,0,0,1},
        {0,0,1,0,0,1},
        {0,0,0,0,0,1},
        {0,0,0,0,0,1}
        };
    int sr,sc,dr,dc,i,j,tmpi,tmpj;
    scanf("%d %d %d %d", &sr,&sc,&dr,&dc);
    i=sr;
    j=sc;
    while(i != dr || j != dc)
    {
        if(j-1>=0 && a[i][j-1]==1)
        {   a[sr][sc]=-1;
            tmpi=i;
            tmpj=j-1;
            printf("%d%d ",i,j);
        }
        else if(j+1<6 && a[i][j+1]==1)
        {   a[sr][sc]=-1;
            tmpi=i;
            tmpj=j+1;
            printf("%d%d ",i,j);
        }
        else if(i-1>=0 && a[i-1][j]==1)
        {   a[sr][sc]=-1;
            tmpi=i-1;
            tmpj=j;
            printf("%d%d ",i,j);
        }
        else if(i+1<6 && a[i+1][j]==1)
        {   a[sr][sc]=-1;
            tmpi=i+1;
            tmpj=j;
            printf("%d%d ",i,j);
        }
        else if(i==3 || i==-1 || j==3 || j==-1)
        {
            return 0;
            printf("\n end");
        }
        
        a[i][j]=-1;
        i=tmpi;
        j=tmpj;
         
        
    }
    printf("%d%d",dr,dc);
    return 0;
}