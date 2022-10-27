// Write a program to calculate the area of a rectangle

#include <stdio.h>

int main() {
    double length, width, area;

    printf("Enter length and width of rectangle: ");
    scanf("%lf %lf", &length, &width);

    area = length * width;

    printf("Area of rectangle = %.2lf\n", area);

return 0;
}