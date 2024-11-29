/*Objective: Create a simple game where the computer randomly selects a number, and the player has to guess it.

Steps:

Generate a random number within a specific range (e.g., between 1 and 100).
Prompt the player to guess the number.
After each guess, give the player a hint:
If their guess is too high, tell them it's too high.
If their guess is too low, tell them it's too low.
If they guess the number correctly, congratulate them and end the game.
Allow the player to keep guessing until they get it right, and count how many guesses it took.
Optional Features:

Limit the number of guesses the player can make (e.g., 10 attempts).
Track and display the player's score based on how many guesses they took.
This project will help you practice loops, conditionals, and random number generation.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXGUESSES 10
#define MAXNUM 10
#define MINNUM 1


int main () {


int guess;
int limit = 0;
int score = 0;
int points[10] = {10000,8000,6000,5000,4000,1000,800,600,500,400};


srand(time(NULL));
int randomnum = rand() % MAXNUM + MINNUM;

printf("Number Guessing Game\n");
printf("You have %d attempts to guess the number that is randomly generated.\n", MAXGUESSES);

do {

printf("Guess A Number >> ");
scanf("%d", &guess);

if ( guess > randomnum ) {
    printf("Your Guess Is Too High!!!\n");
    limit++;
    score = points[limit -1];
} else if ( guess < randomnum ) {
    printf("Your Guess Is Too Low!!!\n");
    limit++;
    score = points[limit -1];
} else if ( guess == randomnum ) {
    break;

} else {
    printf("Invalid Input");
}
    

} while ( guess != randomnum || limit <= MAXGUESSES);

if ( guess == randomnum ) {
    printf("The Number is %d\n",randomnum);
    printf("You Guessed The Number In %d Attempts\n",limit);
    printf("You Got %d Points\n",score);
} else {
    printf("The Number is %d\n",randomnum);
    printf("You Lost All Your Tries Better Luck Next Time\n");
}



    return 0;
}