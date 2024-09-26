//wap to print a array containing multiplication table of any integer
#include<stdio.h>
          
int main(){
    int mul [10], n;
    printf("Enter the integer for its multiplication table \n");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n*(i+1);
    } 
    printf("*** The multiplication Table of %d ***\n",n);
    for (int i = 0; i < 10; i++)
    {
       printf(" %d X %d = %d \n",n,i+1,mul[i]);
    }
    
    return 0;
}