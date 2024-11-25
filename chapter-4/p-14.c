#include <stdio.h>
#include <math.h>

int main() {
    double x, previous_x;
    const double threshold = 0.0000005;
    const int max_iterations = 100;

    // Take input
    printf("Enter a number: ");
    scanf("%lf", &x);

    // Initial value of x (guess)
    x = x / 2.0;  // Start with half of the input as a guess

    for (int i = 0; i < max_iterations; i++) {
        previous_x = x; // Store the previous value of x

        // Update x using the formula
        x = (x + 2 / x);

        // Output the value of x in each iteration
        printf("Iteration %d: x = %lf\n", i + 1, x);

        // Check if the change is smaller than the threshold
        if (fabs(x - previous_x) < threshold) {
            printf("Value of x converged after %d iterations.\n", i + 1);
            break;
        }
    }

    // Output the final value of x
    printf("Final value of x: %lf\n", x);
    
    // Check if x is close to the square root of the input value
    double input_sqrt = sqrt(x * 2); // since x is an approximation of sqrt(input)
    if (fabs(x - input_sqrt) < threshold) {
        printf("The value of x is close to the square root of the input value.\n");
    } else {
        printf("The value of x is not close to the square root of the input value.\n");
    }

    return 0;
}
