// wap to find if a number is divisible by 97 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :  ");
    scanf("%d",&num);
    if (num % 97 == 0)
    {
        printf("The number %d is divisible by 97",num);
    }
    else
    {
        printf("The number %d is not divisible by 97",num);
    }
    
    return 0;
}