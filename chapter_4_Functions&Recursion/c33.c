//wap to convert celsius to fahrenheit
#include<stdio.h>
float temperature(float cel);          
int main(){
    float cel;
    printf("Enter the temperature in celsius\n");
    scanf("%f",&cel);
    printf("The temperature in fahrenheit is %.2f .",temperature(cel));
    return 0;
}
float temperature(float cel){
    float f;
    f = (cel * 9/5) + 32;
    return f;
}