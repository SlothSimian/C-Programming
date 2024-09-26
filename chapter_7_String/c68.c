//Write your own version of strcpy function
#include<stdio.h>
char* strcpy(char* destination, const char* source){
    char *ptr = destination;
    while (*source != '\0'){
        *destination = *source;
        *destination++;
        *source++;
    }
    *destination = '\0';
    return ptr;
      
}

int main(){
    char st1 [] = "Jayant Abhinav";
    char st2[25];
    printf("The data of source string is \n %s",st1);
    
    strcpy(st2,st1);
    printf("\nThe data of destination string is \n %s",st2);

    return 0;
}