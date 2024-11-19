#include <stdio.h>
int main () {

int num;
int sum = 0;
int div = 1;

printf("Enter a  Number: ");
scanf("%d",&num);

while ( div < num ) {
    if ( num % div == 0) {
        sum = sum + div;
    } div = div + 1;
}
if ( num == sum ) {
    printf("%d is a PERFECT number.",num);
}else {
    printf("%d is a NOT a perfect number.",num);
}
    return 0;
}