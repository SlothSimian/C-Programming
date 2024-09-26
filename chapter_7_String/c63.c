//string library function strcat(string1, string 2) using header file string.h
#include<stdio.h>
#include<string.h>          
int main(){
    char st1[] = "Jayant ";
    char *st2 = "Abhinav";
    //concatenate meaning joining another value at the end of first value
    strcat(st1, st2);//Here we are joining second value to the first value
    printf("The concatenate of two strings is %s\n",st1);
    return 0;
}