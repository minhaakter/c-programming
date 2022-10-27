// Write a program to calculate the area of a triangle

#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%lf %lf", &base, &height);

    area = (base * height) / 2;

    printf("Area of triangle = %.2lf\n", area);

return 0;
}