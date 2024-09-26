//Wap to find the sum of two variables using functions 
#include<stdio.h>
//sum is a function which takes a and b as input and returns integer value.
int sum(int a, int b);//Function prototype declaration

int main(){
    int c;
    c = sum(68, 1);// Function call
    printf("The value of c is %d.",c);
    return 0;
}
int sum(int a, int b){
    int results;
    results = a + b;//Function Declaration
    return results;
}