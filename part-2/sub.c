// Write a program to subtract two numbers.

#include <stdio.h>

int main() {
    // variable initialization
    int n1, n2;

    /*
    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number: ");
    scanf("%d", &n2);
    */

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int sub = n1 - n2; // sub = 5 - 3 = 2 

    printf("Subtraction of %d - %d = %d\n", n1, n2, sub);

return 0;
}