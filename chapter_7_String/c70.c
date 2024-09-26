//wap to decrypt the string encrypted in previous program c69.c
#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
    
}

int main(){
    char c[] = "dpnf!up!sppn!uxp";
    decrypt(c);
    printf("Decrypted string is: %s",c);
    return 0;
}