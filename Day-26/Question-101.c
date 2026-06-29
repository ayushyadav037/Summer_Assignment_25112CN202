/*
problem:
Write a program to Cerate a number gussinging game.
*/
#include<stdio.h>
int main()
{
    //secret number that the player has to gauss
    int secretNumber=25;
    //stored the number enter by the player
    int guess;
    //counting how many times player guess
    int attempts=0;

    //display the game title and some important instruction
    printf("\nNUMBER GAUSSING GAME\n");
    printf("\nGUESS A NUMBER BETWEEN 1 TO 29\n");

    //repeate until the correct number is guessed
    do
    {
        //asking the player to enter a number
        printf("Enter your guessing number:");
        scanf("%d",&guess);

        //increasing the attempt count after the every guess
        attempts++;

        //check if guess number is greater then secret number 
        if(guess>secretNumber)
        {
            printf("\nTOO HIGH ! Try again\n");
        }
        //check if the guess number is smaller then secret number
        else if(guess<secretNumber)
        {
            printf("\nTOO LOW ! Try again.\n");
        }
        //if the guess number is correct 
        else
        {
            printf("\n-_-CONGRATULATIONS-_-\n");
            printf("You Guessed the correct number.\n");
            printf("\nTotal attempts = %d\n",attempts);
        }
    }

    while(guess!=secretNumber);

    //program ends sucessfully
    return 0; 
    
}    