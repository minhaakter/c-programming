// C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum += i;
    
    printf("The sum of natural numbers from 1 to %d is %d.\n", num, sum);
    
    return 0;
}