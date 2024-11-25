#include <stdio.h>

int main() {
    int low = 0, high = 1023, mid;
    char response;

    printf("Think of a number between %d and %d (inclusive).\n", low, high);
    printf("Respond to the questions with 'y' for yes and 'n' for no.\n");

    while (low < high) {
        mid = (low + high) / 2;
        printf("Is your number greater than %d? (y/n): ", mid);
        scanf(" %c", &response);

        if (response == 'y') {
            low = mid + 1; // Assume the number is in the higher half
        } else {
            high = mid; // Assume the number is in the lower half or equal
        }
    }

    printf("Your assumed number is: %d\n", low);
    return 0;
}
