//passing value from file to variable
#include<stdio.h>
          
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("jayant.txt", "r");
    fscanf(ptr, "%d", &num); // scanf equivalent in file i/o
    fscanf(ptr, "%d", &num2);
    printf("The value of number is %d\n", num);
    printf("The value of number is %d\n", num2);
    fclose(ptr);
    return 0;
}