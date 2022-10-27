// Write a program to add two numbers.

#include <stdio.h>

int main() {
    // variable initialization
    int n1, n2;

    // input
    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number: ");
    scanf("%d", &n2);

    int sum = n1 + n2;

    printf("Sum of %d + %d = %d\n", n1, n2, sum);

return 0;
}