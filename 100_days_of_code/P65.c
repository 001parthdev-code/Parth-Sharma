//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, i, key;
    
    // Read size of array
    scanf("%d", &n);
    int arr[n];
    
    // Read array elements (sorted)
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    scanf("%d", &key);

    // Binary search
    int left = 0, right = n - 1, mid, foundIndex = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Print result
    if (foundIndex != -1)
        printf("Found at index %d\n", foundIndex);
    else
        printf("-1\n");

    return 0;
}
