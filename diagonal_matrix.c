
#include <stdio.h>

// Function to print a diagonal matrix
void printDiagonalMatrix(int matrix[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", (i == j) ? matrix[i][j] : 0);
        }
        printf("\n");
    }
}

int main() {
    // Example of a 3x3 diagonal matrix
    int diagonalMatrix[3][3] = {
        {2, 0, 0},
        {0, 5, 0},
        {0, 0, 8}
    };

    // Print the diagonal matrix
    printf("Diagonal Matrix:\n");
    printDiagonalMatrix(diagonalMatrix, 3);

    return 0;
}
