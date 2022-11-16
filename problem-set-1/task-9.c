// C Program to Find Factorial of a Number

#include <stdio.h>

int main(){
    int num, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        fact *= i;

    printf("The factorial of %d is %d.\n", num, fact);

    return 0;
}