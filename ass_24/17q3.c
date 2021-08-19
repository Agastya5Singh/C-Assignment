#include<stdio.h>  
  
int sum(int num)  
{  
    if(num)  
        return(num + sum(num-1));  
    else  
        return 0;  
}  
  
int main()  
{  
    int count;  
  
    printf("Enter a positive no\n");  
    scanf("%d", &count);  
  
    printf("Sum of 1st %d natural numbers is %d\n", count, sum(count));  
  
    return 0;  
}
