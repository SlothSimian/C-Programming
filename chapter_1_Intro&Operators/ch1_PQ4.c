//Wap to calculate simple interest 
#include<stdio.h>
int main()
{
    int p, r, t , si;
    p = 20000;
    r = 10;
    t = 2;
    si = (p*r*t)/100;
    printf("The simple interest is %d",si);
    return 0;
}