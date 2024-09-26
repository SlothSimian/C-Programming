//wap to print value of a variable i by using pointer to pointer variable
#include<stdio.h>
          
int main(){
    int i = 69;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("the value of i is %d.",**ptr_ptr);
    return 0;
}