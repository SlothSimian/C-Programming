// Array of structures
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 69.45;
    strcpy(facebook[0].name, "Jayant");

    facebook[1].code = 101;
    facebook[1].salary = 96.99;
    strcpy(facebook[1].name, "Akash");

    facebook[2].code = 102;
    facebook[2].salary = 99.99;
    strcpy(facebook[2].name, "Timepass");
    printf("Done");
    return 0;
}