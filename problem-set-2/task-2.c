// take two numbers as input (float type), divide first number by the second number and show the result

#include <stdio.h>

int main(){
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("%f / %f = %f\n", a, b, a / b);

    return 0;
}