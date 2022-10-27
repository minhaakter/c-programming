// Write a program take a number from user and print it on the screen.

#include <stdio.h>

int main() {
    printf("Enter a number: ");

    // number -3, -2, -1, 0 , 1 , 2, 3 --> integer --> 4 bytes --> %d
    // number 3.14, 2.71, 1.618 --> float --> 4 bytes --> %f
    // number 3.14, 2.71, 1.618 --> double --> 8 bytes --> %lf

    int number;
    scanf("%d", &number);

    printf("You entered: %d\n", number);

return 0;
}