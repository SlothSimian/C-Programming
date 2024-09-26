//wap to display 5 user inputted complex numbers using a display function 
#include<stdio.h>
typedef struct complexNumbers{
    int real;
    int img;
}comp;     

void display (comp c){
    printf("The value of real part is %d\n",c.real);
    printf("The value of imaginary part is %d\n",c.img);
}
int main(){
    comp cnums[5];
    for (int i = 0; i < 5; i++){
        printf("Enter the real value for %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary value for %d num\n",i+1);
        scanf("%d",&cnums[i].img);
    }
    for(int i = 0; i<5; i++){
        display(cnums[i]);
    }
    
    return 0;
}