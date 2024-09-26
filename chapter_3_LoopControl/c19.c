//WAP to print multiplication table of 10 in reverse order
#include<stdio.h>
int main()
{
    printf("*****Multiplication Table Of 10*****\n\n");
    for (int i = 10; i; i--)
    {
        printf("10 * %d = %d\n",i,10*i);
    }
    
    return 0;
}