//wap with structures represting a complex number
#include<stdio.h>
typedef struct complexNumbers{
    int real;
    int complex;
}comp;         
int main(){
    comp cnums;
    cnums.real = 6;
    cnums.complex = 9;

    printf("The value of real part is %d\n",cnums.real);
    printf("The value of complex part is %d\n",cnums.complex);
    return 0;
}