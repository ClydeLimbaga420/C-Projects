#include <stdio.h>

int main () {

int num1;
int num2;
int div = 1;
int gcd = 1;

printf("Input First Number: ");
scanf( "%d",&num1 );
printf("Input Second Number: ");
scanf( "%d" ,&num2 );

while ( div <= num1 && div <= num2 ) {
    if (num1 % div == 0 && num2 % div == 0 ) {
        gcd = div;
        
    } div = div + 1;
}printf("The GCD of the numbers %d and %d is %d.",num1, num2,gcd);

    return 0;
}