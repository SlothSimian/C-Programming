//wap to print the value of a variable ten times its original value using call by reference function calling
#include<stdio.h>
int chnge(int *a);          
int main(){
    int i = 69;
    printf("The value of integer is %d\n",i);
    chnge(&i);
    printf("The value of integer after the change is %d\n",i);
    return 0;
}
int chnge(int *a){
    *a = *a * 10;
    
}