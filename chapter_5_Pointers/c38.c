//a program to demonstrate pointers concept
#include<stdio.h>
          
int main(){
    int i = 28;
    int *j;// now j can store address of an integer as it is a int-pointer
    j = &i;
    printf("The value of i = %d\n",i);
    printf("The value of i = %d\n",*j);
    printf("The address of i = %u\n",&i);
    printf("The address of i = %u\n",j);
    printf("The address of j = %u\n",&j);
    printf("The value of j = %u\n",*(&j));

    return 0;
}