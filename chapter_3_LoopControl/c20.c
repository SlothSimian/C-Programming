//wap to find sum of first ten natural number using while loop
#include<stdio.h>
int main()
{
    int i = 1, sum = 0;
    printf("****Sum of First Ten Natural Number****\n");
    while (i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}