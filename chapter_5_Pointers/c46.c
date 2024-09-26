//wap to print c43.c problem usin call by value and verify that it doesn't change the value of said variable
#include<stdio.h>
int chnge(int a);          
int main(){
    int i = 69;
    printf("The value of integer is %d\n",i);
    
    printf("The value of integer after the change is %d\n",chnge(i));
    return 0;
}
int chnge(int a){
    int b;
    b = a * 10;
    return b;
    
}