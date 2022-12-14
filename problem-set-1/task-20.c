// C Program to Check Armstrong Number

#include <stdio.h>
#include <math.h>

int main(){
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0){
        sum += pow(temp % 10, 3);
        temp /= 10;
    }
    if(sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}