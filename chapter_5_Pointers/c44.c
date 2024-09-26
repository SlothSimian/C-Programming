//wap using function to find the sum and average of two numbers. use pointers and print the value of sum and average
#include<stdio.h>
void sumANDavg(int a , int b, int *sum, float *avg){
    *sum = a + b;
    *avg =(float)*sum/2;
}          
int main(){
    int i, j,sum ;
    float avg;
    i = 69;
    j = 81;
    sumANDavg(i, j, &sum, &avg);
    printf("th value of sum is %d\n",sum);
    printf("th value of average is %.2f\n",avg);
    return 0;
}