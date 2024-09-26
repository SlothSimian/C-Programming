//Number guessing game between 1 to 100 with displaying number of guesses
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int number, guess,nguesse=1;
    srand(time(0));
    number = rand()%100+1;//This generates no. between 1 to 100
    //Keep running the loop until the number is guessed
    do
    {
        printf("***Guess The Number Between 1 to 100***\n");
        scanf("%d",&guess);
        if (guess>number){
           printf("Please Enter A Lower Number!\n");
        }
        else if(guess<number){
            printf("Please Enter A Higher Number!\n");
        }
        else{
            printf("Bravo! You Guessed The Number In %d Attempts.\n",nguesse);
        }
        nguesse++;
    } while (guess!=number);
    
    return 0;
}