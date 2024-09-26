//wap to ptint address of variable and through the address find its value
#include<stdio.h>
          
int main(){
    int a = 69;
    int *ptr;
    ptr = &a;
    printf("The address of the variable a is %d\n",ptr);
    printf("The address of the variable a is %d",*ptr);
    return 0;
}