//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int i, j;

    // Read size of first matrix
    scanf("%d %d", &rows1, &cols1);
    int mat1[rows1][cols1];

    // Read elements of first matrix
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Read size of second matrix
    scanf("%d %d", &rows2, &cols2);
    int mat2[rows2][cols2];

    // Read elements of second matrix
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    // Add matrices and print result
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
