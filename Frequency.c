#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter a word >> ");
    gets(str);
    int length = strlen(str);
    int count[length];
    int i;
    int j;
    int k;
    int l;

    for ( i = 0; i < length; i++) {
        count[i] = 0;
        for ( j = 0 < i; j < length; j++ ) {
            if (str[i] == str[j]) {
                count[i]++;
            }
        }
    }

    for ( int k = 0; k < length; k++ ) {
        bool same = true;
        for ( l = 0; l < k; l++ ) {
            if ( str[l] == str[k] && same ) {
                same = false;
            }
        }

        if (same)
        {
            printf("%c = %d\n", str[k], count[k]);
        }
    }

    return 0;
}