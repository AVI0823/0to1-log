/*
We need a program that generates a random number and asks the user to guess it, 
if the user's guess is higher then the actual number the program displays "Lower number please", 
and if the user's guess is lower then the actual number the program displays "Higher number please"
When the user guesses the correct number, 
the program displays the number of attempts the user took to reach at the number.
*/

#include <stdio.h>

#include <stdlib.h> // to generate a random number
#include <time.h> // to generate a random number

void number_game_using_while(){
    printf("\n");

    // to generate random num (no clue how it works)
    srand(time(0)); 
    int randomNumber = ((rand()%100)+1);
    // printf("%d",randomNumber);
    // to generate random num (no clue how it works)

    printf("\nWelcome to GUESS THE NUMBER game \n");
    printf("The computer has choosen a random number between 1 and 100\n");
    printf("And you need to guess it \n");
    printf("Hints will be given throught the Game...\n");
    printf("So Let's Start\n");

    int guess_count = 0;
    int tracker = 1;
    
    while(tracker==1){

        int guess_number;
        printf("\nEnter your guess : ");
        scanf("%d",&guess_number);

        if((guess_number)>randomNumber){
            guess_count++;
            if((guess_number-20)>randomNumber){
                printf("Nooo! You are way too off, Lower number please\n");
                continue;
            }
            else if((guess_number-5)>=randomNumber ){
                printf("Almost there , Lower number please\n");
                continue;
            }
            else{
                printf("You are very close, Lower number please\n");
            }
        }
        if((guess_number)<randomNumber){
            guess_count++;
            if((guess_number+20)<randomNumber){
                printf("Nooo! You are way too off, Higher number please\n");
                continue;
            }
            else if((guess_number+5)<=randomNumber){
                printf("Almost there , Higher number please\n");
                continue;
            }
            else{
                printf("You are very close, Higher number please\n");
            }
        }
        if(guess_number == randomNumber){
            guess_count++;
            tracker = 0;
            printf("\nYou Guessed it, The real number was : %d \n",guess_number);
            printf("It took you %d attempts to guess the number \n",guess_count);
        }
    }

    printf("\n");
}

int main(){
    printf("\n");

    number_game_using_while();    

    printf("\n");
    return 0;
}