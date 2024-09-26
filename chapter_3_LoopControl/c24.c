//wap to find factorial of any given no. using a for loop
#include<stdio.h>
int main()
{
    int i=0, n , factorial = 1;
    printf("Enter any Number\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
       factorial*=i;
    }
    printf("The factorial of %d is %d",n, factorial);

}