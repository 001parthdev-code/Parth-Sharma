//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/


#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 1;

    // Taking input
    scanf("%d", &n);

    // Loop through n terms
    for (int i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1; // first term is just 1
        else {
            num += 2;
            den += 2;
            sum += (float)num / den;
        }
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
