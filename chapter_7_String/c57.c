//wap to print a string using loop with "" quote
#include<stdio.h>
          
int main(){
    char str[]= "Jayant";
    char *ptr = str;
    while (*ptr!= '\0'){
        printf("%c\n",*ptr);
        ptr++; 
    }
    
 
    return 0;
}