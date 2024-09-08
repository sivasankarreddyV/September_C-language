#include <stdio.h>

int main() {
    int number = 7;  // Secret number
    int guess;

    do {
        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
        }
    } while (guess != number);

    return 0;
}

