// C Program to Find the Roots of a Quadratic Equation

#include <stdio.h>

int main(){
    float a, b, c, d, x1, x2;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;
    
    if (d < 0)
        printf("The equation has no real roots.\n");
    else if (d == 0)
        printf("The equation has one root: %.2f\n", -b / (2 * a));
    else
        printf("The equation has two roots: %.2f and %.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));

    return 0;
}