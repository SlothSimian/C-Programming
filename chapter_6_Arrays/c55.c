//wap to create a 3d array and print the address of all its element
#include<stdio.h>
          
int main(){
    int arr[2] [3] [4];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
               printf("The address of ar[%d][%d][%d] is %u\n",i, j, k, &arr[i][j][k]);
            }
             
        }
        
    }
    
    return 0;
}