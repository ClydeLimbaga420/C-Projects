#include<stdio.h>
#include<stdlib.h>

void inputMatrixA(int  row, int column, int matrixA[row][column]) {
    printf("Enter numbers for Matrix A\n");
    for ( int i = 0; i < row; i++ ) {
    
    for ( int j = 0; j < column; j++ ) {
    scanf(" %d",&matrixA[i][j]);
    
    }
    }
}

void inputMatrixB(int column, int row, int matrixB[row][column]) {
    printf("Enter numbers for Matrix B\n");
    for ( int i = 0; i < row; i++ ) {
    
    for ( int j = 0; j < column; j++ ) {
    scanf(" %d",&matrixB[i][j]);
    
    }
    }
}

int sumOfMatrix(int row, int column, int matrixA[row][column], int matrixB[row][column], int matrixSum[row][column]) {
    printf("Sum of Matrices\n");
    for ( int i = 0; i < row; i++ ) {
    printf("\n");
    for ( int j = 0; j < column; j++ ) {
    matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
    printf(" %d",matrixSum[i][j]);
    
    }
    }

}


int main() {


    int row;
    int column;


    printf("How many rows do you want\n>> ");
    scanf(" %d",&row);
    printf("How many columns do you want\n>> ");
    scanf(" %d",&column);
    int matrixA[row][column];
    int matrixB[row][column];
    int matrixSum[row][column];
    
    inputMatrixA( row, column, matrixA );
    
    inputMatrixB( column, row, matrixB );
    
    sumOfMatrix( row, column, matrixA, matrixB, matrixSum );
    
    
    
    
    
    return 0;
}