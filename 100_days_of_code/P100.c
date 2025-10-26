//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len, i, j, k;

    // Read string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    len = strlen(str);

    // Generate all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Print each substring on new line
        }
    }

    return 0;
}
