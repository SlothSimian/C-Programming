//wap to demonstrate call by value of function calling
#include<stdio.h>
int sum (int a, int b);        
int main(){
    int x =  35, y = 34;
    printf("The value of x and y is %d and %d\n",x,y);
    printf("The sum of the number is %d\n",sum(x, y));
    printf("The value of x and y after function calling is %d and %d",x,y);

    return 0;
}
int sum(int a, int b){
    return a+b;
}