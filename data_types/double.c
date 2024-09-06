#include <stdio.h>

int main() {
    double pi = 3.141592653589793;
    double radius = 2.5;
    double area = pi * radius * radius;

    printf("Area of circle with radius %.2f is %.5f\n", radius, area);

    return 0;
}

