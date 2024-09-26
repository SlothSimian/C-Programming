//wap to reverse an array by passing it to a function
#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for (int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
     
}      
int main(){
    int arr [] = {9,6,7,5,4,8,9,6};
    reverse(arr, 8);
    for (int i = 0; i < 8; i++){
        printf("The value of element %d is %d \n",i+1, arr[i]);
    }
    return 0;
}