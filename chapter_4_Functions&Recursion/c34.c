//wap to find the force of attraction exerted on an object by earth(Take g = 9.8 m/s)
#include<stdio.h>
float force(float mass);         
int main(){
    float m;
    printf("Enter the value of mass in kgs \n");
    scanf("%f",&m);
    printf("The value of force is %.2f newton.\n",force(m));
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}