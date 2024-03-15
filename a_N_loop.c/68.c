#include <stdio.h>

int main() {
    int p = 1;
    int n;
    printf("enter of the number n:");
    scanf("%d",&n);

    for (int i = n; i >0; i--) {
        if (i % 2 == 0) {
            for (int j = i + 4; j > i; j--) {
                printf("%d ", n);
                n++;
            }
        } else {
            for (int j = 1; j <= i + 4; j++) {
                printf("%d ", n);
                n++;
            }
        }
        printf("\n");
    }

    return 0;
}

