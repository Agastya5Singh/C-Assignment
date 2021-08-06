#include<stdio.h>
int main()
{
    int i, j, num, a[7][7] = { {0,0,0,0,0,0,0}, {0,1,2,3,4,5,0}, {0,6,7,8,9,10,0}, {0,11,12,13,14,15,0}, {0,16,17,18,19,20,0}, {0,21,22,23,24,25,0}, {0,0,0,0,0,0,0} };
    printf("The number is: ");
    scanf("%d", &num);    
    printf("The numbers that are surrounding %d are: ", num);
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 7; j++)
        {
            if (a[i][j] == num)
            {
                printf("%d ", a[i-1][j-1]);
                printf("%d ", a[i-1][j]);
                printf("%d ", a[i-1][j+1]);
                printf("%d ", a[i][j-1]);
                printf("%d ", a[i][j+1]);
                printf("%d ", a[i+1][j-1]);
                printf("%d ", a[i+1][j]);
                printf("%d ", a[i+1][j+1]);
                break;
            }
        }
    }    
    return 0;
}