//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};  // Frequency array for 'a' to 'z'
    int i = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Consider lowercase letters only
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {
                printf("%c\n", ch);
                return 0;  // First repeating found, exit
            }
        }
        i++;
    }

    printf("No repeating lowercase letter found\n");
    return 0;
}
