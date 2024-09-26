#include<stdio.h>
          
int main(){
    //file input
    FILE *Fptr;
    int number = 69;
    Fptr = fopen("generate.txt", "w");
    fprintf(Fptr, "The number is %d", number);
    fclose(Fptr);
    return 0;
}