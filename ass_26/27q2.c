#include <stdio.h>

int main() {
    struct student {
        int sub_1;
        int sub_2;
        int sub_3;
        
        float avg;
        int maxx;
    }stu;
    
    
;
    int  *sub_1_ptr = &stu.sub_1;
    scanf("%d",sub_1_ptr);
    
    int  *sub_2_ptr = &stu.sub_2;
    scanf("%d",sub_2_ptr);
    
    int  *sub_3_ptr = &stu.sub_3;
    scanf("%d",sub_3_ptr);
    
    stu.avg = ((*sub_1_ptr) + (*sub_2_ptr) + (*sub_3_ptr))/3;
    stu.maxx = ((*sub_1_ptr) + (*sub_2_ptr) + (*sub_3_ptr));
    
    printf("Sub-1: %d\n",*sub_1_ptr);
    
    
    printf("Sub-2: %d\n",*sub_2_ptr);
    
    printf("Sub-3: %d\n",*sub_3_ptr);
    
    
    printf("Average: %f\n",stu.avg);
    
    printf("Maximum: %d\n",stu.maxx);
    
    
    return 0;
}