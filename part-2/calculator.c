// Write a program to calculate sum, sub, prod, div, rem;
// Sum of 5 + 3 = 8
// Sub of 5 - 3 = 2
// Prod of 5 * 3 = 15
// Div of 5 / 3 = 1
// Rem of 5 % 3 = 2

#include <stdio.h>

int main() {
    // variable initialization
    int n1, n2;

    // input
    printf("Enter two integer numbers: ");
    scanf("%d %d", &n1, &n2);

    // calculation
    // int sum = n1 + n2;
    // int sub = n1 - n2;
    // int prod = n1 * n2;
    // int div = n1 / n2;
    // int rem = n1 % n2;

    // output
    printf("Sum of %d + %d = %d\n", n1, n2, n1 + n2);
    printf("Sub of %d - %d = %d\n", n1, n2, n1 - n2);
    printf("Prod of %d * %d = %d\n", n1, n2, n1 * n2);
    printf("Div of %d / %d = %d\n", n1, n2, n1 / n2);
    printf("Rem of %d %% %d = %d\n", n1, n2, n1 % n2);
    
    // printf("Sum of %d + %d = %d\n", n1, n2, sum);
    // printf("Sub of %d - %d = %d\n", n1, n2, sub);
    // printf("Prod of %d * %d = %d\n", n1, n2, prod);
    // printf("Div of %d / %d = %d\n", n1, n2, div);
    // printf("Rem of %d %% %d = %d\n", n1, n2, rem);

return 0;
}