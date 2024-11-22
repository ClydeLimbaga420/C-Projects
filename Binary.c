#include <stdio.h>
int main () {

int num;
int conv = 0;
int rem;
int place = 1;
int convert;

printf("Input a number: ");
scanf("%d",&num);
 
printf("Press 1 to convert the number to Binary, 2 for Octal , 3 for Hexadecimal: ");
scanf("%d",&convert);

if ( convert == 1 ) {
    while ( num ) {
        rem = num % 2;
        num = num / 2;
        conv = conv + ( rem * place );
        place = place * 10;
        
    }
    printf("Your number in Binary is %d.",conv);
} else if ( convert == 2 ) {
    while ( num ) {
        rem = num % 8;
        num = num / 8;
        conv = conv + ( rem * place );
        place = place * 10;
    }
    printf("Your number in Octal is %d,",conv);
} else if ( convert == 3 ) {
    while ( num ) {
        rem = num % 16;
        num = num / 16;
        if ( rem < 10 ) {
            conv = conv + ( rem * place );
            place = place * 10;
        } else {
            switch ( rem ) {
                case 10:
                conv = conv + (48 * place);
                place = place * 10;
                break;

            }
        }
        }
        printf(" Your number in Hexadecimal is %d." , conv);
}else {
    printf("Invalid Choice");
}
return 0;
}