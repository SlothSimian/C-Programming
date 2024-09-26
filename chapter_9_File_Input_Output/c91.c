#include<stdio.h>
          
int main(){
    FILE *ptr;
    ptr = fopen("putcdemo.txt","w");
    putc('J', ptr);
    fclose(ptr);
    return 0;
}