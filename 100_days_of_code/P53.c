//Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    int i, j, space, star;

    // Upper half of the pattern
    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (space = i; space < 5; space++) {
            printf(" ");
        }
        // Print stars
        for (star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = 4; i >= 1; i--) {
        // Print spaces
        for (space = 5; space > i; space--) {
            printf(" ");
        }
        // Print stars
        for (star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
