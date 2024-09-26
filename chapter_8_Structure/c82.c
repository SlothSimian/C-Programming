// wap to illustrate arrow operator -> in c
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};                
int main(){
    struct employee e1,e2;
    struct employee *ptr, *ptr1;
    ptr = &e1;
    ptr1 = &e2;
    // using arrow operator
    ptr->code = 101;
    ptr->salary = 20000;
    strcpy(ptr->name, "Jayant");
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);
    //using dot operator
    (*ptr1).code = 102;
    (*ptr1).salary = 30000;
    strcpy((*ptr1).name, "Abhinav");
    printf("%d\n",e2.code);
    printf("%.2f\n",e2.salary);
    printf("%s\n",e2.name);
    return 0;
}