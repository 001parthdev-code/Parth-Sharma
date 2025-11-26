//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n) return -1;  // invalid case

    int windowSum = 0;

    // create the first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];   // add right, remove left
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {100, 200, 300, 400};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("%d", maxSubarraySum(arr, n, k));
    return 0;
}
