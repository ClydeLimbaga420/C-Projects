#include <stdio.h>
#include <string.h>


int main () {
    
    int letter1;
    int letter2;
    int i;
    int length;
    int diff;
    char word[1000];
    printf("Enter a word >> ");
    scanf("%s",word);
    length = strlen(word) - 1;
    for ( i = 0; i <= length / 2  ; i++ ) {
        
        int letter1 = (int)word[i];
        int letter2 = (int)word[length - i] ;

        if ( letter1 > letter2) {
            diff = letter1 - letter2;
        } else if ( letter1 < letter2) {
            diff = letter2 - letter1;
        }
        if ( letter1 > letter2 ) {
            letter1 = letter1 - diff;
            letter2 = letter2 + diff;
        } else if ( letter1 < letter2 ) {
            letter1 = letter1 + diff;
            letter2 = letter2 - diff;
        }
        word[i] = (char)letter1;
        word[length - i] = (char)letter2;
        
        
        
    }
    printf("%s",word);



return 0;
}
