#include <stdio.h>

int main() {
    char grid[9][6] = {
        {'.', '.', '.', '.', '.', '.'},
        {'.', 'O', 'O', '.', '.', '.'},
        {'O', 'O', 'O', 'O', '.', '.'},
        {'O', 'O', 'O', 'O', 'O', '.'},
        {'.', 'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O', '.'},
        {'O', 'O', 'O', 'O', '.', '.'},
        {'.', 'O', 'O', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.'}
    };

    int num_rows = 9;
    int num_cols = 6;

    // Loop through the grid and print the image
    for (int y = 0; y < num_cols; y++) {
        for (int x = 0; x < num_rows; x++) {
            printf("%c", grid[x][y]);
        }
        printf("\n");  // Move to the next line after each row is printed
    }

    return 0;
}

