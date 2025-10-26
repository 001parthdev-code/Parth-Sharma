//Q46: Write a program to print the following pattern:
/******
*****
*****
*****
*****


Input 1:

Output 1:
*****
*****
*****
*****
*****

*/


#include <stdio.h>

int main() {
    int i, j;

    // Loop for rows
    for (i = 1; i <= 5; i++) {
        // Loop for columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
