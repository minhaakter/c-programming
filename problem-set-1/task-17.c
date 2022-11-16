// C Program to Calculate the Power of a Number

#include <stdio.h>

int main(){
    int num, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &power);

    int result = 1;

    for (int i = 1; i <= power; i++)
        result *= num;

    printf("%d ^ %d = %d\n", num, power, result);

    return 0;
}