// C Program to Reverse a Number

#include <stdio.h>

int main(){
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        reverse = reverse * 10;
        reverse = reverse + num % 10;
        num = num / 10;
    }
    printf("The reverse of %d is %d.\n", num, reverse);

    return 0;
}