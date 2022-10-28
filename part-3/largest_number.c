// Write a program to find the largest number among three numbers using conditional operator.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d is the largest number\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d is the largest number\n", num2);
    } else {
        printf("%d is the largest number\n", num3);
    }

    return 0;
}


// and operator
// A && B
// 0 && 0 = 0
// 0 && 1 = 0
// 1 && 0 = 0
// 1 && 1 = 1
// or operator
// A || B
// 0 || 0 = 0
// 0 || 1 = 1
// 1 || 0 = 1
// 1 || 1 = 1