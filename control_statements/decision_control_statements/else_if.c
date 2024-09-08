#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a Child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    } else if (age >= 20 && age <= 35) {
        printf("You are a Young Adult.\n");
    } else if (age >= 36 && age <= 55) {
        printf("You are a Middle-aged Adult.\n");
    } else if (age > 55) {
        printf("You are a Senior Citizen.\n");
    } else {
        printf("Invalid age entered.\n");
    }

    return 0;
}

