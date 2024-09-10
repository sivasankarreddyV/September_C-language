#include <stdio.h>

// Function that takes three arguments and returns the sum
int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3, sum;
    
    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Call the function and store the result in 'sum'
    sum = sumOfThree(num1, num2, num3);
    
    // Print the result
    printf("The sum of %d, %d, and %d is %d\n", num1, num2, num3, sum);
    
    return 0;
}

