//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSum[rows]; // Array to store sum of each row

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize row sum
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add to row sum
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
