#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average.\n");
            break;
        case 'D':
            printf("Poor.\n");
            break;
        case 'F':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}

