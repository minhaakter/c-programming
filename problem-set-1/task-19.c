// C Program to Check Whether a Number is Prime or Not

#include <stdio.h>

int main(){
    int num, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.\n", num);
    else
        printf("%d is a prime number.\n", num);
    
    return 0;
}