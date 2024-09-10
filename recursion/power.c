#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base, exp;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Calculate power
    int result = power(base, exp);

    // Output the result
    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}

