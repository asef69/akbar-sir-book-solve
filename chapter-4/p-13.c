#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) return 0; // 0 and 1 are not prime numbers
    if (number <= 3) return 1; // 2 and 3 are prime numbers

    // Check for even numbers and multiples of 3
    if (number % 2 == 0 || number % 3 == 0) return 0;

    // Check for factors from 5 to sqrt(number)
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
