//Using user inputted values, wap to find the area of the rectangle
#include<stdio.h>
int main()
{
    int length, breadth;

    printf("Enter the length of the Rectangle\n");
    scanf("%d",&length);

    printf("Enter the breadth of the Rectangle\n");
    scanf("%d",&breadth);

    printf("The area of Rectangle is %d units",length*breadth);
    return 0;
}