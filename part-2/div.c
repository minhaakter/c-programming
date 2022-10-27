// Write a program to division two numbers.

#include <stdio.h>

int main() {
    // variable initialization
    int n1, n2;

    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number: ");
    scanf("%d", &n2);

    int division = n1 / n2;

    printf("Division of %d / %d = %d\n", n1, n2, division);

return 0;
}