//checking if file exist or not
#include<stdio.h>
          
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("jayant.txt", "r");
    if (ptr == NULL) {
        printf("ERROR! file does not exist");
    }
    else {
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of number is %d\n", num);
    printf("The value of number is %d\n", num2);
    }
    
    return 0;
}