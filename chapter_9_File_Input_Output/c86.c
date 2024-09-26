//read/write file
#include<stdio.h>
          
int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r"); // "r" for reading the file
    ptr = fopen("sample.txt","w"); // "w" for writimg the file
    fclose(ptr);
    return 0;
}