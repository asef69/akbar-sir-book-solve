#include <stdio.h>

int count_digits(int n) {
    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    int count = 0;
    // If n is 0, we need to account for it having 1 digit
    if (n == 0) {
        return 1;
    }

    while (n > 0) {
        n /= 10;  // Divide n by 10
        count++;  // Increment the digit count
    }

    return count;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int digits = count_digits(n);
    printf("The number of digits in %d is: %d\n", n, digits);

    return 0;
}
