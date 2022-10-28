// Write a program to find the largest number among three numbers using conditional operator.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // (num1 > num2 && num1 > num3) ? printf("%d is the largest number\n", num1) : (num2 > num1 && num2 > num3) ? printf("%d is the largest number\n", num2) : printf("%d is the largest number\n", num3);

    int ans = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;
    // num1 = 3, num2 = 4, num3 = 5;
    // int ans = (3 > 4 && 3 > 5) ? 3 : (4 > 3 && 4 > 5) ? 4 : 5;
    // int ans = (0 && 0) ? 3 : (1 && 0) ? 4 : 5;

    printf("%d is the largest number\n", ans);

    return 0;
}