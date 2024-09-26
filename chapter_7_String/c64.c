//string library function strcmp(s1, s2) using header file string.h
#include<stdio.h>
#include<string.h>          
int main(){
    char st1[] = "Jayant ";
    char *st2 = "Abhinav";
    int val = strcmp(st1, st2); 
    printf("The val is %d\n",val);
    return 0;
}