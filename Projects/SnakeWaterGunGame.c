//We will make a snake water gun game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char Player,char Computer){
    //return 1 if you win, -1 if you lose and 0 if draw
    //Case for draw condition
    if (Player == Computer){
        return 0;
    }
    //case for non-draw condition

    if (Player == 's' && Computer=='g') {
        return -1;
    }
    else if (Player == 'g' && Computer=='s') {
        return 1;
    }
    if (Player == 's' && Computer=='w') {
        return 1;
    }
    else if (Player == 'w' && Computer=='s') {
        return -1;
    }
    if (Player == 'g' && Computer=='w') {
        return -1;
    }
    else if (Player == 'w' && Computer=='g') {
        return 1;
    }

}          
int main(){
    char Player, Computer;
    srand(time(0));
    int number = rand()%100+1;
    if (number < 33)
    {
      Computer = 's';
    }
    else if (number > 33 && number < 66)
    {
      Computer = 'w';  
    }
    else
    {
        Computer = 'g';
    }
    
    
    printf("Enter 's' for Snake, 'w' for Water  And 'g' for Gun \n");
    scanf("%c",&Player);
    printf("Player chose %c and Computer chose %c \n",Player,Computer);
    int result = SnakeWaterGun(Player, Computer);
    if (result == 0)
    {
       printf("Game Draw!\n"); 
    }
    else if (result == 1)
    {
       printf("Player Won!\n"); 
    }
    else
    {
        printf("Player Lost!\n"); 
    }
    
    
    
    return 0;
}