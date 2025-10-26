//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;
    char ch;

    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    // Traverse string
    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        // Convert uppercase to lowercase for uniformity
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants (letters only)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
