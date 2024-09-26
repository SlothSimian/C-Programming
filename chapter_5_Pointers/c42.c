//wap to print variable i. print the address of i . pass this address to a function and print this address. are both address same? why?
#include<stdio.h>
void printaddress(int a){
    printf("The address of integer i is %u\n",&a);
}          
int main(){
    int i = 69;
    printf("The value of integer i is %d\n",i);
    printaddress(i);
    printf("The address of integer i is %u\n",&i);
    return 0;
}