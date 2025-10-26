//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;
    char result[1000];

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Traverse string and remove vowels
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        // Convert uppercase to lowercase for checking
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';  // Null-terminate the new string

    printf("%s\n", result);

    return 0;
}
