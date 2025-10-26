//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;
    
    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Calculate length (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print string in reverse
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
