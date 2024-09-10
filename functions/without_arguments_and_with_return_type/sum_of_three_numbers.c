#include <stdio.h>

// Function with no arguments but with a return type
int calculateSum() {
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    int sum = num1 + num2 + num3;
    return sum;  // Return the sum
}

int main() {
    int result = calculateSum();  // Call the function and store the return value
    printf("The sum of the three numbers is %d\n", result);
    return 0;
}

