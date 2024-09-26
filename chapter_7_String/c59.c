//using scanf to input string in array
#include<stdio.h>
          
int main(){
    char str[35];
    printf("Enter your name: \t" );
    scanf("%s",&str); // scanf cannot be used for multi-word string with spaces
    printf("Your name is %s",str);
    return 0;
}