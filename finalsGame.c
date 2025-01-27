#include <stdio.h>  // for functions/library
#include <stdlib.h> // standard library
#include <time.h>   // time library
#include <ctype.h>  // for the capital token to be converted to small token

int choice;    // Determines the difficulty of the g`1ame
int b = 0;     // used to stop the loop if all are guessed
int i;         // used to randomize and to loop
int j;         // used to randomize and to loop
int placed = 0; // Used to ask what spot to put the desired token
int run = 1;   // To play the game
int size;      // used to randomize
int tries; //Tries for the player to guess
int valid = 1;   // To know if the choice is valid or invalid
char guess;    // Placeholder of your token guess
char temp;     // used to randomize

letterse[4] = {'a', 'b', 'c', 'd'};  // easy tokens
char lettersm[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; // medium tokens
char lettersh[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'}; // hard tokens
char choices1[4] = {'a', 'b', 'c', 'd'};  // Print the easy tokens
char choices2[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; // Print the medium tokens
char choices3[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'}; // Print the hard tokens

int main() {
    // Starting the game loop
    while (run == 1) {
        printf("Type 1 To Play: ");
        scanf("%d", &run);
        getchar();  // Clear any leftover newline characters

        if (run != 1) {
            printf("EXITING.....\n");
            break; // Ends the loop
        }

        // Divider
        for (i = 0; i < 84; i++) {
            printf("*");
        }printf("\n");

        printf("GUESS THE TOKEN GAME!!!\nGuess What Letter is in your selected spot.\n");
        printf("MODES:\n");
        printf("Type 1 for Easy Mode (8 Tries)\nType 2 for Medium Mode (16 Tries)\nType 3 for Hard Mode (40 Tries)\n");

        // Divider
        for (i = 0; i < 84; i++) {
            printf("*");
        }printf("\n");

        printf("Put mode choice here >>>>>>  ");
        scanf("%d", &choice);
        getchar();  // Clear the newline character after integer input

        srand(time(NULL));  // Different pattern every run
        char* letters;

        // Set game difficulty and tokens based on choice
        if (choice == 1) { // Easy Mode
            size = 4;
            letters = letterse;
            // Randomize the Tokens by Difficulty
            for (i = 0; i < size; i++) {
                j = rand() % size;
                temp = letters[i];
                letters[i] = letters[j];
                letters[j] = temp;
            }

            // Prints the easy tokens
            printf("Tries: 8\n");
            printf("\nSpots >> *( 1 - 4 )*\n");
            printf("Token Choices:\n");
            for (i = 0; i < 4; i++) {
                printf("|%c|\t", choices1[i]);
            }

            printf("\n");
            b = 0; // Reset b before starting the loop
            tries = 8;
            while (b < size && tries > 0 ) {//It will become false if you win or run out of tries
                printf("\nTries >> %d\n",tries);
                printf("\nPut Desired Spot to Enter the Token >> ");
                scanf("%d", &placed);  // Read integer for the spot
                getchar();  // Clear the newline character from input buffer
                if (placed < 1 || placed > size) {
                    printf("Invalid spot! Please choose a spot between 1 and %d.\n", size);
                    continue;
                }
                printf("Put Token on Spot #%d >> ", placed);
                scanf(" %c", &guess);  // Read the character for the token
                guess = tolower(guess); // Convert to lowercase
                
                if (guess == letters[b]) {
                    printf("CORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    b++;
                    tries--;//Minus tries every right or wrong answer
                } else {
                    printf("INCORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    tries--;//Minus tries every right or wrong answer
                }
            }
            printf("Answers:\n");
            for (i = 0; i < 4; i++) { //Prints the right answer
                printf("|%c|\t", letterse[i]);
            }
            printf("\n");

        } else if (choice == 2) { // Medium Mode
            size = 8;
            letters = lettersm;
            // Randomize the Tokens by Difficulty
            for (i = 0; i < size; i++) {
                j = rand() % size;
                temp = letters[i];
                letters[i] = letters[j];
                letters[j] = temp;
            }

            // Prints the medium tokens
            printf("Tries: 16\n");
            printf("\nSpots >> *( 1 - 8 )*\n");
            printf("Token Choices:\n");
            for (i = 0; i < 4; i++) {
                printf("|%c|\t", choices2[i]);
            }
            printf("\n");
            for (i = 4; i < 8; i++) {
                printf("|%c|\t", choices2[i]);
            }
            printf("\n");

            b = 0; // Reset b before starting the loop
            tries = 16;
            while (b < size && tries > 0 ) {//It will become false if you win or run out of tries
                printf("\nTries >> %d\n",tries);
                printf("\nPut Desired Spot to Enter the Token >> ");
                scanf("%d", &placed);  // Read integer for the spot
                getchar();  // Clear the newline character from input buffer
                if (placed < 1 || placed > size) {
                    printf("Invalid spot! Please choose a spot between 1 and %d.\n", size);
                    continue;
                }
                printf("Put Token on Spot #%d >> ", placed);
                scanf(" %c", &guess);  // Read the character for the token
                guess = tolower(guess); // Convert to lowercase
                
                if (guess == letters[b]) {
                    printf("CORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    b++;
                    tries--;//Minus tries every right or wrong answer
                } else {
                    printf("INCORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    tries--;//Minus tries every right or wrong answer
                }
            }

            printf("Answers:\n");
            for (i = 0; i < 4; i++) { // Prints the right answer
                printf("|%c|\t", lettersm[i]);
            }
            printf("\n");
            for (i = 4; i < 8; i++) {
                printf("|%c|\t", lettersm[i]);
            }
            printf("\n");

        } else if (choice == 3) { // Hard Mode
            size = 12;
            letters = lettersh;
            // Randomize the Tokens by Difficulty
            for (i = 0; i < size; i++) {
                j = rand() % size;
                temp = letters[i];
                letters[i] = letters[j];
                letters[j] = temp;
            }

            // Prints the hard tokens
            printf("Tries: 40\n");
            printf("\nSpots >> *( 1 - 12 )*\n");
            printf("Token Choices:\n");
            for (i = 0; i < 4; i++) {
                printf("|%c|\t", choices3[i]);
            }
            printf("\n");
            for (i = 4; i < 8; i++) {
                printf("|%c|\t", choices3[i]);
            }
            printf("\n");
            for (i = 8; i < 12; i++) {
                printf("|%c|\t", choices3[i]);
            }
            printf("\n");

            b = 0; // Reset b before starting the loop
            tries = 40;
            while (b < size && tries > 0 ) { //It will become false if you win or run out of tries
                printf("\nTries >> %d\n", tries);
                printf("\nPut Desired Spot to Enter the Token >> ");
                scanf("%d", &placed);  // Read integer for the spot
                getchar();  // Clear the newline character from input buffer
                if (placed < 1 || placed > size) {
                    printf("Invalid spot! Please choose a spot between 1 and %d.\n", size);
                    continue;
                }
                printf("Put Token on Spot #%d >> ", placed);
                scanf(" %c", &guess);  // Read the character for the token
                guess = tolower(guess); // Convert to lowercase
                
                if (guess == letters[b]) {
                    printf("CORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    b++;
                    tries--;//Minus tries every right or wrong answer
                } else {
                    printf("INCORRECT!!!!\n");
                    for (i = 0; i < 84; i++) {
                        printf("*");
                    }printf("\n");
                    tries--;//Minus tries every right or wrong answer
                }
            }

            printf("Answers:\n");
            for (i = 0; i < 4; i++) { // Prints the right answer
                printf("|%c|\t", lettersh[i]);
            }
            printf("\n");
            for (i = 4; i < 8; i++) {
                printf("|%c|\t", lettersh[i]);
            }
            printf("\n");
            for (i = 8; i < 12; i++) {
                printf("|%c|\t", lettersh[i]);
            }
            printf("\n");

        } else {
            printf("Invalid Choice!!!!, PLEASE FOLLOW THE DIRECTIONS!!!!!\n");
            valid = 0; // Exits if the player has an invalid choice
        }

        if (valid == 1) {//The players choices are valid
            if (b == size) {
                printf("Congratulations!!!! You Won!!!!\n");
                for (i = 0; i < 84; i++) {
                    printf("*");
                }printf("\n");
            } else {
                printf("Oooops!! Out of Tries!\n");
                for (i = 0; i < 84; i++) {
                    printf("*");
                }printf("\n");
            }
            printf("Do You Want To Play Again?\n(Press 1 To Play Again)\n> ");
            scanf("%d", &run);
            getchar(); // Clear the newline character
            if (run != 1) {
                printf("EXITING.....\n");
                break; // Exit if the player does not want to play again
            }
            b = 0; // Reset the b variable to 0 
        }
        for (i = 0; i < 84; i++) {
            printf("*");
        }printf("\n");
    }

    return 0;
}
