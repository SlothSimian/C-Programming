// different ways to initialise structure array
#include<stdio.h>
#include<string.h> 
struct employee{
    int code;
    float salary;
    char name[10];
};         
int main(){
    struct employee jayant = {100, 69.96, "Jayant"};
    printf("Name Of Employee :  %s\n",jayant.name);
    printf("code Of Employee :  %d\n",jayant.code);
    printf("salary Of Employee :  %f\n",jayant.salary);

    return 0;
}