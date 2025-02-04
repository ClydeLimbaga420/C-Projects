#include <stdio.h>


void theBoard(char board[3][3]) {
    printf("\nTicTacToe Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
            if (j < 2) {
                printf("| ");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---------\n");
        }
    }
    printf("\n");
}
int main () {

    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    theBoard(board);
    char choice;
    int row;
    int col;
    int run = 1;
    int valid;
    char player1[100];
    char player2[100];


    printf("Instructions: Pick a number 1 - 9 to put your symbol. \n");
    printf("Enter Player 1 Name >> ");
    scanf("%s",&player1);
    printf("Enter Player 2 Name >> ");
    scanf("%s",&player2);
    while ( run < 10 ) {
        valid = 0;
        if ( run % 2 == 1 ) {
            printf("\nPlayer %s (X) Enter Your Place >> ",player1);
            scanf(" %c",&choice);
            for ( row = 0; row < 3; row++ ) {
                for ( col = 0; col < 3; col++ ) {
                    if ( board[row][col] == choice ) {
                        board[row][col] = 'X';
                        valid = 2;
                        run++;
                        row = 99;
                        col = 99;
                        
                    } else if ( board[row][col] == 'X' || board[row][col] == 'O' ) {
                        
                        valid = 1;

                    }
                }
            }
        } else if ( run % 2 == 0 ) {
            printf("\nPlayer %s (O) Enter Your Place >> ",player2);
            scanf(" %c",&choice);
            for ( row = 0; row < 3; row++ ) {
                for ( col = 0; col < 3; col++ ) {
                    if ( board[row][col] == choice ) {
                        board[row][col] = 'O';
                        valid = 2;
                        run++;
                        row = 99;
                        col = 99;
                        
                        } else if ( board[row][col] == 'X'|| board[row][col] == 'O' ) {
                            
                            valid = 1;
                        } 
                }
            }
        }
        if ( valid == 1 ) {
            printf("\nINVALID CHOICE!!");
            theBoard(board);

        }
        if ( valid == 2 ) {
            theBoard(board);
        }
        if ( board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' || 
             board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
            printf("Player %c wins!!!", board[0][0]);
            run = 11;
        } else if ( board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' ||
                    board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' ) {
                        printf("Player %c wins!!!", board[1][0]);
                        run = 11;
                    } else if ( board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' ||
                                board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
                                    printf("Player %c wins!!!", board[2][0]);
                                    run = 11;
                                } else if ( board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' ||
                                            board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
                                                printf("Player %c wins!!!", board[0][0]);
                                                run = 11;
                                            } else if ( board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' ||
                                                        board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
                                                            printf("Player %c wins!!!", board[0][1]);
                                                            run = 11;
                                                        } else if (  board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' ||
                                                                     board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
                                                                        printf("Player %c wins!!!", board[0][2]);
                                                                        run = 11;
                                                                     } else if ( board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
                                                                                 board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
                                                                                    printf("Player %c wins!!!", board[0][0]);
                                                                                    run = 11;
                                                                                 } else if ( board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ||
                                                                                             board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
                                                                                                printf("Player %c wins!!!",board[0][2]);
                                                                                             } else if ( run == 10 ) {
                                                                                                printf("It is a DRAW!!!");
                                                                                                run = 11;
                                                                                             }
        
    }
    



    return 0;
}