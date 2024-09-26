/*wap to print the following pattern using functions
*
***
*****   */
#include<stdio.h>
void printpattern(int n);          
int main(){
    int a; // this is for number of lines of pattern
    printf("**Enter the number of lines of the pattern**\n");
    scanf("%d",&a);
    printf("\n");
    printpattern(a);
    return 0;
}
void printpattern(int n){
    int i;
    if (n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for (i = 0; i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");

}