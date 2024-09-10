#include <stdio.h>

// Function to calculate the sum of three numbers
void calculateSum(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    printf("The sum of %d, %d, and %d is %d\n", num1, num2, num3, sum);
}

int main() {
    int a = 5, b = 10, c = 15;
    calculateSum(a, b, c);  // Call the function with arguments
    return 0;
}

