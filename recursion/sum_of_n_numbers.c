#include <stdio.h>

// Function to calculate the sum of first n natural numbers using recursion
int sumOfNumbers(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumOfNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfNumbers(n);
        printf("Sum of first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}

