//typedef 
#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;  //typedef is used to create a alias for structure
    char name[20];   // it reduces the need to type struct everytime
} emp;   
void show(emp emp1){
    printf("The code of employee : %d \n", emp1.code);
    printf("The salary of employee : %f \n", emp1.salary);
    printf("The name of employee : %s \n", emp1.name);
}     
int main(){
    // declaring  e1 and ptr
    emp   e1;
    emp  *ptr;
    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 69.99;
    strcpy(ptr->name, "Jayant");

    show(e1);
    return 0;
}