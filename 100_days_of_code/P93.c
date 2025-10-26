//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    // Read two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check lengths first
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count frequency of each lowercase letter in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        char ch1 = str1[i];
        char ch2 = str2[i];

        // Convert uppercase to lowercase
        if (ch1 >= 'A' && ch1 <= 'Z') ch1 += 32;
        if (ch2 >= 'A' && ch2 <= 'Z') ch2 += 32;

        freq1[ch1 - 'a']++;
        freq2[ch2 - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
