//wap using recursion to nth elements of fibonacci series.
// fibonacci series = 0,1,1,2,3,5,8,13,21....(adding previous two values to obtain next value)
#include<stdio.h>
int fib(int n);

int main(){
    int a;
    printf("Enter the nth value of the series\n");
    scanf("%d",&a);
    printf("The %dth element of fibonacci series is %d.\n", a, fib(a));
    return 0;
}
int fib(int n){
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return n= fib(n-1) + fib(n-2);
    }        
}