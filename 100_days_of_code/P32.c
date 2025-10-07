//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // store the original number

    // reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // check palindrome
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
