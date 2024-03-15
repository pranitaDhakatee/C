#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int main() {
    int input[] = {16, 12, 9, 5};
    int target = 17;
    int n = sizeof(input) / sizeof(input[0]);

    // Sort the input array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (input[i] > input[j]) {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    int output[n];
    for (int i = 0; i < n; i++) {
        output[i] = binarySearch(input, 0, n - 1, input[i]);
    }

    // Print the results
    for (int i = 0; i < n; i++) {
        printf("%d", output[i]);
        if (i < n - 1) {
            printf("\t");
        }
    }
    printf("\n");

    return 0;
}

