#include<stdio.h>  
  
void display(int);  
  
int main()  
{  
    int limit;  
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &limit);  
  
    
    display(limit);  
  
    return 0;  
}  
  
void display(int num)  
{  
    if(num<=10)  
        display(num+2);  
    else  
        return;  
  
    printf("\n%d\n", num);  
}