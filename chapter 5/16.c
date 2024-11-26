#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int **a, int **b, int **c) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(c + i) + j) = 0; // Initialize the element in the product matrix
            for (int k = 0; k < 3; k++) {
                *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int **matrix) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main() {
    // Allocate memory for matrices a, b, and c using pointer-to-pointer
    int **a = (int **)malloc(3 * sizeof(int *));
    int **b = (int **)malloc(3 * sizeof(int *));
    int **c = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        *(a + i) = (int *)malloc(3 * sizeof(int));
        *(b + i) = (int *)malloc(3 * sizeof(int));
        *(c + i) = (int *)malloc(3 * sizeof(int));
    }

    // Input matrix a
    printf("Enter the elements of the first 3x3 matrix row by row:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (*(a + i) + j));
        }
    }

    // Input matrix b
    printf("Enter the elements of the second 3x3 matrix row by row:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", (*(b + i) + j));
        }
    }

    // Multiply matrices a and b to produce c
    multiplyMatrices(a, b, c);

    // Output the product matrix c
    printf("The product matrix is:\n");
    printMatrix(c);

    // Free dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        free(*(a + i));
        free(*(b + i));
        free(*(c + i));
    }
    free(a);
    free(b);
    free(c);

    return 0;
}
