//Intro to structure
#include<stdio.h>
#include<string.h>
struct employee{
    int code;      //user defined data type
    float salary;
    char name[25];
};
          
int main(){
    int a =34;
    char b = 'g';
    float s = 34.3453;
    //employee e1;
    //e1.salary =34.4543; --->won't work without structures
    struct employee e1; // creating structure variable
    e1.code = 100;
    e1.salary = 345.69;
    // e1.name = "Jayant"; ---> won't work
    strcpy(e1.name, "Jayant");

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}