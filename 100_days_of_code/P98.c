//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], name[1000];
    int i = 0, len;
    char *words[100];  // To store pointers to words
    int wordCount = 0;

    // Read full name including spaces
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Split the sentence into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all except the last word
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print the last word (surname) in full
    if (wordCount > 0) {
        printf(" %s\n", words[wordCount - 1]);
    }

    return 0;
}
