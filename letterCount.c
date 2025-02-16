#include <stdio.h>
#include <string.h>

int main () {

char word[100];
char letter;
int count = 0;
printf("Input Word >> ");
gets(word);
int length = strlen(word);
printf("Input Letter to count >> ");
scanf("%c",&letter);
for ( int i = 0; i < length; i++ ) {
    if ( letter == word[i] ) {
        count++;
    }
}
printf("Letter Count >> %d\n",length);
printf("The letter %c in %s are %d.",letter,word,count);



    return 0;
}