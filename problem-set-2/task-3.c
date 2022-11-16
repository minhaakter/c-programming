// findout fahrenheit to celsius, celsius to fahrenheit

#include <stdio.h>

int main(){
    float choice, fahrenheit, celsius;

    printf("Choose one of the following options:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%f", &choice);

    if (choice == 1){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%f Fahrenheit is %f Celsius\n", fahrenheit, celsius);
    }
    else if (choice == 2){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * 9 / 5 + 32;
        printf("%f Celsius is %f Fahrenheit\n", celsius, fahrenheit);
    }
    else{
        printf("Invalid choice\n");
    }

    return 0;
}