#include <stdio.h>

int count_bits(int n) {
    // Handle negative numbers by converting them to positive
    if (n < 0) {
        n = -n; // For simplicity, just treat negative as positive
    }

    int count = 0;
    // If n is 0, it needs 1 bit to represent
    if (n == 0) {
        return 1;
    }

    // Loop to right shift the number until it becomes 0
    while (n > 0) {
        n >>= 1;  // Right shift by 1 bit
        count++;  // Increment the bit count
    }

    return count;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int bits = count_bits(n);
    printf("The number of bits needed to represent %d in binary is: %d\n", n, bits);

    return 0;
}
