// string library function strlen() using string.h
#include<stdio.h>
#include <string.h>          
int main(){
    char *st = "JAYANT ABHINAV";
    int a = strlen(st);// counts string excluding the null character
    printf("The length of string st is %d\n",a);
    return 0;
}