//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int binary[32]; // store binary digits
    int i = 0;

    if (n == 0) {
        printf("0");
        return 0;
    }

    // Convert to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
