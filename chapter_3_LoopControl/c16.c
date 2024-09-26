//for loop control example, print first n natural no. using for loop
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
       printf("the value of i is %d",i);
       printf("\n");
    }   
    return 0;
}