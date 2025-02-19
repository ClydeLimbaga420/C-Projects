#include <stdio.h>
#include <stdlib.h>


void inputNum(int numcount, int *numarrptr) {
    for ( int i = 0; i < numcount; i++ ) {
        printf("Enter #%d: ",i+1);
        scanf(" %d",numarrptr);
        numarrptr = numarrptr + sizeof(int);
    }
}

int theSum(int numcount, int *numarrptr, int sum) {
    for ( int i = 0; i < numcount; i++ ) {
        sum = sum + *numarrptr;
        numarrptr = numarrptr + sizeof(int);
    }
    printf("\nSum: %d",sum);
    return sum;
}

float theAverage( int sum, int numcount) {
    float average = 0;
    average = (float)sum / numcount;
    printf("\nAverage: %.2f",average);
    return average;
}

int largestNum (int numcount, int *numarrptr, int largest) {
    for ( int i = 0; i < numcount; i++ ) {
        if ( *numarrptr > largest ) {
            largest = *numarrptr;
        }
        numarrptr = numarrptr + sizeof(int);
    }
    printf("\nLargest num: %d",largest);
    return largest;
}

int lowestNum( int numcount, int *numarrptr,int lowest ) {
    for ( int i = 0; i < numcount; i++ ) {
        if ( lowest > *numarrptr) {
            lowest = *numarrptr;
        }
        numarrptr = numarrptr + sizeof(int);
    }
    printf("\nLowest num: %d",lowest);
    return lowest;
}
int main () {

    int numcount = 0;

    printf("How many numbers to add? ");
    scanf(" %d",&numcount);

    int *numarrptr = malloc( sizeof(int) * numcount );
    int *startmarker = numarrptr;
    int sum = 0;
    int largest = 0;
    int store = 0;

    inputNum(numcount, numarrptr);

    numarrptr = startmarker;

    for ( int j = 0; j < numcount; j++ ) {
        printf(" %d",*numarrptr);
        numarrptr = numarrptr + sizeof(int);
    }

    numarrptr = startmarker;

    sum = theSum(numcount, numarrptr, sum);
    
    theAverage( sum,numcount );

    numarrptr = startmarker;
    largest = *numarrptr;

    largestNum(numcount,numarrptr,largest);

    int lowest = 0;
    numarrptr = startmarker;

    lowest = *numarrptr;

    lowestNum( numcount, numarrptr, lowest );

    return 0;
}