#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr= &ptr;

    printf("The value of **ptr_ptr is %d\n", **ptr_ptr);
    printf("The value of *ptr is %d\n", *ptr);
    printf("The address of i is %d\n", ptr);
    printf("The address of ptr is %d\n", ptr_ptr);
    printf("The value of i is %u\n", &i);
    return 0;
}