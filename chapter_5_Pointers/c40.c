//wap to demonstrate call by reference
#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main(){
    int x = 69, y = 96;
    printf("The value of x and y is %d and %d\n",x,y);
    //wrong_swap(x, y);// will not work because its call by value
    swap(&x, &y);
    printf("The value of x and y after swap is %d and %d\n",x,y);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}