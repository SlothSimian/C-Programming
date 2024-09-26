//wap to find multiplication Table of given number n
#include<stdio.h>
int main()
{ 
    int n, i;
    printf("Enter any Integer \n");
    scanf("%d",&n);
    printf("*****The Multiplication Table of %d*****\n\n",n);
    for ( i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}