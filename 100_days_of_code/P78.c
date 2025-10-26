//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    // Read size of square matrix
    scanf("%d %d", &n, &n);
    int matrix[n][n];

    // Read matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print sum
    printf("%d\n", sum);

    return 0;
}

