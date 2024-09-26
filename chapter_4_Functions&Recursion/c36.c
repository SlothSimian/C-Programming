//write a recursive function to find the sumof first n natural numbers
#include<stdio.h>
int recsum(int n){
    if (n<=1){
        return n;
    }
    return n + recsum(n-1);
}      
int main(){
    int a;
    printf("***Enter the number of first n natural number***\n");
    scanf("%d",&a);
    printf("The sum of first %d natural number is %d.\n", a, recsum(a));
    return 0;
}