//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) { // Even diagonal: move upwards
            int r = (d < rows) ? d : rows - 1;
            int c = d - r;
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else { // Odd diagonal: move downwards
            int c = (d < cols) ? d : cols - 1;
            int r = d - c;
            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }

    return 0;
}
