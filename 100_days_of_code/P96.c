//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i = 0, start, end;

    // Read sentence including spaces
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ' && str[i] != '\0') i++;

        start = i;

        // Find the end of the word
        while (str[i] != ' ' && str[i] != '\0') i++;
        end = i - 1;

        // Reverse the word in-place
        int left = start, right = end;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("%s\n", str);
    return 0;
}
