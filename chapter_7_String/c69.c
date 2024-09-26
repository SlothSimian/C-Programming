//wap to encrypt a string by adding 1 to ascii value of its character
#include<stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
    
}

int main(){
    char c[] = "come to room two";
    encrypt(c);
    printf("Encrypted string is: %s",c);
    return 0;
}