//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find total digits
    digits = (int)log10(num) + 1;

    // Extract first and last digits
    firstDigit = num / pow(10, digits - 1);
    lastDigit = num % 10;

    // If there's only one digit, no swap needed
    if (digits == 1) {
        printf("Swapped number: %d", num);
        return 0;
    }

    // Remove first and last digits to get middle part
    int middle = (num % (int)pow(10, digits - 1)) / 10;

    // Form the swapped number
    swappedNum = lastDigit * pow(10, digits - 1) + middle * 10 + firstDigit;

    printf("Swapped number: %d", swappedNum);

    return 0;
}
