// C Program to Find GCD of two Numbers

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    printf("The GCD of %d and %d is %d.\n", a, b, a);

    return 0;
}