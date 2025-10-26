//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {

    // First single star
    printf("*\n\n");

    // Second block - 2 stars
    printf("*\n");
    printf("*\n\n");

    // Third block - 5 stars
    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf("*\n");
    printf("*\n\n");

    // Fourth block - 3 stars
    printf("*\n");
    printf("*\n");
    printf("*\n\n");

    // Last single star
    printf("*\n");

    return 0;
}
