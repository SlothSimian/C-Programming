//wap to fint area of a circle and a cylinder
#include<stdio.h>
int main()
{
    float r1, r2, height, area, volume;
    printf("Enter the radius of circle :  ");
    scanf("%f",&r1);

    area = 3.14*r1*r1;
    printf("The area of circle is %.3f \n",area);

    printf("Enter the radius of cylinder :  ");
    scanf("%f",&r2);

    printf("Enter the height of cylinder :  ");
    scanf("%f",&height);

    volume = 3.14*r2*r2*height;
    printf("The volume of the cylinder is  %.3f",volume);

    return 0;
}