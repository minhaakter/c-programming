// Write a program to calculate the area of a circle

#include <stdio.h>

int main() {
    double radius, area;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    area = 3.1416 * radius * radius;

    printf("Area of circle = %.2lf\n", area);

return 0;
}