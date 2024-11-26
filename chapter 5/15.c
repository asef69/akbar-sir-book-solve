#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if the matrix is symmetric
bool isSymmetric(int *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (*(matrix + i * 3 + j) != *(matrix + j * 3 + i)) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if the matrix is an identity matrix
bool isIdentity(int *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && *(matrix + i * 3 + j) != 1) {
                return false;
            } else if (i != j && *(matrix + i * 3 + j) != 0) {
                return false;
            }
        }
    }
    return true;
}

// Function to transpose the matrix
void transposeMatrix(int *matrix, int *transposed) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(transposed + j * 3 + i) = *(matrix + i * 3 + j);
        }
    }
}

// Function to print the matrix
void printMatrix(int *matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(matrix + i * 3 + j));
        }
        printf("\n");
    }
}

int main() {
    int *matrix = (int *)malloc(9 * sizeof(int));
    int *transposed = (int *)malloc(9 * sizeof(int));

    printf("Enter the elements of the 3x3 matrix (row by row):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (matrix + i * 3 + j));
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric. Transposing the matrix...\n");
        transposeMatrix(matrix, transposed);
        printf("Transposed matrix:\n");
        printMatrix(transposed);
    }

    // Check if the matrix is an identity matrix
    if (isIdentity(matrix)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    // Free dynamically allocated memory
    free(matrix);
    free(transposed);

    return 0;
}
