#include <stdio.h>

// Function to calculate the sum of three predefined numbers
void calculateSum() {
    int num1 = 8;
    int num2 = 15;
    int num3 = 27;
    int sum = num1 + num2 + num3;
    printf("The sum of %d, %d, and %d is %d\n", num1, num2, num3, sum);
}

int main() {
    calculateSum();  // Call the function to calculate and print the sum
    return 0;
}

