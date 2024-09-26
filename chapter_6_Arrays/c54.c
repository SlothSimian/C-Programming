//wap to find all positive integer in a array
#include<stdio.h>
int counting(int *arr, int n){
    int pve_int = 0;
    for (int i = 0; i < n; i++){
        if (arr[i]>0) {
            pve_int++;
        }
               
    }
    return pve_int;
     
}         
int main(){
    int arr[10] = {12,34,-45,65,-86,12,18,-16,-69,-96};
    printf("The no. of positive integer in given array is %d",counting(arr,10)); 
    return 0;
}