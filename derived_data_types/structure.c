#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"John Doe", 101, 95.5};

    printf("Student Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

