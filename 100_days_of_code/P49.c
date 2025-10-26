//Q49: Write a program to print the following pattern:
/*5
45
345
2345
12345


Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main() {
    int i, j, start;

    // Loop for rows
    for (i = 5; i >= 1; i--) {
        // Starting number for each row
        start = i;

        // Loop to print numbers from 'start' to 5
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
