// Write a program 

#include <stdio.h>

int main() {
    // (condition) ? (expression1) : (expression2);

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    (num >= 0) ? printf("Positive\n") : printf("Negative\n");

return 0;
}