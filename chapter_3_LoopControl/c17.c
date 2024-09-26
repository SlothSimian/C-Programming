//wap to print n natural number using reverse order
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i = n;i;i--){
        printf("the value of i is %d",i);
        printf("\n");
    }
    return 0;
}