//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;  // assume number is prime initially

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime");
        return 0;
    }

    // check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;  // not prime
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
