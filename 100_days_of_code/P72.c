//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];

    // Read matrix elements and calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
