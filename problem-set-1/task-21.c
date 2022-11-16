// C Program to Display Factors of a Number

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}