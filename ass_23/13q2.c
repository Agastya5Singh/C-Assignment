#include<stdio.h>
void new_array(int a[]);

int main()
{
  
    int my_arr[] = {11,15,18,38,41}, i;

    printf("Original array: \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", my_arr[i]);
    }

    new_array(my_arr);

   

    
    return 0;
}

void new_array(int a[])
{
   int sum = 0;
    int *p = &a[0];
    for (int i = 0; i < 5; i++)
    {
        if (p[i] % 2 == 0)
        {
            sum = sum + p[i];
        }
    }
    printf("The sum of even elements in the array is : %d", sum);
    return 0;
}