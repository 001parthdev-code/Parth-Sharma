//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input n
    scanf("%d", &n);

    // Loop through numbers from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume number is prime

        // Check divisibility from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        // If prime, print the number
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
