// C Program to Count Number of Digits in an Integer

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    printf("The number of digits in %d is %d.\n", num, count);

    return 0;
}