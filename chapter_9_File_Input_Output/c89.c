#include<stdio.h>
          
int main(){
    FILE *fptr;
    int number = 69;
    fptr = fopen("generate.txt", "w");
    fprintf(fptr, "The number is %d", number);
    fclose(fptr);
    return 0;
}