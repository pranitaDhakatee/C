#include <stdio.h>

int main() 
{
    char arr[] = "55556789";
    char index = '5';
    int low = 0;
    int high = sizeof(arr) - 2;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == index)
        {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < index)
        {
            low = mid + 1;
        } else 
        {
            high = mid - 1;
        }
    }

    printf("The last index of %c is %d\n", index, last);
    return 0;
}

