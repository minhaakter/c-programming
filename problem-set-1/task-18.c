// C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>

int main (){
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        reverse = reverse * 10;
        reverse = reverse + num % 10;
        num = num / 10;
    }
    if(num == reverse)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}