// Write a program to calculate the average of 5 numbers

#include <stdio.h>

int main() {
    double num1, num2, num3, num4, num5, sum, average;

    printf("Enter 5 numbers: ");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);

    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;

    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

return 0;
}