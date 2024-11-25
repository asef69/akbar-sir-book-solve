#include <stdio.h>

int count_trailing_zeros(unsigned int n) {
    if (n == 0) {
        return 32; // If n is zero, return 32
    }

    // Find the position of the leftmost 1 bit
    int position = 31; // Start from the most significant bit (31)
    
    // Loop to find the leftmost 1
    while (position >= 0) {
        if (n & (1u << position)) {
            // When we find the leftmost 1, count zeros to its right
            return position; // Return the number of zeros after the leftmost 1
        }
        position--;
    }

    return 32; // This will not be reached if n is positive
}

int main() {
    unsigned int n;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    int result = count_trailing_zeros(n);
    printf("Number of zeros after the leftmost 1: %d\n", result);

    return 0;
}
