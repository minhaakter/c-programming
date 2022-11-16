// C Program to Make a Simple Calculator Using switch...case

#include <stdio.h>

int main(){
    int num1, num2, choice;

    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / (float)num2);
            break;
        case 5:
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}