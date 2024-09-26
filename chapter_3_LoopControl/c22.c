//wap to find sum of first ten natural number using do while loop
#include<stdio.h>
int main()
{
    int i=1, sum = 0;
    printf("****Sum of First Ten Natural Number****\n\n");
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    printf("%d",sum);
    return 0;
}