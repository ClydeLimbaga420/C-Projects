#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void virusSetup( int size, char virus, char virusTracker[size][size]) { //Put A Virus If Row == 5 (Changeable)

    for (int row = 0; row < size; row++) {
        for (int column = 0; column < size; column++) {
            virusTracker[row][column] = '.';
            if ( row == 5 ) {
            virusTracker[row][column] = virus;
            
        }

        }
       
    }


}

void printVirusManual(char virus, int size, char virusTracker[size][size]) { // Print Virus Board but the Manual
    while (1) {
        printf("Virus = %c\tDead = .\n",virus);
       
        char temp[size][size];
        int row;
        int column;
        
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                int neighbors = 0; //used to count the neighbors

                
                for (int i = -1; i <= 1; i++) { //detecting the neighbors
                    for (int j = -1; j <= 1; j++) {
                        if (i == 0 && j == 0) {
                            continue;
                        }
                        int nRow = row + i;
                        int nColumn = column + j;

                        if (nRow >= 0 && nRow < size && nColumn >= 0 && nColumn < size) {
                            if (virusTracker[nRow][nColumn] == virus) {
                                neighbors++;
                            }
                        }
                    }
                }

                
                if (virusTracker[row][column] == virus) {//If a Live Virus has 2 or 3 neighbors it survives
                    if (neighbors < 2 || neighbors > 3) {//If neighbors is less than 2 or more than 3 in dies
                        temp[row][column] = '.'; 
                    } else {
                        temp[row][column] = virus; 
                    }
                } else if (virusTracker[row][column] == '.' && neighbors == 3) {//If a dead virus has 3 live neigbors it becomes alive
                    temp[row][column] = virus; 
                } else {
                    temp[row][column] = '.'; 
                }
            }
        }

        
        for (row = 0; row < size; row++) { //Put the temporary array to the main one
            for (column = 0; column < size; column++) {
                virusTracker[row][column] = temp[row][column];
            }
        }

        
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                printf("%c ", virusTracker[row][column]);
            }
            printf("\n");
        }

        getchar(); //Loops when the user types a character
        system("cls"); //clear screen;
    }
}

void printVirus(char virus, int size, char virusTracker[size][size]) { //Print Virus Board That Runs on its own
    while (1) {
        printf("Virus = %c\tDead = .\n",virus);
       
        char temp[size][size];
        int row;
        int column;
        
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                int neighbors = 0;

                
                for (int i = -1; i <= 1; i++) {
                    for (int j = -1; j <= 1; j++) {
                        if (i == 0 && j == 0) {
                            continue;
                        }
                        int nRow = row + i;
                        int nColumn = column + j;

                        if (nRow >= 0 && nRow < size && nColumn >= 0 && nColumn < size) {
                            if (virusTracker[nRow][nColumn] == virus) {
                                neighbors++;
                            }
                        }
                    }
                }

                
                if (virusTracker[row][column] == virus) {
                    if (neighbors < 2 || neighbors > 3) {
                        temp[row][column] = '.'; 
                    } else {
                        temp[row][column] = virus; 
                    }
                } else if (virusTracker[row][column] == '.' && neighbors == 3) {
                    temp[row][column] = virus; 
                } else {
                    temp[row][column] = '.'; 
                }
            }
        }

        
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                virusTracker[row][column] = temp[row][column];
            }
        }

        
        for (row = 0; row < size; row++) {
            for (column = 0; column < size; column++) {
                printf("%c ", virusTracker[row][column]);
            }
            printf("\n");
        }

        sleep(2); //Loops every 1.5s
        system("cls");
    }
}

int main ()  {

    int size = 30; //Size of Matrix 
    char virus; //The Virus
    char virusTracker[size][size]; //2d Array
    printf("Please Choose A Character in your keyboard to be a Virus\n>> ");
    scanf(" %c", &virus);
    virusSetup( size, virus, virusTracker);
    printf("Do You want it to run Manually or on its own?\n1. Manual\n2. Its Own\n>> ");
    int choice; //Choice if Manual or Run in its own;
    
    scanf("%d",&choice);
    if ( choice == 1 ) {
        printVirusManual( virus, size, virusTracker);
    } else if ( choice == 2 ) { 
        printVirus( virus, size, virusTracker);
    } else {
        printf("Invalid Choice, Read the Instructions\n");
    }


    return 0; 
}