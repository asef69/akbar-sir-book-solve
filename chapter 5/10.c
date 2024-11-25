#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }

    // Dynamically allocate memory for the 2D array for storing sums
    int **s = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        s[i] = (int *)malloc(n * sizeof(int));
    }

    // Precompute sums for all i, j combinations
    for (int i = 0; i < n; i++) {
        s[i][i] = *(a + i); // Sum of one element
        for (int j = i + 1; j < n; j++) {
            s[i][j] = s[i][j - 1] + *(a + j);
        }
    }

    // Query processing
    int i, j;
    printf("Enter pairs of indices (i j) to get the sum (enter n n to stop):\n");
    while (1) {
        scanf("%d %d", &i, &j);

        if (i == n && j == n) {
            break; // Stop when both inputs are n
        }

        if (i <= j && i >= 0 && j < n) {
            printf("Sum of elements between index %d and %d: %d\n", i, j, s[i][j]);
        } else {
            printf("Invalid indices. Please enter valid i and j (0 <= i <= j < %d).\n", n);
        }
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(s[i]);
    }
    free(s);
    free(a);

    return 0;
}
