
#include <stdio.h>

int main() {
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort "8765" in ascending order
    for (int i = 0; i < 4; i++) {
        int I = i;
        for (int j = i + 1; j < 4; j++) {
            if (arr[j] < arr[I]) {
                I = j;
            }
        }
        if (I != i) {
            int temp = arr[i];
            arr[i] = arr[I];
            arr[I] = temp;
        }
    }

    // Bubble Sort "4321" in descending order
    for (int i = 4; i < n - 1; i++) {
        for (int j = 4; j < n - i + 3; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Selection Sort for the entire array "87654321" in ascending order
    for (int i = 0; i < n - 1; i++) {
        int I = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[I]) {
                I = j;
            }
        }
        if (I != i) {
            int temp = arr[i];
            arr[i] = arr[I];
            arr[I] = temp;
        }
    }

    // Print the sorted array
    printf("Sorted Array in Ascending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


