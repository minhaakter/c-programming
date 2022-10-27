// Write a program to multiplication two numbers.

#include <stdio.h>

int main() {
    // variable initialization
    int n1, n2;

    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number: ");
    scanf("%d", &n2);

    int prod = n1 * n2;

    printf("Multiplication of %d * %d = %d\n", n1, n2, prod);

return 0;
}