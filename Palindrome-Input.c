#include <stdio.h>
#include <string.h>

int main () {

char message[10000];

int i = 0;

int palin = 1;
printf("Input a word: ");
scanf("%s",message);
int len = strlen(message);
int j = len - 1;
while ( i < j  ) {
    if ( message[i] != message[j] ) {
        palin = 0;
        break;
    }i++;
    j--;
}
if ( palin == 1 ) {
    printf("Your word is a Palindrome.\n");
} else {
    printf("Your word is not a Palindrome.\n");
}


    return 0;

}
