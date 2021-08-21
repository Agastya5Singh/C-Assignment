#include<stdio.h>


struct Test {
    int x, y;
};

void swap(Test *t) {

    int temp;

    temp = (*t).x;
    (*t).x = (*t).y;
    (*t).y = temp;
}

int main() {

    struct Test t;

    printf( "Enter two numbers:");
    scanf("%d %d" ,t.x, t.y);

    swap(&t);

    printf( "After swap x is:%d",t.x);
    printf("\nAfter swap y is:%d", t.y);

    return 0;
}