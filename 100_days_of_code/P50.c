//Q50: Write a program to print the following pattern:

/*
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int i, j, space, star;

    // Loop for rows
    for (i = 1; i <= 5; i++) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (star = 5; star >= i; star--) {
            printf("*");
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
