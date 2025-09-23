//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    int x;

    // Test Case 1
    x = -5;
    if (x == 0) {
        printf("Zero\n");
    }
    else {
        if (x > 0) {
            printf("Positive\n");
        }
        else {
            printf("Negative\n");
        }
    }

    // Test Case 2
    x = 0;
    if (x == 0) {
        printf("Zero\n");
    }
    else {
        if (x > 0) {
            printf("Positive\n");
        }
        else {
            printf("Negative\n");
        }
    }

    // Test Case 3
    x = 10;
    if (x == 0) {
        printf("Zero\n");
    }
    else {
        if (x > 0) {
            printf("Positive\n");
        }
        else {
            printf("Negative\n");
        }
    }

    return 0;
}
