// this is to show how random number generator work
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100+1;
    printf("The random number is %d",number);   
    return 0;
}