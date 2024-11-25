#include <stdio.h>
#include <math.h>

double sine_series(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double term = pow(x, 2 * i + 1) / tgamma(2 * i + 2); // (2i + 1)! = (2i + 1) * (2i)!
        if (i % 2 != 0) {
            term = -term; // Alternate signs
        }
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;
    printf("Enter value of x (in radians) and number of terms (n): ");
    scanf("%lf %d", &x, &n);
    double result = sine_series(x, n);
    printf("Sum of sine series: %.6lf\n", result);
    return 0;
}
