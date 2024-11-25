#include <stdio.h>
#include <assert.h>

int main() {
    int a, b;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Assert to check for positive integers
    assert(a > 0 && b > 0);

    int hcf, lcm;

    // Finding HCF using a do-while loop
    int min = (a < b) ? a : b;
    hcf = min;

    do {
        if (a % hcf == 0 && b % hcf == 0) {
            break; // Found HCF
        }
        hcf--;
    } while (hcf > 0);

    // Calculating LCM using the relationship: LCM * HCF = a * b
    lcm = (a * b) / hcf;

    // Output results
    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
