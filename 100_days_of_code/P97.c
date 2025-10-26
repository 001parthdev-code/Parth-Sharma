//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    // Read name including spaces
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Print the first character as uppercase
    if (str[0] != ' ') {
        printf("%c.", toupper(str[0]));
    }

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\0' && str[i+1] != ' ') {
            printf("%c.", toupper(str[i+1]));
        }
    }

    printf("\n");
    return 0;
}
