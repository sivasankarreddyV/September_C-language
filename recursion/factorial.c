#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorials of negative numbers are not defined.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

