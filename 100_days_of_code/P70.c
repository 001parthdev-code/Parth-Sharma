//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, i, k;

    // Read size of array
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number of rotations
    scanf("%d", &k);
    k = k % n; // Handle k > n

    // Rotate array using temporary array
    int temp[k];
    
    // Copy last k elements to temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the first n-k elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the beginning
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
