//wap to find sum of first ten natural number using for loop
#include<stdio.h>
int main()
{
    int i, sum = 0;
    printf("****Sum of First Ten Natural Number****\n");
    for ( i = 1; i <=10; i++)
    {
       sum+=i;
    }
    
    printf("%d",sum);
    return 0;
}