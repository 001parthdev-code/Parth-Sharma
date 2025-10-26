//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    
    // Read size of square matrix
    scanf("%d %d", &n, &n);
    int matrix[n][n];

    // Read matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    bool symmetric = true;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    // Print result
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
