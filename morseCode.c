#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char word[10000];
    int length = 0;

    printf("Word to Morse Code.\n");
    printf("Enter Word >> ");
    gets(word);
    length = strlen(word);
    
    
    for ( int i = 0; i < length; i++ ) {
        if ( word[i] == 'a') {
        printf("._");
    } else if ( word[i] == 'b') {
        printf("_...");
    }else if ( word[i] == 'c') {
        printf("_._.");
    }else if ( word[i] == 'd') {
        printf("_..");
    }else if ( word[i] == 'e') {
        printf(".");
    }else if ( word[i] == 'f') {
        printf(".._.");
    }else if ( word[i] == 'g') {
        printf("__.");
    }else if ( word[i] == 'h') {
        printf("....");
    }else if ( word[i] == 'i') {
        printf("..");
    }else if ( word[i] == 'j') {
        printf(".___");
    }else if ( word[i] == 'k') {
        printf("_._");
    }else if ( word[i] == 'l') {
        printf("._..");
    }else if ( word[i] == 'm') {
        printf("__");
    }else if ( word[i] == 'n') {
        printf("_.");
    }else if ( word[i] == 'o') {
        printf("___");
    }else if ( word[i] == 'p') {
        printf(".__.");
    }else if ( word[i] == 'q') {
        printf("__._");
    }else if ( word[i] == 'r') {
        printf("._.");
    }else if ( word[i] == 's') {
        printf("...");
    }else if ( word[i] == 't') {
        printf("_");
    }else if ( word[i] == 'u') {
        printf(".._");
    }else if ( word[i] == 'v') {
        printf("..._");
    }else if ( word[i] == 'w') {
        printf(".__");
    }else if ( word[i] == 'x') {
        printf("_.._");
    }else if ( word[i] == 'y') {
        printf("_.__");
    }else if ( word[i] == 'z') {
        printf("__..");
    } else if ( word[i] == 'A') {
        printf("._");
    } else if ( word[i] == 'B') {
        printf("_...");
    }else if ( word[i] == 'C') {
        printf("_._.");
    }else if ( word[i] == 'D') {
        printf("_..");
    }else if ( word[i] == 'E') {
        printf(".");
    }else if ( word[i] == 'F') {
        printf(".._.");
    }else if ( word[i] == 'G') {
        printf("__.");
    }else if ( word[i] == 'H') {
        printf("....");
    }else if ( word[i] == 'I') {
        printf("..");
    }else if ( word[i] == 'J') {
        printf(".___");
    }else if ( word[i] == 'K') {
        printf("_._");
    }else if ( word[i] == 'L') {
        printf("._..");
    }else if ( word[i] == 'M') {
        printf("__");
    }else if ( word[i] == 'N') {
        printf("_.");
    }else if ( word[i] == 'O') {
        printf("___");
    }else if ( word[i] == 'P') {
        printf(".__.");
    }else if ( word[i] == 'Q') {
        printf("__._");
    }else if ( word[i] == 'R') {
        printf("._.");
    }else if ( word[i] == 'S') {
        printf("...");
    }else if ( word[i] == 'T') {
        printf("_");
    }else if ( word[i] == 'U') {
        printf(".._");
    }else if ( word[i] == 'V') {
        printf("..._");
    }else if ( word[i] == 'W') {
        printf(".__");
    }else if ( word[i] == 'X') {
        printf("_.._");
    }else if ( word[i] == 'Y') {
        printf("_.__");
    }else if ( word[i] == 'Z') {
        printf("__..");
    }
    
}
    



    return 0;
}