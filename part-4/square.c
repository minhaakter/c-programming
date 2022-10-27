// Write a program to calculate the area of a square

#include <stdio.h>

int main() {
    double side, area;

    printf("Enter side of square: ");
    scanf("%lf", &side);

    area = side * side;

    printf("Area of square = %.2lf\n", area);

return 0;
}