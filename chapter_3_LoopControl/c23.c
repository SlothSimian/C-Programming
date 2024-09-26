//wap to calculate the sum of numbers occuring in multiplication table of 8
#include<stdio.h>
int main()
{
    int i, m, sum = 0;
    printf("*****Sum of all numbers of Multiplication Table Of 8*****\n");
    for ( i = 1; i <= 10; i++)
    {
        m = 8*i;
        sum+=m;
        
    }
    printf("%d",sum);
    return 0;
}