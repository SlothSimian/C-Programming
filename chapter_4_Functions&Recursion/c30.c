// wap to create function to calculate area of a square
#include<stdio.h>
#include<math.h>         
int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("The value of area is %.2f units", pow(side, 2));
    return 0;
}
