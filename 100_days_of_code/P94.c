//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000];
    int maxLen = 0;

    // Read sentence including spaces
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    char *word = strtok(str, " ");  // Split sentence into words

    while (word != NULL) {
        if (strlen(word) > maxLen) {
            maxLen = strlen(word);
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n", longest);

    return 0;
}
